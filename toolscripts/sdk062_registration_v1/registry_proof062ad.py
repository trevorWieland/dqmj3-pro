import ctypes
import hashlib
import json
from pathlib import Path
import random
import struct
import sys

W = Path(__file__).resolve().parent
R = next(p for p in W.parents if (p / 'AGENTS.md').is_file())
H = R / 'work/native-asset062-sdk-owner-core-v1'
sys.path[:0] = [str(H), str(R / 'toolscripts')]
from heap_runtime062ac import Runtime
from sdk062_original_v1 import Original
from registry_model062ad import RegistryModel
from registry_observer062ad import attach
from unicorn import arm_const as arm

ENTRIES = dict(registry_initialize062ad=0x495e28, registry_destroy062ad=0x495f88,
               registry_find062ad=0x495d00, registry_register062ad=0x4955f0,
               registry_unregister062ad=0x49599c)
SYMBOLS = ['heap_identity062ac', 'registry_methods062ad',
           'sdk_clock_mutex_methods062u', 'sdk_mutex_class_identity062u',
           'sdk_mutex_tag_identity062u']


class SemanticMismatch(ValueError):
    def __init__(self, stage, label, runtime, arena, expected):
        self.evidence = dict(stage=stage, step=label,
                             normallyReturned=runtime.last_returned,
                             returnedFunction=runtime.last_name,
                             sameFinalArena=arena == expected,
                             actualArenaSha256=hashlib.sha256(arena).hexdigest(),
                             expectedArenaSha256=hashlib.sha256(expected).hexdigest())
        super().__init__(self.evidence)


def source_runtime(target, folder):
    runtime = Runtime(target, folder)
    if target == 'windows':
        runtime.storage = ctypes.create_string_buffer(0x80000 + 63)
        runtime.ram = (ctypes.addressof(runtime.storage) + 63) & -64
    else:
        runtime.cpu.mem_map(runtime.ram + 0x20000, 0x60000)
    address = runtime.symbol('fixture_registry_layout062ad')
    layout = list(struct.unpack('<28I', runtime.load(address, 112)))
    expected = [4,20,0,4,8,12,16,8,0,4,184,4,16,12,16,12,120,80,
                40,4,8,20,24,28,32,36,4,8] if runtime.p == 4 else [
                8,40,0,8,16,24,32,16,0,8,296,8,24,16,24,16,144,80,
                64,8,16,40,48,52,56,60,8,16]
    if layout != expected:
        raise ValueError(('independent registry layout', target, layout, expected))
    if runtime.p == 8 and runtime.ram <= 0xffffffff:
        raise ValueError('native pointer model was not high address')
    original_call = runtime.call
    def completed_call(name, args):
        runtime.last_name = name
        runtime.last_returned = False
        answer = original_call(name, args)
        runtime.last_returned = True
        return answer
    runtime.call = completed_call
    return runtime, layout


def original_runtime(base, initial, lookup_lock, disposer):
    original = Original()
    for address, end in [(0x10b980,0x10ba20), (0x474598,0x4745b4),
                         (0x4745b8,0x4745d4), (0x13c48c,0x13c4dc)]:
        original.ranges.append((address, end, address))
    original.ranges.sort()
    original.starts = [x[0] for x in original.ranges]
    original.cpu.mem_write(base, initial)
    original.cpu.mem_write(0x89a508, b'\1')
    original.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3, base + 0x7f000)
    original.call(0x10b980, [base + 0x40000, 0x20000])
    original.cpu.mem_write(0x8b637e, b'\0')
    original.cpu.mem_write(0x8b637c, b'\0')
    original.cpu.mem_write(0x8e769c + 20, struct.pack('<I', base + 0x800))
    original.cpu.mem_write(base + 0x80c, struct.pack('<I', base + 0x900))
    original.cpu.mem_write(base + 0x90c, struct.pack('<I', base + 0xa00))
    original.call(0x4745d8, [base + 0xa50, 0])
    original.cpu.mem_write(0x8b6389, bytes([lookup_lock]))
    original.cpu.mem_write(0x8b63b8, struct.pack('<I', 0x143b48 if disposer else 0))
    return original


