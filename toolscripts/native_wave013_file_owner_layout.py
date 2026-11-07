import ctypes
import io
import json
import struct
from pathlib import Path

import capstone
from elftools.elf.elffile import ELFFile

from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,command,record,save,sha


def qualify():
    folder=WORK/'file-owner-layout'
    folder.mkdir(parents=True,exist_ok=True)
    receipts=[]
    source=ROOT/'toolscripts/native_wave013_file_owner_layout_probe.c'
    arm=folder/'layout.o'
    command([ROOT/'tools/clang-21/clang.exe',*FLAGS,'-c',source,'-o',arm],folder/'arm.log',receipts)
    elf=ELFFile(io.BytesIO(arm.read_bytes()))
    symbol=elf.get_section_by_name('.symtab').get_symbol_by_name('pattern_owner_layout_values')[0]
    section=elf.get_section(symbol['st_shndx'])
    target=list(struct.unpack('<24I',section.data()[symbol['st_value']:symbol['st_value']+96]))
    obj=folder/'layout.obj'
    command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-std=c11','-O2','-ffreestanding',
        '-Wall','-Wextra','-Werror','-c',source,'-o',obj],folder/'windows.log',receipts)
    dll=folder/'layout.dll'
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/machine:x64','/nodefaultlib',
        '/export:pattern_owner_layout_values,data','/out:'+str(dll),obj],folder/'link.log',receipts)
    library=ctypes.CDLL(str(dll))
    native=list((ctypes.c_uint*24).in_dll(library,'pattern_owner_layout_values'))
    expected_target=[4,52,65536,24,0,4,24,25,26,27,28,32,36,40,44,48,3072,45056,61440,63488,16384,2048,2048,16]
    expected_native=[8,96,107520,48,0,8,40,41,42,43,48,56,64,72,80,88,3072,87040,103424,105472,16384,2048,2048,32]
    if target!=expected_target or native!=expected_native:
        raise ValueError('Actual owner/storage layout differs from measured contract')
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('Original module differs')
    low,high=0x246e18,0x246e30
    raw=image[low-0x100000:high-0x100000]
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    instructions={row.address:(row.mnemonic,row.op_str) for row in decoder.disasm(raw,low)}
    if instructions[0x246e18]!=('mov','r0, #0x34') or instructions[0x246e24]!=('blne','#0x4c4358') or instructions[0x246e2c]!=('mov','r5, r0'):
        raise ValueError('Allocation/constructor return-use witness differs')
    packet={'schemaVersion':1,'status':'measured-owner-layout-and-return-qualification','moduleSha256':MODULE_SHA,
        'producer':record(Path(__file__)),'probe':record(source),'header':record(ROOT/'src/native/wave013/pattern_file_owner_view.h'),
        'armObject':record(arm),'windowsObject':record(obj),'windowsDll':record(dll),'commands':receipts,
        'targetArm32':target,'executedWindows64':native,
        'constructorCallerWitness':{'function':0x246e00,'start':low,'endExclusive':high,'sha256':sha(raw),
            'allocationRequestInstruction':0x246e18,'allocationBytes':52,'constructorCall':0x246e24,'returnUse':0x246e2c,
            'returnRole':'Actual caller consumes constructor R0 as the owner pointer'},
        'targetObjectBytes':52,'nativeObjectBytes':96,'targetStorageLogicalBytes':65536,'nativeStoragePhysicalBytes':107520,
        'targetPageRoundedAllocationBytes':65536,'nativePageRoundedAllocationBytes':110592,
        'rawPayloadBytesUnchanged':[16384,2048,2048],'arenaLogicalSlotsUnchanged':2624,
        'frozenFileViewAdapterRequired':True,'nativePointersEncodedInOpaqueBytes':False,
        'owningLifecycleBehaviorQualifiedByThisTypeProbe':False,'sourceCreditGranted':0}
    save(OUT/'file/owner/layout-qualification.json',packet)
    print(json.dumps({'targetOwnerBytes':52,'nativeOwnerBytes':96,'targetStorageBytes':65536,'nativeStorageBytes':107520}),flush=True)
    return packet


if __name__=='__main__':qualify()
