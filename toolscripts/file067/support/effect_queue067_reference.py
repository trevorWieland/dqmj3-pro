import argparse
import hashlib
import json
from pathlib import Path
import unicorn
from unicorn import arm_const as ar

import effect_request066_device_reference as predecessor


ROOT = predecessor.ROOT


class Machine(predecessor.Machine):
    def __init__(self, elf, create_thread=False):
        super().__init__(elf)
        self.functions.update(queue_manager_construct067=0x10c550)
        packet = json.loads((ROOT / 'work/native-effect065/queue067/descriptor-views-v1.json').read_text())
        if packet['moduleSha256'] != hashlib.sha256(self.reference.image).hexdigest():
            raise ValueError('Manager reference descriptor module changed')
        self.descriptor_views = {}
        for row in packet['functions']:
            if row['approvedForInventory'] or row['sourceCreditGranted']:
                raise ValueError('Reference descriptor view unexpectedly grants admission')
            for span in row['instructionRanges']:
                if hashlib.sha256(self.reference.image[span['start'] - 0x100000:span['endExclusive'] - 0x100000]).hexdigest() != span['sha256']:
                    raise ValueError('Actual manager descriptor bytes changed')
                for pc in range(span['start'], span['endExclusive'], 4):
                    self.descriptor_views[pc] = row['entry']
        self.tls = 0x7000000
        self.cpu.mem_map(self.tls, 4096)
        self.cpu.reg_write(ar.UC_ARM_REG_C13_C0_3, self.tls)
        self.kernel_frontiers = []
        self.allow_create_thread = create_thread
        self.thread_contract = None
        self.tls_accesses = []

    def code(self, cpu, address, size, user):
        if hasattr(self, 'descriptor_views') and address in self.descriptor_views:
            if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('Manager descriptor instruction mode/width changed')
            raw = bytes(cpu.mem_read(address, size))
            if raw != self.reference.image[address - 0x100000:address - 0x100000 + size]:
                raise ValueError('Manager descriptor live instruction bytes changed')
            predecessor.reference.conditions.observe(cpu, address, size, 'ARM', self.condition_outcomes)
            self.pcs.add(address)
            self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM',
                'owner': 'reference-only-manager-descriptor', 'entry': self.descriptor_views[address],
                'sha256': hashlib.sha256(raw).hexdigest()}
            return
        super().code(cpu, address, size, user)

    def read(self, cpu, access, address, size, value, user):
        if self.active and self.tls <= address < address + size <= self.tls + 4096:
            self.tls_accesses.append({'operation': 'read', 'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size})
            return
        super().read(cpu, access, address, size, value, user)

    def write(self, cpu, access, address, size, value, user):
        if self.active and self.tls <= address < address + size <= self.tls + 4096:
            self.tls_accesses.append({'operation': 'write', 'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size})
            return
        super().write(cpu, access, address, size, value, user)

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        row = {'interrupt': number, 'pc': pc,
            'cpsr': cpu.reg_read(ar.UC_ARM_REG_CPSR), 'tls': cpu.reg_read(ar.UC_ARM_REG_C13_C0_3),
            'registers': [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(8)]}
        self.kernel_frontiers.append(row)
        instruction = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and instruction == 0xef000008 and self.allow_create_thread:
            priority, entry, argument, stack, processor = row['registers'][:5]
            if self.thread_contract is not None or priority != 47 or entry != 0x12d640 or argument != stack or stack % 8 or processor != 0xfffffffe:
                raise ValueError('Actual worker CreateThread ABI differs from measured contract')
            self.thread_contract = {'operation': 'CreateThread', 'handle': 0x6700400, 'entry': entry,
                'argument': argument, 'stack': stack, 'priority': priority, 'processor': processor,
                'state': 'runnable-not-yet-scheduled', 'sourceCreditGranted': 0}
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            cpu.reg_write(ar.UC_ARM_REG_R1, self.thread_contract['handle'])
            return
        raise ValueError('Stopped at actual reference OS boundary without supplying a result')


def run(build, output, create_thread=False):
    if output.exists():
        raise ValueError('Preserve actual manager/worker initialization frontier')
    output.mkdir(parents=True)
    machine = Machine(build / 'arm/effect_resource.elf', create_thread)
    machine.setup()
    machine.owner_prepare(predecessor.generated_file())
    machine.invoke('effect_cached_fixture_reset065', [1, 7, machine.image])
    manager = machine.invoke('cached_sdk_allocate065', [machine.sdk_heap, 8, 4])
    machine.active = True
    try:
        returned = machine.invoke('queue_manager_construct067', [manager])
    except Exception as error:
        report = {'status': 'preserved-actual-file-worker-constructor-frontier', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'kernelFrontiers': machine.kernel_frontiers, 'tlsAccesses': machine.tls_accesses,
            'allocations': machine.allocations(), 'instructionWitnesses': list(machine.witnesses.values()),
            'sourceCreditGranted': 0, 'nativeGameOrOSQualified': False}
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        print(json.dumps({'status': report['status'], 'error': str(error), 'pc': report['pc']}))
        return report
    if not create_thread or returned != manager or machine.thread_contract is None:
        raise ValueError('Manager constructor return/OS contract differs')
    machine.active = False
    worker = int.from_bytes(machine.read_bytes(manager + 4, 4), 'little')
    report = {'status': 'actual-manager-worker-constructor-returned-under-reference-thread-contract',
        'managerPointer': manager, 'workerPointer': worker, 'managerRawHex': machine.read_bytes(manager, 8).hex(),
        'threadContract': machine.thread_contract, 'allocations': machine.allocations(),
        'kernelCalls': machine.kernel_frontiers, 'tlsAccesses': machine.tls_accesses,
        'instructionWitnesses': list(machine.witnesses.values()), 'sourceCreditGranted': 0,
        'nativeGameOrOSQualified': False, 'workerScheduled': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'worker': worker, 'workerScheduled': False}))
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--create-thread', action='store_true')
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve(), args.create_thread)
