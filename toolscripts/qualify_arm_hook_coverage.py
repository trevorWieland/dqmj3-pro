import argparse
import hashlib
import unicorn
import io
import json
from pathlib import Path
import struct
import subprocess
from elftools.elf.elffile import ELFFile
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_R0, UC_ARM_REG_LR, UC_ARM_REG_SP

ROOT = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser()
parser.add_argument('--output', default='work/arm-hook-coverage')
args = parser.parse_args()
BASE = (ROOT / args.output).resolve()
if not BASE.is_relative_to((ROOT / 'work').resolve()):
    raise ValueError('Coverage probe output must remain under work/')
BASE.mkdir(parents=True, exist_ok=False)
source = BASE / 'probe.c'
source.write_bytes(b'int predicate_probe(int value) { return value == 1 ? 17 : 29; }\n')
obj, linked = BASE / 'probe.o', BASE / 'probe.elf'
commands = [
    [ROOT / 'tools/clang-21/clang.exe', '--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2',
     '-ffreestanding', '-fno-stack-protector', '-fno-unwind-tables', '-c', source, '-o', obj],
    [ROOT / 'tools/clang-21/ld.lld.exe', '-Ttext=0x10000', '-e', 'predicate_probe', obj, '-o', linked],
]
for index, argv in enumerate(commands):
    result = subprocess.run(list(map(str, argv)), capture_output=True)
    (BASE / (str(index) + '.log')).write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Predication probe compilation/link failed')
elf = ELFFile(io.BytesIO(linked.read_bytes()))
segments = [p for p in elf.iter_segments() if p['p_type'] == 'PT_LOAD' and p['p_memsz']]
low = min(p['p_vaddr'] for p in segments) & ~4095
high = (max(p['p_vaddr'] + p['p_memsz'] for p in segments) + 4095) & ~4095
rows = []
for value in [0, 1]:
    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    cpu.mem_map(low, high - low)
    for segment in segments:
        cpu.mem_write(segment['p_vaddr'], segment.data())
    cpu.mem_map(0x200000, 0x10000)
    cpu.mem_map(0x400000, 4096)
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(UC_ARM_REG_SP, 0x208000)
    cpu.reg_write(UC_ARM_REG_LR, 0x400000)
    cpu.reg_write(UC_ARM_REG_R0, value)
    hooks = []
    def observe(machine, address, size, userdata):
        word = struct.unpack('<I', machine.mem_read(address, 4))[0]
        condition = word >> 28
        flags = machine.reg_read(UC_ARM_REG_CPSR)
        zero = bool(flags & (1 << 30))
        passed = zero if condition == 0 else not zero if condition == 1 else True if condition == 14 else None
        hooks.append(dict(pc=address, word=word, condition=condition, cpsr=flags,
            conditionSatisfiedBeforeInstruction=passed))
    cpu.hook_add(UC_HOOK_CODE, observe)
    cpu.emu_start(elf['e_entry'], 0x400000, count=100)
    answer = cpu.reg_read(UC_ARM_REG_R0)
    if answer != (17 if value == 1 else 29):
        raise ValueError('Synthetic predicate result differs')
    rows.append(dict(input=value, returnedValue=answer, hooks=hooks))
false_hooks = [dict(input=row['input'], **hook) for row in rows for hook in row['hooks']
    if hook['conditionSatisfiedBeforeInstruction'] is False]
result = dict(status='isolated-compiled-ARM-predication-hook-probe-complete',
    compilerSha256=hashlib.sha256((ROOT / 'tools/clang-21/clang.exe').read_bytes()).hexdigest(),
    linkerSha256=hashlib.sha256((ROOT / 'tools/clang-21/ld.lld.exe').read_bytes()).hexdigest(),
    syntheticCSourceSha256=hashlib.sha256(source.read_bytes()).hexdigest(),
    syntheticElfSha256=hashlib.sha256(linked.read_bytes()).hexdigest(),
    commands=[list(map(str, argv)) for argv in commands], rows=rows,
    hookEventsWithFalsePredicate=false_hooks,
    hookEncounterProvesConditionSatisfiedExecution=not bool(false_hooks),
    runtime=dict(packageVersion=unicorn.__version__, nativeVersion=unicorn.uc_version(),
        nativeDlls=[dict(path=p.relative_to(ROOT).as_posix(), sha256=hashlib.sha256(p.read_bytes()).hexdigest())
            for p in Path(unicorn.__file__).parent.rglob('*.dll')]),
    producerSha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    originalGameCodeInputsOrStateUsed=False, sourceCreditGranted=0)
(BASE / 'report.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(falsePredicateHookEvents=len(false_hooks),
    compiledFunctionResultsCorrect=True, sourceCreditGranted=0)))
