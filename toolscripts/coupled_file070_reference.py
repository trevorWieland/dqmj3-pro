import importlib
import json
from pathlib import Path
import struct


def observe(target, family, case):
    observe_v3 = importlib.import_module('observe_v3')
    warm = importlib.import_module('warm_threads')
    ar = observe_v3.observe_v2.observe.ar
    trace_module = observe_v3.observe_v2.observe.qualifier_observer.service_observer.original_trace
    component = observe_v3.observe_v2.observe.qualifier_observer.service_observer.pool_observer.device_destructor_reference.destructor_reference.shutdown_reference.singleton_replay.singleton_bootstrap.patch_provider.fs_priority.run_component
    base = component.romfs_constructor_view.generated_romfs_provider.romfs_mount_pool_v3.romfs_mount_frontier.romfs_large
    base.ELF = target / 'build-branch/arm/effect_resource.elf'
    base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    class Machine(warm.Machine):
        def __init__(self, elf):
            self.service_trace = []
            super().__init__(elf, False)

        def code(self, cpu, address, size, user):
            before, stopped = len(trace_module.TRACE), len(getattr(self, 'teardown_services', []))
            super().code(cpu, address, size, user)
            self.service_trace += trace_module.TRACE[before:] + getattr(self, 'teardown_services', [])[stopped:]
            if self.active and address == 0x10c4e4:
                names = [self.read_bytes(cpu.reg_read(reg), 8).split(b'\0')[0].decode('ascii') for reg in [ar.UC_ARM_REG_R0, ar.UC_ARM_REG_R1]]
                self.service_trace.append({'operation': 'alias', 'scheme': names[0], 'target': names[1]})
    machine = Machine(base.ELF)
    machine.setup()
    machine.functions['filesystem_initialize070'] = 0x10c444
    machine.functions['filesystem_shutdown070'] = 0x10c4f4
    def call(name, arguments):
        machine.active = True
        machine.invoke(name, arguments)
        machine.active = False
    def snapshot():
        allocations = machine.allocations()
        identities = {row['pointer']: index for index, row in enumerate(allocations)}
        filesystem = struct.unpack('<3I', machine.read_bytes(0x89a4e8, 12))
        rows = list(struct.iter_unpack('<4I', machine.read_bytes(0x8e3470, 512)))
        live = [row for row in rows if row[0] or row[1] or row[2]]
        device_base = min((row[2] for row in live), default=0x88d940)
        identify = lambda pointer: identities[pointer] if pointer else None
        creates = len(machine.thread_history)
        joins = sum(row['operation'] == 'WaitSynchronization' for row in machine.lifecycle)
        closes = sum(row['operation'] == 'CloseHandle' for row in machine.lifecycle)
        exited = sum(row['operation'] == 'ExitThread' for row in machine.lifecycle)
        sleeps = len(machine.worker_pauses)
        return {'managerAllocation': identify(int.from_bytes(machine.read_bytes(0x898154, 4), 'little')),
            'filesystemAllocationIds': [identify(filesystem[1]), identify(filesystem[2])],
            'allocationRecords': [{'bytes': row['record'][0], 'live': bool(row['record'][5])} for row in allocations],
            'namespaceDevices': [(row[2] - device_base) // 304 if row[2] else None for row in rows[:2]],
            'namespaceFlags': [row[3] for row in rows[:2]], 'mounted': [bool(row[0] or row[1]) for row in rows[:2]],
            'platform': dict(zip(['creates', 'joins', 'closes', 'sleeps', 'exited'], [creates, joins, closes, sleeps, exited], strict=True)),
            'sdkLive': [len({row[2] for row in live})] * 2, 'serviceTrace': machine.service_trace.copy()}
    stages = {}
    if case == 'null-equal': machine.cpu.mem_write(machine.state + machine.layout['failAt'], struct.pack('<I', 3))
    call('filesystem_initialize070' if case == 'alias' else 'file_bootstrap068', [0, 1, 0] if case == 'alias' else [])
    stages['start'] = snapshot()
    if case == 'warm':
        machine.schedule_worker()
        call('filesystem_shutdown070', [])
        machine.invoke_joining_old()
        stages['warm'] = snapshot()
        machine.select_and_schedule_new()
        machine.shutdown()
    elif case in ['alias', 'null-equal']: call('filesystem_shutdown070', [])
    else:
        machine.schedule_worker()
        machine.shutdown()
    stages['final'] = snapshot()
    if family == 'branch':
        expected = json.loads((target / 'metadata/branch/source-oracle.json').read_text())[case]
        if stages != expected:
            path = target / ('original-' + case + '-mismatch.json')
            path.write_text(json.dumps({'stages': stages, 'expected': expected}, indent=2) + '\n')
            raise ValueError('Actual original branch differs from frozen independent oracle')
    else:
        expected = json.loads((target / 'metadata/sdk/source-oracle.json').read_text())
        if any(row['live'] for row in stages['final']['allocationRecords']): raise ValueError('Actual SDK original retained allocation')
        if len(machine.device_contracts) != 2 or len(machine.stream_contracts) != 2 or len(machine.embedded_contracts) != 4:
            raise ValueError('Actual SDK original destructor cardinality differs')
        for group in [machine.leaf_abi, machine.getter_abi, machine.ipc_abi]:
            if len(group) != 2: raise ValueError('Actual SDK leaf ABI cardinality differs')
            for row in group:
                if any(row['entry'][key] != row['returned'][key] for key in ['sp', 'savedInteger', 'savedFloat']):
                    raise ValueError('Actual SDK leaf consumed caller ABI differs')
        pool = machine.stream_contracts[-1]['poolAfter']
        start, stride, budget = pool[7], pool[6], pool[8]
        index = lambda pointer: budget // stride if not pointer else (pointer - start) // stride
        links = [index(int.from_bytes(machine.read_bytes(start + offset * stride, 4), 'little')) for offset in range(budget // stride)]
        semantic = {'streamPoolLiveCount': pool[11], 'streamPoolFreeHead': index(pool[9]), 'streamPoolDepth': pool[14],
            'streamPoolFreeLinks': links, 'sdkFinalIPCWords': machine.words(machine.tls + 0x80, 2),
            'sdkDeviceReturns': sum(row['returned']['r0'] == row['receiver'] for row in machine.device_contracts),
            'sdkStreamReturns': sum(row['returned']['r0'] == row['receiver'] for row in machine.leaf_abi),
            'sdkEmbeddedReturns': sum(row['returned']['r0'] == row['receiver'] for row in machine.embedded_contracts)}
        if any(value != expected[key] for key, value in semantic.items()):
            raise ValueError('Actual SDK pool/leaf/getter/IPC differs from frozen original contract')
        if any(row['returned']['r0'] != row['argumentWords'][1] or not row['returned']['r0'] for row in machine.getter_abi):
            raise ValueError('Actual SDK getter returned wrong live handle')
        if any(row['returned']['r0'] != 0 for row in machine.ipc_abi): raise ValueError('Actual SDK IPC consumed result differs')
    observed = {'stages': stages, 'instructionPositions': sorted({row['address'] for row in machine.witnesses.values()}),
        'kernelContracts': machine.kernel_contracts, 'lifecycle': machine.lifecycle,
        'deviceDestructions': len(machine.device_contracts), 'streamDestructions': len(machine.stream_contracts),
        'embeddedDestructions': len(machine.embedded_contracts), 'originalGlobalsManuallySeeded': False,
        'physicalServiceFilesystemOrThreadExecuted': False, 'sourceCreditGranted': 0}
    path = target / ('actual-original-' + family + '-' + str(case) + '.json')
    path.write_text(json.dumps(observed, indent=2) + '\n')
    return {'report': str(path), 'actualOriginalReturned': True, 'allStageSemanticsMatched': family == 'branch',
        'SDKPoolLeafGetterIPCABIMatched': family == 'sdk', 'originalGlobalsManuallySeeded': False}
