import argparse
import hashlib
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import sdk_initialized
import native_effect065_resource_conditions as conditions
from unicorn import arm_const as ar


SETUP_FAILURE = []


class Machine(sdk_initialized.Machine):
    def code(self, cpu, address, size, user):
        if self.active and 0x44da8c <= address < address + size <= 0x44daa0:
            if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('Registry entry constructor mode/width differs')
            if any(max(start, 0x44da8c) < min(end, 0x44daa0) for start, end, owner in self.reference.ranges):
                raise ValueError('Reference-only registry constructor overlaps frozen instruction ownership')
            raw = bytes(cpu.mem_read(address, size))
            if raw != self.reference.image[address - 0x100000:address - 0x100000 + size]:
                raise ValueError('Registry entry constructor live bytes differ')
            conditions.observe(cpu, address, size, 'ARM', self.condition_outcomes)
            self.pcs.add(address)
            self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM',
                'owner': 'reference-only-registry-entry-constructor', 'entry': 0x44da8c,
                'sha256': hashlib.sha256(raw).hexdigest()}
            return
        super().code(cpu, address, size, user)

    def setup(self):
        try:
            return super().setup()
        except Exception as error:
            SETUP_FAILURE.append({'status': 'preserved-actual-sdk-static-initializer-frontier',
                'error': str(error), 'pc': self.cpu.reg_read(ar.UC_ARM_REG_PC),
                'lastAccess': self.last_access, 'allowedWrites': self.allowed_writes,
                'instructionWitnesses': list(self.witnesses.values()), 'sourceCreditGranted': 0})
            raise


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    try:
        service.run(output, False)
    except Exception:
        if SETUP_FAILURE:
            (output / 'failure.json').write_text(json.dumps(SETUP_FAILURE[0], indent=2) + '\n')
        raise
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['actualSdkGlobalInitializer'] = sdk_initialized.INITIALIZER
    report['referenceOnlyRegistryConstructor'] = {'entry': 0x44da8c, 'mode': 'ARM',
        'endExclusive': 0x44daa0, 'bytes': 20, 'approvedForInventory': False, 'sourceCreditGranted': 0}
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    path.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(sdk_initialized.INITIALIZER))
