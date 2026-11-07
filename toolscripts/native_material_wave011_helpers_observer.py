import io
import struct
from pathlib import Path
from unittest.mock import patch

from elftools.elf.elffile import ELFFile
import unicorn
from unicorn.unicorn_py3.arch.arm import UcAArch32
from unicorn.arm_const import UC_ARM_REG_PC

from native_material_wave011_build import ROOT, sha
import native_material_wave011_oracle as oracle


def header_range(case):
    wire = case['replacement'] if case['replacement'] and case['mode'] == 2 else case['wire']
    flags = struct.unpack_from('<I', wire, 36)[0]
    if not flags & 0x80000 or case['allocationFails']:
        return None
    offset = (flags & 3) * 32 + (flags >> 2 & 3) * 20 + (flags >> 4 & 3) * 8
    offset += min(flags >> 20 & 7, 6) * 12 + (flags >> 9 & 1) * 8
    offset += (2 if flags & 0x1000 else flags >> 10 & 1) * 4
    offset += (flags >> 15 & 3) * 20 + (flags >> 17 & 1) * 8
    return oracle.STORAGE + offset, oracle.STORAGE + offset + 28


def function_ranges(receipt):
    elf = ELFFile(io.BytesIO((ROOT / receipt['linkedElf']['path']).read_bytes()))
    table = elf.get_section_by_name('.symtab')
    return {symbol.name: (symbol['st_value'], symbol['st_value'] + symbol['st_size']) for symbol in table.iter_symbols()
        if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']}


def observe(raw, closed, case, seed, blocks=(), ranges=None):
    watched = header_range(case)
    if watched is None:
        raise ValueError('Observer requires an allocated detailed material')
    if ranges is None:
        allocator_ranges = [(span['start'], span['endExclusive']) for span in closed[0x19fdf4]['ranges']]
        ctor_range = (0x554a30, 0x5555fc)
    else:
        allocator_ranges = [ranges['fn_0019fdf4']]
        ctor_range = ranges['fn_00554a30']
    finalized, initialized, violations, api_reads, boundaries = set(), set(), [], [], []
    default_writes, final_writes = [], []
    class ObservedCpu(UcAArch32):
        def __new__(cls, *args, **kwargs):
            return object.__new__(cls)

        def __init__(self, *args, **kwargs):
            super().__init__(*args, **kwargs)

        def ctl_set_cpu_model(self, model):
            super().ctl_set_cpu_model(model)
            self.hook_add(unicorn.UC_HOOK_MEM_READ, self.read_event)
            self.hook_add(unicorn.UC_HOOK_MEM_WRITE, self.write_event)
            self.hook_add(unicorn.UC_HOOK_CODE, self.code_event)

        def touched(self, address, size):
            return set(range(max(address, watched[0]), min(address + size, watched[1])))

        def read_event(self, cpu, access, address, size, value, user):
            touched = self.touched(address, size)
            pc = self.reg_read(UC_ARM_REG_PC)
            if touched and initialized and touched - finalized and not any(low <= pc < high for low, high in allocator_ranges):
                violations.append({'kind': 'CPU-read-before-constructor-overwrite', 'pc': pc,
                    'address': address, 'bytes': size})

        def write_event(self, cpu, access, address, size, value, user):
            touched = self.touched(address, size)
            if not touched:
                return
            pc = self.reg_read(UC_ARM_REG_PC)
            if any(low <= pc < high for low, high in allocator_ranges):
                initialized.update(touched)
                default_writes.append({'pc': pc, 'address': address, 'bytes': size})
            elif ctor_range[0] <= pc < ctor_range[1]:
                finalized.update(touched)
                final_writes.append({'pc': pc, 'address': address, 'bytes': size})
            else:
                violations.append({'kind': 'Unexpected-writer-of-transient-header', 'pc': pc,
                    'address': address, 'bytes': size})

        def mem_read(self, address, size):
            pc = self.reg_read(UC_ARM_REG_PC)
            if pc in [oracle.RESOLVE, oracle.ALLOCATE] and initialized:
                api_reads.append({'service': pc, 'address': address, 'bytes': size})
                if self.touched(address, size) - finalized:
                    violations.append({'kind': 'Service-read-before-constructor-overwrite', 'pc': pc,
                        'address': address, 'bytes': size})
                if not oracle.INPUT + 0x4000 <= address < address + size <= oracle.INPUT + 0x8000:
                    violations.append({'kind': 'Service-read-outside-declared-name-domain', 'pc': pc,
                        'address': address, 'bytes': size})
            return super().mem_read(address, size)

        def code_event(self, cpu, address, size, user):
            if address == oracle.RESOLVE and initialized and len(finalized) < 28:
                snapshot = super().mem_read(watched[0], 28)
                boundaries.append({'service': address, 'transientHeaderSha256': sha(snapshot),
                    'bytesOverwrittenByConstructor': len(finalized)})
    with patch.object(oracle.unicorn, 'Uc', ObservedCpu):
        result = oracle.execute(raw, closed, case, seed, blocks, ctor_range[0])
    if len(initialized) != 28 or len(finalized) != 28:
        raise ValueError('Observer did not witness complete default initialization and constructor overwrite')
    metadata = {'headerRange': {'start': watched[0], 'bytes': 28},
        'allocatorInitializedBytes': len(initialized), 'constructorOverwroteBytes': len(finalized),
        'defaultWrites': default_writes, 'finalWrites': final_writes, 'serviceApiReads': api_reads,
        'boundariesBeforeOverwrite': boundaries, 'readPolicyViolations': violations,
        'returnedNormally': result['returned']}
    return result, metadata
