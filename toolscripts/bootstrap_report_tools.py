import argparse
import json
import os
import platform
import subprocess
import sys
import urllib.request
import venv
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import bootstrap_public_compiler as compiler


ROOT = Path(__file__).resolve().parents[1]
PACKAGES = {"pyctr", "pycryptodomex", "capstone", "pyelftools"}


def fetch(url, path, expected, verify_only=False):
    if path.exists():
        if compiler.digest(path) != expected:
            raise RuntimeError("Existing public tool differs from frozen identity")
        return
    if verify_only:
        raise RuntimeError("Missing frozen report tool")
    path.parent.mkdir(parents=True, exist_ok=True)
    partial = path.with_suffix(path.suffix + ".download")
    with urllib.request.urlopen(url, timeout=120) as response, partial.open("wb") as output:
        while block := response.read(1024 * 1024):
            output.write(block)
    if compiler.digest(partial) != expected:
        raise RuntimeError("Public report tool download hash mismatch")
    partial.replace(path)


def bootstrap(root, verify_only=False):
    if os.name != "nt" or platform.machine().lower() not in ("amd64", "x86_64"):
        raise RuntimeError("Frozen report tools require Windows x64")
    lock = json.loads((root / "tools.lock.json").read_text(encoding="utf-8"))
    if platform.python_version() != lock["python"]:
        raise RuntimeError("Use frozen Python version " + lock["python"])
    wheels = [row for row in lock["wheels"] if row["name"] in PACKAGES]
    if {row["name"] for row in wheels} != PACKAGES or len(wheels) != len(PACKAGES):
        raise RuntimeError("Missing or duplicated frozen report dependency")
    compiler.bootstrap(root, verify_only)
    paths = []
    for row in wheels:
        path = compiler.contained(root, "tools/wheels/" + row["filename"])
        fetch(row["url"], path, row["sha256"], verify_only)
        paths.append(path)
    distribution = lock["objdiffDistribution"]
    objdiff = root / "tools/objdiff-3.8.3/objdiff-cli.exe"
    identity = [row for row in lock["files"] if row["path"] == objdiff.relative_to(root).as_posix()]
    if len(identity) != 1 or identity[0]["sha256"] != distribution["sha256"]:
        raise RuntimeError("Objdiff distribution identity disagrees with lock")
    fetch(distribution["url"], objdiff, distribution["sha256"], verify_only)
    if objdiff.stat().st_size != identity[0]["size"]:
        raise RuntimeError("Frozen objdiff size mismatch")
    environment = root / "tools/report-python"
    python = environment / "Scripts/python.exe"
    if not python.exists():
        if verify_only:
            raise RuntimeError("Missing report Python environment")
        venv.create(environment, with_pip=True)
    if not verify_only:
        subprocess.run([str(python), "-I", "-m", "pip", "install", "--no-index", "--no-deps", "--force-reinstall",
                        *map(str, paths)], check=True, capture_output=True, timeout=120)
    code = "import importlib.metadata as m,json; print(json.dumps({n:m.version(n) for n in " + repr(sorted(PACKAGES)) + "}))"
    done = subprocess.run([str(python), "-I", "-c", code], capture_output=True, text=True, check=True, timeout=30)
    versions = json.loads(done.stdout)
    if any(versions[row["name"]] != row["version"] for row in wheels):
        raise RuntimeError("Report environment dependency version mismatch")
    library = next(row for row in lock["nativeLibraries"] if row["path"].endswith("capstone/lib/capstone.dll"))
    installed = environment / "Lib/site-packages/capstone/lib/capstone.dll"
    if installed.stat().st_size != library["size"] or compiler.digest(installed) != library["sha256"]:
        raise RuntimeError("Installed Capstone native library differs from frozen identity")
    return {"status": "verified", "python": platform.python_version(), "dependencies": versions,
            "objdiffSha256": compiler.digest(objdiff), "originalInputsRead": False}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--verify", action="store_true")
    args = parser.parse_args()
    report = bootstrap(ROOT, args.verify)
    print(json.dumps(report))


if __name__ == "__main__":
    main()
