import bisect
import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS, RETURN, STACK
from native_wave012_ctor_runtime import intervals, immutable_equal
from native_wave013_common import sha
import native_wave013_nfa_data as services
import native_wave013_outer_layout as model
from native_wave013_outer_lifetime import LifetimeObserver


class SemanticMismatch(RuntimeError):
    def __init__(self, source, original, reason):
        self.details = {'returnedNormally': source['returnedNormally'],
                        'immutableMemoryPreserved': source['immutableMemoryPreserved'],
                        'actualReturn': source['result'], 'expectedReturn': original['result'],
                        'sourceMemorySha256': source['memorySha256'], 'originalMemorySha256': original['memorySha256'],
                        'platform': 'arm-cpu', 'reason': reason}
        super().__init__('Normally returned NFA has a semantic mismatch: ' + reason)


def execute(graph, specification, data, source=False, seed=0, thumb=False, flags=0):
    layout = model.encode(specification, 0x3000000 + seed % 4*0x100000, 4, seed)
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    pages, readonly = set(), []
    for address, raw in graph['blocks']:
        for page in range(address & ~4095, (address + len(raw) + 4095) & ~4095, 4096):
            if page not in pages:
                cpu.mem_map(page, 4096, unicorn.UC_PROT_ALL)
                pages.add(page)
        cpu.mem_write(address, raw)
        readonly.append((address, address + len(raw)))
    writable = graph.get('writableRanges', [])
    for page in pages:
        permission = unicorn.UC_PROT_READ | (unicorn.UC_PROT_WRITE if any(a <= page < b for a, b in writable) else unicorn.UC_PROT_EXEC)
        cpu.mem_protect(page, 4096, permission)
    service_blocks = services.arm_blocks(data) if source else []
    if source:
        cpu.mem_map(0x5000000, 65536, unicorn.UC_PROT_READ)
        for address, raw in service_blocks:
            cpu.mem_write(address, raw)
            readonly.append((address, address + len(raw)))
    cpu.mem_map(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(seed + 13013)
    stack_before = rng.randbytes(8192)
    stack_expected = bytearray(stack_before)
    cpu.mem_write(STACK, stack_before)
    cpu.mem_map(layout['base'], model.SIZE, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'], layout['before'])
    frame = (STACK + 4096 - 2048, STACK + 4096)
    heap = (layout['base'] + 0x8000, layout['base'] + 0x8000 + model.CAPACITY*16)
    mutable = intervals([frame, heap, *[(layout['base']+r['offset'], layout['base']+r['offset']+r['size']) for r in layout['fields']]])
    readable = intervals([frame, (STACK+4096,STACK+4108), heap, *readonly, *layout['readable'],
                          (layout['base']+0x2100, layout['base']+0x211c),
                          (layout['base']+0x2400, layout['base']+0x240c),
                          (layout['base']+0x2440, layout['base']+0x244c)])
    code_ranges = intervals(graph['executableRanges'])
    cache = {id(v): [a for a, b in v] for v in [mutable, readable, code_ranges]}
    def contains(ranges, address, size):
        at = bisect.bisect_right(cache[id(ranges)], address)-1
        return at >= 0 and ranges[at][0] <= address < address+size <= ranges[at][1]
    observer = LifetimeObserver(layout['base'])
    observer.initialize(layout['before'])
    events, path, calls, pending = [], set(), [], []
    phase = ['setup' if source else 'pipeline']
    private_arena=[]
    compiled_pointer=[None]
    allocator = graph['functions']['fn_004c39c8']['address'] if source else 0x4c39c8
    def executed(uc, address, size, user):
        if not contains(code_ranges, address, size):
            raise RuntimeError('NFA escaped owned executable instructions')
        path.add(address)
        constructor=graph['functions']['fn_004c3b08']['address'] if source else 0x4c3b08
        if address==constructor:
            private_arena.append(cpu.reg_read(REGISTERS[0]))
        if not source and pending and address == pending[-1]['return']:
            row = pending.pop()
            result = cpu.reg_read(REGISTERS[0])
            if row['caller']==0x4c3ca0:
                compiled_pointer[0]=result
            events.append({'type': 'allocation', 'address': result, 'blocks': row['blocks'],
                           'kind': row['kind'], 'caller': row['caller'], 'count': row['count']})
        if not source and address == allocator:
            caller = (cpu.reg_read(REGISTERS[-1]) & ~1)-4
            count = int.from_bytes(cpu.mem_read(compiled_pointer[0]+16,4),'little') if compiled_pointer[0] else 0
            kind, expected = model.allocation_role(caller,count)
            blocks = cpu.reg_read(REGISTERS[1])
            if blocks != expected:
                raise RuntimeError('Original allocation unit differs from reviewed callsite role')
            pending.append({'return': caller+4, 'caller': caller, 'kind': kind, 'blocks': blocks, 'count': count})
    def read(uc, access, address, size, value, user):
        if not contains(readable, address, size):
            raise RuntimeError('NFA read outside declared objects/data/frame')
        observer.read(address, size, cpu.reg_read(UC_ARM_REG_PC))
    def write(uc, access, address, size, value, user):
        setup_write = phase[0] == 'setup' and any(a <= address < address+size <= b for a, b in writable)
        if not setup_write and not contains(mutable, address, size):
            raise RuntimeError('NFA wrote outside declared fields/private frame')
        pc = cpu.reg_read(UC_ARM_REG_PC)
        observer.write(address, size, value, pc)
        if layout['base'] <= address < address+size <= layout['base']+model.SIZE:
            events.append({'type': 'write', 'address': address, 'bytes': size, 'value': value, 'pc': pc})
    cpu.hook_add(unicorn.UC_HOOK_CODE, executed)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, read)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, write)
    def call(name, arguments, result_kind='int'):
        if source:
            entry = graph['functions'][name]['address']
        else:
            canonical = int(name[3:], 16)
            entry = canonical | int(graph['functions'][canonical]['mode'] == 'Thumb')
        initial = [rng.getrandbits(32) for _ in REGISTERS]
        initial[:min(len(arguments),4)] = arguments[:4]
        for index,value in enumerate(arguments[4:]):
            raw=value.to_bytes(4,'little')
            cpu.mem_write(STACK+4096+4*index,raw)
            stack_expected[4096+4*index:4100+4*index]=raw
        initial[-2:] = [STACK + 4096, RETURN | int(thumb)]
        cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | flags << 28)
        for register, value in zip(REGISTERS, initial):
            cpu.reg_write(register, value)
        cpu.emu_start(entry, RETURN, count=4000000)
        if cpu.reg_read(UC_ARM_REG_PC) != RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != thumb:
            raise RuntimeError('NFA failed bounded return/interworking')
        final = [cpu.reg_read(register) for register in REGISTERS]
        if final[4:12] != initial[4:12] or final[-2] != initial[-2]:
            raise RuntimeError('NFA changed callee-save registers or SP')
        result = None if result_kind == 'void' else final[0] if result_kind == 'pointer' else ctypes.c_int(final[0]).value
        calls.append({'name': name, 'result': result, 'returnedNormally': True, 'calleeSavedAndSpPreserved': True})
        return result
    if source:
        if call('pattern_bind_unicode_data', [0x5000000]) != 1:
            raise RuntimeError('Source refused validated typed Unicode service')
        phase[0] = 'pipeline'
    base=layout['base']
    if 'leaf' in specification:
        entry={'zero-any':'fn_00158f6c','zero-aligned':'fn_00301f50',
               'arena-constructor':'fn_004c3b08','arena-init':'fn_004c3974'}[specification['leaf']]
        destination=base+0x5000+specification.get('alignment',0)
        arguments=[destination,specification.get('bytes',0)]
        result_kind='pointer'
        if specification['leaf']=='arena-constructor':
            arguments,result_kind=[base+0x200],'void'
        elif specification['leaf']=='arena-init':
            arguments,result_kind=[base+0x200,base+0x7400],'void'
        result=call(entry,arguments,result_kind)
    elif source and specification.get('portable_arm'):
        result=call('pattern_process_candidates',[base+0x200,*layout['rootArguments']],'void')
    else:
        result=call('fn_004c3c20',layout['rootArguments'],'void')
    lexical,nfa_result,compiler_result,matcher_result=None,None,None,None
    if 'leaf' in specification:
        owner=base+0x200
    else:
        if len(private_arena)!=1:
            raise RuntimeError('Outer call did not bind exactly one measured arena constructor identity')
        owner=private_arena[0]
        if source and specification.get('portable_arm'):
            if owner!=base+0x200:
                raise RuntimeError('Portable ARM helper changed supplied arena ownership')
        elif not frame[0]<=owner<owner+12<=frame[1] or owner&3:
            raise RuntimeError('Canonical outer arena is outside its aligned private invocation frame')
    snapshot=[int.from_bytes(cpu.mem_read(owner+index*4,4),'little') for index in range(3)]
    empty=next(row['address'] for row in graph['readonlyObjects'] if row['symbol']=='pattern_empty_text') if source else 0x4c3e04
    if pending:
        raise RuntimeError('Original allocator did not complete normally')
    after = bytes(cpu.mem_read(base, model.SIZE))
    allowed = [(a,b) for a,b in mutable if a >= base]
    if not immutable_equal(layout['before'], after, base, allowed):
        raise RuntimeError('NFA changed immutable fixture memory/padding/guards')
    stack_after = bytes(cpu.mem_read(STACK, 8192))
    if stack_after[:2048] != stack_expected[:2048] or stack_after[4096:] != stack_expected[4096:]:
        raise RuntimeError('NFA changed stack outside its declared private frame')
    for address, raw in service_blocks:
        if bytes(cpu.mem_read(address, len(raw))) != raw:
            raise RuntimeError('NFA changed immutable Unicode data service')
    return {'layout': layout, 'after': after, 'arenaIdentity':owner, 'arenaSnapshot':snapshot, 'emptyLiteralAddress':empty, 'lexical': lexical, 'result': result, 'events': events,
            'nfaResult': nfa_result, 'compilerResult': compiler_result, 'matcherResult': matcher_result,
            'quarantinedArenaOffsets': sorted(observer.quarantined),
            'codePath': sorted(path), 'calls': calls, 'lifetime': observer.summary(),
            'returnedNormally': True, 'immutableMemoryPreserved': True, 'memorySha256': sha(after)}


