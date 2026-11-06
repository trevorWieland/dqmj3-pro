import argparse
import hashlib
import importlib
import io
import json
import platform
import random
import subprocess
import sys
from pathlib import Path

import elftools
import unicorn
from elftools.elf.elffile import ELFFile
from unicorn import Uc, UcError
from unicorn.arm_const import (
    UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0,
    UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4,
    UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8,
    UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12,
    UC_ARM_REG_SP, UC_CPU_ARM_1176,
)


ROOT = Path(__file__).resolve().parents[1]
DEFAULT_CLANG = ROOT / "tools/clang-21/clang.exe"
CODE = 0x100000
SENTINEL = 0x101000
STACK = 0x200000
STACK_SIZE = 0x2000
SCRATCH = 0x300000
MASK = 0xFFFFFFFF
REGISTERS = [
    UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
    UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
    UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
    UC_ARM_REG_R12,
]
SOURCES = {
    "correct": "typedef unsigned int u32;\nu32 probe(u32 x, u32 y) { return ((x << 7) | (x >> 25)) ^ (y + 0x9e3779b9u); }\n",
    "wrong": "typedef unsigned int u32;\nu32 probe(u32 x, u32 y) { return ((x << 7) | (x >> 25)) ^ (y + 0x9e3779bau); }\n",
    "nonreturn": "typedef unsigned int u32;\nu32 probe(u32 x, u32 y) { for (;;) { } }\n",
    "write": "typedef unsigned int u32;\nu32 probe(u32 x, u32 y) { *(volatile u32 *)0x300000 = x; return y; }\n",
}


class ValidationFailure(RuntimeError):
    pass


def digest(path):
    with Path(path).open("rb") as source:
        return hashlib.file_digest(source, "sha256").hexdigest()


def expected(x, y):
    rotated = ((x * 128) % 2**32) + x // 2**25
    return rotated ^ ((y + 2654435769) % 2**32)


def vectors():
    edges = [0, 1, 2, 0x7F, 0xFFFFFF, 0x1FFFFFF, 0x2000000,
             0x7FFFFFFF, 0x80000000, 0xFFFFFFFF]
    result = [(x, y) for x in edges for y in edges]
    rng = random.Random(0x4A335052)
    result.extend((rng.getrandbits(32), rng.getrandbits(32)) for _ in range(128))
    return result


def compile_image(clang, name, output, source_text=None):
    source = output / (name + ".c")
    executable = output / (name + ".elf")
    source.write_text(SOURCES[name] if source_text is None else source_text, encoding="utf-8")
    command = [str(clang), "--target=armv6k-none-eabi", "-march=armv6k",
               "-marm", "-mfloat-abi=soft", "-O2", "-ffreestanding",
               "-fno-builtin", "-fno-stack-protector", "-nostdlib",
               "-fuse-ld=lld", "-Wl,-Ttext=0x100000", "-Wl,-e,probe",
               "-Wl,--build-id=none", str(source), "-o", str(executable)]
    compiled = subprocess.run(command, capture_output=True, text=True, timeout=60)
    (output / (name + "-compile.json")).write_text(json.dumps({
        "argv": command, "returncode": compiled.returncode,
        "stdout": compiled.stdout, "stderr": compiled.stderr,
    }, indent=2) + "\n", encoding="utf-8")
    if compiled.returncode:
        raise ValidationFailure("Compiler rejected " + name + ": " + compiled.stderr)
    data = executable.read_bytes()
    elf = ELFFile(io.BytesIO(data))
    text = elf.get_section_by_name(".text")
    symbols = elf.get_section_by_name(".symtab")
    symbol = symbols.get_symbol_by_name("probe")[0]
    if elf["e_machine"] != "EM_ARM" or not elf.little_endian:
        raise ValidationFailure("Unexpected ELF architecture")
    if text["sh_addr"] != CODE or symbol["st_value"] != CODE:
        raise ValidationFailure("Unexpected text placement or ARM entry mode")
    size = symbol["st_size"]
    if size != text["sh_size"] or not 0 < size < 4096:
        raise ValidationFailure("Unqualified text extent")
    if any(section["sh_type"] in ("SHT_REL", "SHT_RELA") and section.num_relocations()
           for section in elf.iter_sections()):
        raise ValidationFailure("Unresolved relocations")
    code = text.data()
    return code, {"sourceSha256": digest(source), "elfSha256": digest(executable),
                  "textSha256": hashlib.sha256(code).hexdigest(), "textSize": size,
                  "entry": CODE, "mode": "ARM", "compileArgv": command}


