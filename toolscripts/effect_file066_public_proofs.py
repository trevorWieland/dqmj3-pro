import ctypes
import importlib
import json
import struct
from pathlib import Path


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def instances(module, build, profiles):
    return {profile: module.Native(build / 'windows') if profile == 'windows' else
        module.Original(build / 'arm/effect_resource.elf') if profile == 'original' and hasattr(module, 'Original') else
        module.Machine(profile, build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in profiles}


def qualify(output, mode, smoke=False):
    core = importlib.import_module('effect_request066_oracle')
    session = importlib.import_module('effect_request066_session')
    errors = importlib.import_module('effect_request066_errors')
    cached = importlib.import_module('effect_request066_cache_session')
    profiles = ['original'] if mode == 'original' else ['arm', 'windows', 'a64']
    build = output / 'build'
    results = {}
    for profile, machine in instances(core, build, profiles).items():
        if mode == 'source' and (machine.original or hasattr(machine, 'reference')):
            raise ValueError('Source constructor profile instantiated an original mapping')
        rows = []
        for path in ([''] if smoke else ['', 'rom:/data/Effect/ef00007.pef', 'x' * 33]):
            for selector in ([0] if smoke else [0, 3, 4, 255]):
                for pattern in ([0xa5] if smoke else [0x5a, 0xa5]):
                    machine.prepare_case(path, selector, pattern=pattern)
                    before = core.logical(core.observe(machine))
                    machine.delete_case()
                    rows.append({'before': before, 'after': core.logical(core.observe(machine, True))})
        results.setdefault(profile, {})['constructors'] = rows
    for profile, machine in instances(session, build, profiles).items():
        rows = []
        for path in (['rom:/data/Effect/ef00007.pef'] if smoke else ['rom:/data/Effect/ef00007.pef', 'patch:/data/Effect/ef00007.pef']):
            machine.prepare_session(path)
            before = session.observe(machine)
            machine.delete_session()
            rows.append({'path': path, 'before': before, 'after': session.observe(machine, True)})
        results[profile]['sessions'] = rows
    for profile, machine in instances(errors, build, profiles).items():
        rows = []
        for case in (errors.CASES[:1] if smoke else errors.CASES):
            machine.prepare_case(case)
            before = errors.observe(machine, case)
            machine.delete_case()
            rows.append({'before': before, 'after': errors.observe(machine, case, True)})
        results[profile]['errors'] = rows
    for profile, machine in instances(cached, build, profiles).items():
        machine.prepare_cache()
        if profile == 'original':
            address = machine.graph['objects']['effect_request_layout066']['address']
            machine.request_layout = dict(zip(core.LAYOUT, struct.unpack('<13I', machine.read_bytes(address, 52)), strict=True))
        results[profile]['cache'] = [cached.logical(cached.observe(machine, cached.execute(machine), call))
            for call in range(1, 4)]
    for profile, row in results.items():
        write(output / mode / (profile + '.json'), row)
    return results


def dispatch(output, mode):
    core = importlib.import_module('effect_request066_oracle')
    frozen = importlib.import_module('effect_request066_dispatch')
    from unicorn import arm_const as arm
    profiles = ['original'] if mode == 'original' else ['arm', 'windows', 'a64']
    results = {}
    for profile, machine in instances(core, output / 'build', profiles).items():
        if profile == 'windows':
            machine.library.effect_request_load066.argtypes = [ctypes.c_void_p]
            machine.library.effect_request_length066.argtypes = [ctypes.c_void_p]
            machine.library.effect_request_length066.restype = ctypes.c_ulonglong
        rows = []
        for selector in [3, 5, 255]:
            machine.prepare_case('rom:/data/Effect/ef00007.pef', selector)
            if hasattr(machine, 'cpu'):
                machine.active = True
                machine.invoke('request_load066', [machine.task])
                machine.active = False
            else:
                machine.library.effect_request_load066(machine.task)
            state = 2 if selector == 3 else 0
            row = {'selector': selector, 'afterLoad': core.logical(core.observe(machine, expected_state=state))}
            provider = machine.task + machine.request_layout['embedded']
            address = provider + machine.request_layout['dataBytes']
            for length in frozen.LENGTHS:
                raw = struct.pack('<Q', length)
                if hasattr(machine, 'cpu'):
                    machine.cpu.mem_write(address, raw)
                else:
                    ctypes.memmove(address, raw, 8)
                before = machine.read_bytes(machine.task, machine.request_layout['taskBytes'])
                if hasattr(machine, 'cpu'):
                    machine.active = True
                    actual = machine.invoke('request_length066', [provider])
                    if not machine.a64:
                        actual |= machine.cpu.reg_read(arm.UC_ARM_REG_R1) << 32
                    machine.active = False
                else:
                    actual = machine.library.effect_request_length066(provider)
                if actual != length or machine.read_bytes(machine.task, machine.request_layout['taskBytes']) != before:
                    raise ValueError('Public successor U64 ABI/caller preservation differs')
            if hasattr(machine, 'cpu'):
                machine.cpu.mem_write(address, bytes(8))
            else:
                ctypes.memmove(address, bytes(8), 8)
            machine.delete_case()
            row.update(afterDelete=core.logical(core.observe(machine, True, expected_state=state)), lengths=frozen.LENGTHS)
            rows.append(row)
        results[profile] = rows
        write(output / mode / (profile + '-dispatch.json'), rows)
    return results
