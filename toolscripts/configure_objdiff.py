import argparse
import hashlib
import json
import re
import struct
import sys
from pathlib import Path, PurePosixPath

sys.path.insert(0, str(Path(__file__).resolve().parent))
import native_file_inventory as native_census_overlay


ROOT = Path(__file__).resolve().parents[1]


def contained(root, value):
    if not isinstance(value, str) or not value or "\\" in value or ":" in value:
        raise ValueError("Expected a repository-relative path")
    relative = PurePosixPath(value)
    if relative.is_absolute() or any(part in ("", ".", "..") for part in value.split("/")):
        raise ValueError("Unsafe repository-relative path: " + value)
    path = root / value
    for candidate in (path, *path.parents):
        if candidate == root:
            break
        if candidate.is_symlink():
            raise ValueError("Symlink is not an explicit input: " + value)
    if not path.resolve().is_relative_to(root.resolve()):
        raise ValueError("Path escapes repository: " + value)
    return path


def checked_evidence(root, reference):
    if not isinstance(reference, dict):
        raise ValueError("Missing explicit evidence path and SHA-256")
    path = contained(root, reference["path"])
    content = path.read_bytes()
    if hashlib.sha256(content).hexdigest() != reference["sha256"]:
        raise ValueError("Evidence SHA-256 changed: " + reference["path"])
    return json.loads(content)


def object_input(root, reference):
    path = contained(root, reference["path"])
    content = path.read_bytes()
    if hashlib.sha256(content).hexdigest() != reference["sha256"]:
        raise ValueError("Object SHA-256 changed: " + reference["path"])
    if len(content) < 52 or content[:7] != b"\x7fELF\x01\x01\x01":
        raise ValueError("Expected an actual little-endian ELF32 object: " + reference["path"])
    if struct.unpack_from("<HHI", content, 16) != (1, 40, 1):
        raise ValueError("Expected a relocatable ARM32 object: " + reference["path"])
    section_offset = struct.unpack_from("<I", content, 32)[0]
    entry_size, section_count = struct.unpack_from("<HH", content, 46)
    if entry_size != 40 or not section_count or section_offset < 52:
        raise ValueError("Missing ELF section table: " + reference["path"])
    if section_offset + entry_size * section_count > len(content):
        raise ValueError("Truncated ELF section table: " + reference["path"])
    sections = [struct.unpack_from("<10I", content, section_offset + i * entry_size)
                for i in range(section_count)]
    if not any(section[1] == 2 for section in sections):
        raise ValueError("ELF object has no symbol table: " + reference["path"])
    for section in sections:
        if section[1] != 8 and section[4] + section[5] > len(content):
            raise ValueError("Truncated ELF section data: " + reference["path"])
    return reference["path"]


def static_project(root, manifest, version):
    from finalize_objdiff_report import verify_objects
    if manifest.get("reportingBasis") != "initialized-native-text" or version != "update-content0":
        raise ValueError("Unsupported static native reporting contract")
    scope = checked_evidence(root, manifest.get("reviewedScope"))
    accounting = checked_evidence(root, manifest.get("staticTextAccounting"))
    for proof, expected in ((scope, "toolscripts/executable_scope.py"), (accounting, "toolscripts/native_text_accounting.py")):
        reference = proof["producer"]
        if reference["path"] != expected:
            raise ValueError("Unexpected reviewed executable inventory producer")
        if hashlib.sha256(contained(root, reference["path"]).read_bytes()).hexdigest() != reference["sha256"]:
            raise ValueError("Reviewed inventory producer changed")
    for reference in scope["sources"] + accounting["acceptedCohorts"]:
        if hashlib.sha256(contained(root, reference["path"]).read_bytes()).hexdigest() != reference["sha256"]:
            raise ValueError("Reviewed inventory evidence changed")
    if scope.get("staticMainImageScopeComplete") is not True or accounting.get("staticExecutableByteAccountingComplete") is not True:
        raise ValueError("Complete finite static executable scope and byte accounting are required")
    selected = [row for row in scope["versions"] if row["version"] == version]
    if len(selected) != 1 or selected[0].get("staticMainImageScopeComplete") is not True or selected[0].get("freshRecursiveContainerAuditReproduced") is not True:
        raise ValueError("Version lacks a reviewed and freshly reproduced static corpus scope")
    original = selected[0]["mainImage"]
    if (accounting["scope"] != version + "-initialized-text"
            or accounting["layout"]["moduleSha256"] != original["codeSha256"]
            or accounting["layout"]["exheaderSha256"] != original["exheaderSha256"]
            or accounting["totalInitializedTextBytes"] != original["nativeTextGrossBytes"]):
        raise ValueError("Scope review and byte accounting identify different original images")
    header = contained(root, "generated/" + version + "/exheader.bin")
    if hashlib.sha256(header.read_bytes()).hexdigest() != original["exheaderSha256"]:
        raise ValueError("Current ExHeader differs from reviewed executable mapping")
    census = accounting.get("seededCensus")
    if not census:
        raise ValueError("Qualified constructor-seeded function observations are required")
    discovered = checked_evidence(root, census)
    run = checked_evidence(root, accounting.get("seededAnalysisRun"))
    successful = ("explicitPreparationSucceeded", "automaticAnalysisSucceeded", "postAnalysisSucceeded", "allSeedInstructionsAndFunctionsCreated")
    if (run.get("status") != "qualified-seeded-analysis" or run.get("label") != "update"
            or any(run.get(key) is not True for key in successful)
            or run.get("processTimedOut") is not False or run.get("analysisTimedOut") is not False
            or run.get("processExitCode") != 0 or run.get("candidateFunctions") != discovered["functionCount"]
            or run["qualifiedCensus"]["sha256"] != census["sha256"]
            or run["qualifiedPreparation"]["sha256"] != discovered["preparationSha256"]
            or run["postAnalysisSeedEntriesFound"] != run["seedCount"]
            or run["postAnalysisSeedModesAgree"] != run["seedCount"]):
        raise ValueError("Constructor-seeded analysis did not finish successfully")
    reference = run["validationProducer"]
    if reference["path"] != "toolscripts/native_inventory_qualification.py" or hashlib.sha256(contained(root, reference["path"]).read_bytes()).hexdigest() != reference["sha256"]:
        raise ValueError("Seeded analysis qualification producer changed")
    mapping = json.loads(contained(root, manifest["objectMap"]).read_text(encoding="utf-8"))
    if any(mapping["census"][key] != census[key] for key in ("path", "sha256")):
        raise ValueError("Object symbols were not built from the reviewed current census")
    composed, overlays = native_census_overlay.compose(root, discovered)
    if (mapping.get("censusOverlays", []) != overlays
            or overlays and mapping.get("discoveredFunctionEntries") != composed["functionCount"]):
        raise ValueError("Object symbols differ from reviewed supplemental inventory")
    mapped = verify_objects(root, mapping)
    if (sum(row["code"] for row in mapped.values()), sum(row["matched_code"] for row in mapped.values()),
            sum(row["matched_functions"] for row in mapped.values())) != (
            accounting["totalInitializedTextBytes"], accounting["matchedSourceBytes"], accounting["knownSourceFunctionCount"]):
        raise ValueError("Reporting objects disagree with independent complete byte accounting")
    expected = sorted((row["start"], row["bytes"]) for row in accounting["staticBytePartition"])
    actual = sorted((row["address"], row["size"]) for unit in mapping["units"] for row in unit["original_ranges"] if row["kind"] == "code")
    from report_source_units import verify_refinement
    verify_refinement(expected, actual)
    return [{"name": row["name"], "target_path": row["target_path"], "base_path": row["base_path"],
             "metadata": {"source_path": row["source_path"], "complete": False}}
            for row in mapping["units"]]


