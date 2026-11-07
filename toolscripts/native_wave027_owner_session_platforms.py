import io

from elftools.elf.elffile import ELFFile
from native_wave013_common import ROOT,command,record
from native_wave027_owner_session_build import SOURCES


def android(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for source in SOURCES:
        if source.parent==ROOT/'toolscripts':continue
        output=folder/(source.stem+'.android.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fPIC','-Wall','-Wextra','-Werror','-I',source.parent,
            '-c',source,'-o',output],folder/(source.stem+'.log'),receipts)
        objects.append(output)
    shared=folder/'libowner_session.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-soname','libowner_session.so','-o',shared,*objects],folder/'link.log',receipts)
    elf=ELFFile(io.BytesIO(shared.read_bytes()));loads=[row['p_align'] for row in elf.iter_segments() if row['p_type']=='PT_LOAD']
    if elf['e_machine']!='EM_AARCH64' or not loads or any(value<16384 for value in loads):
        raise RuntimeError('Session Android load contract differs')
    undefined=[symbol.name for symbol in elf.get_section_by_name('.dynsym').iter_symbols()
        if symbol['st_shndx']=='SHN_UNDEF' and symbol.name]
    if undefined:raise RuntimeError('Session Android shared object has undefined dependencies')
    return {'sharedLibrary':record(shared),'objects':[record(path) for path in objects],
        'apiLevel':29,'loadAlignments':loads,'positionIndependentCode':True,'undefinedSymbols':[],
        'fixtureProvidersExcluded':True,'osOrDeviceExecuted':False,'wholeGameBuildOrExecution':False}
