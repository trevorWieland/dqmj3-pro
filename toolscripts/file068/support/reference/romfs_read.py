import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import sdk_initialized_v2
import romfs_fixture
from unicorn import arm_const as ar


class Machine(sdk_initialized_v2.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 5:
            words = struct.unpack('<6I', bytes(cpu.mem_read(self.tls + 0x80, 24)))
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800003 or words[:5] != (0x80200c2, 0, 0, 40, 0x28c):
                raise ValueError('Actual first RomFS header read input differs')
            pointer = words[5]
            if not self.stack <= pointer < pointer + 40 <= self.stack + 0x10000:
                raise ValueError('RomFS header destination is outside bounded caller stack')
            data = romfs_fixture.image()[:40]
            response = [0x8020080, 0, 40]
            self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                'requestInitializedWords': list(words), 'suppliedBytes': 40, 'destination': pointer,
                'suppliedDataSHA256': hashlib.sha256(data).hexdigest(), 'responseWords': response,
                'suppliedStatus': 0, 'responseSupplied': True, 'physicalServiceExecuted': False})
            cpu.mem_write(pointer, data)
            cpu.mem_write(self.tls + 0x80, struct.pack('<3I', *response))
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    try:
        service.run(output, False)
    except Exception:
        if sdk_initialized_v2.SETUP_FAILURE:
            (output / 'failure.json').write_text(json.dumps(sdk_initialized_v2.SETUP_FAILURE[0], indent=2) + '\n')
        raise
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['actualSdkGlobalInitializer'] = sdk_initialized_v2.sdk_initialized.INITIALIZER
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['romfs_fixture.py', 'sdk_initialized_v2.py', 'sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    (output / 'generated-empty.romfs').write_bytes(romfs_fixture.image())
    report['generatedRomFS'] = service.bootstrap_cells.frontier.pin(output / 'generated-empty.romfs')
    report['publicProtocolReferences'] = ['https://github.com/devkitPro/libctru/blob/master/libctru/include/3ds/romfs.h',
        'https://github.com/devkitPro/libctru/blob/master/libctru/source/romfs_dev.c',
        'https://github.com/devkitPro/libctru/blob/master/libctru/source/services/fs.c']
    report['limits'].append('Entire RomFS image is newly generated empty metadata; no original archive or asset bytes enter this provider.')
    path.write_text(json.dumps(report, indent=2) + '\n')