def projection(source,original):
    value=model.Projection(original['layout'],source['layout'],
        owner_identity=(original['arenaIdentity'],source['arenaIdentity']),
        constants={original['emptyLiteralAddress']:source['emptyLiteralAddress']})
    for event in original['events']:
        if event['type']=='allocation':
            value.allocate(event['address'],event['blocks'],event['kind'],event['caller'],event.get('count',0))
        else:
            value.write(event['address'],event['bytes'],event['value'],event['pc'])
    if source['layout']['specification'].get('portable_arm') and 'leaf' not in source['layout']['specification']:
        value.caller_arena(original['arenaSnapshot'])
    return value


def compare(source,original):
    if source['lifetime']['readBeforeReinitialization'] or original['lifetime']['readBeforeReinitialization']:
        raise RuntimeError('Outer source/reference read retired bytes before initialization')
    value=projection(source,original)
    masks=value.qualified_masks(original['after'],original['quarantinedArenaOffsets'])
    ignored={index for low,high in masks for index in range(low,high)}
    for low,high in masks:
        pointer=int.from_bytes(source['after'][low:high],'little')
        if high-low!=4 or not STACK<=pointer<STACK+8192:
            raise RuntimeError('Outer excluded link is outside the source private stack')
    differences=[i for i,(a,b) in enumerate(zip(value.expected,source['after'])) if a!=b and i not in ignored]
    if differences:
        raise SemanticMismatch(source,original,'outer defined fixture bytes differ at '+hex(differences[0]))
    expected_result=original['result']
    if source['result']!=expected_result:
        raise SemanticMismatch(source,original,'outer leaf return differs')
    if source['arenaSnapshot'][2]!=original['arenaSnapshot'][2]:
        raise SemanticMismatch(source,original,'outer final arena cursor differs')
    return {'fullFixtureBytesCompared':model.SIZE,'oneTracedArenaIdentityTranslated':'leaf' not in source['layout']['specification'],
        'arenaPointerFieldsQualifiedByOriginalTypedWrites':True,'expiredArenaDereferencedByObserver':False,
        'privateTemporaryLinkMasks':masks,'everyOtherByteAgrees':True,'wholeMemoryEquivalenceClaimed':False,
        'arenaLifetime':'caller-owned live arena' if source['layout']['specification'].get('portable_arm') else 'canonical invocation ends at return'}
