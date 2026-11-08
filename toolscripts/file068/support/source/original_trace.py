import argparse
import json
from pathlib import Path
import struct
import sys


BASE = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(BASE))
import singleton_replay
from unicorn import arm_const as ar


TRACE = []
WORK = {}


class Machine(singleton_replay.Machine):
    def code(self, cpu, address, size, user):
        super().code(cpu, address, size, user)
        if not self.active:
            return
        regs = lambda: [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(4)]
        if address == 0x10c450:
            TRACE.append({'operation': 'initialize'})
        elif address in [0x10c460, 0x10c4a4]:
            values = regs()
            TRACE.append({'operation': 'requirements', 'kind': 0 if address == 0x10c460 else 5,
                'entries': values[0], 'entryBytes': values[1], 'option': values[2]})
        elif address in [0x10c468, 0x10c4ac]:
            TRACE.append({'operation': 'allocate', 'kind': 0 if address == 0x10c468 else 5,
                'logicalBytes': regs()[0]})
        elif address in [0x10c46c, 0x10c4b0]:
            WORK[0 if address == 0x10c46c else 5] = regs()[0]
        elif address == 0x10c48c:
            values = regs()
            option = int.from_bytes(bytes(cpu.mem_read(cpu.reg_read(ar.UC_ARM_REG_SP), 4)), 'little')
            if values[2] != WORK[0]:
                raise ValueError('Original RomFS mount does not receive its actual allocated workspace')
            TRACE.append({'operation': 'mount', 'kind': 0, 'scheme': 'rom:', 'entries': values[0],
                'entryBytes': values[1], 'logicalBytes': values[3], 'option': option})
        elif address == 0x10c4c8:
            values = regs()
            logical, option = struct.unpack('<2I', bytes(cpu.mem_read(cpu.reg_read(ar.UC_ARM_REG_SP), 8)))
            name = bytes(cpu.mem_read(values[0], 7)).split(b'\0')[0].decode('ascii')
            if values[3] != WORK[5]:
                raise ValueError('Original patch mount does not receive its actual allocated workspace')
            TRACE.append({'operation': 'mount', 'kind': 5, 'scheme': name, 'entries': values[1],
                'entryBytes': values[2], 'logicalBytes': logical, 'option': option})


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    report = singleton_replay.singleton_bootstrap.patch_provider.fs_priority.run_component.run(Machine, output)
    if report['status'] != 'original-bootstrap-returned-under-explicit-kernel-contract' or len(TRACE) != 7:
        raise ValueError('Original service-call trace did not close its seven operations')
    report['actualOriginalServiceTrace'] = TRACE
    report['traceProducer'] = {'path': Path(__file__).resolve().as_posix()}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(TRACE))
