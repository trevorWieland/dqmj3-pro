"""Measure the MPCore scheduling NOP that the original image emits.

The original image contains, after every non-first argument check of the script
API bindings,

    cmp   r0, #0
    nop                 ; 0xE320F000, the ARMv6K NOP hint
    b<cond> ...

That NOP is not produced by the pinned profile, which compiles with ``-Otime``
(optimisation level 2 with time emphasis).  It is produced by ``-O3 -Otime``
with ``--cpu=MPCore``, by every armcc build in the bundled set.  This probe
compiles the tracked binding unit twice -- once with the profile as declared and
once with ``-O3`` added -- and reports, per measured binding, the number of
``cmp r0,#0 ; nop ; b<cond>`` sequences and whether the object's instruction
bytes equal the original image's.

It is a compiler measurement, not a build step: it writes its objects under
``work/nop-artifact-probe/`` and changes no tracked file.  It needs the original
code image, which ``build.py`` writes to ``generated/update-content0/code.bin``
after the user supplies their own CIA; without that file there is nothing to
compare against and the probe says so.

Exit status: 0 when the ``-O3 -Otime`` run emits the sequences and the declared
profile does not, 1 otherwise.
"""

import argparse
import io
import json
import struct
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/nop-artifact-probe'
CODE = ROOT / 'generated/update-content0/code.bin'
BASE_VA = 0x00100000
UNIT = 'src/native/wave080-script-api/motion_world.c'
TARGETS = ['fn_0027af14', 'fn_0027a778']
PROFILE_ID = 'armcc-4.1-b1454'


def read_json(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def profile(root):
    table = read_json(Path(root) / 'config/compiler-profiles.json')
    for entry in table['profiles']:
        if entry['id'] == PROFILE_ID:
            return entry
    raise SystemExit('Profile not declared: ' + PROFILE_ID)


def read_symbols(root):
    """name -> (address, mode, size) from the committed split."""
    table = {}
    for line in (Path(root) / 'config/symbols.txt').read_text(encoding='utf-8').splitlines():
        if not line or line.startswith('#') or line.startswith('+'):
            continue
        address, mode, size, name = line.split()
        table[name] = (int(address, 16), mode, int(size))
    return table


def compile_unit(root, exe, arguments, preinclude, object_path, log_path):
    argv = [str(exe), *arguments, '--preinclude', str(preinclude),
            '-I' + str(Path(root) / Path(UNIT).parent),
            '-I' + str(Path(root) / 'tools/armcc-4.1-b1454/include'),
            str(Path(root) / UNIT), '-o', str(object_path)]
    object_path.parent.mkdir(parents=True, exist_ok=True)
    done = subprocess.run([str(item) for item in argv], capture_output=True,
                          cwd=str(root), timeout=300)
    text = (done.stdout + done.stderr).decode('utf-8', 'replace')
    log_path.parent.mkdir(parents=True, exist_ok=True)
    log_path.write_text('$ ' + ' '.join(str(item) for item in argv) + '\n' + text,
                        encoding='utf-8')
    return done.returncode == 0, text


def object_functions(path):
    """symbol -> {bytes, relocations}; relocations are the linker-filled words."""
    elf = ELFFile(io.BytesIO(Path(path).read_bytes()))
    sections = {index: section for index, section in enumerate(elf.iter_sections())}
    relocations = {}
    for section in elf.iter_sections():
        if section['sh_type'] in ('SHT_REL', 'SHT_RELA'):
            relocations.setdefault(section['sh_info'], []).extend(
                rel['r_offset'] for rel in section.iter_relocations())
    out = {}
    for symbol in elf.get_section_by_name('.symtab').iter_symbols():
        if symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size']:
            continue
        section = sections.get(symbol['st_shndx'])
        if section is None or not section['sh_flags'] & 4:
            continue
        start = symbol['st_value'] & ~1
        data = section.data()[start:start + symbol['st_size']]
        out[symbol.name] = {
            'bytes': data,
            'relocations': {offset - start for offset in relocations.get(symbol['st_shndx'], [])
                            if start <= offset < start + symbol['st_size']},
        }
    return out


def sequences(data):
    """Offsets of cmp rX,#0 ; nop ; b<cond> in ARM code."""
    found = 0
    for offset in range(0, len(data) - 11, 4):
        compare, nop, branch = struct.unpack_from('<III', data, offset)
        if (compare & 0x0FFFFFF0) == 0x03500000 and nop == 0xE320F000:
            if (branch & 0x0F000000) == 0x0A000000:
                found += 1
    return found


def compare(name, entry, symbols, code):
    address, _mode, size = symbols[name]
    original = code[address - BASE_VA:address - BASE_VA + size]
    candidate = entry['bytes'][:size]
    mask = bytearray(len(candidate))
    for offset in entry['relocations']:
        for index in range(offset, min(offset + 4, len(candidate))):
            mask[index] = 1
    exact = len(candidate) == len(original) and all(
        mask[index] or candidate[index] == original[index]
        for index in range(len(candidate)))
    return {
        'symbol': name,
        'bytes': size,
        'objectSequences': sequences(candidate),
        'originalSequences': sequences(original),
        'exactModuloFixups': exact,
    }


def measure(root, label, arguments):
    """Compile once and return per-target measurement for one profile."""
    declared = profile(root)
    preinclude = Path(root) / declared['preinclude']
    exe = Path(root) / declared['executable']
    if not exe.is_file():
        raise SystemExit('Missing compiler: ' + str(exe) + ' (run setup_tools.py)')
    object_path = WORK / (label + '.o')
    ok, text = compile_unit(root, exe, arguments, preinclude, object_path,
                            WORK / (label + '.log'))
    if not ok:
        raise SystemExit('%s compile failed:\n%s' % (label, text.strip()))
    functions = object_functions(object_path)
    symbols = read_symbols(root)
    code = CODE.read_bytes()
    return [compare(name, functions[name], symbols, code) for name in TARGETS]


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--output', default=str(WORK / 'probe.json'))
    args = parser.parse_args()
    if not CODE.is_file():
        print('Missing %s; run build.py with your own image first.' % CODE, file=sys.stderr)
        return 1
    declared = profile(ROOT)
    arguments = list(declared['arguments'])
    with_o3 = list(arguments)
    with_o3.insert(with_o3.index('-Otime'), '-O3')

    print('unit:   ' + UNIT)
    print('targets: ' + ', '.join(TARGETS))
    baseline = measure(ROOT, 'declared', arguments)
    optimised = measure(ROOT, 'o3', with_o3)
    rows = []
    for base, fast in zip(baseline, optimised):
        rows.append({'symbol': base['symbol'], 'declared': base, 'o3': fast})
        print('%-12s (%d bytes) declared: %d/%d sequences, %s'
              % (base['symbol'], base['bytes'], base['objectSequences'],
                 base['originalSequences'],
                 'exact' if base['exactModuloFixups'] else 'differs'))
        print('%-12s            -O3:      %d/%d sequences, %s'
              % ('', fast['objectSequences'], fast['originalSequences'],
                 'exact' if fast['exactModuloFixups'] else 'differs'))

    Path(args.output).write_text(json.dumps(rows, indent=2) + '\n', encoding='utf-8')
    emitted = all(row['o3']['objectSequences'] == row['o3']['originalSequences']
                  for row in rows)
    absent = all(row['declared']['objectSequences'] == 0 for row in rows)
    print('\n-O3 -Otime emits every original sequence: %s' % emitted)
    print('declared profile emits none: %s' % absent)
    print('wrote ' + args.output)
    return 0 if emitted and absent else 1


if __name__ == '__main__':
    sys.exit(main())
