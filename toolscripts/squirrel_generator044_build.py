import hashlib
import json
from native_material_wave011_build import ROOT,command,pin,save
from squirrel_lookup020_build import FLAGS,load

SOURCE=ROOT/'source/squirrel-wave044'
WORK=ROOT/'work/squirrel-generator044/stage-a'
manifest=ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'
if hashlib.sha256(manifest.read_bytes()).hexdigest()!='23a38012b40a93aa1426a9fa08f424949d418a95c9cac939f7abdc2b237f2e28':raise ValueError('044 frozen040 ABI changed')
for row in json.loads(manifest.read_text())['files']:
 p=ROOT/row['path']
 if p.stat().st_size!=row['bytes']or hashlib.sha256(p.read_bytes()).hexdigest()!=row['sha256']:raise ValueError('044 input changed: '+row['path'])
SOURCES=[SOURCE/name for name in ('generator_create.c','generator_lifetime.c','generator_vtables.c','fixture.c','fixture_resources.c','fixture_snapshot.c')]
for wave,names in [('011',['prototype_release.c','vtables.c']),('012',['reference_prefix.c','reference_dispatch_opaque.c','mixed_runtime.c','vector_values.c']),('013',['native_closure_release.c','vtables.c']),('014',['weak_reference.c','vtables.c']),('015',['string.c','bytes.c','vtables.c']),('017',['script_closure.c','vtables.c'])]:
 SOURCES+=[ROOT/('source/squirrel-wave'+wave)/name for name in names]
VTABLES=[('base',0x81d020,'sq_prototype_base_vtable011'),('prototype',0x81e52c,'sq_prototype_vtable011'),('native',0x81e540,'sq_native_closure_vtable013'),('script',0x8516d0,'sq_script_closure_vtable017'),('weak',0x8516ec,'sq_weak_vtable014'),('string',0x851220,'sq_string_vtable015'),('generator',0x81c358,'sq_generator_vtable044')]
VTABLES.sort(key=lambda row:row[1])
EXPORTS=['fixture_bind044','fixture_prepare044','fixture_execute044','fixture_snapshot044','fixture_vtable044']


def arm(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    script=folder/'generator044.ld';output=folder/'generator044.elf'
    placed='\n'.join('.rodata.'+name+' '+hex(address)+' : { KEEP(*(.rodata.'+symbol+')) }' for name,address,symbol in VTABLES)
    script.write_text('SECTIONS { '+placed+'\n.text 0xf00000 : { *(.text*) } .rodata 0xf20000 : { *(.rodata*) }\n'
        '.data 0xf30000 : { *(.data*) } .bss 0xf40000 : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','armelf','--no-undefined','--build-id=none',
        '--entry=sq_generator_create044','-T',script,*objects,'-o',output],folder/'link.json')
    sections,symbols,functions=load(output)
    for name,address,symbol in VTABLES:
        if symbols[symbol]!=address:raise ValueError('034 declared typed vtable placement changed')
    receipt={'sources':[pin(path) for path in sources],'objects':[pin(path) for path in objects],
        'linkedElf':pin(output),'flags':FLAGS,'linkerScript':pin(script),'undefinedSymbols':[],
        'sourceMapsOriginalExecutable':False}
    save(folder/'build.json',receipt)
    return sections,symbols,functions,receipt


def windows(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.obj')
        command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fno-stack-protector','-Wall','-Wextra','-Werror',
            '-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    output=folder/'generator044.dll'
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64',
        '/timestamp:0','/out:'+str(output),*['/export:'+name for name in EXPORTS],*objects],folder/'link.json')
    return output


def android(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fno-stack-protector','-fPIC','-ffunction-sections','-fdata-sections',
            '-Wall','-Wextra','-Werror','-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    library=folder/'libgenerator044.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-z','common-page-size=16384','-soname',library.name,*objects,'-o',library],folder/'library-link.json')
    script,output=folder/'model.ld',folder/'model.elf'
    script.write_text('SECTIONS { .text 0x4000000 : { *(.text*) } .rodata 0x4020000 : { *(.rodata*) }\n'
        '.data 0x4030000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','aarch64elf','--no-undefined','--build-id=none',
        '--entry=sq_generator_create044','-T',script,*objects,'-o',output],folder/'model-link.json')
    from squirrel_coercion026_android import inspect
    alignment=inspect(library)
    sections,symbols,functions=load(output)
    return sections,symbols,functions,{'objects':[pin(p)for p in objects],'sharedLibrary':pin(library),
        'modelElf':pin(output),'originalImageMapped':False,'alignment':alignment,'androidOperatingSystemExecuted':False}


