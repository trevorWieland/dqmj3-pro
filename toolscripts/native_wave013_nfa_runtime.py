import bisect
import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS, RETURN, STACK
from native_wave012_ctor_runtime import intervals, immutable_equal
from native_wave013_common import sha
import native_wave013_nfa_data as services
import native_wave013_nfa_layout as model
from native_wave013_nfa_lifetime import LifetimeObserver


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
    cpu.mem_write(STACK, stack_before)
    cpu.mem_map(layout['base'], model.SIZE, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'], layout['before'])
    frame = (STACK + 4096 - 2048, STACK + 4096)
    heap = (layout['base'] + 0x8000, layout['base'] + 0x8000 + model.CAPACITY*16)
    mutable = intervals([frame, heap, *[(layout['base']+r['offset'], layout['base']+r['offset']+r['size']) for r in layout['fields']]])
    readable = intervals([frame, heap, *readonly, *layout['readable'],
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
    allocator = graph['functions']['fn_004c39c8']['address'] if source else 0x4c39c8
    def executed(uc, address, size, user):
        if not contains(code_ranges, address, size):
            raise RuntimeError('NFA escaped owned executable instructions')
        path.add(address)
        if not source and pending and address == pending[-1]['return']:
            row = pending.pop()
            result = cpu.reg_read(REGISTERS[0])
            events.append({'type': 'allocation', 'address': result, 'blocks': row['blocks'],
                           'kind': row['kind'], 'caller': row['caller']})
        if not source and address == allocator:
            caller = (cpu.reg_read(REGISTERS[-1]) & ~1)-4
            kind, expected = model.allocation_role(caller)
            blocks = cpu.reg_read(REGISTERS[1])
            if blocks != expected:
                raise RuntimeError('Original allocation unit differs from reviewed callsite role')
            pending.append({'return': caller+4, 'caller': caller, 'kind': kind, 'blocks': blocks})
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
        initial[:len(arguments)] = arguments
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
    base = layout['base']
    context, arena, text, builder = [base+v for v in [0x2000, 0x200, 0x22000, 0x2100]]
    if 'direct_callback' in specification:
        if specification['direct_callback'] not in [0x4c15e4, 0x4c1658]:
            raise ValueError('Unqualified direct callback fixture')
        lexical = None
        call('fn_004c1dc0', [builder], 'pointer')
        result = call('fn_'+format(specification['direct_callback'],'08x'), [builder,base+0x600,base+0x680,base+0x690])
    elif 'transition_helper' in specification:
        lexical = None
        result = call('fn_00755818', [base+0x600,base+0x2400], 'void')
    elif 'range_cycles' in specification or 'range_steps' in specification:
        lexical, result = None, 1
        steps = specification.get('range_steps', [{'insert': specification.get('range_initial', [1,5])},
                *[{'complement': True} for unused in range(specification.get('range_cycles', 0))]])
        for step in steps:
            if not result:
                break
            if 'insert' in step:
                result = call('fn_004c2e84', [base+0x2400, *step['insert']])
            elif 'complement' in step:
                result = call('fn_004c3070', [base+0x2400])
            elif 'intersection' in step or 'union' in step:
                operation = 'intersection' if 'intersection' in step else 'union'
                for first,last in step[operation]:
                    result = call('fn_004c2e84', [base+0x2440, first, last])
                    if not result:
                        break
                if result:
                    result = call('fn_004c33dc' if operation == 'intersection' else 'fn_004c3028', [base+0x2400,base+0x2440])
            else:
                raise ValueError('Unknown range workflow operation')
    elif source:
        api_result = call('pattern_compile_nfa', [builder,context,arena,base+0x2600])
        owner = int.from_bytes(cpu.mem_read(builder+12,4),'little')
        lexical, result = (0,api_result) if owner else (api_result,None)
    else:
        if call('fn_004bfeb8', [context], 'pointer') != context:
            raise RuntimeError('Lexer constructor did not return the complete pointer')
        lexical = call('fn_004befe0', [context, arena, text, len(layout['specification'].get('units', list(map(ord, specification.get('pattern', '')))))])
        if call('fn_004c1dc0', [builder], 'pointer') != builder:
            raise RuntimeError('NFA constructor did not return the complete pointer')
        result = call('fn_004c1d04', [builder, arena, context]) if lexical == 0 else None
    if pending:
        raise RuntimeError('Original allocator did not complete normally')
    after = bytes(cpu.mem_read(base, model.SIZE))
    allowed = [(a,b) for a,b in mutable if a >= base]
    if not immutable_equal(layout['before'], after, base, allowed):
        raise RuntimeError('NFA changed immutable fixture memory/padding/guards')
    stack_after = bytes(cpu.mem_read(STACK, 8192))
    if stack_after[:2048] != stack_before[:2048] or stack_after[4096:] != stack_before[4096:]:
        raise RuntimeError('NFA changed stack outside its declared private frame')
    for address, raw in service_blocks:
        if bytes(cpu.mem_read(address, len(raw))) != raw:
            raise RuntimeError('NFA changed immutable Unicode data service')
    return {'layout': layout, 'after': after, 'lexical': lexical, 'result': result, 'events': events,
            'codePath': sorted(path), 'calls': calls, 'lifetime': observer.summary(),
            'returnedNormally': True, 'immutableMemoryPreserved': True, 'memorySha256': sha(after)}


def compare_state_only(source, original):
    differences = [i for i,(a,b) in enumerate(zip(source['after'], original['after'])) if a != b]
    base = original['layout']['base']
    masks = []
    for word in sorted({index & ~3 for index in differences}):
        a = int.from_bytes(original['after'][word:word+4], 'little')
        b = int.from_bytes(source['after'][word:word+4], 'little')
        slot, inside = divmod(word-0x8000, 16)
        if (not 0 <= slot < model.CAPACITY or inside not in [0,4]
            or original['after'][0x1000+slot] or source['after'][0x1000+slot]
            or not STACK <= a < STACK+8192 or not STACK <= b < STACK+8192):
            raise SemanticMismatch(source, original, 'defined live/non-private fixture bytes differ')
        masks.append({'offset': word, 'bytes': 4, 'originalValue': a, 'sourceValue': b,
                      'logicalSlot': slot, 'lifetimeReadOrderVerified': True})
    if source['result'] != original['result'] or source['lexical'] != original['lexical']:
        raise SemanticMismatch(source, original, 'semantic result differs')
    return {'fullFixtureBytesCompared': model.SIZE, 'rawDifferentBytes': len(differences),
            'qualifiedRetiredPrivateStackLinkWords': masks, 'liveAndNonPrivateBytesAgree': True,
            'wholeMemoryEquivalenceClaimed': False, 'rawFixtureEqualityObserved': not differences,
            'lifetimeQualifiedWhenNeeded': True}


def compare(source, original):
    if source['lifetime']['readBeforeReinitialization'] or original['lifetime']['readBeforeReinitialization']:
        raise RuntimeError('Normally returned NFA violated retired-slot read order')
    return compare_state_only(source, original)