def steps(seed):
    rows = []
    for i in range(16):
        rows.append(('register', i, 3, 0, i % 2))
    rows += [('register', 16, 7, 0x100, 1), ('register', 17, 7, 0xffffffff, 1)]
    keys = list(range(256))
    random.Random(seed).shuffle(keys)
    for key in keys:
        rows.append(('register', key, 0, key if key else 0x100, key % 2))
    rows += [('find', key) for key in range(0, 256, 3)]
    for key in keys[::2]:
        rows.append(('remove', key >> 4, key & 15))
    rows += [('remove', 0x107, 0x103), ('remove', 0, 0x100)]
    return rows


def execute(target, folder, seed, lookup_lock, disposer=False, reference=True):
    runtime, layout = source_runtime(target, folder)
    symbols = {name: runtime.symbol(name) for name in SYMBOLS}
    base = runtime.ram
    model = RegistryModel(base, runtime.layout, layout, symbols, seed)
    model.lookup_lock = lookup_lock
    model.disposer = runtime.symbol('heap_default_free062ac') if disposer else 0
    runtime.store(base, model.initial)
    runtime.call('fixture_heap_reset062ac', [])
    runtime.call('fixture_default_bind062ac', [base + 0x7f000])
    runtime.call('heap_default_initialize062ac', [base + 0x40000, 0x20000])
    runtime.call('fixture_registry_bind062ad', [base+0x800, base+0x900, base+0xa00, lookup_lock])
    runtime.call('fixture_registry_disposer062ad', [int(disposer)])
    original = original_runtime(base, model.initial, lookup_lock, disposer) if target == 'arm' and reference else None
    original_data = bytes(original.cpu.mem_read(0x888000, 471024)) if original else None
    observations = []
    reference_observer = None
    original_mutex_methods = 0x8533fc

    def observe(label, actual, expected):
        arena = runtime.load(base, 0x80000)
        if actual != expected:
            raise SemanticMismatch('return', label, runtime, arena, model.bytes)
        try:
            model.validate(arena)
        except ValueError as error:
            raise SemanticMismatch('full-arena-model', label, runtime, arena, model.bytes) from error
        reference_hash = None
        if original:
            reference = bytes(original.cpu.mem_read(base, 0x80000))
            projected = bytearray(arena)
            mutex = base + 0xa50
            aliases = [(base + 0x40000, 0x8526b4), (model.registry, 0x854524),
                       (mutex, original_mutex_methods), (mutex + 4, original.word(0x47462c)),
                       (mutex + 20, original.word(0x474630))]
            for address, value in aliases:
                if address == model.registry and label == 'provisioned':
                    continue
                projected[address-base:address-base+4] = struct.pack('<I', value)
            for address in model.prefix_fields:
                if model.disposer and model.read(address, 4) == model.disposer.to_bytes(4, 'little'):
                    projected[address-base:address-base+4] = struct.pack('<I', 0x143b48)
            if reference != projected:
                bad = [i for i,(a,b) in enumerate(zip(reference,projected)) if a != b]
                raise ValueError(('original full registry arena', label, bad[:40]))
            if bytes(original.cpu.mem_read(0x888000, 471024)) != original_data:
                raise ValueError('registry modified undeclared original module state')
            reference_hash = hashlib.sha256(reference).hexdigest()
        if model.observed:
            count = struct.unpack('<I', runtime.load(runtime.symbol('fixture_registry_event_count062ad'), 4))[0]
            actual_events = runtime.load(runtime.symbol('fixture_registry_events062ad'), count * 28)
            expected_events = b''.join(struct.pack('<7I', *row) for row in model.events)
            if count != len(model.events) or actual_events != expected_events:
                raise SemanticMismatch('ordered-callbacks', label, runtime, arena, model.bytes)
            if original:
                reference_count = original.word(reference_observer['fixture_registry_event_count062ad'])
                reference_events = bytes(original.cpu.mem_read(reference_observer['fixture_registry_events062ad'], reference_count * 28))
                if reference_count != count or reference_events != actual_events:
                    raise ValueError(('original ordered mutex callback observations', label))
        projection = dict(heap=model.projection(),
                          registryVectorOffset=model.vector-base if model.vector else None,
                          registryCapacity=model.capacity,
                          registryRecords=[dict(key=key, borrowedOwnerOffset=value-base,
                              keyWordBytes=model.read(model.vector+i*layout[7],4).hex())
                              for i,(key,value) in enumerate(model.records)],
                          contextBindings=['default-slot3:binding', 'binding:context', 'context:owner'],
                          mutexIdentity='qualified-sdk-mutex-with-observer' if model.observed else 'qualified-sdk-mutex',
                          registryIdentity='registry-methods' if label != 'provisioned' else 'unconstructed',
                          capturedDisposerRole='default-heap-free' if disposer else 'default-prefix-fallback')
        observations.append(dict(step=label, fullArenaBytes=0x80000,
                                 completeIndependentArenaModel=True,
                                 sourceRawArenaSha256=hashlib.sha256(arena).hexdigest(),
                                 originalRawArenaSha256=reference_hash,
                                 registryCount=len(model.records), capacity=model.capacity,
                                 liveHeapAllocations=len(model.used),
                                 namedLiveOwnershipProjection=projection,
                                 namedLiveOwnershipFingerprint=hashlib.sha256(
                                     json.dumps(projection,sort_keys=True,separators=(',',':')).encode()).hexdigest()))

    observe('provisioned', 0, 0)
    expected = model.initialize()
    result = runtime.call('registry_initialize062ad', [model.registry])
    if original and original.call(0x495e28, [model.registry]) != result:
        raise ValueError('original constructor return')
    observe('constructor', result, expected)
    runtime.call('fixture_registry_observe062ad', [model.registry, base + 0x500])
    observer_methods = runtime.symbol('fixture_registry_mutex_methods062ad')
    runtime.store(base + 0xa00 + layout[17], observer_methods.to_bytes(runtime.p, 'little'))
    model.put(base + 0xa00 + layout[17], observer_methods, runtime.p)
    model.observed = True
    if original:
        reference_observer = attach(original, folder, model.registry, base + 0x500, base + 0xa50)
        original_mutex_methods = reference_observer['fixture_registry_mutex_methods062ad']
    for step in steps(seed):
        if step[0] == 'register':
            _, index, component, slot, with_output = step
            owner = base + 0x2000 + index * 0x200
            model.put(owner + layout[11], component, 1)
            runtime.call('fixture_registry_owner062ad', [owner, component])
            if original:
                original.cpu.mem_write(owner + 4, bytes([component]))
            output = base + 0x500 if with_output else 0
            expected = model.register(owner, slot, output)
            args = [model.registry, owner, slot, output]
            name = 'registry_register062ad'
        elif step[0] == 'remove':
            expected = model.unregister(step[1], step[2])
            args = [model.registry, step[1], step[2]]
            name = 'registry_unregister062ad'
        else:
            model.put(base + 0x500, step[1], 1)
            runtime.store(base + 0x500, bytes([step[1]]))
            if original:
                original.cpu.mem_write(base + 0x500, bytes([step[1]]))
            expected = model.find(step[1])
            args = [model.registry, base + 0x500]
            name = 'registry_find062ad'
        result = runtime.call(name, args)
        if original and original.call(ENTRIES[name], args) & 0xffffffff != result:
            raise ValueError(('original return', step))
        observe(list(step), result, expected)
    expected = model.destroy()
    result = runtime.call('registry_destroy062ad', [model.registry])
    if original and original.call(0x495f88, [model.registry]) != result:
        raise ValueError('original destructor return')
    observe('destructor-nonempty-vector', result, expected)
    return dict(target=target, pointerBytes=runtime.p, arenaAddress=hex(base),
                seed=seed, lookupLock=lookup_lock, observations=observations,
                capturedDisposer=disposer, enumeratedSdkPrefixOffsets=sorted(a-base for a in model.prefix_fields),
                originalPcs=sorted(original.coverage) if original else [],
                originalAuthoredEndpointsMapped=len(original.fixture_ranges) if original else None,
                referenceAuthoredScope='only common observer callbacks; delegates actual474598/4745b8' if original else None,
                orderedMutexCallbackCount=len(model.events),
                sourcePcs=len(runtime.coverage), sourceCreditGranted=0)


def main():
    output = W / 'proof-attempt002'
    output.mkdir(exist_ok=False)
    rows = []
    try:
        for target in ['arm', 'windows', 'a64']:
            rows.append(execute(target, W / 'build-attempt003', 622, 1))
            print('registry source', target, 'passed', flush=True)
        result = dict(status='passed', profiles=rows)
    except BaseException as error:
        result = dict(status='failed', error=repr(error), profiles=rows)
        raise
    finally:
        (output / 'report.json').write_text(json.dumps(result, indent=2) + '\n')


if __name__ == '__main__':
    main()
