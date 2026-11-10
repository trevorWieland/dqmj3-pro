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

No ledger decides what counts. A function is measured because the source defines
it and the split gives it an address, a mode and a size. The profile's declared
configuration is checked against the unit: a unit may only ask for a layout or
header profile the profile implements, so naming a profile never silently
changes what the unit declared.
"""

import argparse
import bisect
import hashlib
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


ROOT = Path(__file__).resolve().parents[1]
VERSION = 'update-content0'
SOURCE_ROOT = 'src/native'
CLANG = 'tools/clang-21/clang.exe'
LLD = 'tools/clang-21/ld.lld.exe'
PROFILE_CONFIG = 'config/compiler-profiles.json'
# The assembler that carves original bytes out of the user's image is always
# the pinned Clang: it assembles bytes, it does not compile source.
ASSEMBLE = ('--target=arm-none-eabi', '-mcpu=mpcore', '-marm')
TIMEOUT = 300
CANONICAL = re.compile(r'fn_[0-9a-f]{8}')


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def read_json(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def write_json(path, value):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def run(argv, log):
    argv = [str(item) for item in argv]
    result = subprocess.run(argv, capture_output=True, timeout=TIMEOUT)
    log = Path(log)
    log.parent.mkdir(parents=True, exist_ok=True)
    log.write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Command failed, diagnostics in %s: %s' % (log, ' '.join(argv)))
    return {'argv': argv, 'log': log.as_posix(), 'logSha256': digest(log)}


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


def carve(root, output, label, image, spans, symbols, data_spans=()):
    """Assemble original byte ranges into one target object and check them back."""
    source = output / (label + '.target.s')
    lines = []
    for index, (address, size, image_offset) in enumerate(spans):
        lines.extend(['.section .text.original_%08x,"ax",%%progbits' % address,
                      '.Loriginal_%d:' % index,
                      '.incbin "%s", %d, %d' % (Path(image).as_posix(), image_offset, size)])
        for name, offset, symbol_size, mode in symbols.get(index, []):
            lines.extend(['.global ' + name, '.type ' + name + ',%function',
                          '.set %s,.Loriginal_%d+%d' % (name, index, offset + (mode == 'thumb')),
                          '.size %s,%d' % (name, symbol_size)])
    for section, address, size, image_offset, kind in data_spans:
        if kind == 'bss':
            lines.extend(['.section %s,"aw",%%nobits' % section, '.space %d' % size])
        else:
            flags = 'a' if section.startswith('.rodata') else 'aw'
            lines.extend(['.section %s,"%s",%%progbits' % (section, flags),
                          '.incbin "%s", %d, %d' % (Path(image).as_posix(), image_offset, size)])
    source.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    target = output / (label + '.target.o')
    command = run([root / CLANG, *ASSEMBLE, '-c', source, '-o', target],
                  output / (label + '.assemble.log'))
    check_original(root, target, spans, data_spans, image)
    return target, command


def check_original(root, target, spans, data_spans, image):
    content = Path(image).read_bytes()
    read = elf_objects.read(target)
    for address, size, image_offset in spans:
        section = read['sections']['.text.original_%08x' % address]
        if section['data'] != content[image_offset:image_offset + size]:
            raise ValueError('Assembler changed original text bytes at 0x%08x' % address)
    for section, address, size, image_offset, kind in data_spans:
        found = read['sections'][section]
        if found['size'] != size or found['kind'] != kind:
            raise ValueError('Original %s section changed size or kind' % section)
        if kind != 'bss' and found['data'] != content[image_offset:image_offset + size]:
            raise ValueError('Assembler changed original data in ' + section)


def select_base(root, raw, names, output, label):
    """Keep only the measured function sections a linker can still represent.

    A function whose relocations point at discarded material comes back with an
    R_ARM_NONE relocation, which is not a comparison of instruction bytes. Such
    functions keep their original target bytes but no base object, so they are
    reported as unmatched instead of being scored against an unresolved object.
    """
    kept, dropped, command = list(names), [], None
    while kept:
        script = output / (label + '.source.ld')
        body = ['.text.%s : { KEEP(*(.text.%s)) }' % (name, name) for name in kept]
        measured = {'.text.' + name for name in kept}
        discard = sorted(set(elf_objects.read(raw)['sections']) - measured)
        script.write_text('SECTIONS {\n' + '\n'.join(body) + '\n/DISCARD/ : { '
                          + ' '.join('*(%s)' % section for section in discard) + ' }\n}\n',
                          encoding='utf-8')
        base = output / (label + '.base.o')
        command = run([root / LLD, '-r', '-m', 'armelf', '--build-id=none', '-T', script, raw, '-o', base],
                      output / (label + '.select.log'))
        defined = elf_objects.read(base)['functions']
        unresolved = [name for name, function in defined.items() if 0 in function['relocations']]
        if not unresolved:
            break
        kept = [name for name in kept if name not in unresolved]
        dropped.extend(unresolved)
    if not kept:
        return empty_base(root, output, label), sorted(dropped), command
    if set(defined) != set(kept):
        raise ValueError('Selected source object does not define exactly the measured functions')
    return base, sorted(dropped), command


def empty_base(root, output, label):
    """A genuinely compiled empty translation unit: no representable source bytes."""
    source = output / (label + '.empty.c')
    source.write_text('typedef unsigned ObjdiffNoRepresentableSource;\n', encoding='utf-8')
    base = output / (label + '.base.o')
    run([root / CLANG, *ASSEMBLE, '-c', source, '-o', base], output / (label + '.empty.log'))
    return base


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
    units, by_source = [], {}
    for name in measured:
        by_source.setdefault(measured[name]['source'], []).append(name)
    for source in sorted(by_source):
        units.append(source_unit(root, output, source, by_source[source], functions, measured, text, commands))
    units.append(retained_unit(root, output, image, functions, measured, definitions, layout, text, commands))
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
            'layout': layout, 'text': text, 'units': units, 'commands': commands,
            'compilers': [tool_identity(root, profiles_used[pid]) for pid in used],
            'sourceFilesByProfile': {pid: sum(1 for unit in configured_sources(root)
                                              if profile_id(root, unit, forced_profile) == pid)
                                     for pid in used},
            'sourceFiles': len(configured_sources(root)),
            'measuredFunctions': len(measured), 'retainedFunctionCount': len(functions) - len(measured),
            'unmeasuredSourceFunctions': unmeasured}


def source_unit(root, output, source, names, functions, measured, text, commands):
    """One source file: original bytes for its functions, compiled bytes for its base."""
    names.sort(key=lambda name: functions.by_name[name].address)
    label = source.replace('/', '--')[:-2]
    spans, symbols = [], {}
    for index, name in enumerate(names):
        symbol = functions.by_name[name]
        spans.append((symbol.address, symbol.size, text['codeBinOffset'] + symbol.address - text['address']))
        symbols[index] = [(name, 0, symbol.size, symbol.mode)]
    target, command = carve(root, output, label, root / 'generated' / VERSION / 'code.bin', spans, symbols)
    commands.append(command)
    base, dropped, command = select_base(root, measured[names[0]]['object'], names, output, label)
    commands.append(command)
    return {'name': source[:-2], 'source_path': source,
            'compilerProfile': measured[names[0]]['profile'],
            'target': target.relative_to(root).as_posix(), 'targetSha256': digest(target),
            'base': base.relative_to(root).as_posix(), 'baseSha256': digest(base),
            'targetCodeBytes': sum(functions.by_name[name].size for name in names),
            'unrepresentable': dropped,
            'functions': [{'name': name, 'address': functions.by_name[name].address,
                           'size': functions.by_name[name].size, 'mode': functions.by_name[name].mode,
                           'compiledBytes': measured[name]['size']} for name in names]}


def retained_unit(root, output, image, functions, measured, definitions, layout, text, commands):
    """Every original text byte source does not implement, plus all original data."""
    spans_ranges = split_module.complement([(functions.by_name[name].address, functions.by_name[name].size)
                                            for name in measured],
                                           text['address'], text['initializedBytes'])
    gaps = spans_ranges
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
