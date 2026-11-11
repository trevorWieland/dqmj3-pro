"""Build the objdiff project and its original/source objects from the split.

Every configured source file under ``src/native`` is compiled with the compiler
profile its unit names. A unit that names nothing uses the default profile from
``config/compiler-profiles.json``: the best-evidenced original compiler, armcc
4.1 build 1454, unless configuration says otherwise. A file that defines a
function the split places becomes one objdiff unit: its target object holds the
original function bytes carved out of the user's code image, and its base object
holds the same functions compiled from that file.

Every original text byte source does not implement stays in one extra unit,
``src/native``, with the original rodata, data and BSS.

The base object is not a relocatable object: a relocatable object cannot say
what a ``bl`` encodes, because the callee has no address yet. A function with a
call would then be scored against bytes that are wrong by construction and could
never be credited, whatever the source said. So the measurement places every
measured function at the address the split gives it -- the same placement the
whole-image link in ``image_link`` performs -- and carves the base object out of
that image. A call to a function the split lists resolves to the address the
original image gives that function; a call to anything else makes the reference
unrepresentable and the function is reported as such instead of being compared
against unresolved bytes.

A function's instructions and the data a compiler places after them (a literal
pool, a switch table, embedded string literals) are carved as one section but
named separately: the instruction extent is the split's extent, and the bytes
after it are the function's own data. Instructions are compared with
instructions; the data is compared with the original bytes at the same address,
and a pool that differs disqualifies the function instead of being ignored.

No ledger decides what counts. A function is measured because the source defines
it and the split gives it an address, a mode and a size. The profile's declared
configuration is checked against the unit: a unit may only ask for a layout or
header profile the profile implements, so naming a profile never silently
changes what the unit declared.
"""

import argparse
import bisect
import json
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import armcc_object
import elf_objects
import exheader
import split as split_module
from placement import (ASSEMBLE, CLANG, LLD, TIMEOUT, carve, check_original, digest,  # noqa: F401
                       empty_base, place, read_json, run, slots, write_json)


ROOT = Path(__file__).resolve().parents[1]
VERSION = 'update-content0'
SOURCE_ROOT = 'src/native'
PROFILE_CONFIG = 'config/compiler-profiles.json'
CANONICAL = re.compile(r'fn_[0-9a-f]{8}')


def profiles(root):
    """The declared compiler profiles, keyed by id, plus the default id."""
    config = read_json(Path(root) / PROFILE_CONFIG)
    if config.get('schemaVersion') != 1:
        raise ValueError('Unsupported compiler profile schema')
    table = {}
    for profile in config['profiles']:
        if profile['id'] in table:
            raise ValueError('Duplicate compiler profile: ' + profile['id'])
        table[profile['id']] = profile
    if config['defaultProfile'] not in table:
        raise ValueError('Default compiler profile is not declared')
    return {'default': config['defaultProfile'], 'profiles': table}


def profile_id(root, unit, forced=None):
    """The profile a unit names, a forced override, or the configured default."""
    return forced or unit.get('compilerProfile') or profiles(root)['default']


def profile_for(root, unit, forced=None):
    table = profiles(root)
    wanted = profile_id(root, unit, forced)
    if wanted not in table['profiles']:
        raise ValueError('Unknown compiler profile for %s: %s' % (unit['source'], wanted))
    return table['profiles'][wanted]


def declared_scopes(unit, profile):
    """Check a unit's declared layout/header scopes against the profile.

    The unit's declaration is the contract; the profile may implement it, and
    may not be given a different one implicitly. An unknown or unsupported
    declaration fails here instead of producing objects the report cannot
    compare with what the unit asked for.
    """
    layout = unit.get('layoutProfile')
    if layout is not None and layout not in profile['layouts']:
        raise ValueError('Unknown layout profile for %s: %s' % (unit['source'], layout))
    headers = unit.get('publicHeaderProfile')
    if headers is not None and headers not in profile['publicHeaders']:
        raise ValueError('Unknown public header profile for %s: %s' % (unit['source'], headers))
    return layout, headers


