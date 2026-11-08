import argparse
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import romfs_close


ROOT = romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier.bootstrap_cells.ROOT
ELF = Path(__file__).resolve().parent / 'build-v1/arm/effect_resource.elf'


class Machine(romfs_close.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(ELF, respond_initialize)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['actualSdkGlobalInitializer'] = romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.INITIALIZER
    report['requiredWorkSizeObservations'] = romfs_close.SIZES
    report['buildInput'] = service.bootstrap_cells.frontier.pin(ELF)
    report['qualificationFixtureBuild'] = service.bootstrap_cells.frontier.pin(Path(__file__).parent / 'fixture-build.json')
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['romfs_close.py', 'romfs_read.py', 'romfs_fixture.py', 'sdk_initialized_v2.py', 'sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    report['limits'].append('Fresh qualification fixture raises only physical backing capacity; all game logical budgets are unchanged.')
    path.write_text(json.dumps(report, indent=2) + '\n')