def execute(code, x, y, budget=64, entry=CODE):
    machine = Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.ctl_set_cpu_model(UC_CPU_ARM_1176)
    code_page = entry & ~4095
    sentinel = code_page + 4096
    machine.mem_map(code_page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    machine.mem_write(entry, code)
    machine.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    machine.mem_map(STACK, STACK_SIZE)
    machine.mem_map(SCRATCH, 4096)
    stack_data = bytes((i * 37 + 11) & 255 for i in range(STACK_SIZE))
    scratch_data = bytes((i * 19 + 3) & 255 for i in range(4096))
    machine.mem_write(STACK, stack_data)
    machine.mem_write(SCRATCH, scratch_data)
    machine.reg_write(UC_ARM_REG_CPSR, 0x10)
    seeded = {register: (0x5A000000 + index * 0x10203) & MASK
              for index, register in enumerate(REGISTERS)}
    for register, value in seeded.items():
        machine.reg_write(register, value)
    machine.reg_write(UC_ARM_REG_R0, x)
    machine.reg_write(UC_ARM_REG_R1, y)
    initial_sp = STACK + STACK_SIZE - 16
    machine.reg_write(UC_ARM_REG_SP, initial_sp)
    machine.reg_write(UC_ARM_REG_LR, sentinel)
    observations = {"returned": False, "instructions": 0, "visited": set()}

    def instruction_hook(uc, address, size, unused):
        if address == sentinel:
            observations["returned"] = True
            uc.emu_stop()
            return
        if not entry <= address < entry + len(code):
            raise ValidationFailure("Undeclared instruction address")
        observations["instructions"] += 1
        observations["visited"].add(address)

    def write_hook(uc, access, address, size, value, unused):
        raise ValidationFailure("Unexpected memory write at " + hex(address))

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction_hook)
    machine.hook_add(unicorn.UC_HOOK_MEM_WRITE, write_hook)
    try:
        machine.emu_start(entry, sentinel + 4, timeout=100000, count=budget)
    except UcError as error:
        raise ValidationFailure("Emulation fault: " + str(error)) from error
    if not observations["returned"] or machine.reg_read(UC_ARM_REG_PC) != sentinel:
        raise ValidationFailure("No actual return within execution bounds")
    if machine.reg_read(UC_ARM_REG_SP) != initial_sp:
        raise ValidationFailure("Stack pointer not preserved")
    if machine.reg_read(UC_ARM_REG_LR) != sentinel:
        raise ValidationFailure("Leaf return register not preserved")
    if machine.reg_read(UC_ARM_REG_CPSR) & 0x3F != 0x10:
        raise ValidationFailure("Unexpected return CPU mode")
    if any(machine.reg_read(register) != seeded[register] for register in REGISTERS[4:12]):
        raise ValidationFailure("Callee-saved register not preserved")
    if machine.mem_read(STACK, STACK_SIZE) != stack_data:
        raise ValidationFailure("Unexpected stack effect")
    if machine.mem_read(SCRATCH, 4096) != scratch_data:
        raise ValidationFailure("Unexpected scratch effect")
    return {"result": machine.reg_read(UC_ARM_REG_R0),
            "instructions": observations["instructions"],
            "visited": sorted(observations["visited"])}