def preinclude_for(root, unit, target, profile):
    """The preinclude header this unit compiles with, if the profile has one.

    A profile may need two preincludes: its compatibility header and a pragma
    that implements a declared layout scope. armcc accepts one ``--preinclude``,
    so a small generated header composes them.
    """
    base = profile.get('preinclude')
    layout, _ = declared_scopes(unit, profile)
    pragmas = profile['layouts'].get(layout or 'natural', [])
    if not base and not pragmas:
        return None
    if base and not pragmas:
        return Path(root) / base
    generated = Path(target).with_name(Path(target).name + '.preinclude.h')
    lines = []
    if base:
        lines.append('#include "%s"' % (Path(root) / base).as_posix())
    lines += ['#pragma pack(%s)' % item.split('-')[-1] for item in pragmas if item.startswith('pragma-pack-')]
    generated.parent.mkdir(parents=True, exist_ok=True)
    generated.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    return generated


def compiler_argv(root, unit, source, target, forced_profile=None, compat=True):
    """The profile's compiler, the unit's declared scopes and its include scope."""
    root, source, target = Path(root), Path(source), Path(target)
    profile = profile_for(root, unit, forced_profile)
    layout, headers = declared_scopes(unit, profile)
    extra = profile['layouts'].get(layout or 'natural', []) + profile['publicHeaders'].get(headers, [])
    argv = [root / profile['executable'], *profile['arguments']]
    if profile['id'] == 'clang-21':
        # Keep the historical Clang command line byte for byte: the baseline
        # report must be reproducible from this same code path.
        argv += ['-I', source.parent]
        argv += [item for item in extra if item.startswith('-')]
        for directory in unit.get('includeDirectories') or []:
            argv += ['-I', root / directory]
        argv += ['-c', source, '-o', target]
        return argv
    preinclude = preinclude_for(root, unit, target, profile) if compat else None
    for directory in profile.get('includeDirectories') or []:
        argv += ['-I', root / directory]
    argv += ['-I', source.parent]
    if preinclude:
        argv += ['--preinclude', preinclude]
    argv += [item for item in extra if item.startswith('-')]
    for directory in unit.get('includeDirectories') or []:
        argv += ['-I', root / directory]
    argv += [source, '-o', target]
    return argv


def configured_sources(root):
    """Every source file this pipeline compiles, in split order."""
    config = read_json(root / 'config/build-units.json')
    excluded = {row['source'] for row in config.get('excludedSources', [])}
    return [unit for unit in config['units']
            if unit['source'].startswith(SOURCE_ROOT + '/') and unit['source'].endswith('.c')
            and unit['source'] not in excluded]


def compile_sources(root, output, forced_profile=None):
    """Compile the configured source tree and return every function it defines."""
    return compile_units(root, output, configured_sources(root), forced_profile)


def compile_units(root, output, units, forced_profile=None):
    """Compile these units and return every canonical function they define."""
    definitions, commands = {}, []
    for unit in units:
        source = root / unit['source']
        target = output / (unit['source'].replace('/', '--') + '.o')
        target.parent.mkdir(parents=True, exist_ok=True)
        profile = profile_for(root, unit, forced_profile)
        log = output / (unit['source'].replace('/', '--') + '.log')
        if profile.get('postprocess') == 'armcc-split':
            # armcc emits one .text per translation unit. Compile it unchanged
            # and rewrite the object into one section per function before the
            # measurement sees it, so the compiler's own pool placement stays.
            raw = target.with_name(target.name + '.armcc.o')
            commands.append(run(compiler_argv(root, unit, source, raw, forced_profile), log))
            armcc_object.split(raw, target)
        else:
            commands.append(run(compiler_argv(root, unit, source, target, forced_profile), log))
        for name, function in elf_objects.read(target)['functions'].items():
            if not CANONICAL.fullmatch(name):
                continue
            if name in definitions:
                raise ValueError('%s and %s both define %s'
                                 % (definitions[name]['source'], unit['source'], name))
            function.update(source=unit['source'], object=target, profile=profile['id'])
            definitions[name] = function
    return definitions, commands


