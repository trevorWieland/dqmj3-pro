import io

from elftools.elf.elffile import ELFFile
from native_material_wave011_build import ROOT, command, pin, save


SOURCE = ROOT / 'source/squirrel-wave020'
WORK = ROOT / 'work/squirrel-lookup020'
SOURCES = sorted(SOURCE.glob('*.c'))
SOURCES += [ROOT/'source/squirrel-wave019'/name for name in ['table_get.c','table_initialize.c','table_mutation.c',
    'table_lifetime.c','table_vtables.c','fixture_state.c','fixture_services.c']]
SOURCES += [ROOT/'source/squirrel-wave012'/name for name in ['reference_prefix.c','reference_dispatch_opaque.c',
    'mixed_runtime.c','array_reference.c','array_vtables.c','vector_values.c']]
SOURCES += [ROOT/'source/squirrel-wave016/vm_storage.c']
for wave, names in [('011',['prototype_release.c','vtables.c']),('013',['native_closure_release.c','vtables.c']),
        ('014',['weak_reference.c','vtables.c']),('015',['string.c','bytes.c','vtables.c']),('017',['script_closure.c','vtables.c'])]:
    SOURCES += [ROOT/('source/squirrel-wave'+wave)/name for name in names]
FLAGS = ['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp','-O2','-std=c11',
    '-ffreestanding','-fno-builtin','-ffunction-sections','-fdata-sections','-fno-unwind-tables',
    '-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror']
ENTRIES = ['sq_lookup_get020','sq_lookup_fallback020','sq_lookup_table_meta020','sq_lookup_meta_call020',
    'sq_lookup_type_name020','sq_lookup_object_type_name020','sq_lookup_scratch020','sq_lookup_stringify020',
    'sq_lookup_raise_format020','sq_lookup_index_error020']
EXPORTS = ['fixture_table_bind019','fixture_prepare020','fixture_execute020','fixture_snapshot020','fixture_vtable020','fixture_layout020']
VTABLES = [('base',0x81d020,'sq_prototype_base_vtable011'),('prototype',0x81e52c,'sq_prototype_vtable011'),
    ('native',0x81e540,'sq_native_closure_vtable013'),('array',0x850d74,'sq_opaque_array_vtable012'),
    ('table',0x850dac,'sq_table_vtable019'),('script',0x8516d0,'sq_script_closure_vtable017'),
    ('weak',0x8516ec,'sq_weak_vtable014'),('string',0x851220,'sq_string_vtable015')]


def load(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    undefined = [row.name for row in table.iter_symbols() if row.name and row['st_shndx']=='SHN_UNDEF']
    if undefined:
        raise ValueError('020 source graph has unresolved symbols: '+repr(undefined))
    symbols = {row.name:row['st_value'] for row in table.iter_symbols() if row.name and isinstance(row['st_shndx'],int)}
    functions = [(row.name,row['st_value'],row['st_value']+row['st_size']) for row in table.iter_symbols()
        if row['st_info']['type']=='STT_FUNC' and isinstance(row['st_shndx'],int) and row['st_size']]
    sections = [(row['sh_addr'],row['sh_size'],row['sh_flags'],row.data() if row['sh_type']=='SHT_PROGBITS' else b'')
        for row in elf.iter_sections() if row['sh_flags']&2 and row['sh_size']]
    return sections,symbols,functions


def arm(folder, sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True)
    objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    script,output=folder/'lookup.ld',folder/'lookup.elf'
    placed='\n'.join('.rodata.'+name+' '+hex(address)+' : { KEEP(*(.rodata.'+symbol+')) }' for name,address,symbol in VTABLES)
    script.write_text('SECTIONS { '+placed+'\n.text 0xf00000 : { *(.text*) } .rodata 0xf10000 : { *(.rodata*) }\n'
        '.data 0xf20000 : { *(.data*) } .bss 0xf30000 : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','armelf','--no-undefined','--build-id=none','--entry=sq_lookup_get020',
        '-T',script,*objects,'-o',output],folder/'link.json')
    sections,symbols,functions=load(output)
    for name,address,symbol in VTABLES:
        if symbols[symbol]!=address:raise ValueError('020 exact source vtable placement changed: '+name)
    receipt={'objects':[pin(p) for p in objects],'sources':[pin(p) for p in sources],'linkedElf':pin(output),
        'linkerScript':pin(script),'flags':FLAGS,'undefinedSymbols':[],'originalImageMappedBySource':False}
    save(folder/'build.json',receipt)
    return sections,symbols,functions,receipt


def windows(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True)
    objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.obj')
        command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fno-stack-protector','-Wall','-Wextra','-Werror','-I',SOURCE,
            '-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    output=folder/'lookup020.dll'
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64',
        '/timestamp:0','/out:'+str(output),*['/export:'+name for name in ENTRIES+EXPORTS],*objects],folder/'link.json')
    return output


def android(folder,sources=SOURCES):
    folder.mkdir(parents=True,exist_ok=True)
    objects=[]
    for index,source in enumerate(sources):
        target=folder/(str(index)+'.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fno-stack-protector','-fPIC','-ffunction-sections','-fdata-sections',
            '-Wall','-Wextra','-Werror','-I',SOURCE,'-c',source,'-o',target],folder/('compile-'+str(index)+'.json'))
        objects.append(target)
    library=folder/'liblookup020.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-soname',library.name,*objects,'-o',library],folder/'library-link.json')
    script,output=folder/'model.ld',folder/'model.elf'
    script.write_text('SECTIONS { .text 0x4000000 : { *(.text*) } .rodata 0x4020000 : { *(.rodata*) }\n'
        '.data 0x4030000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) }\n'
        '/DISCARD/ : { *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','aarch64elf','--no-undefined','--build-id=none',
        '--entry=sq_lookup_get020','-T',script,*objects,'-o',output],folder/'model-link.json')
    sections,symbols,functions=load(output)
    return sections,symbols,functions,{'objects':[pin(p) for p in objects],'sharedLibrary':pin(library),
        'modelElf':pin(output),'originalImageMapped':False,'androidOperatingSystemExecuted':False}
