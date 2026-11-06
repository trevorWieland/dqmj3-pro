import argparse
import hashlib
import json
import shutil
import urllib.request
import zipfile
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / "platform/app-shell"
CACHE = ROOT / "work/app-shell-wave001/tool-cache"


def digest(path, algorithm="sha256"):
    with path.open("rb") as source:
        return hashlib.file_digest(source, algorithm).hexdigest()


def checked_path(relative):
    path = (ROOT / relative).resolve()
    if not path.is_relative_to(ROOT):
        raise RuntimeError("Tool manifest path escapes project")
    return path


def matching(path, expected):
    return path.is_file() and digest(path) == expected


def download(package):
    CACHE.mkdir(parents=True, exist_ok=True)
    archive = CACHE / package["url"].rsplit("/", 1)[-1]
    if not archive.exists():
        temporary = archive.with_suffix(".download")
        with urllib.request.urlopen(package["url"], timeout=120) as source, temporary.open("wb") as target:
            shutil.copyfileobj(source, target, 1024 * 1024)
        if temporary.stat().st_size != package["bytes"]:
            raise RuntimeError("Official archive size mismatch")
        for field, algorithm in (("archiveSha1", "sha1"), ("archiveSha256", "sha256")):
            if field in package and digest(temporary, algorithm) != package[field]:
                raise RuntimeError("Official archive checksum mismatch")
        temporary.replace(archive)
    if archive.stat().st_size != package["bytes"]:
        raise RuntimeError("Cached official archive size mismatch")
    for field, algorithm in (("archiveSha1", "sha1"), ("archiveSha256", "sha256")):
        if field in package and digest(archive, algorithm) != package[field]:
            raise RuntimeError("Cached official archive checksum mismatch")
    return archive


def extract(archive, package, expected):
    root = package["targetRoot"].rstrip("/") + "/"
    wanted = {item["path"]: item for item in expected if item["path"].startswith(root)}
    with zipfile.ZipFile(archive) as source:
        names = [name for name in source.namelist() if not name.endswith("/")]
        prefix = package.get("archivePrefix", names[0].split("/")[0] + "/")
        found = set()
        for name in names:
            if not name.startswith(prefix):
                continue
            relative = Path(name[len(prefix):])
            if relative.is_absolute() or ".." in relative.parts:
                raise RuntimeError("Unsafe official archive member")
            key = root + relative.as_posix()
            if key not in wanted:
                continue
            path = checked_path(key)
            content = source.read(name)
            if hashlib.sha256(content).hexdigest() != wanted[key]["sha256"]:
                raise RuntimeError("Archive member differs from frozen tool pin: " + key)
            if path.exists() and not matching(path, wanted[key]["sha256"]):
                raise RuntimeError("Existing local tool differs; preserved unchanged: " + key)
            if not path.exists():
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(content)
            found.add(key)
        if found != set(wanted):
            raise RuntimeError("Official archive missing required pinned files")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--verify", action="store_true")
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    manifest = json.loads((SOURCE / "tool-inputs.json").read_text())
    required = manifest["files"]
    for item in required:
        path = checked_path(item["path"])
        if path.exists() and not matching(path, item["sha256"]):
            raise RuntimeError("Existing pinned file changed; preserved unchanged: " + item["path"])
    missing = [item for item in required if not checked_path(item["path"]).exists()]
    if args.verify:
        if missing:
            raise RuntimeError("Missing pinned tool files: " + str(len(missing)))
        print(json.dumps({"status": "verified", "files": len(required), "networkUsed": False}))
        return
    needed = [p for p in manifest["packages"] if any(item["path"].startswith(p["targetRoot"] + "/") for item in missing)]
    if args.dry_run:
        print(json.dumps({"missingFiles": len(missing), "officialPackagesNeeded": [p["package"] for p in needed]}))
        return
    if missing and shutil.disk_usage(ROOT).free < 4 * 1024 ** 3:
        raise RuntimeError("Need at least 4 GiB free for local archive cache and tool materialization")
    for package in needed:
        extract(download(package), package, required)
    bundle = manifest["bundledNativeIncludes"]
    if any(item["path"].startswith(bundle["targetRoot"] + "/") for item in missing):
        archive = checked_path(bundle["path"])
        if digest(archive) != bundle["sha256"]:
            raise RuntimeError("Bundled public JNI/compiler headers changed")
        extract(archive, bundle, required)
    if any(not matching(checked_path(item["path"]), item["sha256"]) for item in required):
        raise RuntimeError("Tool materialization is incomplete")
    print(json.dumps({"status": "materialized", "files": len(required), "downloadedPackages": len(needed)}))


if __name__ == "__main__":
    main()
