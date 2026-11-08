import json
from pathlib import Path

import romfs_constructor_view


BASE = Path(__file__).resolve().parent


def run(machine_type, output):
    base = romfs_constructor_view.generated_romfs_provider.romfs_mount_pool_v3.romfs_mount_frontier.romfs_large
    base.ELF = BASE / 'build-v2/arm/effect_resource.elf'
    base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    instances = []

    class Capture(machine_type):
        def __init__(self, elf, respond_initialize=False):
            super().__init__(elf, respond_initialize)
            instances.append(self)

    service.Machine = Capture
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    machine = instances[0]
    report.update(actualSdkGlobalInitializer=base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.INITIALIZER,
        referenceOnlyRomFSConstructor=romfs_constructor_view.VIEWS,
        requiredWorkSizeObservations=base.romfs_close.SIZES,
        buildInput=service.bootstrap_cells.frontier.pin(base.ELF),
        qualificationFixtureBuild=service.bootstrap_cells.frontier.pin(BASE / 'fixture-build-v2.json'),
        kernelContractProducers=[service.bootstrap_cells.frontier.pin(item) for item in sorted(BASE.glob('*.py'))],
        managerSingleton=int.from_bytes(machine.read_bytes(0x898154, 4), 'little'),
        filesystemState=[int.from_bytes(machine.read_bytes(0x89a4e8 + index * 4, 4), 'little') for index in range(3)],
        generatedHandleStates=machine.generated_handles, generatedProviderOperations=machine.generated_io)
    path.write_text(json.dumps(report, indent=2) + '\n')
    return report
