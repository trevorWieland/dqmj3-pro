import importlib.util
from pathlib import Path


import pool_observer


ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('frozen068_original_trace', ROOT / 'work/native-file068/recovered-v1/original_trace.py')
original_trace = importlib.util.module_from_spec(spec)
spec.loader.exec_module(original_trace)


class Machine(pool_observer.Machine, original_trace.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.teardown_services = []

    def code(self, cpu, address, size, user):
        super().code(cpu, address, size, user)
        if not self.active:
            return
        ar = pool_observer.device_destructor_reference.destructor_reference.ar
        if address in [0x10c4fc, 0x10c52c]:
            pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
            name = self.read_bytes(pointer, 7).split(b'\0')[0].decode('ascii')
            self.teardown_services.append({'operation': 'unmount', 'scheme': name})
        elif address in [0x10c514, 0x10c538]:
            pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
            kind = 5 if address == 0x10c514 else 0
            expected = int.from_bytes(self.read_bytes(0x89a4e8 + (8 if kind else 4), 4), 'little')
            if pointer != expected:
                raise ValueError('Actual filesystem release does not receive its published workspace')
            self.teardown_services.append({'operation': 'release', 'kind': kind,
                'logicalBytes': 4320 if kind else 8608})
