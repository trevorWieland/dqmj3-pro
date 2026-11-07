import ctypes
import json
import hashlib

import squirrel_lookup020_oracle as frozen
from squirrel_lookup023_build import entrypoints, ROOT
from native_wave014_oracle import original_image
from squirrel_lookup023_locale import initialize, LOCALE
from squirrel_lookup023_runtime import execute
from squirrel_vm_call022_oracle import ORIGINAL_SPANS as CALL_SPANS
from squirrel_lookup023_native_inputs import literals


REDIRECT = dict(frozen.REDIRECT, sq_instance_get_meta023=0x1cdaec)
REDIRECT.update({'sq_vm_call022':0x17ffac,'sq_vm_call_native022':0x196f6c,
    'sq_vm_array_native022':0x1b33dc,'sq_opaque_array_create012':0x665a44,
    'sq_opaque_array_release012':0x665bd4,'sq_opaque_array_destroy012':0x665c60})
frozen_machine = frozen.machine
last_locale_observation = None


def machine(sections, original):
    global last_locale_observation
    cpu = frozen_machine(sections, original)
    if original: last_locale_observation = initialize(cpu)
    return cpu


class Arm(frozen.Arm):
    def __init__(self, sections, symbols, functions, original=False, runtime_discovery=False):
        super().__init__(sections, entrypoints(symbols), functions, original, runtime_discovery)
        self.create_machine = machine
        self.redirect = REDIRECT
        self.allowed_services = {'sq_vm_publish_stack022','sq_vm_publish_calls022','sq_vm_set_call_stack022',
            'sq_vm_set_call_count022','sq_vm_set_allocated_calls022','sq_vm_set_current022','sq_vm_set_native_depth022',
            'sq_vm_call_count022','sq_vm_native_depth022','sq_vm_current022','sq_vm_call_stack022','sq_vm_stack_vector022',
            'sq_opaque_array_allocate012','sq_reallocate'}
        self.native_invoke = True
        self.allocations = {0x19b3a4: 'sq_table_allocate019', 0x16b6a0: 'sq_string_allocate_value015',
            0x16b74c: 'sq_string_allocate_buckets015', 0x233b98: 'sq_weak_allocate014'}
        self.allocations[0x665a58] = 'sq_opaque_array_allocate012'
        self.spans.append((0x1cdaec, 0x1cdb18))
        self.spans += CALL_SPANS
        record = json.loads((ROOT/'evidence/lanes/squirrel-vm-call022/measurement.json').read_text())
        self.data += [(row['address'],row['address']+row['bytes']) for row in record['classifiedData']]
        self.data += [(row['address'],row['endExclusive']) for row in literals()]
        array_claim = json.loads((ROOT/'evidence/lanes/squirrel-array-release007/claim.json').read_text())
        self.data += [(row['endExclusive'],row['endExclusive']+row['poolBytes'])
            for row in array_claim['functions'] if row['poolBytes']]
        self.data.append((LOCALE, LOCALE + 20))
        path = ROOT / 'evidence/lanes/squirrel-lookup023/reference-sdk-exchange.json'
        if original and not runtime_discovery and path.exists():
            record = json.loads(path.read_text()); image = original_image()
            if hashlib.sha256(image).hexdigest() != record['moduleSha256']:
                raise ValueError('023 reference SDK module changed')
            for row in record['instructionWitnesses']:
                data = image[row['address'] - 0x100000:row['address'] - 0x100000 + row['bytes']]
                if hashlib.sha256(data).hexdigest() != row['sha256']:
                    raise ValueError('023 reference SDK instruction changed')
                self.sdk_code[row['address']] = (row['mode'], row['bytes'])
            for row in record['dataReadWitnesses']:
                data = image[row['address'] - 0x100000:row['address'] - 0x100000 + row['bytes']]
                if hashlib.sha256(data).hexdigest() != row['sha256']:
                    raise ValueError('023 reference SDK data changed')
                self.sdk_data.add((row['address'], row['bytes']))

    def execute(self, variant, cleanup=0):
        return execute(self, variant, cleanup)


class Windows(frozen.Windows):
    def __init__(self, path):
        super().__init__(path)
        self.module.fixture_prepare020 = self.module.fixture_prepare023
        self.module.fixture_prepare020.argtypes = [ctypes.c_uint32, ctypes.c_uint32]
        self.module.fixture_execute020 = self.module.fixture_execute023
        self.module.fixture_execute020.restype = ctypes.c_uint32
        self.module.fixture_snapshot020 = self.module.fixture_snapshot023
        self.module.fixture_snapshot020.argtypes = [ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot020.restype = ctypes.c_uint32
