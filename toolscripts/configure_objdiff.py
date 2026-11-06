import argparse
import hashlib
import json
import re
import struct
import sys
from pathlib import Path, PurePosixPath


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


def configure(root, manifest_path, version, output_path="objdiff.json"):
    root = Path(root).resolve()
    manifest = json.loads(contained(root, manifest_path).read_text(encoding="utf-8"))
    if manifest.get("schemaVersion") != 1:
        raise ValueError("Unsupported objdiff manifest schema")
    if manifest.get("readyForProgress") is not True:
        raise ValueError("ByteMatch progress is blocked: " + "; ".join(manifest.get("blockers", [])))
    if not re.fullmatch(r"[A-Za-z0-9_.-]+", version) or version not in manifest["versions"]:
        raise ValueError("Unconfigured game version")
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
