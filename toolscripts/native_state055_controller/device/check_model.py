import json
from pathlib import Path
import struct
import sys

ROOT = Path.cwd().resolve()
BASE = ROOT / 'work/controller055-probe'
sys.path.insert(0, str(ROOT / 'toolscripts'))
sys.path.insert(0, str(ROOT / 'toolscripts/native_state055_controller'))
sys.path.insert(0, str(ROOT / 'toolscripts/native_state055_controller/device'))
import controller5_program_native as old
import program_native_v2 as new
from controller5_sequence import model_calls
from table_model_v2 import TableModel

inputs = json.loads((ROOT / 'evidence/lanes/native-state055/controller-v5-public/inputs.json').read_text())['inputs']
comparisons = 0
for address in [0x110000000, 0x120000000]:
    for case in inputs:
        before = bytes(old.native_input(case, address))
        first = model_calls(old.model, case, bytearray(before), address)
        second = model_calls(new.model, case, bytearray(before), address)
        assert first == second, (case['label'], address)
        comparisons += 1
alignment_checks = 0
for residue in range(0, 256, 8):
    address = 0x130000000 + residue
    data = bytearray(0x40000)
    struct.pack_into('<I', data, 0xb838, 0xffffffff)
    model = TableModel(data, address)
    for slot, size in enumerate([1024, 512, 64, 512, 512, 512]):
        previous = model.cursor
        result = model.allocate(0xb000, slot, size)
        assert (address + result) % 256 == 0
        assert address + result == ((address + previous + 255) // 256) * 256
        assert result >= previous and model.cursor == result + size
        alignment_checks += 1
result = dict(status='absolute-alignment-model-validated',
    allOriginalFixedBaseCaseResultsUnchanged=comparisons,
    absoluteAlignmentChecks=alignment_checks, nativeBaseResidues=32,
    frozenOrExecutedCodeModified=False, oldFailureRetained=True)
(BASE / 'model-v2-validation.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
print(json.dumps(result))
