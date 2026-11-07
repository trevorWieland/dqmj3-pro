import argparse
import base64
import hashlib
import io
import json
import re
import subprocess
import sys
import zipfile
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
UPSTREAM = "source/squirrel-wave001/"
MANIFEST = UPSTREAM + "upstream-manifest.json"
MANIFEST_SHA = "9beee14b4c91333778f4258726832ebec6eb58013333962efdeb3d001046c396"
HEADER_PATH = "platform/app-shell/third-party-native-includes.zip"
HEADER_SHA = "256c494f3dc50c1744b8c700cd81adb724e82fabe60dd9348db054ea1c4a8925"
PRIVATE_ROOTS = {"inputs", "tools", "work", "build", "generated", ".git"}
PRIVATE_NAMES = {".env", ".netrc", ".npmrc", ".pypirc", ".git-credentials", "project.local.json",
                 "id_rsa", "id_ed25519", "boot9.bin", "aes_keys.txt", "movable.sed", "prod.keys", "title.keys"}
BANNED_EXT = set(".7z .zip .rar .tar .gz .bz2 .xz .cia .3ds .cci .cxi .ncch .nds .rom .sav .sed .bin .elf .o .obj .exe .dll .so .a .lib .apk .jar .class .dex .p12 .pfx .der .key .pdf .chm .nut .sarc .xbb .bch .arc .fbxd .bcstm .bcwav .cro .crs .crr .shbin .romfs .exefs .code".split())
BANNED_EXT.add(".ppk")
TOKEN_PATTERNS = {
    "github-token": rb"\b(?:gh[pousr]_[A-Za-z0-9]{36,255}|github_pat_[A-Za-z0-9_]{60,255})\b",
    "gitlab-token": rb"\bglpat-[A-Za-z0-9_-]{20,255}\b",
    "openai-token": rb"\bsk-(?:proj-|svcacct-)?[A-Za-z0-9_-]{24,255}\b",
    "slack-token": rb"\bxox[baprs]-[A-Za-z0-9-]{24,255}\b",
    "stripe-secret": rb"\bsk_live_[A-Za-z0-9]{20,255}\b",
    "discord-webhook": rb"https://(?:discord(?:app)?\.com)/api/webhooks/[0-9]{15,25}/[A-Za-z0-9_-]{30,255}",
}
PEM = re.compile(rb"-----BEGIN (?:RSA |EC |DSA |OPENSSH |ENCRYPTED )?PRIVATE KEY-----[ \t\r\n\\rn]*([A-Za-z0-9+/= \t\r\n\\]{40,}?)-----END (?:RSA |EC |DSA |OPENSSH |ENCRYPTED )?PRIVATE KEY-----")
PGP = re.compile(rb"-----BEGIN PGP PRIVATE KEY BLOCK-----(?:\r?\n|\\n)(?:(?:Version|Comment):[^\r\n\\]{0,256}(?:\r?\n|\\n))*[ \r\n\\n]*([A-Za-z0-9+/= \r\n\\]{40,}?)-----END PGP PRIVATE KEY BLOCK-----")
ASSIGN = re.compile(rb"(?i)[\"']?(?:api[_-]?key|private[_-]?key|auth[_-]?token|access[_-]?token|refresh[_-]?token|client[_-]?secret|secret[_-]?access[_-]?key|password)[\"']?\s*[:=]\s*[\"']([A-Za-z0-9_+/=.!@-]{20,255})[\"']")
JWT = re.compile(rb"\beyJ[A-Za-z0-9_-]{10,4096}\.[A-Za-z0-9_-]{10,8192}\.[A-Za-z0-9_-]{16,1024}\b")
HEX = re.compile(rb"(?<![A-Za-z0-9])[0-9a-fA-F]{2048,}(?![A-Za-z0-9])")
B64 = re.compile(rb"(?<![A-Za-z0-9+/])[A-Za-z0-9+/]{2048,}={0,2}(?![A-Za-z0-9+/])")

def sha(data):
    return hashlib.sha256(data).hexdigest()

def git(root, *args, data=None):
    result = subprocess.run(["git", "--no-replace-objects", "-C", str(root), *args], input=data, capture_output=True)
    if result.returncode:
        raise RuntimeError("Git read failed: " + args[0])
    return result.stdout