def select_base(root, raw, names, output, label, known=None):
    """Keep only the measured functions a linker can resolve, and say why not.

    The screen links one ``-r`` object that keeps every measured section of the
    unit and discards everything else, so a reference to another measured
    function survives as a relocation the placement link can resolve. A function
    is then reported instead of scored when a reference could not be carried:

    * ``R_ARM_NONE`` -- the reference named material the split does not place
      (a data section, an unmeasured helper), which no address can satisfy;
    * a live reference to a symbol neither the split nor this object defines,
      so its call sites would be compared against zeros.

    ``known`` is the split's own symbol table. Without it no reference is treated
    as foreign, which is what a test of the relocation mechanics wants.
    """
    read = elf_objects.read(raw)
    measured = {'.text.' + name for name in names}
    body = ['.text.%s : { KEEP(*(.text.%s)) }' % (name, name) for name in names]
    discard = sorted(set(read['sections']) - measured)
    script = output / (label + '.source.ld')
    script.write_text('SECTIONS {\n' + '\n'.join(body) + '\n/DISCARD/ : { '
                      + ' '.join('*(%s)' % section for section in discard) + ' }\n}\n',
                      encoding='utf-8')
    base = output / (label + '.base.o')
    command = run([root / LLD, '-r', '-m', 'armelf', '--build-id=none', '-T', script, raw, '-o', base],
                  output / (label + '.select.log'))
    selected = elf_objects.read(base)
    local = selected['defined'] | set(names)
    dropped, reasons = [], {}
    for name in names:
        function = selected['functions'].get(name)
        if function is None:
            raise ValueError('The selection link lost a measured function: ' + name)
        if 0 in function['relocations']:
            reasons[name] = 'references original data the split does not place'
            dropped.append(name)
            continue
        outside = sorted(reference for reference in function['references']
                         if reference not in local
                         and (known is None or reference not in known))
        if outside:
            reasons[name] = 'references symbols outside the split: ' + ', '.join(outside)
            dropped.append(name)
    return base, sorted(dropped), reasons, command


def tool_identity(root, profile):
    """Compiler executable digest and, when it answers, its own version line."""
    path = root / profile['executable']
    if not path.is_file():
        raise ValueError('Missing compiler executable: %s; run python setup_tools.py' % path)
    identity = {'id': profile['id'], 'executable': profile['executable'],
                'sha256': digest(path), 'identity': profile['identity'],
                'arguments': list(profile['arguments']),
                'measuredOriginal': bool(profile.get('measuredOriginal'))}
    flags = ['--vsn'] if profile['id'].startswith('armcc') else ['--version']
    try:
        done = subprocess.run([str(path), *flags], capture_output=True, timeout=60)
        banner = (done.stdout or done.stderr).decode('utf-8', 'replace').strip().splitlines()
        identity['banner'] = banner[0] if banner else None
    except (OSError, subprocess.SubprocessError):
        identity['banner'] = None
    return identity


