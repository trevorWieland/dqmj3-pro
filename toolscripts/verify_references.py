import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import sys


ROOT = Path(__file__).resolve().parents[1]
ROOTS = ["config", "recovery.json", "project.json", "evidence/inventory",
         "evidence/cohorts", "evidence/semantics", "include"]
CHAIN_KEYS = ("census", "seededCensus", "seededAnalysisRun", "reviewedScope",
              "staticTextAccounting", "objectMap", "completionEvidence",
              "independentReplay", "producer", "validationProducer", "packet",
              "claim", "sources", "inputs", "acceptedCohorts", "receipt")


def contained(root, value):
    if not isinstance(value, str) or not value or "\\" in value or ":" in value:
        return None
    if value.startswith("/"):
        return None
    pure = PurePosixPath(value)
    if pure.is_absolute() or any(part in ("", ".", "..") for part in value.split("/")):
        return None
    candidate = root / value
    try:
        if not candidate.resolve().is_relative_to(root.resolve()):
            return None
    except OSError:
        return None
    return candidate


def references(node, found):
    if isinstance(node, dict):
        path = node.get("path")
        if isinstance(path, str) and ("sha256" in node or "bytes" in node):
            found.append((path, node.get("sha256")))
        for key in CHAIN_KEYS:
            value = node.get(key)
            if isinstance(value, dict) and isinstance(value.get("path"), str):
                found.append((value["path"], value.get("sha256")))
            elif isinstance(value, list):
                for item in value:
                    if isinstance(item, dict) and isinstance(item.get("path"), str):
                        found.append((item["path"], item.get("sha256")))
        for value in node.values():
            references(value, found)
    elif isinstance(node, list):
        for value in node:
            references(value, found)


def collect(root):
    seeds = []
    for base in ROOTS:
        target = root / base
        if not target.exists():
            continue
        if target.is_file():
            seeds.append(target)
        else:
            seeds.extend(item for item in target.rglob("*.json") if item.is_file())
    return seeds


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", default=str(ROOT))
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()

    root = Path(args.root).resolve()
    seen = set()
    digests = {}
    missing = []
    mismatched = []
    invalid = []
    reachable = set()

    def digest(path):
        key = str(path)
        if key not in digests:
            digests[key] = hashlib.sha256(path.read_bytes()).hexdigest()
        return digests[key]

    queue = collect(root)
    while queue:
        current = queue.pop()
        if current in seen or not current.is_file():
            continue
        seen.add(current)
        relative = current.relative_to(root).as_posix()
        reachable.add(relative)
        try:
            payload = json.loads(current.read_text(encoding="utf-8"))
        except (OSError, ValueError):
            continue
        found = []
        references(payload, found)
        for path, expected in found:
            candidate = contained(root, path)
            if candidate is None:
                invalid.append({"from": relative, "path": path, "reason": "unsafe"})
                continue
            if not candidate.is_file():
                missing.append({"from": relative, "path": path})
                continue
            if not isinstance(expected, str) or len(expected) != 64:
                continue
            actual = digest(candidate)
            if actual != expected:
                mismatched.append({"from": relative, "path": path,
                                   "expected": expected, "actual": actual})
                continue
            if candidate.suffix == ".json" and candidate not in seen:
                queue.append(candidate)

    report = {
        "documents": len(seen),
        "reachable": len(reachable),
        "missing": missing,
        "mismatched": mismatched,
        "invalid": invalid,
        "passed": not (missing or mismatched or invalid),
    }
    if args.json:
        print(json.dumps(report, indent=1))
    else:
        print("documents %d, missing %d, mismatched %d, invalid %d"
              % (len(seen), len(missing), len(mismatched), len(invalid)))
        for row in (missing + mismatched + invalid)[:20]:
            print("  " + json.dumps(row))
    return 0 if report["passed"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
