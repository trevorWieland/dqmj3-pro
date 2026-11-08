import argparse
import bisect
import hashlib
import io
import json
import re
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ci_native_build
import configure_objdiff
import native_teardown_inventory as native_census_overlay
import report_source_units


ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def save(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")


def run(command, log):
    result = subprocess.run([str(value) for value in command], capture_output=True, timeout=180)
    log.write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError("Object production failed; private diagnostics: " + str(log))
    return {"argv": [str(value) for value in command], "returncode": result.returncode,
            "logSha256": digest(log)}


def elf_summary(path):
    elf = ELFFile(io.BytesIO(Path(path).read_bytes()))
    if elf["e_type"] != "ET_REL" or elf["e_machine"] != "EM_ARM" or not elf.little_endian:
        raise ValueError("Expected genuine little-endian ARM relocatable object")
    sections = {index: section for index, section in enumerate(elf.iter_sections())}
    code = [section for section in sections.values() if section["sh_flags"] & 4]
    allocated_data = [section for section in sections.values() if section["sh_flags"] & 2 and not section["sh_flags"] & 4]
    table = elf.get_section_by_name(".symtab")
    if table is None:
        raise ValueError("Missing ELF symbol table")
    functions = []
    for symbol in table.iter_symbols():
        section = sections.get(symbol["st_shndx"])
        if symbol["st_info"]["type"] != "STT_FUNC" or not symbol["st_size"] or section is None:
            continue
        if not section["sh_flags"] & 4:
            raise ValueError("Function is outside executable section")
        offset = symbol["st_value"] & ~1
        size = symbol["st_size"]
        if offset + size > section["sh_size"]:
            raise ValueError("Symbol exceeds its executable section")
        functions.append({"symbol": symbol.name, "size": size, "section": section.name,
                          "offset": offset, "mode": "Thumb" if symbol["st_value"] & 1 else "ARM",
                          "sha256": hashlib.sha256(section.data()[offset:offset + size]).hexdigest()})
    return {"codeBytes": sum(section["sh_size"] for section in code), "functions": functions,
            "dataBytes": sum(section["sh_size"] for section in allocated_data if section["sh_type"] != "SHT_NOBITS"),
            "bssBytes": sum(section["sh_size"] for section in allocated_data if section["sh_type"] == "SHT_NOBITS"),
            "sections": [{"name": section.name, "size": section["sh_size"],
                          "sha256": hashlib.sha256(section.data()).hexdigest()} for section in code + allocated_data]}


def complement(entries, start, size):
    result, cursor = [], start
    for row in sorted(entries, key=lambda item: item["address"]):
        low, high = row["address"], row["address"] + row["instructionBytes"]
        if low < cursor or high > start + size or low >= high:
            raise ValueError("Accepted intervals overlap or leave initialized text")
        if low > cursor:
            result.append((cursor, low))
        cursor = high
    if cursor < start + size:
        result.append((cursor, start + size))
    return result


def census_symbols(census, gaps, accepted):
    accepted_addresses = {row["address"] for row in accepted}
    if len(census["functions"]) != census["functionCount"]:
        raise ValueError("Census count changed")
    starts = [low for low, high in gaps]
    rows, skipped = [], []
    addresses = set()
    for function in census["functions"]:
        address, mode = function["address"], function["mode"]
        if address in addresses or mode not in ("ARM", "Thumb") or address % (4 if mode == "ARM" else 2):
            raise ValueError("Duplicate or misaligned census function entry")
        addresses.add(address)
        if address in accepted_addresses:
            continue
        index = bisect.bisect_right(starts, address) - 1
        body = [part for part in function["ranges"] if part["start"] <= address < part["endExclusive"]]
        if index < 0 or not gaps[index][0] <= address < gaps[index][1] or len(body) != 1:
            skipped.append({"address": address, "reason": "entry has no unique unaccepted contiguous owner"})
            continue
        end = min(body[0]["endExclusive"], gaps[index][1])
        if end <= address:
            raise ValueError("Empty census entry extent")
        rows.append({"symbol": "fn_" + format(address, "08x"), "address": address, "size": end - address,
                     "mode": mode, "gap": index, "extentConvention": "contiguous-entry-owned-census-range"})
    return rows, skipped


def assemble_reference(root, image_path, spans, symbols, output, label, data_spans=()):
    source = output / (label + ".reference.s")
    lines = []
    for index, span in enumerate(spans):
        address, size, image_offset = span
        section = ".text.original_" + format(address, "08x")
        lines.extend([f'.section {section},"ax",%progbits', f'.Loriginal_{index}:',
                      f'.incbin "{image_path.as_posix()}", {image_offset}, {size}'])
        for symbol in symbols.get(index, []):
            name = symbol["symbol"]
            if not re.fullmatch(r"fn_[0-9a-f]{8}", name):
                raise ValueError("Reference symbol lacks canonical address identity")
            offset = symbol["address"] - address
            if offset < 0 or offset + symbol["size"] > size:
                raise ValueError("Reference symbol exceeds owned original span")
            lines.extend([f'.global {name}', f'.type {name},%function',
                          f'.set {name},.Loriginal_{index}+{offset + (symbol["mode"] == "Thumb")}',
                          f'.size {name},{symbol["size"]}'])
    for section, address, size, image_offset, kind in data_spans:
        if kind == "bss":
            lines.extend([f'.section {section},"aw",%nobits', f'.space {size}'])
        else:
            flags = "a" if section.startswith(".rodata") else "aw"
            lines.extend([f'.section {section},"{flags}",%progbits',
                          f'.incbin "{image_path.as_posix()}", {image_offset}, {size}'])
    source.write_text("\n".join(lines) + "\n", encoding="utf-8")
    target = output / (label + ".target.o")
    command = run([root / "tools/clang-21/clang.exe", "--target=arm-none-eabi", "-mcpu=mpcore", "-marm",
                   "-c", source, "-o", target], output / (label + ".assemble.log"))
    summary = elf_summary(target)
    image = image_path.read_bytes()
    elf = ELFFile(io.BytesIO(target.read_bytes()))
    for address, size, image_offset in spans:
        section = elf.get_section_by_name(".text.original_" + format(address, "08x"))
        if section is None or section.data() != image[image_offset:image_offset + size]:
            raise ValueError("Reference assembler changed original bytes")
    for name, address, size, image_offset, kind in data_spans:
        section = elf.get_section_by_name(name)
        if section is None or section["sh_size"] != size:
            raise ValueError("Original data/BSS section size changed")
        if kind == "bss":
            if section["sh_type"] != "SHT_NOBITS":
                raise ValueError("BSS unexpectedly contains initialized bytes")
        elif section.data() != image[image_offset:image_offset + size]:
            raise ValueError("Reference assembler changed original data")
    return target, summary, command


def select_compiled(root, raw_object, symbols, output, label):
    names = [row["symbol"] for row in symbols]
    if len(names) != len(set(names)):
        raise ValueError("Duplicate accepted source symbol")
    sections = [".text." + name for name in names]
    script = output / (label + ".source.ld")
    body = [f'{name} : {{ KEEP(*({name})) }}' for name in sections]
    script.write_text("SECTIONS {\n" + "\n".join(body) + "\n/DISCARD/ : { *(.text*) *(.ARM.exidx*) "
                      "*(.ARM.extab*) *(.data*) *(.rodata*) *(.bss*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n")
    base = output / (label + ".base.o")
    command = run([root / "tools/clang-21/ld.lld.exe", "-r", "-m", "armelf", "--build-id=none", "-T", script,
                   raw_object, "-o", base], output / (label + ".select.log"))
    summary = elf_summary(base)
    if {row["symbol"] for row in summary["functions"]} != set(names):
        raise ValueError("Linked selection contains missing or unaccepted function symbols")
    if summary["codeBytes"] != sum(row["instructionBytes"] for row in symbols):
        raise ValueError("Linked selection includes unaccepted executable bytes")
    for row in summary["functions"]:
        expected = next(item for item in symbols if item["symbol"] == row["symbol"])
        if row["size"] != expected["instructionBytes"] or row["sha256"] != expected["originalSpanSha256"]:
            raise ValueError("Filtered genuine source no longer matches accepted original span")
    return base, summary, command


def build(root, census_path, output):
    root, output = Path(root).resolve(), Path(output).resolve()
    if not any(output.is_relative_to(root / name) for name in ("work", "build")):
        raise ValueError("Original-bearing objects must remain private under work/ or build/")
    output.mkdir(parents=True, exist_ok=True)
    census_path = configure_objdiff.contained(root, census_path)
    census = json.loads(census_path.read_text(encoding="utf-8"))
    inventory_path = root / "evidence/inventory/update-content0.json"
    inventory = json.loads(inventory_path.read_text(encoding="utf-8"))
    image_path = root / "generated/update-content0/code.bin"
    if digest(image_path) != inventory["codeSha256"] or census["codeSha256"] != inventory["codeSha256"]:
        raise ValueError("Original/census module identity mismatch")
    text = next(row for row in inventory["layout"]["segments"] if row["name"] == "text")
    if (census["initializedTextStart"], census["initializedTextGrossBytes"]) != (text["address"], text["initializedBytes"]):
        raise ValueError("Census and loader initialized-text extents differ")
    census, overlay_references = native_census_overlay.compose(root, census)
    accepted = ci_native_build.accepted_functions(root)
    compiled = root / "work/objdiff-object-compile"
    build_result = ci_native_build.compile_accepted(root, compiled)
    source_profiles = {}
    for lane in ci_native_build.LANES:
        packet = json.loads((root / "evidence/lanes" / lane / "packet.json").read_text(encoding="utf-8"))
        for item in packet.get("sourceInputs", packet.get("sources", [])):
            path = ci_native_build.native_path(root, item["path"])
            if path.suffix == ".c":
                source_profiles[path.relative_to(root).as_posix()] = packet["configuration"]
    source_groups = {}
    for row in accepted:
        source_groups.setdefault(row["sourcePath"], []).append(row)
    source_routes, source_routes_pin = report_source_units.load(root, census, accepted)
    gaps = complement([*accepted, *source_routes], text["address"], text["initializedBytes"])
    discovered, skipped = census_symbols(census, gaps, [*accepted, *source_routes])
    commands, units = [], []
    for source, rows in sorted(source_groups.items()):
        rows.sort(key=lambda row: row["address"])
        label = source.replace("/", "--").removesuffix(".c")
        spans = [(row["address"], row["instructionBytes"], text["codeBinOffset"] + row["address"] - text["address"]) for row in rows]
        symbols = {index: [{"symbol": row["symbol"], "address": row["address"], "size": row["instructionBytes"], "mode": row["mode"]}]
                   for index, row in enumerate(rows)}
        target, target_summary, command = assemble_reference(root, image_path, spans, symbols, output, label)
        commands.append(command)
        raw = compiled / (source.replace("/", "--") + ".o")
        base, base_summary, command = select_compiled(root, raw, rows, output, label)
        commands.append(command)
        units.append({"name": source.removesuffix(".c"), "source_path": source, "complete": False,
                      "target": {"path": target.relative_to(root).as_posix(), "sha256": digest(target)},
                      "base": {"path": base.relative_to(root).as_posix(), "sha256": digest(base)},
                      "targetCodeBytes": target_summary["codeBytes"], "baseCodeBytes": base_summary["codeBytes"],
                      "acceptedSymbols": [row["symbol"] for row in rows], "discoveredSymbols": [],
                      "source_sha256": digest(root / source), "source_profile": source_profiles[source],
                      "original_ranges": [{"section": ".text.original_" + format(address, "08x"),
                                            "address": address, "size": size, "kind": "code"} for address, size, off in spans],
                      "expected_matched_code": sum(row["instructionBytes"] for row in rows),
                      "expected_matched_functions": len(rows)})
    spans = [(low, high - low, text["codeBinOffset"] + low - text["address"]) for low, high in gaps]
    symbols = {}
    for row in discovered:
        symbols.setdefault(row["gap"], []).append(row)
    data_spans = [("." + row["name"] + ".original", row["address"], row["initializedBytes"], row["codeBinOffset"], "data")
                  for row in inventory["layout"]["segments"] if row["name"] != "text"]
    data_segment = next(row for row in inventory["layout"]["segments"] if row["name"] == "data")
    data_spans.append((".bss.original", data_segment["address"] + data_segment["initializedBytes"],
                       inventory["layout"]["bssBytes"], None, "bss"))
    target, target_summary, command = assemble_reference(root, image_path, spans, symbols, output, "unreconstructed", data_spans)
    commands.append(command)
    empty = output / "no_reconstructed_source.c"
    empty.write_text("typedef unsigned ObjdiffNoReconstructedSource;\n", encoding="utf-8")
    base = output / "unreconstructed.base.o"
    commands.append(run([root / "tools/clang-21/clang.exe", "--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-c", empty,
                         "-o", base], output / "unreconstructed.empty.log"))
    empty_summary = elf_summary(base)
    if any(empty_summary[key] for key in ("codeBytes", "dataBytes", "bssBytes")):
        raise ValueError("Unreconstructed base unexpectedly contains executable bytes")
    units.append({"name": "src/native", "source_path": "src/native", "complete": False,
                  "target": {"path": target.relative_to(root).as_posix(), "sha256": digest(target)},
                  "base": {"path": base.relative_to(root).as_posix(), "sha256": digest(base)},
                  "targetCodeBytes": target_summary["codeBytes"], "baseCodeBytes": 0,
                  "acceptedSymbols": [], "discoveredSymbols": [row["symbol"] for row in discovered],
                  "original_ranges": [{"section": ".text.original_" + format(address, "08x"),
                                        "address": address, "size": size, "kind": "code"} for address, size, off in spans]
                                      + [{"section": name, "address": address, "size": size, "kind": kind}
                                         for name, address, size, off, kind in data_spans],
                  "expected_matched_code": 0, "expected_matched_functions": 0,
                  "targetDataBytes": target_summary["dataBytes"], "targetBssBytes": target_summary["bssBytes"]})
    for route in source_routes:
        address, size = route["address"], route["instructionBytes"]
        spans = [(address, size, text["codeBinOffset"] + address - text["address"])]
        symbols = {0: [{"symbol": route["symbol"], "address": address, "size": size, "mode": route["mode"]}]}
        label = "source-route-" + route["symbol"]
        routed_target, routed_summary, command = assemble_reference(root, image_path, spans, symbols, output, label)
        commands.append(command)
        units.append({"name": route["name"], "source_path": route["sourcePath"], "complete": False,
            "target": {"path": routed_target.relative_to(root).as_posix(), "sha256": digest(routed_target)},
            "base": {"path": base.relative_to(root).as_posix(), "sha256": digest(base)},
            "targetCodeBytes": routed_summary["codeBytes"], "baseCodeBytes": 0,
            "acceptedSymbols": [], "discoveredSymbols": [route["symbol"]],
            "source_sha256": route["sourceSha256"], "source_profile": None, "sourceRouting": route,
            "original_ranges": [{"section": ".text.original_" + format(address, "08x"),
                "address": address, "size": size, "kind": "code"}],
            "expected_matched_code": 0, "expected_matched_functions": 0})
    for unit in units:
        unit.update(target_path=unit["target"]["path"], target_sha256=unit["target"]["sha256"],
                    base_path=unit["base"]["path"], base_sha256=unit["base"]["sha256"])
    if sum(row["targetCodeBytes"] for row in units) != text["initializedBytes"]:
        raise ValueError("Target executable sections do not account for every initialized text byte exactly once")
    if sum(row["baseCodeBytes"] for row in units) != sum(row["instructionBytes"] for row in accepted):
        raise ValueError("Source object totals differ from admitted instruction bytes")
    project_units = [{"name": row["name"], "target_path": str(root / row["target"]["path"]),
                      "base_path": str(root / row["base"]["path"]),
                      "metadata": {"source_path": row["source_path"], "complete": row["complete"]}} for row in units]
    save(output / "objdiff.json", {"min_version": "3.8.3", "build_target": False, "build_base": False, "units": project_units})
    report_path = output / "stock-report.json"
    commands.append(run([root / "tools/objdiff-3.8.3/objdiff-cli.exe", "report", "generate", "-p", output, "-o", report_path], output / "objdiff.log"))
    report = json.loads(report_path.read_text())
    measured = report["measures"]
    if int(measured["matched_code"]) != sum(row["instructionBytes"] for row in accepted) or measured["matched_functions"] != len(accepted):
        raise ValueError("Stock objdiff unexpectedly grants or loses accepted matching credit")
    result = {"schemaVersion": 1, "version": "update-content0", "moduleSha256": inventory["codeSha256"],
              "inventory": {"path": inventory_path.relative_to(root).as_posix(), "sha256": digest(inventory_path)},
              "census": {"path": census_path.relative_to(root).as_posix(), "sha256": digest(census_path)},
              "censusOverlays": overlay_references, "sourceUnits": source_routes_pin, "discoveredFunctionEntries": census["functionCount"],
              "initializedTextBytes": text["initializedBytes"], "acceptedInstructionBytes": sum(row["instructionBytes"] for row in accepted),
              "initializedDataBytes": sum(row["initializedBytes"] for row in inventory["layout"]["segments"] if row["name"] != "text"),
              "bssBytes": inventory["layout"]["bssBytes"], "layout": inventory["layout"],
              "acceptedFunctions": len(accepted), "units": units, "stockReportSha256": digest(report_path),
              "stockMeasures": measured, "skippedCensusEntries": skipped, "sourceBuild": build_result,
              "commands": commands, "productionReadinessGranted": False,
              "limitations": ["Stock total_code excludes unsymbolized executable bytes; a separately reviewed denominator normalizer is required.",
                              "Function counts are discovered census entries; exact pool, cold-tail and overall game executable completeness remain separate reviews.",
                              "Reference target objects contain original bytes and must never be uploaded.",
                              "Base objects contain only genuine accepted source sections; candidates are discarded by LLD, never patched."]}
    save(output / "object-map.json", result)
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--census", default="evidence/lanes/native-inventory-completion/seeded/update-census.json")
    parser.add_argument("--output", default="build/update-content0/objects")
    args = parser.parse_args()
    try:
        result = build(ROOT, args.census, configure_objdiff.contained(ROOT, args.output))
    except Exception as error:
        print("Objdiff object production failed: " + str(error), file=sys.stderr)
        return 1
    print(json.dumps({key: result[key] for key in ("initializedTextBytes", "acceptedInstructionBytes", "acceptedFunctions", "stockMeasures")}))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
