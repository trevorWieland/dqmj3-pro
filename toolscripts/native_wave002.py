import argparse
import collections
import concurrent.futures
import hashlib
import importlib
import io
import json
import random
import struct
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
from capstone.arm import ARM_CC_AL, ARM_INS_B, ARM_INS_BL, ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_REG_LR, ARM_REG_R0
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_CPU_ARM_1176


ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / "evidence/lanes/wave002-native"
DEFAULT_WORK = ROOT / "work/wave002-native/build"
MODULE_SHA = "d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"
CLAIM_SHA = "53c0cf7e2ba68d36b850ac95a1ce8ff9cae557efe792f5b21ad0585524af84e4"
FLAGS = ["--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-O2", "-ffreestanding", "-ffunction-sections", "-fno-unwind-tables", "-fno-asynchronous-unwind-tables"]
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    return {"path": str(path.resolve()), "sha256": digest(path.read_bytes()), "bytes": path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")


def run(argv, log, receipts):
    result = subprocess.run([str(x) for x in argv], capture_output=True, timeout=90)
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({"argv": [str(x) for x in argv], "exitCode": result.returncode, "log": record(log)})
    if result.returncode:
        raise RuntimeError("Compiler/linker failed: " + str(log))


def inspect_elf(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    symbols = elf.get_section_by_name(".symtab")
    if elf["e_machine"] != "EM_ARM" or not elf.little_endian:
        raise RuntimeError("Unexpected ELF architecture")
    result = {}
    for symbol in symbols.iter_symbols():
        if not symbol.name.startswith("fn_") or not isinstance(symbol["st_shndx"], int):
            continue
        section = elf.get_section(symbol["st_shndx"])
        start = symbol["st_value"] - section["sh_addr"]
        relocations = []
        for rel in elf.iter_sections():
            if isinstance(rel, RelocationSection) and rel["sh_info"] == symbol["st_shndx"]:
                relocations.extend({"offset": x["r_offset"], "type": x["r_info_type"]} for x in rel.iter_relocations())
        if symbol.name in result:
            raise RuntimeError("Duplicate ELF symbol")
        result[symbol.name] = {"address": symbol["st_value"], "size": symbol["st_size"],
            "section": section.name, "sectionBytes": section["sh_size"],
            "code": section.data()[start:start + symbol["st_size"]], "relocations": relocations}
    unresolved = [s.name for s in symbols.iter_symbols() if s.name and s["st_shndx"] == "SHN_UNDEF"]
    if unresolved:
        raise RuntimeError("Undeclared symbol dependencies: " + str(unresolved))
    return result


def boundaries(claim, original, census):
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    functions = {row["address"]: row for row in census["functions"]}
    incoming = collections.defaultdict(list)
    for row in functions.values():
        for target in row["calledFunctionAddresses"]:
            incoming[target].append(row)
    entries = {row["address"] for row in claim["intervals"]}
    interiors = {a + off for a in entries for off in (4, 8)}
    refs = collections.defaultdict(list)
    for index, (word,) in enumerate(struct.iter_unpack("<I", original[:census["initializedTextGrossBytes"]])):
        if word & 0x0E000000 != 0x0A000000 or word >> 28 == 15:
            continue
        delta = (word & 0xFFFFFF) << 2
        if delta & 0x2000000:
            delta -= 0x4000000
        address = 0x100000 + index * 4
        target = address + 8 + delta
        if target in interiors:
            raise RuntimeError("Interior raw ARM branch needs separate alias review")
        if target in entries:
            refs[target].append(address)
    result = {}
    for row in claim["intervals"]:
        address = row["address"]
        raw = original[address - 0x100000:address - 0x100000 + 12]
        if digest(raw) != row["sha256"] or row["bytes"] != 12:
            raise RuntimeError("Claim span identity changed")
        body = list(engine.disasm(raw, address))
        if len(body) != 3 or sum(i.size for i in body) != 12:
            raise RuntimeError("Unqualified complete getter body")
        for index, instruction in enumerate(body[:2]):
            operands = instruction.operands
            expected = row["pointerFieldOffset"] if index == 0 else row["recordFieldOffset"]
            if instruction.cc != ARM_CC_AL or instruction.writeback or len(operands) != 2:
                raise RuntimeError("Conditional or writeback getter")
            if operands[0].type != ARM_OP_REG or operands[0].reg != ARM_REG_R0:
                raise RuntimeError("Getter return register mismatch")
            if operands[1].type != ARM_OP_MEM or operands[1].mem.base != ARM_REG_R0 or operands[1].mem.index or operands[1].mem.disp != expected:
                raise RuntimeError("Getter memory interpretation mismatch")
        if body[0].mnemonic != "ldr" or body[1].mnemonic != row["load"]:
            raise RuntimeError("Getter load width mismatch")
        if body[2].mnemonic != "bx" or body[2].cc != ARM_CC_AL or body[2].operands[0].reg != ARM_REG_LR:
            raise RuntimeError("Getter does not unconditionally return")
        ghidra = functions[address]
        if ghidra["mode"] != "ARM" or ghidra["ranges"] != [{"start": address, "endExclusive": address + 12, "bytes": 12}]:
            raise RuntimeError("Independent Ghidra boundary mismatch")
        found = None
        for caller in incoming[address]:
            for site in refs[address]:
                if caller["mode"] != "ARM" or not any(x["start"] <= site < x["endExclusive"] for x in caller["ranges"]):
                    continue
                call = list(engine.disasm(original[site - 0x100000:site - 0x100000 + 4], site))
                if len(call) == 1 and call[0].id in (ARM_INS_B, ARM_INS_BL) and call[0].operands[0].type == ARM_OP_IMM and call[0].operands[0].imm == address:
                    found = {"callerFunction": caller["address"], "callsite": site,
                        "kind": "direct-call" if call[0].id == ARM_INS_BL else "tail-branch",
                        "instruction": call[0].mnemonic + " " + call[0].op_str,
                        "callsiteSha256": digest(original[site - 0x100000:site - 0x100000 + 4])}
                    break
            if found:
                break
        if found is None:
            raise RuntimeError("No qualified incoming caller for " + hex(address))
        result[address] = {"ghidraRanges": ghidra["ranges"], "caller": found,
            "instructions": [{"address": i.address, "mnemonic": i.mnemonic, "operands": i.op_str} for i in body],
            "poolBytes": 0, "interiorDirectArmBranches": [], "remaining": "indirect entries and original historical types not inferred"}
    return result


def execute(code, address, layout, value, seed, geometry, invalid=None):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    cpu.mem_map(address & ~4095, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, code)
    sentinel = 0x5000000
    cpu.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(0x2000000, 8192)
    cpu.mem_map(0x3000000, 8192, unicorn.UC_PROT_READ)
    cpu.mem_map(0x3100000, 8192, unicorn.UC_PROT_READ)
    rng = random.Random(seed)
    root = bytearray(rng.randbytes(8192))
    record_memory = bytearray(rng.randbytes(8192))
    stack = rng.randbytes(8192)
    root_address = 0x3000000 + geometry
    target_address = 0x3100000 + (geometry ^ 0x1C)
    pointer = target_address if invalid != "record" else 0x70000000
    first = geometry + layout["pointerFieldOffset"]
    second = (geometry ^ 0x1C) + layout["recordFieldOffset"]
    root[first:first + 4] = struct.pack("<I", pointer)
    width = layout["width"]
    scalar = value & ((1 << (width * 8)) - 1)
    record_memory[second:second + width] = scalar.to_bytes(width, "little")
    model = int.from_bytes(record_memory[second:second + width], "little", signed=layout["signed"]) & 0xFFFFFFFF
    cpu.mem_write(0x3000000, bytes(root))
    cpu.mem_write(0x3100000, bytes(record_memory))
    cpu.mem_write(0x2000000, stack)
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[0] = root_address if invalid != "root" else 0
    initial[-2:] = [0x2001000, sentinel]
    cpsr = (rng.getrandbits(4) << 28) | 0x10
    cpu.reg_write(UC_ARM_REG_CPSR, cpsr)
    for register, data in zip(REGS, initial):
        cpu.reg_write(register, data)
    reads = []
    writes = []
    visited = []

    def instruction(uc, pc, size, unused):
        if not address <= pc < address + len(code):
            raise RuntimeError("Undeclared instruction execution")
        visited.append(pc)

    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, size, data, user: reads.append([a, size]))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, size, data, user: writes.append([a, size]))
    cpu.emu_start(address, sentinel, count=16, timeout=100000)
    if cpu.reg_read(UC_ARM_REG_PC) != sentinel:
        raise RuntimeError("No actual return within instruction/time bounds")
    final = [cpu.reg_read(register) for register in REGS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:]:
        raise RuntimeError("Callee-saved register, SP or LR violation")
    if cpu.reg_read(UC_ARM_REG_CPSR) & 0x3F != 0x10:
        raise RuntimeError("Return CPU mode violation")
    if reads != [[root_address + layout["pointerFieldOffset"], 4], [target_address + layout["recordFieldOffset"], width]] or writes:
        raise RuntimeError("Unexpected memory access trace")
    if cpu.mem_read(0x3000000, 8192) != root or cpu.mem_read(0x3100000, 8192) != record_memory or cpu.mem_read(0x2000000, 8192) != stack:
        raise RuntimeError("Unexpected memory state change")
    return {"result": final[0], "model": model, "registers": final,
        "cpsr": cpu.reg_read(UC_ARM_REG_CPSR), "reads": reads, "visited": visited}


