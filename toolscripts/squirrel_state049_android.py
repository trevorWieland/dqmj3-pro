import io

from elftools.elf.elffile import ELFFile
from native_wave013_common import ROOT,command,record
from squirrel_state049_build import SOURCES


def build(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for source in SOURCES:
        target=folder/(source.relative_to(ROOT).as_posix().replace('/','__')[:-2]+'.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-std=c11','-O3',
            '-fPIC','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections',
            '-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror',
            '-I',source.parent,'-c',source,'-o',target],folder/(source.stem+'.log'),receipts)
        objects.append(target)
    target=folder/'startup049.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','aarch64elf','-shared','--no-undefined','--build-id=none',
        '-z','max-page-size=16384','-z','common-page-size=16384',*objects,'-o',target],folder/'link.log',receipts)
    elf=ELFFile(io.BytesIO(target.read_bytes()));segments=[]
    for segment in elf.iter_segments():
        if segment['p_type']=='PT_LOAD':
            row={name:int(segment[name]) for name in ['p_offset','p_vaddr','p_filesz','p_memsz','p_flags','p_align']}
            if row['p_align']<16384 or row['p_offset']%16384!=row['p_vaddr']%16384:
                raise ValueError('049 Android component LOAD does not have measured16KiB congruence')
            segments.append(row)
    unresolved=[symbol.name for symbol in elf.get_section_by_name('.dynsym').iter_symbols()
        if symbol.name and symbol['st_shndx']=='SHN_UNDEF']
    if unresolved or elf['e_type']!='ET_DYN' or elf['e_machine']!='EM_AARCH64' or not segments:
        raise ValueError('049 source-only Android component is incomplete')
    return {'artifact':record(target),'objects':[record(path) for path in objects],'loadSegments':segments,
        'undefinedDynamicSymbols':unresolved,'androidOsExecuted':False,'androidDeviceExecuted':False,'gameExecutableClaimed':False}