def configure(root, manifest_path, version, output_path="objdiff.json"):
    root = Path(root).resolve()
    manifest = json.loads(contained(root, manifest_path).read_text(encoding="utf-8"))
    if manifest.get("schemaVersion") not in (1, 2):
        raise ValueError("Unsupported objdiff manifest schema")
    if manifest.get("readyForProgress") is not True:
        raise ValueError("ByteMatch progress is blocked: " + "; ".join(manifest.get("blockers", [])))
    if not re.fullmatch(r"[A-Za-z0-9_.-]+", version) or version not in manifest["versions"]:
        raise ValueError("Unconfigured game version")
    if manifest["schemaVersion"] == 2:
        units = static_project(root, manifest, version)
        return write_project(root, output_path, units)
    inventory = checked_evidence(root, manifest.get("reviewedInventory"))
    if (inventory.get("complete") is not True or inventory.get("reviewed") is not True
            or not inventory.get("reviewer") or not inventory.get("scope")
            or inventory.get("version") != version):
        raise ValueError("A reviewed complete inventory for this version is required")
    rows = [row for row in manifest["units"] if row.get("version") == version]
    names = [row["name"] for row in rows]
    if not names or len(names) != len(set(names)):
        raise ValueError("Missing or duplicate objdiff units")
    if len(inventory.get("unitNames", [])) != len(names) or set(inventory["unitNames"]) != set(names):
        raise ValueError("Every reviewed inventory unit must be represented exactly once")
    units = []
    for row in rows:
        source = contained(root, row["source_path"])
        if not source.exists() or row["source_path"].split("/")[0] in ("build", "work", "generated", ".git"):
            raise ValueError("Source must exist in the public source tree: " + row["source_path"])
        expected_name = row["source_path"] if source.is_dir() else str(PurePosixPath(row["source_path"]).with_suffix(""))
        if row["name"] != expected_name:
            raise ValueError("Unit name must follow its source-tree path: " + row["name"])
        complete = row.get("complete")
        if type(complete) is not bool:
            raise ValueError("Every unit needs an explicit complete boolean")
        if complete:
            proof = checked_evidence(root, row.get("completionEvidence"))
            if (proof.get("matched") is not True or proof.get("sourceLinked") is not True
                    or proof.get("version") != version or proof.get("unit") != row["name"]
                    or proof.get("targetSha256") != row["target"]["sha256"]
                    or proof.get("baseSha256") != row["base"]["sha256"]):
                raise ValueError("Complete requires matching and source-link evidence for these objects")
        target = object_input(root, row["target"])
        base = object_input(root, row["base"])
        if target == base:
            raise ValueError("Target and base must be separate original/source objects")
        units.append({"name": row["name"], "target_path": target, "base_path": base,
                      "metadata": {"source_path": row["source_path"], "complete": complete}})
    return write_project(root, output_path, units)


def write_project(root, output_path, units):
    output = contained(root, output_path)
    if output.name != "objdiff.json":
        raise ValueError("Output must be named objdiff.json")
    result = {"min_version": "3.8.3", "custom_make": None, "build_target": False,
              "build_base": False, "units": units}
    output.parent.mkdir(parents=True, exist_ok=True)
    temporary = output.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    temporary.replace(output)
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", default="config/objdiff-units.json")
    parser.add_argument("--version", default="update-content0")
    parser.add_argument("--output", default="objdiff.json")
    args = parser.parse_args()
    try:
        result = configure(ROOT, args.manifest, args.version, args.output)
    except (ValueError, KeyError, TypeError, OSError) as error:
        print("objdiff configuration failed: " + str(error), file=sys.stderr)
        return 1
    print("Configured " + str(len(result["units"])) + " reviewed units for " + args.version)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
