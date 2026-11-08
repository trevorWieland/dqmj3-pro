import argparse
import hashlib
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import generated_romfs_provider
import native_effect065_resource_conditions as conditions
from unicorn import arm_const as ar


VIEWS = []


class Machine(generated_romfs_provider.Machine):
    def code(self, cpu, address, size, user):
        if self.active and 0x44df60 <= address < address + size <= 0x44dfa0:
            if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('RomFS file-carrier constructor mode/width differs')
            if any(max(start, 0x44df60) < min(end, 0x44dfa0) for start, end, owner in self.reference.ranges):
                raise ValueError('RomFS file-carrier reference view overlaps frozen ownership')
            raw = bytes(cpu.mem_read(address, size))
            if raw != self.reference.image[address - 0x100000:address - 0x100000 + size]:
                raise ValueError('RomFS file-carrier live instruction bytes differ')
            conditions.observe(cpu, address, size, 'ARM', self.condition_outcomes)
            self.pcs.add(address)
            self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM',
                'owner': 'reference-only-RomFS-file-carrier-constructor', 'entry': 0x44df60,
                'sha256': hashlib.sha256(raw).hexdigest()}
            if not VIEWS:
                VIEWS.append({'entry': 0x44df60, 'mode': 'ARM', 'instructionRanges': [{'start': 0x44df60,
                    'endExclusive': 0x44dfa0, 'bytes': 64, 'sha256': hashlib.sha256(self.reference.image[0x44df60 - 0x100000:0x44dfa0 - 0x100000]).hexdigest()}],
                    'dataRanges': [{'start': 0x44dfa0, 'endExclusive': 0x44dfac, 'bytes': 12,
                        'sha256': hashlib.sha256(self.reference.image[0x44dfa0 - 0x100000:0x44dfac - 0x100000]).hexdigest()}],
                    'approvedForInventory': False, 'sourceCreditGranted': 0})
            return
        super().code(cpu, address, size, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    base = generated_romfs_provider.romfs_mount_pool_v3.romfs_mount_frontier.romfs_large
    base.ELF = Path(__file__).parent / 'build-v2/arm/effect_resource.elf'
    base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['referenceOnlyRomFSConstructor'] = VIEWS
    report['actualSdkGlobalInitializer'] = base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.INITIALIZER
    report['requiredWorkSizeObservations'] = base.romfs_close.SIZES
    report['buildInput'] = service.bootstrap_cells.frontier.pin(base.ELF.resolve())
    report['qualificationFixtureBuild'] = service.bootstrap_cells.frontier.pin(Path(__file__).parent / 'fixture-build-v2.json')
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['generated_romfs_provider.py', 'romfs_mount_pool_v3.py', 'romfs_mount_frontier.py', 'romfs_large.py', 'romfs_close.py', 'romfs_read.py', 'romfs_fixture.py', 'sdk_initialized_v2.py', 'sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    path.write_text(json.dumps(report, indent=2) + '\n')
