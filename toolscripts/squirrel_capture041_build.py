import hashlib
import json

from native_material_wave011_build import ROOT,command,pin,save
from squirrel_capture038_build import SOURCES as INPUTS,VTABLES as FROZEN_VTABLES
from squirrel_coercion026_build import windows as base_windows,android as base_android
from squirrel_lookup020_build import FLAGS,load

SOURCE=ROOT/'source/squirrel-wave041'
WORK=ROOT/'work/squirrel-capture041'
for relative,expected in [('evidence/lanes/squirrel-capture038/ready.json','970446171bf8aabfb185b021623a12a455770d417651104ee40e9c58220ac6c1')]:
    ready=ROOT/relative
    if hashlib.sha256(ready.read_bytes()).hexdigest()!=expected:raise ValueError('041 frozen receipt changed')
    for row in json.loads(ready.read_text())['files']:
        path=ROOT/row['path']
        if path.stat().st_size!=row['bytes']or hashlib.sha256(path.read_bytes()).hexdigest()!=row['sha256']:
            raise ValueError('041 frozen input changed: '+row['path'])
EXCLUDED={ROOT/'source/squirrel-wave038'/name for name in ('script_create.c','bindings.c','execute.c','call_adapter.c','fixture_program.c','fixture_resources.c')}
EXCLUDED.add(ROOT/'source/squirrel-wave025/format.c')
EXCLUDED.add(ROOT/'source/squirrel-wave034/format_provider.c')
SOURCES=[path for path in INPUTS if path not in EXCLUDED]+sorted(SOURCE.glob('*.c'))
VTABLES=FROZEN_VTABLES


def arm(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    script=folder/'capture041.ld';output=folder/'capture041.elf'
    placed='\n'.join('.rodata.'+name+' '+hex(address)+' : { KEEP(*(.rodata.'+symbol+')) }' for name,address,symbol in VTABLES)
    script.write_text('SECTIONS { '+placed+'\n.text 0xf00000 : { *(.text*) } .rodata 0xf20000 : { *(.rodata*) }\n'
        '.data 0xf30000 : { *(.data*) } .bss 0xf40000 : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','armelf','--no-undefined','--build-id=none',
        '--entry=sq_script_create041','-T',script,*objects,'-o',output],folder/'link.json')
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
    for original,current in [('fixture_prepare020','fixture_prepare041'),('fixture_execute020','fixture_execute041'),
            ('fixture_snapshot020','fixture_snapshot041')]:result[original]=symbols[current]
    return result
