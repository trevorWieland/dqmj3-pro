import ctypes
import io
import struct

from elftools.elf.elffile import ELFFile

from native_wave013_common import ROOT,FLAGS,command,record


NAMES=['pointerBytes','pathBytes','pathText','pathLength','fileBytes','fileEnvironment','fileData','fileLength','fileId',
    'fileChunk','fileOpenCalls','fileCloseCalls','fileReadCalls','fileSizeCalls','fileLive','fileOffsets','fileRequests',
    'fileCopied','environmentBytes','files','openCalls','providerCloseCalls','registered','closeCalls','openIds','openModes',
    'closeIds','openErrorIndex','openError','fileOperationsBytes','sizeMethod','destroyMethod','providerOperationsBytes','streamBytes',
    'deleteCalls','ownerRetired','ownerSnapshot','backendBytes','streams','requiredWork','mountResult','mountCalls',
    'unmountCalls','failureCalls','failureReason','archive','work','workBytes','servicesBytes','servicesHeap','memoryReady',
    'requiredWorkMethod','mountMethod','unmountMethod','openMethod','releaseMethod','deleteMethod','failureMethod','servicesContext','regions','language','regionCalls','languageCalls','cfgFailureCalls','watchedFlags','watchedCount','openFlags','cfgQueryCount','cfgQueryKind','cfgQueryFlags']


def layouts(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'toolscripts/native_wave013_file_owner_provider_abi.c'
    arm=folder/'provider-layout.o'
    command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-c',source,'-o',arm],folder/'arm.log',receipts)
    elf=ELFFile(io.BytesIO(arm.read_bytes()))
    symbol=elf.get_section_by_name('.symtab').get_symbol_by_name('pattern_owner_provider_layout_values')[0]
    section=elf.get_section(symbol['st_shndx'])
    values=struct.unpack('<'+str(len(NAMES))+'I',section.data()[symbol['st_value']:symbol['st_value']+len(NAMES)*4])
    obj=folder/'provider-layout.obj'
    command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-std=c11','-O2','-ffreestanding',
        '-Wall','-Wextra','-Werror','-c',source,'-o',obj],folder/'windows.log',receipts)
    dll=folder/'provider-layout.dll'
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/machine:x64','/nodefaultlib',
        '/out:'+str(dll),'/export:pattern_owner_provider_layout_values,data',obj],folder/'link.log',receipts)
    library=ctypes.CDLL(str(dll))
    native=list((ctypes.c_uint*len(NAMES)).in_dll(library,'pattern_owner_provider_layout_values'))
    profiles={'arm':dict(zip(NAMES,values)),'windows':dict(zip(NAMES,native))}
    for name,row in profiles.items():
        p=4 if name=='arm' else 8
        if row['pointerBytes']!=p or row['sizeMethod']!=3*p or row['destroyMethod']!=12*p:
            raise ValueError('Actual provider virtual method layout differs')
    return {'profiles':profiles,'probe':record(source),'armObject':record(arm),'windowsObject':record(obj),'windowsDll':record(dll)}
