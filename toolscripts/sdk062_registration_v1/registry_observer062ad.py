import json
from pathlib import Path
import subprocess

from elftools.elf.elffile import ELFFile
from registry_build062ad import R, W, S, PROFILES


def build(folder):
    output = folder / 'reference-observer'
    output.mkdir(exist_ok=False)
    source = S / 'fixture_observer062ad.c'
    obj, artifact = output / 'observer.o', output / 'observer.elf'
    includes = [S, R / 'src/native/wave062-sdk/include',
                R / 'src/native/wave062-runtime/include', R / 'src/native/wave062-owner/include']
    commands = [
        [str(R / 'tools/clang-21/clang.exe'), *PROFILES['arm'], '-std=c11', '-O2',
         '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
         *['-I' + str(p) for p in includes], '-c', str(source), '-o', str(obj)],
        [str(R / 'tools/clang-21/ld.lld.exe'), '-Ttext=0xa00000',
         '--defsym=registry_observer_acquire_endpoint062ad=0x474598',
         '--defsym=registry_observer_release_endpoint062ad=0x4745b8',
         '-e', 'fixture_registry_observe062ad', '-o', str(artifact), str(obj)]
    ]
    rows = []
    for argv in commands:
        result = subprocess.run(argv, capture_output=True, text=True)
        rows.append(dict(argv=argv, status=result.returncode, output=result.stdout + result.stderr))
        if result.returncode:
            raise RuntimeError(rows[-1])
    (output / 'build.json').write_text(json.dumps(rows, indent=2) + '\n')


def attach(original, folder, registry, chosen, mutex):
    symbols, pages = {}, set()
    with (folder / 'reference-observer/observer.elf').open('rb') as stream:
        elf = ELFFile(stream)
        for section in elf.iter_sections():
            if not section['sh_flags'] & 2 or not section['sh_size']:
                continue
            address, size = section['sh_addr'], section['sh_size']
            for page in range(address & -4096, (address + size + 4095) & -4096, 4096):
                if page not in pages:
                    if page in original.module_pages:
                        raise ValueError('reference observer overlaps canonical module')
                    original.cpu.mem_map(page, 4096)
                    pages.add(page)
            if section['sh_type'] != 'SHT_NOBITS':
                original.cpu.mem_write(address, section.data())
        for symbol in elf.get_section_by_name('.symtab').iter_symbols():
            if symbol.name:
                symbols[symbol.name] = symbol['st_value']
            if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
                if symbol['st_value'] < 0xa00000:
                    raise ValueError('reference endpoint became an authored definition')
                original.fixture_ranges.append((symbol['st_value'], symbol['st_value'] + symbol['st_size']))
    if symbols['registry_observer_acquire_endpoint062ad'] != 0x474598 or symbols['registry_observer_release_endpoint062ad'] != 0x4745b8:
        raise ValueError('reference observer real SDK routes changed')
    original.call(symbols['fixture_registry_observe062ad'], [registry, chosen])
    original.cpu.mem_write(mutex, symbols['fixture_registry_mutex_methods062ad'].to_bytes(4, 'little'))
    return symbols
