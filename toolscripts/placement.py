"""Byte carving, command running and the placement link for the object pipeline.

Two things in the measurement are the same job done at different scales, and both
live here so the object pipeline can state them once.

Carving turns byte ranges into a real ELF object: the target side takes the
user's original bytes, the base side takes the bytes the placement link produced
for the same function, and the assembler is pinned so the carve cannot drift.

Placing links every compiled function at the address the split gives it. That is
the only step that can turn a ``bl`` into bytes, because it is the only step that
knows the callee's address. A function the split lists but no unit measured still
becomes an absolute symbol, so a call to it resolves against the address the
original image uses for it.

Nothing here decides whether compiled bytes match the original; that stays with
``objdiff_objects`` and ``image_link``.
"""

import bisect
import hashlib
import json
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import elf_objects
import image_link


ROOT = Path(__file__).resolve().parents[1]
CLANG = 'tools/clang-21/clang.exe'
LLD = 'tools/clang-21/ld.lld.exe'
# The assembler that carves bytes out of an image is always the pinned Clang: it
# assembles bytes, it does not compile source.
ASSEMBLE = ('--target=arm-none-eabi', '-mcpu=mpcore', '-marm')
TIMEOUT = 300


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


def carve(root, output, label, image, spans, symbols, data_spans=(), suffix='target', labels=None):
    """Assemble byte ranges into one object and check them back.

    ``labels`` names the section each span lands in, in order. The target default
    names a section after the address it was carved from; a base object names it
    after the function it holds, which is what the linker script selects on.
    """
    source = output / (label + '.' + suffix + '.s')
    names = labels or ['.text.original_%08x' % address for address, _, _ in spans]
    if len(names) != len(spans):
        raise ValueError('Every carved span needs exactly one section name')
    lines = []
    for index, (address, size, image_offset) in enumerate(spans):
        lines.extend(['.section %s,"ax",%%progbits' % names[index],
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
    target = output / (label + '.' + suffix + '.o')
    command = run([root / CLANG, *ASSEMBLE, '-c', source, '-o', target],
                  output / (label + '.' + suffix + '.assemble.log'))
    check_original(root, target, spans, data_spans, image, names)
    return target, command


def check_original(root, target, spans, data_spans, image, labels=None):
    """Read every carved section back and refuse a byte the assembler changed."""
    content = Path(image).read_bytes()
    read = elf_objects.read(target)
    names = labels or ['.text.original_%08x' % address for address, _, _ in spans]
    for index, (address, size, image_offset) in enumerate(spans):
        section = read['sections'][names[index]]
        if section['data'] != content[image_offset:image_offset + size]:
            raise ValueError('Assembler changed original text bytes at 0x%08x' % address)
    for section, address, size, image_offset, kind in data_spans:
        found = read['sections'][section]
        if found['size'] != size or found['kind'] != kind:
            raise ValueError('Original %s section changed size or kind' % section)
        if kind != 'bss' and found['data'] != content[image_offset:image_offset + size]:
            raise ValueError('Assembler changed original data in ' + section)


def empty_base(root, output, label):
    """A genuinely compiled empty translation unit: no representable source bytes."""
    source = output / (label + '.empty.c')
    source.write_text('typedef unsigned ObjdiffNoRepresentableSource;\n', encoding='utf-8')
    base = output / (label + '.base.o')
    run([root / CLANG, *ASSEMBLE, '-c', source, '-o', base], output / (label + '.empty.log'))
    return base


def place(root, output, objects, placed, functions, constants=()):
    """Link the measured functions of every unit at the addresses the split gives.

    This is the whole-image placement, and it is the only step that can turn a
    ``bl`` into bytes: the callee's address is known here. A function the split
    does not place stays an absolute symbol so a call to it still resolves, and
    every section no unit measured is discarded. ``constants`` defines shared
    data symbols at their original addresses for the same reason.
    """
    script = output / 'source.placed.ld'
    script.write_text(image_link.script_for(functions.symbols, set(placed), constants),
                      encoding='utf-8')
    image = output / 'source.placed.elf'
    command = run([root / LLD, '-static', '-m', 'armelf', '--build-id=none', '-e', '0',
                   '-T', script, *objects, '-o', image], output / 'source.placed.log')
    return image, command


def slots(functions, text):
    """The bytes each split function owns before the next owned original range.

    A function's compiled data may follow it only as far as the next range the
    split already assigns, whether that is another function or an extra range
    belonging to one.
    """
    starts = sorted({symbol.address for symbol in functions.symbols}
                    | {address for address, _ in functions.extra_ranges()})
    limit = text['address'] + text['initializedBytes']
    result = {}
    for symbol in functions.symbols:
        index = bisect.bisect_right(starts, symbol.address)
        result[symbol.name] = (starts[index] if index < len(starts) else limit) - symbol.address
    return result
