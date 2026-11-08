import argparse
import hashlib
import json
from pathlib import Path
import sys


ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from unicorn import arm_const as ar
from effect_queue067_reference import Machine


def pin(path):
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


class BootstrapMachine(Machine):
    def __init__(self, elf):
        super().__init__(elf)
        self.functions.update(file_bootstrap068=0x1054f8, file_shutdown068=0x10555c,
            filesystem_bootstrap068=0x10c444, file_request_global068=0x12d6b0)
        self.last_access = None
        self.bootstrap_writes = []
        self.bootstrap_callers = []

    def code(self, cpu, address, size, user):
        if self.active and hasattr(self, 'bootstrap_callers'):
            if address in [0x1054f8, 0x10555c, 0x10c444, 0x113d34, 0x113df4, 0x113e1c, 0x12336c, 0x123070, 0x123114, 0x10c550]:
                self.bootstrap_callers.append({'pc': address, 'arguments': [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(4)]})
        super().code(cpu, address, size, user)

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'last_access'):
            self.last_access = {'operation': 'write', 'address': address, 'bytes': size, 'value': value,
                'pc': cpu.reg_read(ar.UC_ARM_REG_PC)}
        super().write(cpu, access, address, size, value, user)

    def read(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'last_access'):
            self.last_access = {'operation': 'read', 'address': address, 'bytes': size,
                'pc': cpu.reg_read(ar.UC_ARM_REG_PC)}
        super().read(cpu, access, address, size, value, user)


def run(output, entry):
    output.mkdir(exist_ok=False)
    elf = ROOT / 'work/queue067-public-input-v1/full-v1/build/arm/effect_resource.elf'
    machine = BootstrapMachine(elf)
    machine.setup()
    before = {hex(address): machine.read_bytes(address, length).hex() for address, length in [(0x898154, 4), (0x89a4e8, 12), (0x8e3470, 512)]}
    machine.active = True
    try:
        result = machine.invoke(entry, [0, 1, 1] if entry == 'filesystem_bootstrap068' else [])
        outcome = {'status': 'actual-original-bootstrap-returned', 'incidentalR0': result}
    except Exception as error:
        outcome = {'status': 'preserved-original-bootstrap-frontier', 'error': str(error), 'exception': type(error).__name__}
    machine.active = False
    report = {**outcome, 'entry': machine.functions[entry], 'mode': 'ARM',
        'canonicalModuleSha256': hashlib.sha256(machine.reference.image).hexdigest(),
        'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
        'lastAccess': machine.last_access, 'callEntries': machine.bootstrap_callers,
        'kernelFrontiers': machine.kernel_frontiers, 'tlsAccesses': machine.tls_accesses,
        'beforeHex': before, 'globalSingletonAndRegistrySeeded': False,
        'inputPreconditions': ['Frozen067 synthetic allocator/provider fixture initialized.',
            'Existing reference setup supplies explicit heap/SDK service inputs; filesystem startup itself is executed.'],
        'instructionWitnesses': list(machine.witnesses.values()), 'referencePins': machine.reference.pins,
        'producer': pin(Path(__file__)), 'buildInput': pin(elf), 'sourceCreditGranted': 0,
        'nativeOSOrGameQualified': False, 'originalInstructionBytesModified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: report[key] for key in ['status', 'entry', 'pc', 'lastAccess']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    parser.add_argument('--entry', default='file_bootstrap068', choices=['file_bootstrap068', 'filesystem_bootstrap068'])
    args = parser.parse_args()
    run(args.output.resolve(), args.entry)
