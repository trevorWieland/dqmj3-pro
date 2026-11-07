import hashlib
import json

from native_material_wave011_build import ROOT,command,pin,save
from squirrel_class034_build import SOURCES as INPUTS,VTABLES as FROZEN_VTABLES
from squirrel_coercion026_build import windows as base_windows,android as base_android
from squirrel_lookup020_build import FLAGS,load

SOURCE=ROOT/'source/squirrel-wave038'
WORK=ROOT/'work/squirrel-capture038'
for relative,expected in [('evidence/lanes/squirrel-class034/ready.json','6c8eeefc26a8c47c79ad80ca7a98d48c0c0256b02c6da34ad05cfcee3fd06cc9')]:
    ready=ROOT/relative
    if hashlib.sha256(ready.read_bytes()).hexdigest()!=expected:raise ValueError('038 frozen receipt changed')
    for row in json.loads(ready.read_text())['files']:
        path=ROOT/row['path']
        if path.stat().st_size!=row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest()!=row['sha256']:
            raise ValueError('038 frozen input changed: '+row['path'])
EXCLUDED={ROOT/'source/squirrel-wave031'/name for name in ('execute_core.c','call_adapter.c')}
EXCLUDED|={ROOT/'source/squirrel-wave034'/name for name in ('fixture_services.c','fixture_services019.c','fixture_services022.c')}
SOURCES=[path for path in INPUTS if path not in EXCLUDED]+sorted(SOURCE.glob('*.c'))
VTABLES=FROZEN_VTABLES


def arm(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    script=folder/'capture038.ld';output=folder/'capture038.elf'
    placed='\n'.join('.rodata.'+name+' '+hex(address)+' : { KEEP(*(.rodata.'+symbol+')) }' for name,address,symbol in VTABLES)
    script.write_text('SECTIONS { '+placed+'\n.text 0xf00000 : { *(.text*) } .rodata 0xf20000 : { *(.rodata*) }\n'
        '.data 0xf30000 : { *(.data*) } .bss 0xf40000 : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','armelf','--no-undefined','--build-id=none',
        '--entry=sq_script_create038','-T',script,*objects,'-o',output],folder/'link.json')
    sections,symbols,functions=load(output)
    for name,address,symbol in VTABLES:
        if symbols[symbol]!=address:raise ValueError('034 declared typed vtable placement changed')
    receipt={'sources':[pin(path) for path in sources],'objects':[pin(path) for path in objects],
        'linkedElf':pin(output),'flags':FLAGS,'linkerScript':pin(script),'undefinedSymbols':[],
        'sourceMapsOriginalExecutable':False}
    save(folder/'build.json',receipt)
    return sections,symbols,functions,receipt


def windows(folder,sources=SOURCES):return base_windows(folder,sources)
def android(folder,sources=SOURCES):return base_android(folder,sources)


def entrypoints(symbols):
    result=dict(symbols)
    for original,current in [('fixture_prepare020','fixture_prepare038'),('fixture_execute020','fixture_execute038'),
            ('fixture_snapshot020','fixture_snapshot038')]:result[original]=symbols[current]
    return result