def secrets(data):
    found = []
    for name, pattern in TOKEN_PATTERNS.items():
        for match in re.finditer(pattern, data):
            found.append((name, match.start()))
    for match in list(PEM.finditer(data)) + list(PGP.finditer(data)):
        raw = match.group(1).replace(b"\\n", b"\n").replace(b"\\r", b"\r")
        raw = re.sub(rb"(?m)^=[A-Za-z0-9+/]{4}\r?$", b"", raw)
        try:
            decoded = base64.b64decode(re.sub(rb"\s+", b"", raw), validate=True)
        except ValueError:
            continue
        if len(decoded) >= 32:
            found.append(("private-key-block", match.start()))
    for match in ASSIGN.finditer(data):
        value = match.group(1).lower()
        if any(x in value for x in (b"example", b"placeholder", b"redacted", b"your_token", b"your_api_key")):
            continue
        if len(set(value)) >= 10:
            found.append(("credential-literal", match.start()))
    for match in re.finditer(rb"(?m)^PuTTY-User-Key-File-[23]: [A-Za-z0-9-]+\r?\n[\s\S]{0,16384}?^Private-Lines: [1-9][0-9]*\r?\n([A-Za-z0-9+/]{40,}={0,2})", data):
        found.append(("private-key-container", match.start()))
    for match in JWT.finditer(data):
        try:
            head = match.group().split(b".")[0]
            decoded = json.loads(base64.urlsafe_b64decode(head + b"=" * (-len(head) % 4)))
            if isinstance(decoded, dict) and "alg" in decoded:
                found.append(("signed-jwt-candidate", match.start()))
        except (ValueError, UnicodeError):
            pass
    for match in re.finditer(rb"https?://[^/\s\"'<>:@]+:([^/\s\"'<>@]{8,255})@", data):
        value = match.group(1).lower()
        if value not in (b"password", b"your_password", b"example_password") and bytes([36, 123]) not in value:
            found.append(("url-credential", match.start()))
    return sorted(set(found))

def safe_path(path):
    raw = path.encode("utf-8")
    return {"path": "<redacted-sensitive-path>", "pathSha256": sha(raw)} if secrets(raw) else {"path": path}

def path_rules(path):
    parts = path.replace("\\", "/").split("/")
    lower = [x.lower() for x in parts]
    result = []
    if path.startswith(("/", "\\")) or any(x in ("", ".", "..") for x in parts) or ":" in path:
        result.append("unsafe-git-path")
    if lower[0] in PRIVATE_ROOTS or ".git" in lower:
        result.append("private-path")
    if lower[-1] in PRIVATE_NAMES or lower[-1].startswith(".env.") and not lower[-1].endswith((".example", ".sample")):
        result.append("credential-or-private-input-path")
    if Path(lower[-1]).suffix in BANNED_EXT:
        result.append("restricted-payload-extension")
    return result

def magic(data):
    prefixes = {b"7z\xbc\xaf\x27\x1c": "7zip", b"PK\x03\x04": "zip", b"PK\x05\x06": "zip",
                b"Rar!\x1a\x07": "rar", b"\x1f\x8b": "gzip", b"\xfd7zXZ\x00": "xz",
                b"\x7fELF": "elf", b"MZ": "pe", b"dex\n": "dex", b"%PDF-": "pdf", b"ITSF": "chm",
                b"SARC": "sarc", b"XBB": "xbb", b"BCH\x00": "bch", b"DVLB": "shader", b"FBXD": "fbxd"}
    for prefix, name in prefixes.items():
        if data.startswith(prefix):
            return name
    if data[256:260] in (b"NCCH", b"NCSD"):
        return "3ds-container"
    if data[128:132] in (b"CRO0", b"CRS0"):
        return "3ds-module"
    if len(data) >= 32 and data[:4] == b"\x20\x20\x00\x00" and int.from_bytes(data[16:20], "little") > 0:
        return "cia-like-header"
    if len(data) > 512 and data[257:262] == b"ustar":
        return "tar"
    return None

