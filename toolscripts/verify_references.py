import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import sys


ROOT = Path(__file__).resolve().parents[1]
ROOTS = ["config", "recovery.json", "project.json"]
CHAIN_KEYS = ("census", "seededCensus", "seededAnalysisRun", "reviewedScope",
              "staticTextAccounting", "objectMap", "completionEvidence",
              "independentReplay", "producer", "validationProducer", "packet",
              "claim", "receipt", "acceptance")


def contained(root, value):
    if not isinstance(value, str) or not value:
        return None
    if "/" not in value:
        return None
    if "\\" in value or ":" in value or value.startswith("/"):
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


def documents(root):
    for base in ROOTS:
        target = root / base
        if not target.exists():
            continue
        if target.is_file():
            yield target
        else:
            yield from sorted(item for item in target.rglob("*.json") if item.is_file())


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", default=str(ROOT))
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()

    root = Path(args.root).resolve()
    digests = {}
    missing = []
    mismatched = []
    checked = 0

    def digest(path):
        key = str(path)
        if key not in digests:
            digests[key] = hashlib.sha256(path.read_bytes()).hexdigest()
        return digests[key]

    for document in documents(root):
        relative = document.relative_to(root).as_posix()
        try:
            payload = json.loads(document.read_text(encoding="utf-8"))
        except (OSError, ValueError) as error:
            mismatched.append({"from": relative, "path": relative, "reason": str(error)})
            continue
        found = []
        references(payload, found)
        for path, expected in found:
            candidate = contained(root, path)
            if candidate is None:
                continue
            checked += 1
            if not candidate.is_file():
                missing.append({"from": relative, "path": path})
                continue
            if not isinstance(expected, str) or len(expected) != 64:
                continue
            actual = digest(candidate)
            if actual != expected:
                mismatched.append({"from": relative, "path": path,
                                   "expected": expected, "actual": actual})

    report = {"references": checked, "missing": missing, "mismatched": mismatched,
              "passed": not (missing or mismatched)}
    if args.json:
        print(json.dumps(report, indent=1))
    else:
        print("references %d, missing %d, mismatched %d"
              % (checked, len(missing), len(mismatched)))
        for row in (missing + mismatched)[:25]:
            print("  " + json.dumps(row))
    return 0 if report["passed"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
