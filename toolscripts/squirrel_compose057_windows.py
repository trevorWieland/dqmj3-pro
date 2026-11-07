import ctypes
import json
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'


class Windows:
    def __init__(self,seed=0xa5,artifact_directory=None):
        directory=Path(artifact_directory)if artifact_directory else WORK/'session-v2-windows'
        self.library=ctypes.CDLL(str(directory/'compose057.dll'))
        self.arena=ctypes.create_string_buffer(1048640)
        ctypes.memset(ctypes.addressof(self.arena),0x39,ctypes.sizeof(self.arena))
        self.base=(ctypes.addressof(self.arena)+31)&~15
        self.seed=seed
        ctypes.memset(self.base,seed,1048576)
        self.guard_before=ctypes.string_at(ctypes.addressof(self.arena),self.base-ctypes.addressof(self.arena))
        self.guard_after=ctypes.string_at(self.base+1048576,
            ctypes.addressof(self.arena)+ctypes.sizeof(self.arena)-(self.base+1048576))
        self.output=ctypes.create_string_buffer(288)
        self.words=ctypes.cast(ctypes.addressof(self.output)+16,ctypes.POINTER(ctypes.c_uint))
        signatures={'boot':([ctypes.c_void_p,ctypes.c_uint,ctypes.c_uint],ctypes.c_void_p),
            'run':([ctypes.c_void_p,ctypes.c_uint,ctypes.c_int,ctypes.c_uint,ctypes.c_uint,
                    ctypes.POINTER(ctypes.c_uint)],ctypes.c_uint),
            'observe':([ctypes.c_void_p,ctypes.POINTER(ctypes.c_uint),ctypes.c_uint],ctypes.c_uint),
            'cleanup':([ctypes.c_void_p],ctypes.c_uint),
            'heap_counts':([ctypes.POINTER(ctypes.c_uint)],ctypes.c_uint),
            'heap_allocations':([ctypes.POINTER(ctypes.c_uint),ctypes.c_uint],ctypes.c_uint),
            'meta_contract':([ctypes.c_void_p,ctypes.POINTER(ctypes.c_uint)],ctypes.c_uint)}
        for name,(arguments,returned)in signatures.items():
            function=getattr(self.library,'sq_compose_'+name+'057')
            function.argtypes=arguments
            function.restype=returned

    def invoke(self,name,args,expected):
        ctypes.memset(ctypes.addressof(self.output),0x57,288)
        count=getattr(self.library,'sq_compose_'+name+'057')(*args)
        if count!=expected:raise ValueError('Actual Windows API returned an unexpected count')
        if ctypes.string_at(ctypes.addressof(self.output),16)!=bytes([0x57])*16 or \
           ctypes.string_at(ctypes.addressof(self.output)+272,16)!=bytes([0x57])*16:
            raise ValueError('Actual Windows source changed caller output guards')
        if ctypes.string_at(ctypes.addressof(self.arena),len(self.guard_before))!=self.guard_before or \
           ctypes.string_at(self.base+1048576,len(self.guard_after))!=self.guard_after:
            raise ValueError('Actual Windows source changed caller allocation guards')
        return [self.words[index]for index in range(count)]

    def boot(self,stack_size=64):
        self.vm=self.library.sq_compose_boot057(self.base,1048576,stack_size)
        if not self.vm or not self.base<=self.vm<self.base+1048576:
            raise ValueError('Actual Windows factory did not return an owned VM')
        self.shared=ctypes.c_void_p.from_address(self.vm+232).value
        if not self.shared or not self.base<=self.shared<self.base+1048576:
            raise ValueError('Actual Windows VM lacks owned actual shared state')
        return self.snapshot()

    def snapshot(self):
        values=self.invoke('observe',[self.vm,self.words,64],30)
        if ctypes.string_at(self.shared,68)!=bytes([self.seed])*68:
            raise ValueError('Actual Windows source provisioned fake legacy fields')
        keys=['top','base','calls','nativeDepth','stackSize','metamethodNames','internedStrings',
              'gcMembers','rootType','errorType','traps']
        return dict(zip(keys,values[3:14]))

    def execute(self,profile,value=3,flags=1,cleanup=1):
        values=self.invoke('run',[self.vm,profile,value,flags,cleanup,self.words],7)
        return {'returned':values,'state':self.snapshot()}

    def cleanup(self):
        if self.library.sq_compose_cleanup057(self.vm)!=1:
            raise ValueError('Actual Windows cleanup rejected its active session')
        return self.snapshot()

    def heap_counts(self):
        return dict(zip(['allocationSlots','active','events','used'],
                        self.invoke('heap_counts',[self.words],4)))

    def allocations(self):
        values=(ctypes.c_uint*4096)()
        count=self.library.sq_compose_heap_allocations057(values,4096)
        if count%4 or count>4096:raise ValueError('Actual Windows allocation observer exceeded its shape')
        return [{'offset':None if values[at]==0xffffffff else values[at],
                 'bytes':values[at+1],'alignment':values[at+2],'active':bool(values[at+3])}
                for at in range(0,count,4)]

    def meta_contract(self):
        before=self.snapshot()
        values=self.invoke('meta_contract',[self.vm,self.words],7)
        if self.snapshot()!=before:raise ValueError('Actual Windows metamethod contract leaked its graph')
        return values


def case(request):
    from squirrel_compose057_observe import observe
    import hashlib
    digest=lambda value:hashlib.sha256(json.dumps(value,sort_keys=True,separators=(',',':')).encode()).hexdigest()
    session=Windows(request.get('seed',165),request.get('artifactDirectory'))
    before=session.boot(request.get('stackSize',64))
    cold_graph=observe(session,'windows')
    heap_before=session.heap_counts()
    meta=session.meta_contract()
    result=session.execute(request['profile'],request.get('value',3),request.get('flags',1),request.get('cleanup',1))
    cleanup=session.cleanup()if not request.get('cleanup',1)else result['state']
    graph_after=observe(session,'windows')
    return {'startup':before,'metamethod':meta,'program':result,'afterCleanup':cleanup,
            'coldGraphSha256':digest(cold_graph),'afterGraphSha256':digest(graph_after),
            'afterGraph':graph_after,
            'heapBefore':heap_before,'heapAfter':session.heap_counts(),
            'nativePointersAbove32Bits':session.vm>0xffffffff,
            'all68OpaqueBytesPreserved':True,'callerGuardsPreserved':True}


if __name__=='__main__':
    print(json.dumps(case(json.loads(sys.argv[1]))))
