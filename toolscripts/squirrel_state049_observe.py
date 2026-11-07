import json

from native_wave013_common import ROOT
from squirrel_state045_heap import ARENA
import squirrel_state049_model as model


class Observer:
    def __init__(self,result,vtables,callbacks):
        self.result=result;self.state=result['state'];self.a=self.state['abi'];self.c=self.state['core'];self.base=self.state['base']
        self.p=self.a['pointerBytes'];self.vtables=vtables;self.callbacks=callbacks;self.strings={};self.tables={};self.closures={}
        self.blocks=([(self.base+row['offset'],row['bytes']) for row in result['allocations'] if row['active'] and row['offset'] is not None]
            if result['sourceOnlyExecution'] else [(row['address'],row['bytes']) for row in result['sdkLiveAllocations']])
        self.roles={}
        self.vm=result['returned'];self.shared=0
        self.shared=self.pointer(self.vm+self.c['shared'])
        if not self.blocks or self.shared!=self.blocks[0][0]:
            raise ValueError('049 factory VM owner differs from the independently observed first shared allocation')
        self.frame=result['frameAbi']
        self.claim(self.vm,'root-vm-storage',self.c['vmBytes'])
        self.claim(self.shared,'shared-state-storage',self.c['sharedBytes'])
        self.prepare_vm_allocations()

    def claim(self,address,role,bytes,alignment=None):
        if alignment is None:alignment=self.p
        block=next((count for low,count in self.blocks if low==address),None)
        if block is None or block<bytes or address%alignment:raise ValueError('049 live object does not own its exact aligned allocation: '+role)
        if self.result['sourceOnlyExecution'] and block!=bytes:raise ValueError('049 source allocation differs from its exact typed logical budget: '+role)
        if address in self.roles and self.roles[address]['role']!=role:raise ValueError('049 distinct logical allocation roles unexpectedly alias')
        self.roles[address]={'role':role,'logicalBytes':bytes,'physicalBytes':block,'alignment':alignment}

    def raw(self,address,size):
        if not size:return b''
        root=self.shared
        if not root<=address<address+size<=root+self.c['sharedBytes'] and not any(low<=address<address+size<=low+count for low,count in self.blocks):
            raise ValueError('049 typed observer escaped an exact caller/shared/live allocation')
        if self.base<=address<address+size<=self.base+model.SIZE:
            offset=address-self.base;return self.result['after'][offset:offset+size]
        if self.result['referenceArena'] is not None and ARENA<=address<address+size<=ARENA+len(self.result['referenceArena']):
            offset=address-ARENA;return self.result['referenceArena'][offset:offset+size]
        raise ValueError('049 typed observer has no backing bytes for owned pointer')

    def get(self,address,size=4):return int.from_bytes(self.raw(address,size),'little')
    def pointer(self,address):return self.get(address,self.p)

    def prefix(self,address,kind):
        c=self.c
        return {'vtableCorrect':self.pointer(address)==self.vtables[kind],
            'references':self.get(address+c['refCountOffset']),'weakNull':self.pointer(address+c['weakOffset'])==0}

    def string(self,address):
        if address not in self.strings:raise ValueError('049 typed string pointer does not name an actual interned string')
        return self.strings[address]['text']

    def object(self,address):
        kind=self.get(address);value=address+self.c['objectValue']
        if kind==0x08001000:return {'type':kind,'rootVmCorrect':self.pointer(value)==self.vm}
        if kind==0x01000001:return {'type':kind,'zeroPayload':self.pointer(value)==0}
        if kind==0x05000002:return {'type':kind,'integerBits':self.get(value)}
        pointer=self.pointer(value)
        if kind==0x08000010:return {'type':kind,'string':self.string(pointer)}
        if kind==0x0a000020:
            if pointer not in self.tables:raise ValueError('049 table reference is not a declared root table')
            return {'type':kind,'table':self.tables[pointer]}
        if kind==0x08000200:
            if pointer not in self.closures:raise ValueError('049 closure reference lacks unique owning slot')
            return {'type':kind,'closure':self.closures[pointer]}
        raise ValueError('049 object kind is outside measured initialization contract: '+hex(kind))

    def interned(self):
        a=self.a;c=self.c;shared=self.shared;table=self.pointer(shared+c['strings'])
        self.claim(table,'string-table-header',a['stringTableBytes'])
        buckets=self.pointer(table+a['stringTableBuckets']);count=self.get(table+a['stringTableSlots']);used=self.get(table+a['stringTableUsed'])
        if not count or count&(count-1) or count>1024:raise ValueError('049 intern table exceeds bounded shape')
        self.claim(buckets,'string-table-buckets',count*self.p)
        chains=[];seen=set()
        for index in range(count):
            current=self.pointer(buckets+index*self.p);chain=[]
            while current:
                if current in seen or len(seen)>=1024:raise ValueError('049 intern table cycles or aliases a node')
                seen.add(current);size=self.get(current+a['stringLength'])
                if size>2048:raise ValueError('049 string exceeds declared observer domain')
                text=self.raw(current+a['stringValue'],size+1)
                if text[-1]!=0:raise ValueError('049 interned string lacks exact terminator')
                self.claim(current,'string:'+text[:-1].decode('ascii'),((a['stringValue']+self.p)&~(self.p-1))+size)
                row={'text':text[:-1].decode('ascii'),'length':size,'hash':self.get(current+a['stringHash']),
                    'ownerCorrect':self.pointer(current+a['stringShared'])==shared,**self.prefix(current,'string')}
                self.strings[current]=row;chain.append(row['text']);current=self.pointer(current+a['stringNext'])
            chains.append(chain)
        if len(seen)!=used or len({row['text'] for row in self.strings.values()})!=used:raise ValueError('049 interned count or unique contents differ')
        return {'slots':count,'used':used,'bucketChains':chains,'strings':sorted(self.strings.values(),key=lambda row:row['text'])}

    def register_roots(self):
        c=self.c;shared=self.shared
        if self.get(self.vm+c['root'])!=0x0a000020:raise ValueError('049 VM root lacks actual table tag')
        self.tables[self.pointer(self.vm+c['root']+c['objectValue'])]='vm-root'
        for label,type_offset,value_offset in [('meta',c['metaType'],c['metaValue']),
            ('registry',c['registry'],c['registry']+c['objectValue']),('constants',c['constants'],c['constants']+c['objectValue'])]:
            if self.get(shared+type_offset)!=0x0a000020:raise ValueError('049 initialized root is not the exact table tag')
            pointer=self.pointer(shared+value_offset)
            if pointer in self.tables:raise ValueError('049 root tables unexpectedly alias')
            self.tables[pointer]=label
        for index in range(10):
            at=shared+c['delegates']+index*c['objectBytes']
            if self.get(at)!=0x0a000020:raise ValueError('049 default delegate has wrong exact table tag')
            pointer=self.pointer(at+c['objectValue'])
            if pointer in self.tables:raise ValueError('049 default delegate tables unexpectedly alias')
            self.tables[pointer]='delegate'+str(index)
        for table,label in self.tables.items():
            nodes=self.pointer(table+self.a['tableNodes']);count=self.get(table+self.a['tableCount'])
            if count>1024:raise ValueError('049 table node allocation exceeds bounded domain')
            for index in range(count):
                at=nodes+index*self.a['nodeBytes'];value=at+self.a['nodeValue']
                if self.get(value)==0x08000200:
                    pointer=self.pointer(value+c['objectValue']);key=self.object(at+self.a['nodeKey'])
                    if key.get('string') is None or pointer in self.closures:raise ValueError('049 closure ownership is not a unique named slot')
                    self.closures[pointer]=label+'.'+key['string']

    def table(self,address):
        a=self.a;nodes=self.pointer(address+a['tableNodes']);count=self.get(address+a['tableCount'])
        self.claim(address,'table:'+self.tables[address],a['tableBytes'])
        self.claim(nodes,'table-nodes:'+self.tables[address],count*a['nodeBytes'])
        def node_index(pointer):
            if pointer==0:return None
            if pointer<nodes or (pointer-nodes)%a['nodeBytes'] or (pointer-nodes)//a['nodeBytes']>=count:
                raise ValueError('049 table node link lies outside its own exact node array')
            return (pointer-nodes)//a['nodeBytes']
        rows=[]
        for index in range(count):
            at=nodes+index*a['nodeBytes']
            rows.append({'key':self.object(at+a['nodeKey']),'value':self.object(at+a['nodeValue']),
                'next':node_index(self.pointer(at+a['nodeNext']))})
        return {'name':self.tables[address],**self.prefix(address,'table'),
            'ownerCorrect':self.pointer(address+a['tableShared'])==self.shared,
            'delegateNull':self.pointer(address+a['tableDelegate'])==0,'count':count,'used':self.get(address+a['tableUsed']),
            'firstFree':node_index(self.pointer(address+a['tableFree'])),'nodes':rows}

    def closure(self,address):
        a=self.a;pointer=self.pointer(address+a['closureFunction'])
        self.claim(address,'closure:'+self.closures[address],a['closureBytes'])
        if pointer not in self.callbacks:raise ValueError('049 callback is not an independently measured original/compiled source identity')
        types=address+a['closureTypes'];values=self.pointer(types+a['podValues']);size=self.get(types+a['podSize']);capacity=self.get(types+a['podCapacity'])
        if size>capacity or capacity>64:raise ValueError('049 closure mask vector exceeds domain')
        if values:self.claim(values,'closure-mask:'+self.closures[address],capacity*4,4)
        return {'name':self.closures[address],**self.prefix(address,'closure'),
            'ownerCorrect':self.pointer(address+a['closureShared'])==self.shared,
            'parameterCheckBits':self.get(address+a['closureParameters']),'callback':self.callbacks[pointer],
            'typeChecks':{'size':size,'capacity':capacity,'hasBacking':bool(values),'values':[self.get(values+4*i) for i in range(size)]},
            'outers':{'hasBacking':bool(self.pointer(address+a['closureOuters'])),'size':self.get(address+a['closureOuters']+self.p),
                'capacity':self.get(address+a['closureOuters']+self.p+4)},
            'environment':self.object(address+a['closureEnvironment']),'storedName':self.object(address+a['closureName'])}

    def vector(self,offset,role):
        vector=self.pointer(self.shared+offset);values=self.pointer(vector);size=self.get(vector+self.p);capacity=self.get(vector+self.p+4)
        if size>capacity or capacity>128:raise ValueError('049 shared name vector exceeds domain')
        self.claim(vector,role+'-header',self.p+8)
        if values:self.claim(values,role+'-values',capacity*self.c['objectBytes'])
        return {'size':size,'capacity':capacity,'hasBacking':bool(values),
            'values':[self.object(values+i*self.c['objectBytes']) for i in range(size)]}

    def prepare_vm_allocations(self):
        c=self.c
        stack=self.vm+c['stack'];values=self.pointer(stack);size=self.get(stack+self.p);capacity=self.get(stack+self.p+4)
        if size>capacity or capacity>4096:raise ValueError('049 VM stack exceeds declared domain')
        self.claim(values,'vm-stack-values',capacity*c['objectBytes'])
        calls=self.vm+c['calls'];values=self.pointer(calls);size=self.get(calls+self.p);capacity=self.get(calls+self.p+4)
        if size>capacity or capacity>64:raise ValueError('049 VM call vector exceeds declared domain')
        self.claim(values,'vm-call-frames',capacity*self.frame['frameBytes'])

    def vm_state(self):
        c=self.c;f=self.frame;vm=self.vm
        stack=vm+c['stack'];values=self.pointer(stack);size=self.get(stack+self.p);capacity=self.get(stack+self.p+4)
        calls=vm+c['calls'];frames=self.pointer(calls);count=self.get(calls+self.p);allocated=self.get(calls+self.p+4)
        rows=[]
        for index in range(count):
            at=frames+index*f['frameBytes']
            row={key:self.get(at+f[key]) for key in ['traps','previousBase','previousTop','target','calls','root']}
            row.update({key:self.pointer(at+f[key])==0 for key in ['instruction','literals','generator']})
            row['closure']=self.object(at+f['closure'])
            row.update({key:self.get(at+f[key],2) for key in ['varargsSize','varargsBase']})
            rows.append(row)
        return {**self.prefix(vm,'vm'),'ownerCorrect':self.pointer(vm+c['shared'])==self.shared,
            'stack':{'size':size,'capacity':capacity,'values':[self.object(values+i*c['objectBytes']) for i in range(size)]},
            'top':self.get(vm+c['top']),'base':self.get(vm+c['base']),
            'objects':{key:self.object(vm+c[key]) for key in ['root','error','errorHandler','debugHook','temporary']},
            'emptyVectors':{key:{'pointerNull':self.pointer(vm+c[key])==0,'size':self.get(vm+c[key]+self.p),
                'capacity':self.get(vm+c[key]+self.p+4)} for key in ['varargs','traps']},
            'callStackCorrect':self.pointer(vm+c['callStack'])==frames,
            'callCount':self.get(vm+c['callCount']),'allocatedCalls':self.get(vm+c['allocatedCalls']),
            'calls':{'size':count,'capacity':allocated,'frames':rows},
            'nullPointers':{key:self.pointer(vm+c[key])==0 for key in ['current','foreign']},
            'integers':{key:self.get(vm+c[key]) for key in ['nativeDepth','suspended','suspendedRoot','suspendedTarget','suspendedTraps']},
            'shorts':{key:self.get(vm+c[key],2) for key in ['suspendedVarargsSize','suspendedVarargsBase']}}

    def observe(self):
        strings=self.interned();self.register_roots();c=self.c;shared=self.shared
        identities={**self.tables,**self.closures,self.vm:'root-vm'};chain=[];previous=0;current=self.pointer(shared+c['chain'])
        while current:
            if current not in identities or identities[current] in chain:raise ValueError('049 GC chain has unknown/repeated ownership')
            if self.pointer(current+c['previousOffset'])!=previous:raise ValueError('049 GC backlink disagrees with actual caller-owned previous object')
            chain.append(identities[current]);previous=current;current=self.pointer(current+c['nextOffset'])
        if len(chain)!=len(identities):raise ValueError('049 GC chain omits a live rooted table/closure')
        refs=shared+c['references'];storage=self.pointer(refs+c['refStorage']);nodes=storage+4*self.p
        self.claim(storage,'reference-table-storage',c['blockBytes'])
        reference_table={'capacity':self.get(refs+c['refCapacity']),'used':self.get(refs+c['refUsed']),
            'nodesCorrect':self.pointer(refs+c['refNodes'])==nodes,'freeCorrect':self.pointer(refs+c['refFree'])==nodes,
            'bucketsNull':[self.pointer(storage+i*self.p)==0 for i in range(4)],'nodes':[]}
        for index in range(4):
            at=nodes+index*c['nodeBytes'];reference_table['nodes'].append({'object':self.object(at),'references':self.get(at+c['nodeReferences']),
                'nextCorrect':self.pointer(at+c['nodeNext'])==(nodes+(index+1)*c['nodeBytes'] if index<3 else 0)})
        result={'interned':strings,'tables':sorted((self.table(address) for address in self.tables),key=lambda row:row['name']),
            'closures':sorted((self.closure(address) for address in self.closures),key=lambda row:row['name']),'gcChain':chain,
            'metamethodNames':self.vector(c['systemStrings'],'metamethod-vector'),'typeNames':self.vector(c['metaMethods'],'type-vector'),
            'auxiliaryVector':self.vector(c['typeNames'],'auxiliary-vector'),
            'constructorName':self.object(shared+c['constructorName']),'special':self.object(shared+c['special']),
            'references':reference_table,'scratchNull':self.pointer(shared+c['scratch'])==0,'scratchCapacity':self.get(shared+c['scratchCapacity']),
            'callbacksNull':[self.pointer(shared+c[key])==0 for key in ['callback0','callback1']],
            'flags':[self.get(shared+c[key],1) for key in ['flag0','flag1']]}
        result['vm']=self.vm_state()
        if set(self.roles)!={address for address,size in self.blocks}:raise ValueError('049 initialized graph leaves unexplained live allocations')
        return result


def source_maps(graph):
    data={row['symbol']:row['address'] for row in graph['readonlyObjects']}
    vtables={kind:data[symbol] for kind,symbol in [('table','sq_table_vtable019'),('closure','sq_native_closure_vtable013'),('string','sq_string_vtable015'),('vm','sq_fixture_vm_operations045')]}
    bindings=json.loads((ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json').read_text())['bindings']
    callbacks={graph['functions'][row['sourceSymbol']]['address']:row['canonicalAddress'] for row in bindings}
    if len(callbacks)!=57:raise ValueError('049 compiled callback identities folded or alias')
    return vtables,callbacks


def original_maps(image):
    word=lambda address:int.from_bytes(image[address-0x100000:address-0x100000+4],'little')
    vtables={'table':word(0x19ba00),'closure':word(0x1594d8),'string':word(0x16b7d4),'vm':word(0x154768)}
    measured=json.loads((ROOT/'evidence/lanes/squirrel-state040/registration-tables.json').read_text())
    callbacks={row['address']|int(row['mode']=='Thumb'):row['address'] for row in measured['callbacks']}
    return vtables,callbacks
