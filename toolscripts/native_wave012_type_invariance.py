import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

from native_wave012_common import ROOT, FLAGS, WORK, OUT, command, record, save, sha


def run():
    build = WORK / 'shared-type-invariance'
    build.mkdir(parents=True, exist_ok=True)
    commands, rows, baselines = [], [], []
    for wave, version, source_name in [('wave009', 'v2', 'interval_set'), ('wave010', 'v1', 'match_state')]:
        baseline = ROOT / 'evidence/lanes' / (wave + '-native') / (version + '-packet.json')
        old = json.loads(baseline.read_text())
        baselines.append(record(baseline))
        source = ROOT / 'src/native' / wave / (source_name + '.c')
        obj = build / (source_name + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-c', source, '-o', obj],
                build / (source_name + '.log'), commands)
        elf = ELFFile(io.BytesIO(obj.read_bytes()))
        for previous in old['functions']:
            symbol = elf.get_section_by_name('.symtab').get_symbol_by_name(previous['symbol'])[0]
            index = symbol['st_shndx']
            section = elf.get_section(index)
            actual = []
            for relocation_section in elf.iter_sections():
                if isinstance(relocation_section, RelocationSection) and relocation_section['sh_info'] == index:
                    table = elf.get_section(relocation_section['sh_link'])
                    for item in relocation_section.iter_relocations():
                        actual.append({'offset': item['r_offset'], 'type': item['r_info_type'],
                                       'symbol': table.get_symbol(item['r_info_sym']).name, 'format': relocation_section['sh_type']})
            expected = [{key: item[key] for key in ['offset', 'type', 'symbol', 'format']}
                        for item in previous.get('compilerObject', {}).get('relocations', [])]
            identity = sha(section.data()) == previous['candidateObjectSpanSha256'] and actual == expected
            if not identity:
                raise ValueError('ARM body or relocation changed for ' + previous['symbol'])
            rows.append({'symbol': previous['symbol'], 'bytes': len(section.data()), 'spanSha256': sha(section.data()),
                         'bodyInvariant': True, 'relocationsInvariant': True, 'relocations': actual,
                         'source': record(source), 'header': record(source.with_suffix('.h')), 'object': record(obj)})
    proof = {'schemaVersion': 1, 'sourceRevision': '88de9588e48d44ef931e96554e515d325bff1713',
             'status': 'measured-all-four-ARM-bodies-and-relocations-invariant', 'baselines': baselines,
             'producer': record(Path(__file__)), 'compiler': record(ROOT / 'tools/clang-21/clang.exe'),
             'compilerFlags': FLAGS, 'commands': commands, 'functions': rows, 'sourceCreditChanges': 0}
    save(OUT / 'shared-type-arm-invariance.json', proof)
    print(json.dumps({'functions': len(rows), 'bytes': [row['bytes'] for row in rows], 'allBodyAndRelocationInvariant': True}))
    return proof


if __name__ == '__main__':
    run()