def build(root, output, project_path, split_path, forced_profile=None):
    """Produce the objdiff project and the objects it points at."""
    root, output = Path(root).resolve(), Path(output).resolve()
    output.mkdir(parents=True, exist_ok=True)
    image = root / 'generated' / VERSION / 'code.bin'
    header = root / 'generated' / VERSION / 'exheader.bin'
    if not image.is_file() or not header.is_file():
        raise ValueError('Missing generated/%s/code.bin or exheader.bin; run build.py first' % VERSION)
    layout = exheader.layout(header.read_bytes())
    text = exheader.segment(layout, 'text')
    if image.stat().st_size != layout['pageAlignedCodeBytes']:
        raise ValueError('Code image size disagrees with the ExHeader page extent')
    functions = split_module.load(split_path, text['address'], text['initializedBytes'])
    definitions, commands = compile_sources(root, output / 'compiled', forced_profile)
    measured = {name: value for name, value in definitions.items() if name in functions.by_name}
    by_source, screens = {}, {}
    for name in measured:
        by_source.setdefault(measured[name]['source'], []).append(name)
    room = slots(functions, text)
    for source in sorted(by_source):
        names = sorted(by_source[source], key=lambda name: functions.by_name[name].address)
        label = source.replace('/', '--')[:-2]
        base, dropped, reasons, command = select_base(root, measured[names[0]]['object'], names,
                                                     output, label, functions.by_name)
        commands.append(command)
        sections, selected = elf_objects.read(base)['sections'], elf_objects.read(base)['functions']
        extents = {name: sections['.text.' + name]['size'] for name in names}
        # A function is placed when everything the compiler emitted for it fits
        # the original range the split leaves for it. Whether the instruction
        # extent agrees with the split is a reconstruction fact the measurement
        # reports; whether the data fits is a placement fact the link needs.
        placed = [name for name in names
                  if name not in set(dropped) and extents[name] <= room[name]]
        screens[source] = {'names': names, 'label': label, 'object': base, 'dropped': dropped,
                           'reasons': reasons, 'extents': extents, 'placed': placed,
                           'code': {name: selected[name]['size'] for name in names}}
    placed = sorted(name for screen in screens.values() for name in screen['placed'])
    placed_image, command = place(root, output, [screens[source]['object'] for source in sorted(screens)],
                                  placed, functions)
    commands.append(command)
    placement = elf_objects.placed_sections(placed_image)
    placement['image'] = placed_image.relative_to(root).as_posix()
    units = [source_unit(root, output, image, source, functions.by_name, measured, text,
                         screens[source], placement, commands, room) for source in sorted(screens)]
    units.append(retained_unit(root, output, image, functions, measured, layout, text, commands))
    if sum(unit['targetCodeBytes'] for unit in units) != text['initializedBytes']:
        raise ValueError('Target objects do not account for every initialized text byte exactly once')
    write_json(project_path, {
        'min_version': '3.8.3', 'custom_make': None, 'build_target': False, 'build_base': False,
        'units': [{'name': unit['name'], 'target_path': str(root / unit['target']),
                   'base_path': str(root / unit['base']),
                   'metadata': {'source_path': unit['source_path'], 'complete': False}}
                  for unit in units]})
    unmeasured = [{'source': value['source'], 'symbol': name, 'bytes': value['size']}
                  for name, value in sorted(definitions.items()) if name not in functions.by_name]
    used = sorted({profile_id(root, unit, forced_profile) for unit in configured_sources(root)})
    profiles_used = profiles(root)['profiles']
    return {'schemaVersion': 2, 'version': VERSION,
            'image': {'path': image.relative_to(root).as_posix(), 'sha256': digest(image)},
            'exheader': {'path': header.relative_to(root).as_posix(), 'sha256': digest(header)},
            'split': {'path': Path(split_path).resolve().relative_to(root).as_posix(),
                      'sha256': functions.digest, 'functionCount': len(functions),
                      'primaryBytes': sum(size for _, size in functions.primary_ranges()),
                      'extraBytes': sum(size for _, size in functions.extra_ranges())},
            'placement': {'image': placed_image.relative_to(root).as_posix(),
                          'sha256': digest(placed_image), 'functions': len(placed),
                          'inputs': [screens[source]['object'].relative_to(root).as_posix()
                                     for source in sorted(screens)]},
            'layout': layout, 'text': text, 'units': units, 'commands': commands,
            'compilers': [tool_identity(root, profiles_used[pid]) for pid in used],
            'sourceFilesByProfile': {pid: sum(1 for unit in configured_sources(root)
                                              if profile_id(root, unit, forced_profile) == pid)
                                     for pid in used},
            'sourceFiles': len(configured_sources(root)),
            'measuredFunctions': len(measured), 'retainedFunctionCount': len(functions) - len(measured),
            'unmeasuredSourceFunctions': unmeasured}


def source_unit(root, output, image, source, known, measured, text, screen, placement, commands, room):
    """One source file: original instructions for its functions, placed bytes for its base.

    The target section holds the instructions the split gives the function. The
    base section holds the whole extent the placement link produced for it --
    instructions plus whatever data the compiler put after them -- with the
    function symbol at the instruction size. The instruction extent therefore
    decides whether the two can be compared at all, and the function's data is
    compared with the original bytes at the same address before it may count.
    """
    label = source.replace('/', '--')[:-2]
    content = Path(image).read_bytes()
    origin = text['codeBinOffset'] - text['address']
    spans, symbols, records = [], {}, []
    base_spans, base_symbols, base_labels = [], {}, []
    reasons = dict(screen['reasons'])
    for index, name in enumerate(screen['names']):
        symbol = known[name]
        spans.append((symbol.address, symbol.size, origin + symbol.address))
        symbols[index] = [(name, 0, symbol.size, symbol.mode)]
        code = screen['code'][name]
        extent = screen['extents'][name]
        if name not in set(screen['placed']) and name not in reasons:
            reasons[name] = 'the compiled extent runs past the original range the split leaves'
        records.append({'name': name, 'address': symbol.address, 'size': symbol.size,
                        'mode': symbol.mode, 'compiledBytes': code, 'extent': extent})
    for name in screen['placed']:
        symbol = known[name]
        section, function = placement['sections'].get(name), placement['functions'].get(name)
        if section is None or function is None:
            raise ValueError('The placement link did not place a measured function: ' + name)
        data, extent = section['data'], len(section['data'])
        code = function['size']
        if extent != screen['extents'][name] or code != screen['code'][name]:
            raise ValueError('Placing %s changed the size the compiler emitted' % name)
        original = content[origin + symbol.address:origin + symbol.address + extent]
        if code == symbol.size and data[:code] == original[:code]:
            if data[code:] != original[code:]:
                reasons[name] = ('the data the compiler placed after the instructions '
                                 'differs from the original bytes')
                continue
        base_index = len(base_spans)
        base_spans.append((symbol.address, extent, section['offset']))
        base_labels.append('.text.' + name)
        base_symbols[base_index] = [(name, 0, code, symbol.mode)]
    target, command = carve(root, output, label, image, spans, symbols)
    commands.append(command)
    if base_spans:
        base, command = carve(root, output, label, root / placement['image'], base_spans, base_symbols,
                              suffix='placed', labels=base_labels)
        commands.append(command)
    else:
        base = empty_base(root, output, label)
    return {'name': source[:-2], 'source_path': source,
            'compilerProfile': measured[screen['names'][0]]['profile'],
            'target': target.relative_to(root).as_posix(), 'targetSha256': digest(target),
            'base': base.relative_to(root).as_posix(), 'baseSha256': digest(base),
            'targetCodeBytes': sum(known[name].size for name in screen['names']),
            'unrepresentable': sorted(reasons), 'rejected': reasons,
            'placed': list(screen['placed']),
            'linkObject': screen['object'].relative_to(root).as_posix(),
            'functions': records}


