import ctypes
import json
import sys
from pathlib import Path
from elftools.elf.elffile import ELFFile

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_state049_observe import Observer,original_maps
from squirrel_state045_heap import ARENA,ARENA_BYTES,allocations


class ComposedObserver(Observer):
    def __init__(self,session,profile):
        probes=json.loads((WORK/'layout-probes'/profile/'probes.json').read_text())
        self.trap_abi=probes['trap']
        original=hasattr(session,'reference')
        if original:
            blocks=allocations(bytes(session.cpu.mem_read(ARENA,ARENA_BYTES)))
            vtables,callbacks=original_maps(session.reference.image)
            base=ARENA
        else:
            blocks=session.allocations()
            base=session.base
            if profile=='windows':
                names={'table':'sq_table_vtable019','closure':'sq_native_closure_vtable013',
                       'string':'sq_string_vtable015','vm':'sq_fixture_vm_operations045'}
                vtables={kind:ctypes.addressof(ctypes.c_byte.in_dll(session.library,name))
                         for kind,name in names.items()}
                bindings=json.loads((ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json').read_text())['bindings']
                callbacks={ctypes.cast(getattr(session.library,row['sourceSymbol']),ctypes.c_void_p).value:
                           row['canonicalAddress']for row in bindings}
                if len(callbacks)!=57:raise ValueError('Windows callback identities folded or aliased')
            else:
                with session.artifact_file.open('rb')as stream:
                    elf=ELFFile(stream)
                    symbols=[{'symbol':symbol.name,'address':symbol['st_value']}
                             for symbol in elf.get_section_by_name('.symtab').iter_symbols()
                             if symbol['st_info']['type']=='STT_OBJECT']
                data={row['symbol']:row['address']for row in symbols}
                vtables={kind:data[name]for kind,name in [('table','sq_table_vtable019'),
                    ('closure','sq_native_closure_vtable013'),('string','sq_string_vtable015'),
                    ('vm','sq_fixture_vm_operations045')]}
                bindings=json.loads((ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json').read_text())['bindings']
                callbacks={session.graph['functions'][row['sourceSymbol']]['address']:row['canonicalAddress']for row in bindings}
                if len(callbacks)!=57:raise ValueError('Compiled callback identities folded or aliased')
        self.reader=(lambda address,count:ctypes.string_at(address,count))if profile=='windows'else \
                    (lambda address,count:bytes(session.cpu.mem_read(address,count)))
        result={'state':{'abi':probes['abi'],'core':probes['core'],'base':base},
                'sourceOnlyExecution':not original,'allocations':None if original else blocks,
                'sdkLiveAllocations':blocks if original else None,'returned':session.vm,
                'frameAbi':probes['frame']}
        super().__init__(result,vtables,callbacks)

    def prepare_vm_allocations(self):
        super().prepare_vm_allocations()
        vector=self.vm+self.c['traps']
        pointer=self.pointer(vector)
        size=self.get(vector+self.p)
        capacity=self.get(vector+self.p+4)
        if size>capacity or capacity>64:
            raise ValueError('057 trap vector exceeded the declared observation domain')
        if pointer:self.claim(pointer,'vm-trap-values',capacity*self.trap_abi['trapBytes'])

    def raw(self,address,size):
        if not size:return b''
        if not any(low<=address<address+size<=low+count for low,count in self.blocks):
            raise ValueError('057 typed observation escaped exact live allocated backing')
        return self.reader(address,size)


def observe(session,profile):
    return ComposedObserver(session,profile).observe()
