import ctypes
import io
import struct

from elftools.elf.elffile import ELFFile

from native_wave013_common import ROOT, FLAGS, command, record
from native_wave013_file_text_build import SOURCES


def android(build,receipts):
    build.mkdir(parents=True,exist_ok=True)
    objects=[]
    for source in SOURCES:
        obj=build/(source.stem+'.android.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-O2','-std=c11',
                 '-ffreestanding','-fno-builtin','-fPIC','-Wall','-Wextra','-Werror','-I',source.parent,
                 '-c',source,'-o',obj],build/(source.stem+'.android.log'),receipts)
        objects.append(obj)
    shared=build/'libpattern_text.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
             '-soname','libpattern_text.so','-o',shared,*objects],build/'android-link.log',receipts)
    elf=ELFFile(io.BytesIO(shared.read_bytes()))
    loads=[row['p_align'] for row in elf.iter_segments() if row['p_type']=='PT_LOAD']
    if elf['e_machine']!='EM_AARCH64' or not loads or any(value<16384 for value in loads):
        raise ValueError('Android NFA component load contract differs')
    return {'sharedLibrary':record(shared),'loadAlignments':loads,'apiLevel':29,'deviceExecuted':False,
            'requiresQualifiedUnicodeDataService':False,'wholeGameBuildOrExecution':False}


def layouts(build,receipts):
    build.mkdir(parents=True,exist_ok=True)
    source=ROOT/'toolscripts/native_wave013_file_text_abi.c'
    arm=build/'abi.arm.o'
    command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-c',source,'-o',arm],build/'arm.log',receipts)
    elf=ELFFile(io.BytesIO(arm.read_bytes()))
    symbol=elf.get_section_by_name('.symtab').get_symbol_by_name('pattern_text_layout_values')[0]
    section=elf.get_section(symbol['st_shndx'])
    values=list(struct.unpack('<16I',section.data()[symbol['st_value']:symbol['st_value']+64]))
    win=build/'abi.win.obj'
    command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-std=c11','-O2','-ffreestanding',
             '-Wall','-Wextra','-Werror','-c',source,'-o',win],build/'windows.log',receipts)
    dll=build/'abi.dll'
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/machine:x64','/nodefaultlib',
             '/export:pattern_text_layout_values,data','/out:'+str(dll),win],build/'link.log',receipts)
    library=ctypes.CDLL(str(dll))
    native=list((ctypes.c_uint*16).in_dll(library,'pattern_text_layout_values'))
    expected_arm=[4,36,48,0,36,44,4,48,36,44,4,12,21,5,58,2]
    expected_native=[8,40,64,0,40,56,8,96,72,88,4,12,21,5,58,2]
    if values!=expected_arm or native!=expected_native:
        raise RuntimeError('Actual compiler NFA ABI layout differs from measured contract')
    return {'probeSource':record(source),'armObject':record(arm),'windowsObject':record(win),'windowsDll':record(dll),
            'targetArm32':values,'executedWindows64':native,'unchangedFrozenNfaStateType':True,
            'sourcePointerFieldsRemainNativePointers':True,'logicalArenaRequestsRemainUnchanged':True}

