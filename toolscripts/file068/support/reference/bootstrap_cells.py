import argparse
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import frontier
from unicorn import arm_const as ar


ROOT = frontier.ROOT
CELLS = [(0x8ec120, 0x28, 'SDK-initialization-recursive-mutex-pair'),
    (0x8c0370, 12, 'SDK-initialization-flag-refcount-service-handle'),
    (0x89a4e8, 12, 'filesystem-state'), (0x898154, 4, 'manager-singleton')]


class Machine(frontier.BootstrapMachine):
    def __init__(self, elf):
        super().__init__(elf)
        self.allowed_writes = []

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'allowed_writes'):
            for start, extent, role in CELLS:
                if start <= address < address + size <= start + extent:
                    self.allowed_writes.append({'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address,
                        'bytes': size, 'value': value, 'role': role})
                    self.last_access = self.allowed_writes[-1]
                    return
        super().write(cpu, access, address, size, value, user)


def run(output):
    output.mkdir(exist_ok=False)
    elf = ROOT / 'work/queue067-public-input-v1/full-v1/build/arm/effect_resource.elf'
    machine = Machine(elf)
    machine.setup()
    before = [{'start': start, 'bytes': size, 'role': role, 'hex': machine.read_bytes(start, size).hex()} for start, size, role in CELLS]
    machine.active = True
    try:
        result = machine.invoke('file_bootstrap068', [])
        outcome = {'status': 'actual-original-bootstrap-returned', 'incidentalR0': result}
    except Exception as error:
        outcome = {'status': 'preserved-original-bootstrap-frontier', 'error': str(error), 'exception': type(error).__name__}
    machine.active = False
    report = {**outcome, 'entry': 0x1054f8, 'mode': 'ARM', 'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC),
        'lastAccess': machine.last_access, 'globalCellsBefore': before,
        'globalCellsAfter': [{'start': start, 'bytes': size, 'role': role, 'hex': machine.read_bytes(start, size).hex()} for start, size, role in CELLS],
        'allowedWrites': machine.allowed_writes, 'callEntries': machine.bootstrap_callers,
        'kernelFrontiers': machine.kernel_frontiers, 'tlsAccesses': machine.tls_accesses,
        'globalSingletonAndRegistrySeeded': False, 'filesystemMountSubstituted': False,
        'instructionWitnesses': list(machine.witnesses.values()), 'dependencies': [machine.reference.dependency(entry) for entry in [0x1054f8, 0x10c444, 0x113d34, 0x13db70]],
        'producer': frontier.pin(Path(__file__)), 'baseProducer': frontier.pin(Path(frontier.__file__)),
        'buildInput': frontier.pin(elf), 'sourceCreditGranted': 0, 'nativeOSOrGameQualified': False,
        'originalInstructionBytesModified': False, 'limits': ['Only explicit measured global cells added to original memory guard.',
            'Existing067 synthetic allocator fixture supplies heap services; no service or kernel result invented at this boundary.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: report[key] for key in ['status', 'pc', 'lastAccess', 'kernelFrontiers']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.output.resolve())