def prove(job):
    layout = job["layout"]
    values = [0, 1, 0x7F, 0x80, 0xFF, 0x7FFF, 0x8000, 0xFFFF, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0xA55A91C3]
    cases = []
    visited = set()
    for index, (value, geometry) in enumerate((v, g) for v in values for g in (0, 0xFC)):
        native = execute(job["original"], layout["address"], layout, value, 0x335200 + index, geometry)
        source = execute(job["compiled"], layout["address"], layout, value, 0x335200 + index, geometry)
        if native != source or native["result"] != native["model"]:
            raise RuntimeError("Original/source/model behavior mismatch")
        visited.update(native["visited"])
        cases.append({"value": value, "geometry": geometry, "originalU32": native["result"],
                      "stateDigest": digest(json.dumps(native, sort_keys=True).encode())})
    if visited != set(range(layout["address"], layout["address"] + 12, 4)):
        raise RuntimeError("Owned instruction coverage incomplete")
    wrong = execute(job["wrong"], job["wrongAddress"], layout, 0x5A, 1, 0)
    if wrong["result"] == wrong["model"]:
        raise RuntimeError("Genuinely compiled wrong source escaped semantic rejection")
    invalid = []
    for kind in ("root", "record"):
        try:
            execute(job["original"], layout["address"], layout, 0, 1, 0, kind)
        except unicorn.UcError as error:
            if error.errno != unicorn.UC_ERR_READ_UNMAPPED:
                raise
            invalid.append({"kind": kind, "error": error.errno, "actualReturns": 0})
        else:
            raise RuntimeError("Unmapped pointer control returned")
    return {"address": layout["address"], "cases": len(cases), "originalActualReturns": len(cases),
        "sourceActualReturns": len(cases), "caseDigest": digest(json.dumps(cases, sort_keys=True).encode()),
        "ownedInstructionAddresses": sorted(visited), "allPassed": True,
        "wrongSourceControl": {"returnedToSentinel": True, "actualReturn": wrong["result"],
            "expectedReturn": wrong["model"], "semanticRejection": True}, "invalidPointerControls": invalid}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path, default=DEFAULT_WORK)
    parser.add_argument("--workers", type=int, choices=(1, 2, 3), default=2)
    args = parser.parse_args()
    work = args.output.resolve()
    if not work.is_relative_to(ROOT / "work/wave002-native"):
        raise RuntimeError("Work path escapes lane root")
    work.mkdir(parents=True, exist_ok=True)
    original_path = ROOT / "generated/update-content0/code.bin"
    original = original_path.read_bytes()
    claim_path = EVIDENCE / "claim.json"
    layout_path = EVIDENCE / "semantic-layouts.json"
    census_path = ROOT / "evidence/lanes/inventory-wave001/ghidra-functions.json"
    if digest(original) != MODULE_SHA or record(claim_path)["sha256"] != CLAIM_SHA:
        raise RuntimeError("Canonical module or exclusive claim changed")
    claim = json.loads(claim_path.read_text())
    spec = json.loads(layout_path.read_text())
    if spec["claimSha256"] != CLAIM_SHA or record(census_path)["sha256"] != claim["ghidraFunctionsSha256"]:
        raise RuntimeError("Boundary/semantic input identity changed")
    analysis_pins = [record(claim_path), record(layout_path), record(census_path)]
    census = json.loads(census_path.read_text())
    proof = boundaries(claim, original, census)
    layouts = {row["address"]: row for row in spec["layouts"]}
    if set(layouts) != set(proof) or len(layouts) != len(claim["intervals"]):
        raise RuntimeError("Incomplete source or boundary inventory")
    source_pins = [record(ROOT / "src/native/wave002/types.h")]
    if source_pins[0]["sha256"] != spec["typesHeaderSha256"]:
        raise RuntimeError("Types header changed")
    clang = ROOT / "tools/clang-21/clang.exe"
    linker = ROOT / "tools/clang-21/ld.lld.exe"
    receipts = []
    objects = []
    wrong_objects = []
    object_rows = {}
    for unit in spec["units"]:
        source = ROOT / unit["source"]
        header = ROOT / unit["header"]
        if record(source)["sha256"] != unit["sourceSha256"] or record(header)["sha256"] != unit["headerSha256"]:
            raise RuntimeError("Frozen ordinary C/header changed")
        source_pins.extend([record(source), record(header)])
        obj = work / (source.stem + ".o")
        run([clang, *FLAGS, "-c", source, "-o", obj], work / (source.stem + ".log"), receipts)
        objects.append(obj)
        for name, data in inspect_elf(obj).items():
            address = int(name[3:], 16)
            raw = original[address - 0x100000:address - 0x100000 + 12]
            if data["code"] != raw or data["size"] != 12 or data["sectionBytes"] != 12 or data["relocations"]:
                raise RuntimeError("Exact complete object gate failed: " + name)
            object_rows[address] = {"data": data, "path": obj, "source": source, "header": header}
        wrong_source = work / (source.stem + "-wrong.c")
        text = source.read_text()
        wrong_text = __import__("re").sub(r"return (handle->record->field_[0-9a-f]+);", r"return \1 ^ 1;", text)
        if wrong_text == text:
            raise RuntimeError("No wrong-source control emitted")
        wrong_source.write_text(wrong_text, encoding="utf-8")
        wrong_obj = work / (source.stem + "-wrong.o")
        run([clang, *FLAGS, "-I", source.parent, "-c", wrong_source, "-o", wrong_obj], work / (source.stem + "-wrong.log"), receipts)
        wrong_objects.append(wrong_obj)
    if set(object_rows) != set(layouts):
        raise RuntimeError("Object function inventory incomplete")
    def link(objects, name, wrong=False):
        script = work / (name + ".ld")
        lines = ["SECTIONS {"]
        for index, address in enumerate(sorted(layouts)):
            symbol = layouts[address]["symbol"]
            target = 0x6000000 + index * 0x40 if wrong else address
            lines.append("  .text." + symbol + " " + hex(target) + " : { *(.text." + symbol + ") }")
        lines.extend(["  /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) }", "}"])
        script.write_text("\n".join(lines) + "\n", encoding="utf-8")
        elf = work / (name + ".elf")
        run([linker, "-m", "armelf", "--no-undefined", "--build-id=none", "-T", script,
             "-o", elf, *objects], work / (name + "-link.log"), receipts)
        return elf, inspect_elf(elf)
    linked_path, linked = link(objects, "source-linked")
    wrong_path, wrong = link(wrong_objects, "wrong-linked", True)
    if set(linked) != {x["symbol"] for x in layouts.values()} or set(wrong) != set(linked):
        raise RuntimeError("Linked function inventory incomplete")
    jobs = []
    for address, layout in sorted(layouts.items()):
        native = original[address - 0x100000:address - 0x100000 + 12]
        row = linked[layout["symbol"]]
        if row["address"] != address or row["size"] != 12 or row["code"] != native or row["relocations"]:
            raise RuntimeError("Real linked complete span differs from original")
        bad = wrong[layout["symbol"]]
        jobs.append({"layout": layout, "original": native, "compiled": row["code"], "wrong": bad["code"], "wrongAddress": bad["address"]})
    behaviors = {}
    with concurrent.futures.ProcessPoolExecutor(max_workers=args.workers) as pool:
        futures = [pool.submit(prove, job) for job in jobs]
        for number, future in enumerate(concurrent.futures.as_completed(futures), 1):
            result = future.result()
            behaviors[result["address"]] = result
            if number % 16 == 0 or number == len(jobs):
                print(json.dumps({"behaviorFunctionsComplete": number, "total": len(jobs)}), flush=True)
    rows = []
    for address, layout in sorted(layouts.items()):
        item = object_rows[address]
        raw = original[address - 0x100000:address - 0x100000 + 12]
        rows.append({"canonicalIdentity": {"build": "owner-archive-update", "programId": "0004000e001acb00",
            "module": "content0/.code-decompressed", "moduleSha256": MODULE_SHA, "address": address, "mode": "ARM"},
            "symbol": layout["symbol"], "source": record(item["source"]), "header": record(item["header"]),
            "object": record(item["path"]), "objectSection": item["data"]["section"],
            "objectSymbolBytes": 12, "objectSymbolSha256": digest(raw), "originalSpanSha256": digest(raw),
            "instructionBytes": 12, "poolBytes": 0, "bodyRelocations": [], "unresolvedSymbols": [],
            "linkedElf": record(linked_path), "linkedSymbolAddress": address, "linkedSymbolBytes": 12,
            "linkedSymbolSha256": digest(raw), "exactObjectSpan": True, "exactLinkedSpan": True,
            "semanticLayout": layout, "boundaryEvidence": proof[address], "behavior": behaviors[address],
            "abi": "AAPCS32; r0 aligned valid handle pointer; raw u32 or signed-extended s32 result",
            "status": "candidate-standalone-exact", "fullModuleIntegrated": False, "acceptedRecoveredSource": False})
    for pin in source_pins + analysis_pins:
        if record(Path(pin["path"])) != pin:
            raise RuntimeError("Source or analysis input changed during validation")
    if digest(original_path.read_bytes()) != MODULE_SHA:
        raise RuntimeError("Original input changed during validation")
    native_library = Path(importlib.import_module("unicorn.unicorn_py3.unicorn").uclib._name)
    packet = {"schemaVersion": 1, "lane": "wave002-native", "status": "ready-for-coordinator-review",
        "script": record(Path(__file__)), "original": record(original_path), "claim": record(claim_path),
        "semanticLayouts": record(layout_path), "boundaryCensus": record(census_path), "sourceInputs": source_pins,
        "compiler": record(clang), "linker": record(linker), "configuration": FLAGS,
        "historicalCompilerIdentified": False, "python": {"path": sys.executable, "version": sys.version},
        "unicorn": {"version": unicorn.__version__, "cpuModel": "ARM1176", "nativeLibrary": record(native_library)},
        "functions": rows, "receipts": receipts, "linkedSourceElf": record(linked_path),
        "wrongLinkedElf": record(wrong_path), "standaloneExactFunctionCount": len(rows),
        "standaloneExactInstructionBytes": 12 * len(rows), "acceptedRecoveredSourceFunctions": 0,
        "originalActualReturns": sum(x["originalActualReturns"] for x in behaviors.values()),
        "sourceActualReturns": sum(x["sourceActualReturns"] for x in behaviors.values()),
        "compiledWrongSourceActualReturns": len(rows), "compiledWrongSourceSemanticRejections": len(rows),
        "instructionBudget": 16, "executionTimeoutMicroseconds": 100000,
        "limitations": ["Bounded aligned valid-pointer fixtures are not universal equivalence", "Partial structural views do not recover original class names, object ownership or whole record extent",
            "Indirect interior entries not globally proved absent", "No source-only full module or platform execution", "Coordinator owns module integration, clean replay and accepted coverage"],
        "reproductionArgv": [sys.executable, str(Path(__file__).resolve()), "--output", str(work), "--workers", str(args.workers)]}
    save(work / "packet.json", packet)
    if work == DEFAULT_WORK:
        save(EVIDENCE / "packet.json", packet)
    print(json.dumps({"exactFunctions": len(rows), "exactBytes": 12 * len(rows), "originalActualReturns": packet["originalActualReturns"], "compiledWrongSourceRejections": len(rows)}))


if __name__ == "__main__":
    main()