def content_rules(data, private_hashes, authored_encoded_hashes=()):
    result = []
    if sha(data) in private_hashes:
        result.append(("known-private-game-payload", 0))
    if data.startswith(b"version https://git-lfs.github.com/spec/v1"):
        result.append(("uninspected-lfs-object", 0))
    result.extend(secrets(data))
    signature = magic(data)
    if signature:
        result.append(("restricted-format-" + signature, 0))
    try:
        data.decode("utf-8")
        if re.search(rb"[\x00-\x08\x0e-\x1f]", data):
            result.append(("unapproved-binary", 0))
    except UnicodeError:
        result.append(("unapproved-binary", 0))
    for pattern, decode in ((HEX, bytes.fromhex), (B64, lambda x: base64.b64decode(x, validate=True))):
        for match in pattern.finditer(data):
            if len(match.group()) > 32 * 1024 * 1024:
                result.append(("oversize-encoded-region", match.start()))
                continue
            try:
                payload = decode(match.group().decode("ascii"))
            except ValueError:
                continue
            if sha(payload) in private_hashes or magic(payload) and sha(payload) not in authored_encoded_hashes:
                result.append(("encoded-restricted-payload", match.start()))
            elif len(payload) >= 65536 and b"\x00" in payload:
                result.append(("large-opaque-encoded-binary", match.start()))
    return sorted(set(result))

def read_owned(root, relative):
    path = root / relative
    if path.is_symlink() or not path.resolve().is_relative_to(root):
        raise ValueError("Uninspected metadata or public-resource link")
    return path.read_bytes()

def authored_xbb_fixture(root):
    source_path = "toolscripts/native_archive032_fixtures.py"
    fixture_path = "evidence/lanes/native-archive032/xbb/synthetic-fixtures.json"
    if not (root / fixture_path).exists():
        return {}
    source = read_owned(root, source_path)
    data = read_owned(root, fixture_path)
    source_sha = "738f08949ae658eb3eaa580b7dfd872613d3f53e12c5feb41fca94cdc72c2402"
    fixture_sha = "1acba07c1d27452f6cc82ff5aa35d620876922a18cd336abc8e1d9f91d459de2"
    if sha(source) != source_sha or len(source) != 3220 or sha(data) != fixture_sha or len(data) != 113672:
        raise ValueError("Authored XBB generator or fixture identity changed")
    regenerate = """import hashlib,json,sys
scope={"__name__":"verified_authored_xbb_generator"}
exec(compile(sys.stdin.buffer.read(),"verified-fixture-generator","exec"),scope)
images,rows={},[]
for item in scope["cases"]():
    spec=item["specification"];image=spec["image"];identity=hashlib.sha256(image).hexdigest()
    images[identity]={"bytes":len(image),"hex":image.hex()}
    rows.append({"name":item["name"],"imageSha256":identity,
        "fields":{key:value.hex() if isinstance(value,bytes) else value for key,value in spec.items() if key!="image"}})
print(json.dumps({"images":images,"cases":rows}))
"""
    child = subprocess.run([sys.executable, "-I", "-S", "-c", regenerate], input=source,
        capture_output=True, timeout=30, check=True)
    if len(child.stdout) > 1024 * 1024 or child.stderr:
        raise ValueError("Unexpected authored fixture regeneration output")
    regenerated = json.loads(child.stdout)
    images, rows = regenerated["images"], regenerated["cases"]
    expected = {"generator": {"path": source_path, "sha256": source_sha, "bytes": len(source)},
        "images": images, "cases": rows, "originalAssetBytesIncluded": False}
    if json.loads(data) != expected:
        raise ValueError("Authored XBB fixtures do not reproduce from the reviewed generator")
    return {fixture_path: {"sha256": fixture_sha, "size": len(data),
        "origin": "independently-regenerated-authored-synthetic-xbb",
        "sourceGeneratorSha256": source_sha, "encodedSyntheticPayloadSha256": sorted(images)}}


