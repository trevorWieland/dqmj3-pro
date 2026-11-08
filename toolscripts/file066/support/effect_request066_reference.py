import argparse
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect065_cached_reference as cached
import native_effect065_resource_conditions as conditions


ROOT = cached.owner.common.ROOT


class Machine(cached.Machine):
    def __init__(self, elf):
        super().__init__(elf)
        helpers = {name: row for name, row in self.graph['functions'].items() if name.startswith(('request_', 'effect_request_'))}
        self.fixture.update(helpers)
        self.functions.update({name: row['address'] for name, row in helpers.items()})
        self.functions.update({name: address for name, address in [
            ('request_resolve066', 0x156b34), ('request_construct066', 0x153cc8),
            ('request_ready066', 0x145aac), ('request_bytes066', 0x145ac0), ('request_length066', 0x6ec780),
            ('request_load066', 0x5f35bc), ('request_delete066', 0x5f3634), ('request_factory066', 0x127e6c)]})
        self.request_heap = self.invoke('effect_request_user_heap066', []) if 'effect_request_user_heap066' in self.functions else self.sdk_heap
        self.scratch = (self.base + 0xc000, self.base + 0xf000)
        self.events = []
        self.bss_reads = []
        measurement = json.loads((ROOT / 'work/native-effect065/request-frontier-v1/measurement.json').read_text())
        if measurement['moduleSha256'] != cached.owner.common.hashlib.sha256(self.reference.image).hexdigest():
            raise ValueError('Private task entry measurement module differs')
        self.task_views = {}
        supplements = json.loads((ROOT / 'work/native-effect065/request066/getter-supplements-v1.json').read_text())
        if supplements['moduleSha256'] != measurement['moduleSha256'] or supplements['approvedForInventory']:
            raise ValueError('Supplementary private getter view identity/admission differs')
        extra = [{**row, 'instructionRanges': row['ranges']} for row in supplements['functions']]
        for row in measurement['methodCandidates'] + extra:
            for part in row['instructionRanges']:
                raw = self.reference.image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                if cached.owner.common.hashlib.sha256(raw).hexdigest() != part['sha256']:
                    raise ValueError('Private task instruction extent differs')
                for pc in range(part['start'], part['endExclusive'], 4):
                    self.task_views[pc] = row['entry']

    def code(self, cpu, address, size, user):
        if hasattr(self, 'task_views') and address in self.task_views:
            if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('Private reference task instruction mode/width differs')
            raw = bytes(cpu.mem_read(address, size))
            expected = self.reference.image[address - 0x100000:address - 0x100000 + size]
            if raw != expected:
                raise ValueError('Private reference task instruction bytes differ')
            conditions.observe(cpu, address, size, 'ARM', self.condition_outcomes)
            self.pcs.add(address)
            self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM',
                'owner': 'reference-only-private-task-entry', 'entry': self.task_views[address],
                'sha256': cached.owner.common.hashlib.sha256(raw).hexdigest()}
            return
        super().code(cpu, address, size, user)

    def read(self, cpu, access, address, size, value, user):
        if self.active and self.original and self.reference.writable[0] <= address < address + size <= self.reference.writable[1]:
            self.bss_reads.append({'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size})
            return
        try:
            super().read(cpu, access, address, size, value, user)
        except Exception:
            self.last_rejected_read = {'address': address, 'bytes': size, 'pc': cpu.reg_read(ar.UC_ARM_REG_PC)}
            raise

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'scratch') and self.scratch[0] <= address < address + size <= self.scratch[1]:
            return
        super().write(cpu, access, address, size, value, user)

    def resolve(self, path):
        encoded = path.encode('utf-16le') + b'\0\0'
        if len(encoded) > 512:
            raise ValueError('Request path exceeds initialized bounded caller input')
        self.path, self.output = self.scratch[0], self.scratch[0] + 1024
        self.cpu.mem_write(self.scratch[0], bytes([0xa5]) * (self.scratch[1] - self.scratch[0]))
        self.cpu.mem_write(self.path, encoded)
        self.cpu.mem_write(self.output, struct.pack('<I', 0x8f9cf4))
        self.active = True
        result = self.invoke('request_resolve066', [0, self.output, 0x89a4f4, 5, self.path])
        self.active = False
        pointer = int.from_bytes(self.read_bytes(self.output, 4), 'little')
        length = int.from_bytes(self.read_bytes(pointer - 4, 4), 'little')
        if length > 255:
            raise ValueError('Original path output exceeds independently bounded reader')
        raw = self.read_bytes(pointer, (length + 1) * 2)
        self.events.append({'phase': 'resolve', 'result': result, 'path': path,
            'outputPointer': pointer, 'outputCodeUnits': length, 'outputUtf16Hex': raw.hex()})
        return result, pointer

    def construct(self, selector, path):
        self.task = self.invoke('cached_sdk_allocate065', [self.sdk_heap, 60, 128])
        if not self.task:
            raise ValueError('Declared retained reference allocation did not supply task backing')
        before = self.read_bytes(self.task, 60)
        self.active = True
        result = self.invoke('request_construct066', [self.task, selector, path, self.request_heap, 128])
        self.active = False
        self.events.append({'phase': 'construct', 'result': result, 'taskPointer': self.task,
            'selector': selector, 'alignment': 128, 'beforeHex': before.hex(),
            'afterHex': self.read_bytes(self.task, 60).hex()})
        return result

    def getters(self):
        self.active = True
        ready = self.invoke('request_ready066', [self.task])
        data = self.invoke('request_bytes066', [self.task])
        low = self.invoke('request_length066', [self.task + 8])
        high = self.cpu.reg_read(ar.UC_ARM_REG_R1)
        self.active = False
        self.events.append({'phase': 'getters', 'ready': ready, 'dataPointer': data, 'lengthLow': low, 'lengthHigh': high})

    def load(self):
        self.active = True
        result = self.invoke('request_load066', [self.task])
        self.active = False
        self.events.append({'phase': 'load', 'incidentalR0NotAnApiReturn': result})

    def destroy(self):
        self.active = True
        result = self.invoke('request_delete066', [self.task])
        self.active = False
        self.events.append({'phase': 'destroy', 'incidentalR0NotAnApiReturn': result})

    def factory(self, path):
        self.path = self.scratch[0]
        self.manager = self.scratch[0] + 1024
        encoded = path.encode('utf-16le') + b'\0\0'
        self.cpu.mem_write(self.scratch[0], bytes([0xa5]) * (self.scratch[1] - self.scratch[0]))
        self.cpu.mem_write(self.path, encoded)
        self.cpu.mem_write(self.manager, struct.pack('<II', 0x66000001, 0))
        self.active = True
        self.task = self.invoke('request_factory066', [self.manager, self.path, 5, self.request_heap, 128])
        self.active = False
        self.events.append({'phase': 'sync-factory', 'taskPointer': self.task, 'path': path,
            'pathSourceSelector': 5, 'payloadAlignment': 128, 'managerScope': 'measured first8-byte view; resolver worker is unused for ROM path',
            'afterHex': self.read_bytes(self.task, 60).hex()})

    def allocations(self):
        count = int.from_bytes(self.read_bytes(self.state + self.layout['allocations'], 4), 'little')
        rows = []
        for slot in range(count):
            record = struct.unpack('<6I', self.read_bytes(self.state + self.layout['records'] + slot * 24, 24))
            payload = self.state + self.layout['heap'] + slot * self.layout['heapStride'] + self.layout['payloadOffset']
            rows.append({'slot': slot, 'record': record, 'pointer': payload,
                'rawHex': self.read_bytes(payload, record[1]).hex()})
        return rows


def run(output):
    if output.exists():
        raise ValueError('Preserve actual request reference attempt')
    output.mkdir(parents=True)
    build = ROOT / 'work/native-effect065/request066/reference-build-v1/arm/effect_resource.elf'
    machine = Machine(build)
    machine.setup()
    try:
        machine.factory('rom:/data/Effect/ef00007.pef')
        machine.getters()
        machine.destroy()
    except Exception as error:
        report = {'status': 'preserved-real-request-reference-stop', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'events': machine.events, 'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
            'lastRejectedRead': getattr(machine, 'last_rejected_read', None), 'declaredHeaderMappedWritableReads': machine.bss_reads,
            'allocations': machine.allocations(),
            'conditionOutcomes': conditions.serializable(machine.condition_outcomes), 'sourceCreditGranted': 0}
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        raise
    report = {'status': 'actual-request-resolver-returned', 'events': machine.events,
        'declaredHeaderMappedWritableReads': machine.bss_reads,
        'allocations': machine.allocations(),
        'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
        'conditionOutcomes': conditions.serializable(machine.condition_outcomes), 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'events': machine.events, 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.output.resolve())
