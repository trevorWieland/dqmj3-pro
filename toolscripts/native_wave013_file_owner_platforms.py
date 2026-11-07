import io

from elftools.elf.elffile import ELFFile

from native_wave013_common import ROOT,command,record
from native_wave013_file_owner_full_build import SOURCES


def android(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for source in SOURCES:
        if source.parent==ROOT/'toolscripts':continue
        obj=folder/(source.stem+'.android.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fPIC','-Wall','-Wextra','-Werror','-I',source.parent,
            '-c',source,'-o',obj],folder/(source.stem+'.log'),receipts)
        objects.append(obj)
    shared=folder/'libpattern_file_owner.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-soname','libpattern_file_owner.so','-o',shared,*objects],folder/'link.log',receipts)
    elf=ELFFile(io.BytesIO(shared.read_bytes()))
    loads=[row['p_align'] for row in elf.iter_segments() if row['p_type']=='PT_LOAD']
    if elf['e_machine']!='EM_AARCH64' or not loads or any(value<16384 for value in loads):
        raise RuntimeError('Android owner component load contract differs')
    return {'sharedLibrary':record(shared),'loadAlignments':loads,'apiLevel':29,'deviceExecuted':False,
        'verificationProvidersExcluded':True,'requiresExplicitTypedOwnerConfigurationSynchronizationUnicodeServices':True,
        'wholeGameBuildOrExecution':False}