def public_allowlist(root):
    raw = read_owned(root, MANIFEST)
    if sha(raw) != MANIFEST_SHA:
        raise ValueError("Public Squirrel manifest identity mismatch")
    manifest = json.loads(raw)
    if len(manifest["files"]) != 80 or manifest["sha256"] != "8667e181ac2e0428d60d74a4fae6b5c15b8ed0f0933253cc7cf1aaa847d0ee25":
        raise ValueError("Public Squirrel release identity mismatch")
    allowed = {}
    for item in manifest["files"]:
        path = UPSTREAM + item["path"]
        if not path.startswith(UPSTREAM + "upstream/") or ".." in Path(path).parts or path in allowed:
            raise ValueError("Invalid public Squirrel path")
        allowed[path] = {"sha256": item["sha256"], "size": item["bytes"], "origin": "verified-public-squirrel-2.2.5"}
        data = read_owned(root, path)
        if sha(data) != item["sha256"] or len(data) != item["bytes"]:
            raise ValueError("Changed public Squirrel file: " + path)
    copyright_path = UPSTREAM + "upstream/COPYRIGHT"
    if allowed[copyright_path]["sha256"] != "24517556c2acb13cd9f055dbc0b608b6888ca7e0b2665be4d5f09ab2811de0e1":
        raise ValueError("Public Squirrel license mismatch")
    zipped = read_owned(root, HEADER_PATH)
    if sha(zipped) != HEADER_SHA or len(zipped) != 151286:
        raise ValueError("Public header ZIP identity mismatch")
    with zipfile.ZipFile(io.BytesIO(zipped)) as archive:
        entries = archive.infolist()
        if len(entries) != 11 or sum(x.file_size for x in entries) != 1356300:
            raise ValueError("Public header ZIP member census mismatch")
        for item in entries:
            if not item.filename.startswith("native-includes/") or ".." in Path(item.filename).parts or item.file_size > 2000000:
                raise ValueError("Unsafe public header member")
            archive.read(item)
        for name in ("NOTICE", "NOTICE.toolchain"):
            if not archive.read("native-includes/" + name):
                raise ValueError("Missing public header license notice")
    allowed[HEADER_PATH] = {"sha256": HEADER_SHA, "size": 151286, "origin": "verified-public-aosp-llvm-headers-with-notices"}
    return allowed

def private_hashes(root):
    paths = set((root / "evidence/inventory").glob("*.json"))
    paths.update(root / x for x in ("evidence/assets/base.json", "evidence/assets/update.json",
                 "evidence/lanes/container-inventory-wave003/base.json", "evidence/lanes/container-inventory-wave003/update.json"))
    result, sources = set(), []
    keys = {"archiveSha256", "ciaSha256", "ncchSha256", "codeSha256", "decompressedCodeSha256", "exheaderSha256"}
    def walk(value):
        if isinstance(value, dict):
            for key, item in value.items():
                if isinstance(item, str) and re.fullmatch("[0-9a-f]{64}", item):
                    if key in keys or key == "sha256" and any(isinstance(value.get(x), int) and value[x] > 0 for x in ("size", "bytes")):
                        result.add(item)
                if key != "inventoryInput":
                    walk(item)
        elif isinstance(value, list):
            for item in value:
                walk(item)
    for path in sorted(paths):
        if path.is_file():
            data = read_owned(root, path.relative_to(root))
            walk(json.loads(data))
            sources.append({"path": path.relative_to(root).as_posix(), "sha256": sha(data)})
    result.discard(sha(b""))
    return result, sources

def snapshot(root):
    return {"head": git(root, "rev-parse", "HEAD").decode().strip(),
            "refs": git(root, "show-ref", "--head"), "index": git(root, "ls-files", "--stage", "-z"),
            "status": git(root, "status", "--porcelain=v1", "-z", "--untracked-files=all")}

def entries(raw):
    for item in raw.split(b"\0"):
        if item:
            meta, path = item.split(b"\t", 1)
            fields = meta.decode("ascii").split()
            yield fields[0], fields[1:], path.decode("utf-8")

def inspect(path, data, allowed, deny):
    identity = allowed.get(path)
    if identity and sha(data) == identity["sha256"] and len(data) == identity["size"]:
        if "encodedSyntheticPayloadSha256" in identity:
            return content_rules(data, deny, set(identity["encodedSyntheticPayloadSha256"]))
        return secrets(data)
    rules = [(x, 0) for x in path_rules(path)] + secrets(path.encode("utf-8"))
    if identity or path.startswith(UPSTREAM + "upstream/"):
        rules.append(("public-import-identity-mismatch", 0))
    rules.extend(content_rules(data, deny))
    return sorted(set(rules))

