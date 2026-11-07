import io

from elftools.elf.elffile import ELFFile
from native_wave013_common import ROOT,command,record
from native_archive032_build import SOURCES


def android(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True);objects=[]
    for source in SOURCES:
        if source.parent==ROOT/'toolscripts':continue
        output=folder/(source.stem+'.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-std=c11','-O2','-ffreestanding',
            '-fno-builtin','-fPIC','-Wall','-Wextra','-Werror','-c',source,'-o',output],folder/(source.stem+'.log'),receipts)
        objects.append(output)
    shared=folder/'libarchive032.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-soname','libarchive032.so','-o',shared,*objects],folder/'link.log',receipts)
    elf=ELFFile(io.BytesIO(shared.read_bytes()));alignments=[row['p_align'] for row in elf.iter_segments() if row['p_type']=='PT_LOAD']
    if elf['e_machine']!='EM_AARCH64' or not alignments or any(value<16384 for value in alignments):
        raise ValueError('Archive Android load profile differs')
    return {'sharedLibrary':record(shared),'objects':[record(path) for path in objects],'loadAlignments':alignments,
        'apiLevel':29,'positionIndependentCode':True,'undefinedSymbols':[],'osOrDeviceExecuted':False,'wholeGameBuildOrExecution':False}
