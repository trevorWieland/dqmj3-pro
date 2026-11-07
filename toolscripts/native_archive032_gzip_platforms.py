import io

from elftools.elf.elffile import ELFFile
from native_wave013_common import ROOT,command,record
import native_archive032_gzip_build as build


def android(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for source in build.SOURCES:
        if source.parent==ROOT/'toolscripts':continue
        output=folder/(source.stem+'.o')
        vendor=['-Wno-shift-negative-value'] if source in build.PUBLIC_SOURCES and build.PROFILE=='historical127' else []
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-std=c11','-O2','-ffreestanding',
            '-fno-builtin','-fPIC','-DZ_SOLO',*build.PROFILE_FLAGS,'-Wno-deprecated-non-prototype',*vendor,
            '-Wall','-Wextra','-Werror','-c',source,'-o',output],folder/(source.stem+'.log'),receipts)
        objects.append(output)
    shared=folder/'libarchive_gzip.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-soname','libarchive_gzip.so','-o',shared,*objects],folder/'link.log',receipts)
    elf=ELFFile(io.BytesIO(shared.read_bytes()));alignments=[row['p_align'] for row in elf.iter_segments() if row['p_type']=='PT_LOAD']
    undefined=[symbol.name for symbol in elf.get_section_by_name('.dynsym').iter_symbols()
        if symbol.name and symbol['st_shndx']=='SHN_UNDEF']
    if elf['e_machine']!='EM_AARCH64' or not alignments or any(value<16384 for value in alignments) or undefined:
        raise ValueError('Gzip Android machine/load/dependency profile differs')
    return {'dependencyProfile':build.PROFILE,'sharedLibrary':record(shared),'objects':[record(path) for path in objects],
        'loadAlignments':alignments,'apiLevel':29,'positionIndependentCode':True,'undefinedSymbols':undefined,
        'osOrDeviceExecuted':False,'wholeGameBuildOrExecution':False}
