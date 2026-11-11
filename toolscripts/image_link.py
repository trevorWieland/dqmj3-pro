"""Link the complete image at the original addresses and compare it byte for byte.

The image is assembled from compiled source wherever a function's compiled size
equals its split extent, and from the user's original bytes everywhere else.
That mix is the reconstruction: a linked image that equals the original while no
byte is retained is what "complete" means, and the retained counts in the result
are the distance from it.

What is placed is the *extent* a function occupies, not only its instructions: a
function that loads a literal pool brings that pool with it, and the link puts
the compiler's own data at the address the original put it. A function whose
compiled instruction extent disagrees with the split is not placed, because its
code does not describe the original function; it is reported with the reason.

Original bytes stay private. The linked image and the linker script are written
under ``build/``, which is gitignored and never uploaded.
"""

import argparse
import hashlib
import json
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import elf_objects
import absolute_symbols
import split as split_module


ROOT = Path(__file__).resolve().parents[1]
LLD = 'tools/clang-21/ld.lld.exe'
TIMEOUT = 600
ALLOCATED = 2


def read_json(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def digest(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def script_for(symbols, placed, constants=()):
    """Place every placeable function at its original address.

    Functions that stay original still need an address for every relocation that
    points at them, so they become absolute symbols with the Thumb bit set when
    that is their mode.  ``constants`` are shared data symbols -- a binding name
    string, for instance -- that source refers to by name and the original refers
    to by address; they are defined at that address so the reference resolves to
    the value the original's literal pool holds.
    """
    lines = ['SECTIONS {']
    for symbol in symbols:
        if symbol.name in placed:
            lines.append('  %s 0x%08x : { KEEP(*(.text.%s)) }' % (symbol.name, symbol.address, symbol.name))
    for symbol in symbols:
        if symbol.name not in placed:
            lines.append('  %s = 0x%08x;' % (symbol.name, symbol.address + (1 if symbol.mode == 'thumb' else 0)))
    for name, address in constants:
        lines.append('  %s = 0x%08x;' % (name, address))
    lines.append('  /DISCARD/ : { *(.text*) *(.ARM.exidx*) *(.ARM.extab*) *(.data*) *(.rodata*) '
                 '*(.bss*) *(.comment) *(.note*) *(.llvm_addrsig) }')
    lines.append('}')
    return '\n'.join(lines) + '\n'


def linked_sections(path):
    """The allocated section bytes of the linked image, by section name."""
    with Path(path).open('rb') as stream:
        elf = ELFFile(stream)
        if elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM':
            raise ValueError('The linker did not produce a little-endian ARM32 image')
        return {section.name: section.data() for section in elf.iter_sections()
                if section['sh_flags'] & ALLOCATED and section['sh_size'] and section['sh_type'] != 'SHT_NOBITS'}


def compare(placed, extents, sections, original, text):
    """Overlay the linked functions on the original image and count the differences."""
    assembled = bytearray(original)
    differences, matched = [], 0
    for symbol in placed:
        offset = symbol.address - text['address'] + text['codeBinOffset']
        extent = extents[symbol.name]
        data = sections.get(symbol.name)
        if data is None or len(data) != extent:
            raise ValueError('Linked function is missing or the wrong size: ' + symbol.name)
        assembled[offset:offset + extent] = data
        if data == original[offset:offset + extent]:
            matched += 1
        else:
            differences.append({'name': symbol.name, 'address': symbol.address, 'size': extent})
    return bytes(assembled), matched, differences


def priority(symbol):
    """Work-queue order for retained functions: biggest first, then address.

    Call counts are the other useful key and are not available yet; when they
    are, they belong here rather than in the caller.
    """
    return (-symbol.size, symbol.address)


def write_queue(path, retained, placed, differences):
    """Write the human work queue: retained first, then compiled source."""
    differing = {row['name'] for row in differences}
    lines = ['# retained original functions: %d, largest first' % len(retained)]
    lines += ['%08x %6d %s' % (symbol.address, symbol.size, symbol.name)
              for symbol in sorted(retained, key=priority)]
    lines.append('# compiled from source: %d' % len(placed))
    lines += ['%08x %6d %s %s' % (symbol.address, symbol.size, symbol.name,
                                  'differs' if symbol.name in differing else 'identical')
              for symbol in sorted(placed, key=priority)]
    Path(path).write_text('\n'.join(lines) + '\n', encoding='utf-8')


def link(root, mapping, output):
    """Assemble the whole image and report what came from source."""
    root, output = Path(root).resolve(), Path(output).resolve()
    output.mkdir(parents=True, exist_ok=True)
    functions = split_module.load(root / mapping['split']['path'],
                                  mapping['text']['address'], mapping['text']['initializedBytes'])
    if functions.digest != mapping['split']['sha256']:
        raise ValueError('The split changed after object production')
    image_path = root / mapping['image']['path']
    if digest(image_path) != mapping['image']['sha256']:
        raise ValueError('The code image changed after object production')
    original = image_path.read_bytes()
    constants = absolute_symbols.load(root)
    constant_names = set(constants)
    compiled, extents, sources, definitions, rejected = {}, {}, [], {}, {}
    for unit in mapping['units']:
        if unit['source_path'] == 'src/native':
            continue
        base = root / unit['linkObject']
        sources.append(base)
        link_input = elf_objects.read(base)
        definitions.update(link_input['functions'])
        rejected.update(unit.get('rejected') or {})
        placing = set(unit.get('placed') or [])
        for function in unit['functions']:
            if function['name'] in placing:
                compiled[function['name']] = function
    for name in compiled:
        if name not in functions.by_name:
            raise ValueError('A compiled function is missing from the split: ' + name)
    placed, skipped = [], []
    for name, function in compiled.items():
        symbol = functions.by_name[name]
        implementation = definitions.get(name)
        if implementation is None:
            skipped.append((symbol, 'the compiler output for this function is not in the link input', []))
            continue
        unresolved = sorted(implementation['references'] - set(functions.by_name) - constant_names)
        if function['compiledBytes'] != symbol.size:
            skipped.append((symbol, 'compiled size differs from the split extent', unresolved))
        elif unresolved:
            skipped.append((symbol, 'references source symbols that have no address in the split', unresolved))
        else:
            placed.append(symbol)
            extents[name] = implementation['extent']
    script = output / 'image.ld'
    script.write_text(script_for(functions.symbols, {symbol.name for symbol in placed},
                                 absolute_symbols.definitions(constants)), encoding='utf-8')
    image = output / 'image.elf'
    argv = [str(root / LLD), '-static', '-m', 'armelf', '--build-id=none', '-e', '0',
            '-T', str(script), *[str(source) for source in sources], '-o', str(image)]
    result = subprocess.run(argv, capture_output=True, timeout=TIMEOUT)
    (output / 'link.log').write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('The complete image did not link; see %s' % (output / 'link.log'))
    assembled, matched, differences = compare(placed, extents, linked_sections(image), original, mapping['text'])
    retained = [symbol for symbol in functions.symbols if symbol.name not in {row.name for row in placed}]
    queue = output / 'retained.txt'
    write_queue(queue, retained, placed, differences)
    source_code = sum(symbol.size for symbol in placed)
    source_bytes = sum(extents[symbol.name] for symbol in placed)
    text_bytes = mapping['text']['initializedBytes']
    retained_text = text_bytes - source_bytes
    retained_data = sum(row['initializedBytes'] for row in mapping['layout']['segments'] if row['name'] != 'text')
    retained_bytes = retained_text + retained_data + mapping['layout']['bssBytes']
    for symbol in functions.symbols:
        if symbol.name not in compiled and symbol.name in rejected:
            skipped.append((symbol, rejected[symbol.name], []))
    # matched_code counts credited instruction bytes, which is what the report
    # records. A placed function may carry a literal pool after its instructions;
    # that data is placed and counted in retained text, but it is not code credit,
    # so the matched extent is not the matched code size.
    differing_names = {row['name'] for row in differences}
    return {'version': mapping['version'], 'textAddress': mapping['text']['address'],
            'textBytes': text_bytes, 'imageBytes': len(original),
            'sourceFunctions': len(placed), 'sourceBytes': source_bytes,
            'sourceCodeBytes': source_code, 'sourceDataBytes': source_bytes - source_code,
            'matchingFunctions': matched,
            'matchingBytes': sum(symbol.size for symbol in placed
                                 if symbol.name not in differing_names),
            'retainedFunctions': len(functions) - len(placed),
            'retainedTextBytes': retained_text, 'retainedDataBytes': retained_data,
            'retainedBssBytes': mapping['layout']['bssBytes'], 'retainedBytes': retained_bytes,
            'retainedQueue': [{'name': symbol.name, 'address': symbol.address, 'size': symbol.size}
                              for symbol in sorted(retained, key=priority)[:20]],
            'queuePath': queue.relative_to(root).as_posix(),
            'unplaceableSourceFunctions': [{'name': symbol.name, 'address': symbol.address,
                                            'splitBytes': symbol.size,
                                            'compiledBytes': compiled.get(symbol.name, {}).get('compiledBytes'),
                                            'reason': reason, 'unresolved': unresolved}
                                           for symbol, reason, unresolved in skipped],
            'unmeasuredSourceFunctions': mapping['unmeasuredSourceFunctions'],
            'differingFunctions': differences,
            'imageIdentical': assembled == original,
            'complete': assembled == original and retained_bytes == 0,
            'linkedImage': image.relative_to(root).as_posix(),
            'linkedImageSha256': digest(image)}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--object-map', default='build/update-content0/objects/object-map.json')
    parser.add_argument('--output', default='build/update-content0/link.json')
    args = parser.parse_args()
    target = ROOT / args.output
    try:
        mapping = read_json(ROOT / args.object_map)
        result = link(ROOT, mapping, target.parent)
    except (OSError, ValueError, KeyError) as error:
        print('Image link failed: ' + str(error), file=sys.stderr)
        return 1
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({key: result[key] for key in ('sourceFunctions', 'sourceBytes', 'matchingFunctions',
                                                   'retainedFunctions', 'imageIdentical', 'complete')}))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