def audit(root, require_clean=False, max_blob=64 * 1024 * 1024, allow=None, deny=None):
    root = Path(root).resolve()
    initial = snapshot(root)
    findings, working, historical, metadata = [], [], [], []
    allowed = public_allowlist(root) if allow is None else allow
    game_hashes, hash_sources = private_hashes(root) if deny is None else (set(deny), [])
    for rule, offset in secrets(initial["refs"]):
        findings.append({"scope": "git-ref-metadata", "rule": rule, "offset": offset})
    if git(root, "rev-parse", "--is-shallow-repository").strip() != b"false":
        findings.append({"scope": "repository", "rule": "shallow-history"})
    if b"refs/replace/" in initial["refs"]:
        findings.append({"scope": "repository", "rule": "replace-refs-present"})
    graft = Path(git(root, "rev-parse", "--git-path", "info/grafts").decode().strip())
    if not graft.is_absolute():
        graft = root / graft
    if graft.is_file() and graft.stat().st_size:
        findings.append({"scope": "repository", "rule": "history-grafts-present"})
    objects = git(root, "rev-list", "--objects", "--no-object-names", "--all", "HEAD").splitlines()
    commits = git(root, "rev-list", "--all", "HEAD").splitlines()
    aliases = {}
    for commit in commits:
        for mode, fields, path in entries(git(root, "ls-tree", "-rz", "--full-tree", commit.decode())):
            kind, oid = fields
            if mode in ("120000", "160000") or kind != "blob":
                findings.append({"scope": "history", "commit": commit.decode(), **safe_path(path), "rule": "uninspected-link-or-submodule"})
            else:
                aliases.setdefault(oid, set()).add(path)
    index = {}
    for mode, fields, path in entries(initial["index"]):
        oid, stage = fields
        if mode not in ("100644", "100755") or stage != "0":
            findings.append({"scope": "index", **safe_path(path), "rule": "uninspected-index-entry"})
        aliases.setdefault(oid, set()).add(path)
        index[path] = oid
        objects.append(oid.encode())
    untracked = [x.decode("utf-8") for x in git(root, "ls-files", "--others", "--exclude-standard", "-z").split(b"\0") if x]
    for path in sorted(set(index) | set(untracked)):
        target = root / path
        if target.is_symlink() or not target.is_file() or not target.resolve().is_relative_to(root):
            findings.append({"scope": "working-tree", **safe_path(path), "rule": "missing-or-uninspected-working-file"})
            continue
        before = target.stat()
        if before.st_size > max_blob:
            findings.append({"scope": "working-tree", **safe_path(path), "rule": "oversize-uninspected-file"})
            continue
        data = target.read_bytes()
        if target.stat().st_mtime_ns != before.st_mtime_ns:
            findings.append({"scope": "working-tree", **safe_path(path), "rule": "file-changed-during-read"})
        for rule, offset in inspect(path, data, allowed, game_hashes):
            findings.append({"scope": "working-tree", **safe_path(path), "rule": rule, "offset": offset})
        working.append({**safe_path(path), "sha256": sha(data), "sizeBytes": len(data), "tracked": path in index})
    object_ids = sorted(set(objects))
    process = subprocess.Popen(["git", "--no-replace-objects", "-C", str(root), "cat-file", "--batch"],
                               stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    object_format = git(root, "rev-parse", "--show-object-format").strip().decode()
    try:
        for raw_oid in object_ids:
            oid = raw_oid.decode("ascii")
            process.stdin.write(raw_oid + b"\n")
            process.stdin.flush()
            header = process.stdout.readline().decode("ascii").split()
            if len(header) != 3:
                raise RuntimeError("Missing reachable Git object")
            returned, kind, size_text = header
            size = int(size_text)
            if size > max_blob:
                remaining = size
                while remaining:
                    block = process.stdout.read(min(1048576, remaining))
                    if not block:
                        raise RuntimeError("Truncated Git object")
                    remaining -= len(block)
                process.stdout.read(1)
                findings.append({"scope": "history", "oid": oid, "rule": "oversize-uninspected-object", "sizeBytes": size})
                continue
            data = process.stdout.read(size)
            if len(data) != size or process.stdout.read(1) != b"\n":
                raise RuntimeError("Truncated Git object")
            calculated = hashlib.new(object_format, kind.encode() + b" " + str(size).encode() + b"\0" + data).hexdigest()
            if returned != oid or calculated != oid:
                raise RuntimeError("Git object identity mismatch")
            if kind == "blob":
                paths = sorted(aliases.get(oid, []))
                if not paths:
                    findings.append({"scope": "history", "oid": oid, "rule": "unpathed-reachable-blob"})
                for path in paths:
                    for rule, offset in inspect(path, data, allowed, game_hashes):
                        findings.append({"scope": "history", "oid": oid, **safe_path(path), "rule": rule, "offset": offset})
                historical.append({"oid": oid, "sha256": sha(data), "sizeBytes": size, "paths": [safe_path(x) for x in paths]})
            elif kind in ("commit", "tag"):
                for rule, offset in secrets(data):
                    findings.append({"scope": "history-metadata", "oid": oid, "rule": rule, "offset": offset})
                metadata.append({"oid": oid, "kind": kind, "sha256": sha(data)})
    finally:
        process.stdin.close()
        process.wait(timeout=30)
        process.stdout.close()
        process.stderr.close()
    final = snapshot(root)
    if final != initial:
        findings.append({"scope": "repository", "rule": "repository-changed-during-audit"})
    for item in working:
        if item["path"] != "<redacted-sensitive-path>":
            path = root / item["path"]
            if not path.is_file() or sha(path.read_bytes()) != item["sha256"]:
                findings.append({"scope": "working-tree", **safe_path(item["path"]), "rule": "file-changed-after-scan"})
    for item in hash_sources:
        if sha(read_owned(root, item["path"])) != item["sha256"]:
            findings.append({"scope": "original-hash-metadata", **safe_path(item["path"]), "rule": "metadata-changed-during-audit"})
    if require_clean and initial["status"]:
        findings.append({"scope": "repository", "rule": "publication-revision-is-not-clean"})
    return {"schemaVersion": 1, "createdAtUtc": datetime.now(timezone.utc).isoformat(), "revision": initial["head"],
            "passed": not findings, "publicationReady": not findings and not initial["status"],
            "scope": {"allRefsAndHead": True, "indexBlobs": True, "trackedAndNonignoredUntracked": True,
                      "ignoredPrivateFilesRead": False, "commitAndTagCredentialChecks": True},
            "counts": {"commits": len(commits), "objects": len(object_ids), "historyAndIndexBlobs": len(historical),
                       "workingFiles": len(working), "trackedFiles": len(index), "untrackedFiles": len(untracked)},
            "snapshotHashes": {x: sha(initial[x]) for x in ("refs", "index", "status")},
            "publicAllowlist": allowed, "knownPrivateGameHashes": len(game_hashes), "privateHashMetadata": hash_sources,
            "findings": findings, "workingFiles": working, "historyAndIndexBlobs": historical, "commitAndTagMetadata": metadata,
            "limitations": ["Heuristic credential detection cannot prove absence of arbitrary or deliberately encoded secrets.",
                           "Unknown binary/archive formats and indirect Git LFS/submodule contents fail closed.",
                           "Known original hashes and format checks do not prove provenance of every possible plaintext fragment.",
                           "Bounded instruction/header bytes in derived validation metadata are retained; no whole game payload is authorized.",
                           "Ignored files, unreachable objects/reflogs, external CI artifacts and future commits are outside this snapshot.",
                           "Final publication requires a clean rerun on the exact revision being pushed; no rewrite or push is performed."]}

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--require-clean", action="store_true")
    args = parser.parse_args()
    root = args.root.resolve()
    output = args.output or root / "work/publication-audit/report.json"
    if not output.is_absolute():
        output = root / output
    if not output.resolve().is_relative_to(root / "work/publication-audit"):
        raise ValueError("Audit output must remain under work/publication-audit")
    try:
        report = audit(root, require_clean=args.require_clean)
    except (OSError, ValueError, RuntimeError, subprocess.SubprocessError) as error:
        try:
            revision = git(root, "rev-parse", "HEAD").decode().strip()
        except RuntimeError:
            revision = None
        report = {"schemaVersion": 1, "revision": revision, "passed": False, "publicationReady": False, "findings": [{"rule": "audit-incomplete", "errorType": type(error).__name__, "reason": str(error)}]}
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"report": str(output), "revision": report.get("revision"), "passed": report["passed"],
                      "publicationReady": report["publicationReady"], "findingCount": len(report["findings"])}))
    return 0 if report["passed"] else 1

if __name__ == "__main__":
    raise SystemExit(main())

