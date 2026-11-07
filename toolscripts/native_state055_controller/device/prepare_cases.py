import hashlib
import json
from pathlib import Path
import struct
import subprocess
import sys

ROOT = Path.cwd().resolve()
BASE = ROOT / 'work/controller055-probe'
sys.path.insert(0, str(ROOT / 'toolscripts'))
sys.path.insert(0, str(ROOT / 'toolscripts/native_state055_controller'))
sys.path.insert(0, str(ROOT / 'toolscripts/native_state055_controller/device'))
from program_native_v2 import native_input, model
from controller5_sequence import calls
from controller5_fixture import ARENA, MASK

ADB = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
result = subprocess.run([str(ADB), 'exec-out', 'run-as', 'org.dqm.controllerprobe055', 'cat', 'files/ready.json'],
                        capture_output=True, check=True)
(BASE / 'ready-device.json').write_bytes(result.stdout)
ready = json.loads(result.stdout)
assert ready['status'] == 'waiting-for-declared-controller-fixtures'
base = ready['addresses'][0]
assert base > 0xffffffff and ready['addresses'][2:8] == [8, 262144, 96, 2280, 4016, 792]
assert ready['layout'] == [2280, 4016, 4872, 40, 240, 792, 4116, 0, 8, 16, 24, 32, 48, 56, 8, 16]
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
defaults = image[0x8bf7ac - 0x100000:0x8bfab0 - 0x100000]
assert len(defaults) == 772
words = struct.unpack('<193I', defaults)
assert sorted(word for word in words if word != 189) == list(range(189))
inputs = json.loads((ROOT / 'evidence/lanes/native-state055/controller-v5-public/inputs.json').read_text())['inputs']
assert len(inputs) == 569
folder = BASE / 'case-inputs'
folder.mkdir(exist_ok=False)
cases, expected = [], []
for index, case in enumerate(inputs):
    seed = bytes(native_input(case, base))
    filename = f'case-{index}.bin'
    (folder / filename).write_bytes(seed)
    current = bytearray(seed)
    output, stage, events = None, 0xffffffff, []
    steps, observations = [], []
    control = bytearray(792)
    struct.pack_into('<Q', control, 8, base + 0x30000)
    struct.pack_into('<I', control, 16, stage)
    control[20:] = defaults
    cold = dict(arenaSha256=hashlib.sha256(seed).hexdigest(), controlSha256=hashlib.sha256(control).hexdigest(),
                pair=[base + 0x20000, base + 0x20000 + case['capacity'] * 4], stage=stage)
    for item in calls(case):
        changes = []
        if item.get('clear_attribute_selection'):
            struct.pack_into('<Q', current, 0x30008, 0)
        for change in item['changes']:
            struct.pack_into('<I', current, change['offset'], change['value'] & 0xffffffff)
            changes.extend([change['offset'], change['value'] & 0xffffffff])
        struct.pack_into('<I', current, MASK - ARENA, item['mask'])
        active = dict(case, flags=item['flags'], mask=item['mask'])
        current, output, stage, new_events = model(active, current, base, stage, output)
        events.extend(new_events)
        struct.pack_into('<I', control, 16, stage)
        steps.append(dict(flags=item['flags'], mask=item['mask'], changes=changes,
                          clear=bool(item.get('clear_attribute_selection'))))
        observations.append(dict(arenaSha256=hashlib.sha256(current).hexdigest(),
            controlSha256=hashlib.sha256(control).hexdigest(),
            pair=[base + output, base + 0x20000 + case['capacity'] * 4], stage=stage,
            storageEvents=list(events)))
    cases.append(dict(label=case['label'], seed=filename, capacity=case['capacity'],
                      provider=bool(case.get('storage_provider')), headers=case.get('headers', [0] * 189), calls=steps))
    expected.append(dict(label=case['label'], cold=cold, steps=observations))
    if index % 100 == 0:
        print(index + 1, len(inputs), flush=True)
(folder / 'cases.json').write_text(json.dumps(dict(arenaAddress=base, cases=cases), separators=(',', ':')), encoding='utf-8')
(BASE / 'expected-v2.json').write_text(json.dumps(dict(arenaAddress=base, cases=expected,
    sourceInputsOriginalGameDataPackaged=False, independentModel=True), separators=(',', ':')), encoding='utf-8')
print(json.dumps(dict(programs=len(cases), calls=sum(len(case['calls']) for case in cases),
                      seedBytes=sum(p.stat().st_size for p in folder.glob('*.bin')))))
