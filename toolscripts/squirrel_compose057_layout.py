import ctypes
import json
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile
import os

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
TOOL_ROOT=Path(os.environ.get('SQUIRREL_COMPOSE057_TOOL_ROOT',str(ROOT))).resolve()
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_state040_model import KEYS as CORE_KEYS
from squirrel_state045_model import KEYS as ABI_KEYS
from squirrel_state049_model import FRAME_KEYS

PROBES=[('source/squirrel-wave040/layout.c','sq_startup_layout040',CORE_KEYS),
        ('source/squirrel-wave045/fixture_layout.c','sq_fixture_layout045',ABI_KEYS),
        ('source/squirrel-wave049/fixture_layout.c','sq_fixture_frame_layout049',FRAME_KEYS),
        ('source/squirrel-wave057/layout_probe.c','compose_trap_layout057',
         ['trapBytes','base','top','instruction','target'])]


def run(profile):
    output=WORK/'layout-probes'/profile
    output.mkdir(parents=True,exist_ok=True)
    receipts=[]
    objects=[]
    rows=[]
    flags={'arm':['--target=arm-none-eabi','-mcpu=mpcore','-marm'],
           'a64':['--target=aarch64-none-elf'],
           'windows':['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible']}[profile]
    for index,(name,symbol,keys)in enumerate(PROBES):
        target=output/(str(index)+'.o')
        argv=[TOOL_ROOT/'tools/clang-21/clang.exe',*flags,'-std=c11','-ffreestanding','-Wall','-Wextra','-Werror',
              '-c',ROOT/name,'-o',target]
        result=subprocess.run(list(map(str,argv)),cwd=ROOT,capture_output=True)
        receipts.append({'argv':list(map(str,argv)),'exitCode':result.returncode,
                         'stdout':result.stdout.decode(),'stderr':result.stderr.decode()})
        if result.returncode:raise ValueError(receipts[-1])
        objects.append(target)
        if profile!='windows':
            with target.open('rb')as stream:
                elf=ELFFile(stream)
                entry=elf.get_section_by_name('.symtab').get_symbol_by_name(symbol)[0]
                section=elf.get_section(entry['st_shndx'])
                raw=section.data()[entry['st_value']:entry['st_value']+entry['st_size']]
                rows.append(dict(zip(keys,[int.from_bytes(raw[at:at+4],'little')for at in range(0,len(raw),4)],strict=True)))
    if profile=='windows':
        library_path=output/'layout057.dll'
        argv=[TOOL_ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64',
              '/timestamp:0',*['/export:'+symbol+',data'for name,symbol,keys in PROBES],
              '/out:'+str(library_path),*objects]
        result=subprocess.run(list(map(str,argv)),cwd=ROOT,capture_output=True)
        receipts.append({'argv':list(map(str,argv)),'exitCode':result.returncode,'stderr':result.stderr.decode()})
        if result.returncode:raise ValueError(receipts[-1])
        library=ctypes.CDLL(str(library_path))
        rows=[dict(zip(keys,list((ctypes.c_uint*len(keys)).in_dll(library,symbol)),strict=True))
              for name,symbol,keys in PROBES]
    record=dict(zip(['core','abi','frame','trap'],rows,strict=True))
    for language in ['c','c++']:
        argv=[TOOL_ROOT/'tools/clang-21/clang.exe',*flags,'-x',language,
            '-std=c11'if language=='c'else'-std=c++17','-ffreestanding','-Wall','-Wextra','-Werror',
            '-c',ROOT/'toolscripts/squirrel_compose057_api_probe.c','-o',output/('api-'+language.replace('+','p')+'.o')]
        result=subprocess.run(list(map(str,argv)),cwd=ROOT,capture_output=True)
        receipts.append({'argv':list(map(str,argv)),'exitCode':result.returncode,'stderr':result.stderr.decode()})
        if result.returncode:raise ValueError(receipts[-1])
    record['receipts']=receipts
    (output/'probes.json').write_text(json.dumps(record,indent=2)+'\n')
    return record


if __name__=='__main__':
    for profile in ['arm','a64','windows']:
        record=run(profile)
        print(json.dumps({'profile':profile,'trapBytes':record['trap']['trapBytes'],'probes':len(PROBES)}))