def retained_unit(root, output, image, functions, measured, layout, text, commands):
    """Every original text byte source does not implement, plus all original data."""
    gaps = split_module.complement([(functions.by_name[name].address, functions.by_name[name].size)
                                    for name in measured],
                                   text['address'], text['initializedBytes'])
    starts = [address for address, _ in gaps]
    retained = [symbol for symbol in functions.symbols if symbol.name not in measured]
    symbols = {}
    for symbol in retained:
        index = bisect.bisect_right(starts, symbol.address) - 1
        if index < 0 or symbol.end() > gaps[index][0] + gaps[index][1]:
            raise ValueError('Retained function %s does not fit one original range' % symbol.name)
        symbols.setdefault(index, []).append((symbol.name, symbol.address - gaps[index][0],
                                             symbol.size, symbol.mode))
    spans = [(address, size, text['codeBinOffset'] + address - text['address']) for address, size in gaps]
    data = exheader.segment(layout, 'data')
    data_spans = [('.' + row['name'] + '.original', row['address'], row['initializedBytes'],
                   row['codeBinOffset'], 'data') for row in layout['segments'] if row['name'] != 'text']
    data_spans.append(('.bss.original', data['address'] + data['initializedBytes'],
                       layout['bssBytes'], None, 'bss'))
    target, command = carve(root, output, 'unreconstructed', image, spans, symbols, data_spans)
    commands.append(command)
    empty = output / 'no_reconstructed_source.c'
    empty.write_text('typedef unsigned ObjdiffNoReconstructedSource;\n', encoding='utf-8')
    base = output / 'unreconstructed.base.o'
    commands.append(run([root / CLANG, *ASSEMBLE, '-c', empty, '-o', base],
                        output / 'unreconstructed.empty.log'))
    return {'name': SOURCE_ROOT, 'source_path': SOURCE_ROOT,
            'target': target.relative_to(root).as_posix(), 'targetSha256': digest(target),
            'base': base.relative_to(root).as_posix(), 'baseSha256': digest(base),
            'targetCodeBytes': sum(size for _, size in gaps), 'functions': [],
            'retainedFunctions': [{'name': function.name, 'address': function.address,
                                   'size': function.size, 'mode': function.mode} for function in retained]}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='build/update-content0/objects')
    parser.add_argument('--project', default='objdiff.json')
    parser.add_argument('--symbols', default='config/symbols.txt')
    args = parser.parse_args()
    try:
        result = build(ROOT, args.output, args.project, args.symbols)
    except (OSError, ValueError, KeyError) as error:
        print('Object production failed: ' + str(error), file=sys.stderr)
        return 1
    print(json.dumps({'units': len(result['units']), 'measuredFunctions': result['measuredFunctions'],
                      'retainedFunctions': result['retainedFunctionCount'],
                      'initializedTextBytes': result['text']['initializedBytes']}))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
