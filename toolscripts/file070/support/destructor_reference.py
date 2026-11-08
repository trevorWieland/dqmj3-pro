import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys


ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'work/native-file068-successor-v1'))
import shutdown_reference
import native_effect065_resource_conditions as conditions
from unicorn import arm_const as ar


class Machine(shutdown_reference.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.destructor_entries = []
        self.destructor_view = None

    def code(self, cpu, address, size, user):
        if self.active and 0x44dfac <= address < address + size <= 0x44dffc:
            if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('Actual SDK carrier destructor instruction mode differs')
            if any(max(start, 0x44dfac) < min(end, 0x44dffc) for start, end, owner in self.reference.ranges):
                raise ValueError('SDK carrier destructor reference view overlaps frozen ownership')
            raw = bytes(cpu.mem_read(address, size))
            if raw != self.reference.image[address - 0x100000:address - 0x100000 + size]:
                raise ValueError('Actual SDK carrier destructor instruction bytes differ')
            if address == 0x44dfac:
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                words = struct.unpack('<8I', self.read_bytes(pointer, 32))
                table = words[0]
                self.destructor_entries.append({'pointer': pointer, 'words': list(words),
                    'vtable': table, 'closeCallee': int.from_bytes(self.read_bytes(table + 0x34, 4), 'little'),
                    'callerReturn': cpu.reg_read(ar.UC_ARM_REG_LR)})
            conditions.observe(cpu, address, size, 'ARM', self.condition_outcomes)
            self.pcs.add(address)
            self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM',
                'owner': 'reference-only-SDK-carrier-destructor', 'entry': 0x44dfac,
                'sha256': hashlib.sha256(raw).hexdigest()}
            if self.destructor_view is None:
                image = self.reference.image
                self.destructor_view = {'entry': 0x44dfac, 'mode': 'ARM',
                    'instructionRanges': [{'start': 0x44dfac, 'endExclusive': 0x44dffc, 'bytes': 80,
                        'sha256': hashlib.sha256(image[0x44dfac - 0x100000:0x44dffc - 0x100000]).hexdigest()}],
                    'dataRanges': [{'start': 0x44dffc, 'endExclusive': 0x44e000, 'bytes': 4,
                        'sha256': hashlib.sha256(image[0x44dffc - 0x100000:0x44e000 - 0x100000]).hexdigest()}],
                    'approvedForInventory': False, 'sourceCreditGranted': 0}
            return
        super().code(cpu, address, size, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    output.mkdir(exist_ok=False)
    component = shutdown_reference.singleton_replay.singleton_bootstrap.patch_provider.fs_priority.run_component
    component.run(Machine, output / 'bootstrap')
    machine = shutdown_reference.singleton_replay.INSTANCES[-1]
    try:
        machine.schedule_worker()
        machine.shutdown()
        outcome = {'status': 'actual-original-application-shutdown-returned-after-worker-join'}
    except Exception as error:
        outcome = {'status': 'preserved-original-SDK-destructor-frontier', 'error': str(error)}
    machine.active = False
    report = {**outcome, 'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC),
        'managerSingleton': int.from_bytes(machine.read_bytes(0x898154, 4), 'little'),
        'filesystemState': list(struct.unpack('<3I', machine.read_bytes(0x89a4e8, 12))),
        'registryHex': machine.read_bytes(0x8e3470, 512).hex(), 'lifecycle': machine.lifecycle,
        'destructorEntries': machine.destructor_entries, 'destructorView': machine.destructor_view,
        'workerPauses': machine.worker_pauses, 'kernelContracts': machine.kernel_contracts,
        'ipcAttempts': machine.ipc_attempts, 'lastAccess': machine.last_access,
        'allocations': machine.allocations(), 'instructionWitnesses': list(machine.witnesses.values()),
        'sourceCreditGranted': 0, 'nativeGameOrOSQualified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: report[key] for key in ['status', 'pc', 'managerSingleton', 'filesystemState', 'destructorEntries']}))
