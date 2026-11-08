import argparse
import hashlib
import json
import os
import platform
import shutil
import sys
import urllib.request
import zipfile
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
MANIFEST = "platform/app-shell/tool-inputs.json"
TOOL_ROOT = "tools/clang-21"
MEMBERS = {"clang.exe", "ld.lld.exe", "libwinpthread-1.dll", "libxml2.dll"}


def digest(path, algorithm="sha256"):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, algorithm).hexdigest()


def contained(root, relative):
    path = (root / relative).resolve()
    if not path.is_relative_to(root.resolve()):
        raise RuntimeError("Path escapes repository: " + str(relative))
    return path


def inputs(root):
    manifest = json.loads(contained(root, MANIFEST).read_text(encoding="utf-8"))
    packages = [p for p in manifest["packages"] if p["package"] == "NDK-r30-public-Clang21-minimal"]
    if len(packages) != 1:
        raise RuntimeError("Expected one frozen public NDK r30 compiler package")
    package = packages[0]
    if package["url"] != "https://dl.google.com/android/repository/android-ndk-r30-windows.zip":
        raise RuntimeError("Compiler package is not the official Windows NDK r30 archive")
    if package["targetRoot"] != TOOL_ROOT or package["archivePrefix"] != "android-ndk-r30/toolchains/llvm/prebuilt/windows-x86_64/bin/":
        raise RuntimeError("Unexpected public compiler extraction mapping")
    files = [f for f in manifest["files"] if f["path"].startswith(TOOL_ROOT + "/")]
    if len(files) != len(MEMBERS) or {f["path"] for f in files} != {TOOL_ROOT + "/" + name for name in MEMBERS}:
        raise RuntimeError("Expected exactly four frozen public compiler members")
    return package, files


def verify(root, files, require=True):
    rows = []
    for item in files:
        path = contained(root, item["path"])
        if not path.is_file():
            if require:
                raise RuntimeError("Missing public compiler member: " + item["path"])
            continue
        if path.stat().st_size != item["bytes"] or digest(path) != item["sha256"]:
            raise RuntimeError("Public compiler member changed; preserved unchanged: " + item["path"])
        rows.append(dict(item))
    return rows


def verify_archive(path, package):
    if path.stat().st_size != package["bytes"]:
        raise RuntimeError("Official compiler archive size mismatch")
    algorithms = [(key, algorithm) for key, algorithm in (("archiveSha1", "sha1"), ("archiveSha256", "sha256")) if key in package]
    if not algorithms:
        raise RuntimeError("Official compiler archive checksum is missing")
    for key, algorithm in algorithms:
        if digest(path, algorithm) != package[key]:
            raise RuntimeError("Official compiler archive checksum mismatch")


def download(cache, package):
    cache.mkdir(parents=True, exist_ok=True)
    archive = cache / package["url"].rsplit("/", 1)[-1]
    if not archive.exists():
        partial = archive.with_suffix(".download")
        with urllib.request.urlopen(package["url"], timeout=120) as source, partial.open("wb") as target:
            shutil.copyfileobj(source, target, 1024 * 1024)
        verify_archive(partial, package)
        partial.replace(archive)
    verify_archive(archive, package)
    return archive


def extract(root, archive, package, files):
    verify(root, files, require=False)
    payloads = []
    with zipfile.ZipFile(archive) as source:
        names = source.namelist()
        for item in files:
            name = package["archivePrefix"] + Path(item["path"]).name
            if names.count(name) != 1:
                raise RuntimeError("Official compiler archive member missing or duplicated: " + name)
            if source.getinfo(name).file_size != item["bytes"]:
                raise RuntimeError("Official compiler member size mismatch: " + name)
            content = source.read(name)
            if len(content) != item["bytes"] or hashlib.sha256(content).hexdigest() != item["sha256"]:
                raise RuntimeError("Official compiler member SHA256 mismatch: " + name)
            payloads.append((contained(root, item["path"]), content))
    for path, content in payloads:
        if not path.exists():
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(content)
    return verify(root, files)


def bootstrap(root, verify_only=False):
    package, files = inputs(root)
    present = verify(root, files, require=verify_only)
    downloaded = False
    if len(present) != len(files):
        if os.name != "nt" or platform.machine().lower() not in ("amd64", "x86_64"):
            raise RuntimeError("The pinned compiler bootstrap requires a Windows x64 host")
        archive = download(contained(root, "work/source-compile-ci/downloads"), package)
        present = extract(root, archive, package, files)
        downloaded = True
    return {"schemaVersion": 1, "status": "verified", "sourceOnly": True, "originalInputsRead": False,
            "manifest": {"path": MANIFEST, "sha256": digest(contained(root, MANIFEST))},
            "officialPackage": package, "files": present, "networkAllowed": not verify_only,
            "archiveReadAndVerifiedThisRun": downloaded, "archiveChecksumAlgorithms": ["sha1"],
            "usedMemberChecksumAlgorithm": "sha256"}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--verify", action="store_true")
    parser.add_argument("--report", default="work/source-compile-ci/manifests/compiler.json")
    args = parser.parse_args()
    output = contained(ROOT, args.report)
    if not output.is_relative_to((ROOT / "work").resolve()):
        raise RuntimeError("Compiler bootstrap receipts must stay under work/")
    try:
        report = bootstrap(ROOT, args.verify)
        code = 0
    except (OSError, RuntimeError, ValueError, KeyError, TypeError, zipfile.BadZipFile) as error:
        report = {"schemaVersion": 1, "status": "failed", "error": str(error), "sourceOnly": True}
        code = 1
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": report["status"], "report": args.report, "error": report.get("error")}))
    return code


if __name__ == "__main__":
    sys.exit(main())