def run_smoke(clang=DEFAULT_CLANG, output=None):
    clang = Path(clang).resolve(strict=True)
    output = Path(output or ROOT / "work/validation-smoke").resolve()
    allowed = (ROOT / "work/validation-smoke").resolve()
    if output != allowed and allowed not in output.parents:
        raise ValidationFailure("Output must remain beneath work/validation-smoke")
    output.mkdir(parents=True, exist_ok=True)
    banner = subprocess.run([str(clang), "--version"], capture_output=True,
                            text=True, timeout=15, check=True).stdout
    images = {}
    artifacts = {}
    for name in SOURCES:
        images[name], artifacts[name] = compile_image(clang, name, output)
    cases = vectors()
    visited = set()
    correct_returns = 0
    wrong_returns = 0
    wrong_rejections = 0
    maximum_instructions = 0
    for x, y in cases:
        correct = execute(images["correct"], x, y)
        wrong = execute(images["wrong"], x, y)
        correct_returns += 1
        wrong_returns += 1
        visited.update(correct["visited"])
        maximum_instructions = max(maximum_instructions, correct["instructions"])
        if correct["result"] != expected(x, y):
            raise ValidationFailure("Correct source failed semantic model")
        wrong_rejections += wrong["result"] != expected(x, y)
    if wrong_rejections != len(cases):
        raise ValidationFailure("Wrong-source control escaped rejection")
    control_failures = {}
    for name in ("nonreturn", "write"):
        try:
            execute(images[name], 0x12345678, 0x9ABCDEF0)
        except ValidationFailure as error:
            control_failures[name] = str(error)
        else:
            raise ValidationFailure("Control escaped guard: " + name)
    unicorn_native = Path(importlib.import_module("unicorn.unicorn_py3.unicorn").uclib._name)
    report = {
        "status": "passed", "scope": "synthetic ARMv6K infrastructure smoke only",
        "recoveredGameFunctions": 0, "acceptedSourceBytes": 0,
        "nativeGameExecution": False, "compiler": {"path": str(clang),
            "sha256": digest(clang), "banner": banner,
            "linkerSha256": digest(clang.with_name("ld.lld.exe")),
            "distributedDllSha256": {path.name: digest(path)
                for path in sorted(clang.parent.glob("*.dll"))}},
        "python": {"path": sys.executable, "version": platform.python_version(),
            "sha256": digest(sys.executable)},
        "unicorn": {"version": unicorn.__version__, "bindingPath": unicorn.__file__,
            "bindingSha256": digest(unicorn.__file__), "cpuModel": "ARM1176",
            "nativeLibraryPath": str(unicorn_native),
            "nativeLibrarySha256": digest(unicorn_native)},
        "harnessSha256": digest(__file__),
        "pyelftoolsVersion": elftools.__version__, "artifacts": artifacts,
        "caseCount": len(cases), "randomSeed": "0x4A335052",
        "correctActualReturns": correct_returns, "wrongActualReturns": wrong_returns,
        "wrongSemanticRejections": wrong_rejections,
        "originalGameComparisons": 0, "correctInstructionAddresses": sorted(visited),
        "maximumCorrectInstructions": maximum_instructions,
        "instructionBudget": 64, "timeBudgetMicroseconds": 100000,
        "guardRejections": control_failures,
        "unsupported": ["3DS operating system and services", "floating point",
            "TLS and concurrency", "game executable behavior", "hardware timing"],
    }
    (output / "report.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    return report


def run_game_leaf(clang=DEFAULT_CLANG, output=None):
    clang = Path(clang).resolve(strict=True)
    output = Path(output or ROOT / "work/validation-smoke/game-leaf").resolve()
    allowed = (ROOT / "work/validation-smoke").resolve()
    if output != allowed and allowed not in output.parents:
        raise ValidationFailure("Output must remain beneath work/validation-smoke")
    output.mkdir(parents=True, exist_ok=True)
    module = ROOT / "generated/update-content0/code.bin"
    module_hash = "d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"
    span_hash = "30f7485fe70c574e37434ee2f7d4f42ac7262881f4f302057c6440173b7a11b6"
    if digest(module) != module_hash:
        raise ValidationFailure("Game module identity mismatch")
    original = module.read_bytes()[0x59180C:0x591820]
    if hashlib.sha256(original).hexdigest() != span_hash:
        raise ValidationFailure("Game span identity mismatch")
    prefix = "typedef unsigned int u32;\n"
    candidate, candidate_info = compile_image(clang, "game_candidate", output,
        prefix + "u32 probe(u32 x, u32 unused) { return x >= 1u && x <= 10u; }\n")
    wrong, wrong_info = compile_image(clang, "game_wrong", output,
        prefix + "u32 probe(u32 x, u32 unused) { return x >= 1u && x <= 11u; }\n")
    edges = [0, 1, 2, 8, 9, 10, 11, 12, 127, 128, 255, 256, 65535, 65536,
             0x7FFFFFFE, 0x7FFFFFFF, 0x80000000, 0x80000001, 0xFFFFFFFE, MASK]
    rng = random.Random(0x69180C)
    cases = [(x, y) for x in edges for y in (0, MASK)]
    cases.extend((rng.getrandbits(32), rng.getrandbits(32)) for _ in range(128))
    visited = set()
    wrong_rejections = []
    for index, (x, y) in enumerate(cases):
        native = execute(original, x, y, entry=0x69180C)
        rebuilt = execute(candidate, x, y)
        rejected = execute(wrong, x, y)
        visited.update(native["visited"])
        model = int(x in range(1, 11))
        if native["result"] != model or rebuilt["result"] != model:
            raise ValidationFailure("Game leaf behavior mismatch for " + hex(x))
        if rejected["result"] != native["result"]:
            wrong_rejections.append({"case": index, "x": x, "y": y,
                                     "original": native["result"], "wrong": rejected["result"]})
    if not wrong_rejections:
        raise ValidationFailure("Game wrong-source control escaped semantic rejection")
    if visited != set(range(0x69180C, 0x691820, 4)):
        raise ValidationFailure("Game leaf instruction coverage incomplete")
    if digest(module) != module_hash:
        raise ValidationFailure("Game input changed during execution")
    native_library = Path(importlib.import_module("unicorn.unicorn_py3.unicorn").uclib._name)
    report = {
        "status": "bounded-behavior-candidate-passed", "acceptedSourceBytes": 0,
        "acceptedRecoveredFunctions": 0, "sourceAcceptance": "pending boundary review and coordinator gates",
        "identity": {"label": "update-content0", "programId": "00040000001acb00",
            "modulePath": str(module), "moduleSha256": module_hash,
            "address": "0x0069180c", "fileOffset": "0x0059180c", "mode": "ARM",
            "completeCandidateBytes": 20, "spanSha256": span_hash, "literalPoolBytes": 0},
        "inferredMeaning": "unsigned input is in inclusive range 1 through 10",
        "candidate": candidate_info, "wrongCandidate": wrong_info,
        "isolatedTextBytesEqual": candidate == original,
        "compiler": {"path": str(clang), "sha256": digest(clang),
            "linkerSha256": digest(clang.with_name("ld.lld.exe")),
            "distributedDllSha256": {path.name: digest(path)
                for path in sorted(clang.parent.glob("*.dll"))},
            "banner": subprocess.run([str(clang), "--version"], capture_output=True,
                text=True, timeout=15, check=True).stdout},
        "python": {"path": sys.executable, "version": platform.python_version(),
            "sha256": digest(sys.executable)},
        "unicorn": {"version": unicorn.__version__, "cpuModel": "ARM1176",
            "nativeLibraryPath": str(native_library), "nativeLibrarySha256": digest(native_library)},
        "harnessSha256": digest(__file__), "caseCount": len(cases),
        "originalActualReturns": len(cases), "candidateActualReturns": len(cases),
        "wrongCandidateActualReturns": len(cases), "wrongSemanticRejections": wrong_rejections,
        "originalInstructionAddresses": sorted(visited), "instructionBudget": 64,
        "timeBudgetMicroseconds": 100000, "randomSeed": "0x69180C",
        "observations": ["r0", "r4-r11 preserved", "SP and leaf LR preserved",
            "actual ARM user-mode return", "no CPU memory writes", "stack and scratch unchanged"],
        "unsupported": ["universal equivalence", "original function naming and type declaration",
            "historical compiler identification", "caller-clobbered register and flag equality",
            "independent Ghidra boundary review", "whole-module source link",
            "full-game or hardware execution", "other revisions"],
    }
    (output / "report.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--clang", type=Path, default=DEFAULT_CLANG)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--game-leaf", action="store_true")
    args = parser.parse_args()
    if args.game_leaf:
        report = run_game_leaf(args.clang, args.output)
        print(json.dumps({"status": report["status"], "caseCount": report["caseCount"],
            "isolatedTextBytesEqual": report["isolatedTextBytesEqual"],
            "wrongSemanticRejectionCount": len(report["wrongSemanticRejections"]),
            "acceptedSourceBytes": 0}, indent=2))
        return
    report = run_smoke(args.clang, args.output)
    print(json.dumps({key: report[key] for key in (
        "status", "scope", "caseCount", "correctActualReturns",
        "wrongSemanticRejections", "guardRejections", "acceptedSourceBytes")}, indent=2))


if __name__ == "__main__":
    main()
