import hashlib
import json

from native_material_wave011_build import ROOT,command,pin,save
from squirrel_coercion026_build import SOURCES as INPUTS
from squirrel_coercion026_build import windows as base_windows,android as base_android
from squirrel_lookup020_build import FLAGS,VTABLES as BASE_VTABLES,load


SOURCE=ROOT/'source/squirrel-wave030'
WORK=ROOT/'work/squirrel-class-call030'
READY=ROOT/'evidence/lanes/squirrel-coercion026/ready.json'
if hashlib.sha256(READY.read_bytes()).hexdigest()!='fb4f593dd0d263ecbc9d1c38be9dbf559de7845b5127d56887c44f7ad3923ed3':
    raise ValueError('030 frozen026 receipt changed')
for row in json.loads(READY.read_text())['files']:
    path=ROOT/row['path']
    if path.stat().st_size!=row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest()!=row['sha256']:
        raise ValueError('030 frozen026 input changed: '+row['path'])
EXCLUDED={ROOT/'source/squirrel-wave023/fixture_call_services.c',ROOT/'source/squirrel-wave023/fixture_services019.c'}
SOURCES=[path for path in INPUTS if path not in EXCLUDED]+sorted(SOURCE.glob('*.c'))
VTABLES=sorted(BASE_VTABLES+[('class030',0x850d90,'sq_class_vtable030'),
    ('instance030',0x81bd48,'sq_class_instance_vtable030')],key=lambda row:row[1])


def arm(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    script=folder/'class.ld';output=folder/'class.elf'
    placed='\n'.join('.rodata.'+name+' '+hex(address)+' : { KEEP(*(.rodata.'+symbol+')) }' for name,address,symbol in VTABLES)
    script.write_text('SECTIONS { '+placed+'\n.text 0xf00000 : { *(.text*) } .rodata 0xf10000 : { *(.rodata*) }\n'
        '.data 0xf20000 : { *(.data*) } .bss 0xf30000 : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','armelf','--no-undefined','--build-id=none',
        '--entry=sq_vm_create_instance022','-T',script,*objects,'-o',output],folder/'link.json')
    sections,symbols,functions=load(output)
    for name,address,symbol in VTABLES:
        if symbols[symbol]!=address:raise ValueError('030 declared typed vtable placement changed')
    receipt={'sources':[pin(path) for path in sources],'objects':[pin(path) for path in objects],
        'linkedElf':pin(output),'flags':FLAGS,'linkerScript':pin(script),'undefinedSymbols':[],
        'sourceMapsOriginalExecutable':False}
    save(folder/'build.json',receipt)
    return sections,symbols,functions,receipt


def windows(folder,sources=SOURCES):return base_windows(folder,sources)
def android(folder,sources=SOURCES):return base_android(folder,sources)


def entrypoints(symbols):
    result=dict(symbols)
    for original,current in [('fixture_prepare020','fixture_prepare030'),('fixture_execute020','fixture_execute030'),
            ('fixture_snapshot020','fixture_snapshot030')]:result[original]=symbols[current]
    return result
