import argparse
import ctypes
import hashlib
import io
import json
import struct
import subprocess
import sys
import zipfile
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "platform/app-shell"
WORK = ROOT / "work/app-shell-wave001"
EVIDENCE = ROOT / "evidence/lanes/app-shell-wave001"
SDK = ROOT / "tools/app-shell-sdk36"
BUILD_TOOLS = SDK / "build-tools/36.0.0"
JDK = ROOT / "tools/app-shell-jdk25"
CLANG = ROOT / "tools/clang-21/clang.exe"
LINKER = ROOT / "tools/clang-21/ld.lld.exe"
EXPORTS = ["shell_reset", "shell_resume", "shell_surface", "shell_step", "shell_restore", "shell_button",
    "shell_axis", "shell_snapshot", "shell_smoke", "shell_rect", "shell_route", "shell_touch", "shell_self_test"]


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def pin(path):
    return {"path": Path(path).relative_to(ROOT).as_posix(), "sha256": sha(path)}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")


def run(argv, log):
    result = subprocess.run([str(x) for x in argv], capture_output=True, timeout=180)
    save(log, {"argv": [str(x) for x in argv], "exitCode": result.returncode,
        "stdout": result.stdout.decode(errors="replace"), "stderr": result.stderr.decode(errors="replace")})
    if result.returncode:
        raise RuntimeError("App-shell command failed; see " + str(log))
    return result.stdout


def accepted_function(game, receipt):
    if game["usedFunction"] != "fn_003453a8":
        raise RuntimeError("Recovered smoke function differs from the shell's actual native call")
    rows = [row for row in receipt.get("functions", []) if row["symbol"] == game["usedFunction"]]
    if receipt.get("status") != "accepted" or len(rows) != 1:
        raise RuntimeError("Recovered smoke function is not uniquely admitted")
    row = rows[0]
    for field in ("symbol", "address", "mode", "sourcePath", "sourceSha256", "originalSpanSha256", "moduleSha256"):
        if row[field] != game["acceptedFunction"][field]:
            raise RuntimeError("Recovered smoke accepted-function identity mismatch")
    if row["sourcePath"] != game["sourcePath"] or row["sourceSha256"] != game["sourceSha256"]:
        raise RuntimeError("Recovered smoke source does not match its admitted row")
    return row


def validate_inputs():
    tools = json.loads((SOURCE / "tool-inputs.json").read_text())
    for item in tools["files"]:
        path = (ROOT / item["path"]).resolve(strict=True)
        if not path.is_relative_to(ROOT) or sha(path) != item["sha256"]:
            raise RuntimeError("App tool dependency changed: " + item["path"])
    game = json.loads((SOURCE / "game-input.json").read_text())
    if sha(ROOT / game["sourcePath"]) != game["sourceSha256"] or sha(ROOT / game["acceptancePath"]) != game["acceptanceSha256"]:
        raise RuntimeError("Recovered C smoke source/immutable acceptance changed")
    accepted_function(game, json.loads((ROOT / game["acceptancePath"]).read_text()))
    return tools, game


def compile_object(source, target, android=False):
    flags = ["--target=aarch64-linux-android29", "-fPIC", "-I", SDK / "native-includes"] if android else ["--target=x86_64-pc-windows-msvc"]
    run([CLANG, *flags, "-O2", "-ffreestanding", "-fno-builtin", "-fno-stack-protector",
        "-I", SOURCE, "-c", source, "-o", target], target.with_suffix(".build.json"))


def build_windows(game, output):
    output.mkdir(parents=True, exist_ok=True)
    objects = {}
    for name, path in (("shell", SOURCE / "shell.c"), ("game", ROOT / game["sourcePath"]), ("win32", SOURCE / "win32.c")):
        target = output / (name + ".obj")
        compile_object(path, target)
        objects[name] = target
    libraries = []
    for name in ("kernel32", "user32", "gdi32"):
        library = output / (name + ".lib")
        run([LINKER, "-flavor", "link", "/lib", "/machine:x64", "/def:" + str(SOURCE / (name + ".def")),
            "/out:" + str(library)], output / (name + "-imports.json"))
        libraries.append(library)
    executable = output / "dqm_diagnostic_shell.exe"
    run([LINKER, "-flavor", "link", "/machine:x64", "/entry:mainCRTStartup", "/nodefaultlib", "/timestamp:0",
        "/subsystem:windows", "/out:" + str(executable), *objects.values(), *libraries], output / "gui-link.json")
    library = output / "dqm_diagnostic_core.dll"
    run([LINKER, "-flavor", "link", "/machine:x64", "/dll", "/noentry", "/nodefaultlib", "/timestamp:0",
        "/out:" + str(library), *["/export:" + name for name in EXPORTS], objects["shell"], objects["game"]], output / "core-link.json")
    self_test = json.loads(run([executable, "--self-test"], output / "self-test.json"))
    if self_test.get("status") != "passed" or self_test.get("guiOpened") is not False or self_test.get("recoveredSmoke") != 1000:
        raise RuntimeError("Native Windows shell self-test failed")
    return {"executable": pin(executable), "coreLibrary": pin(library), "selfTest": self_test,
        "actuallyExecuted": True, "guiRenderingExecuted": False}


def build_native_android(game, output):
    output.mkdir(parents=True, exist_ok=True)
    objects = []
    for name, source in (("shell", SOURCE / "shell.c"), ("game", ROOT / game["sourcePath"]), ("jni", SOURCE / "jni_bridge.c")):
        target = output / (name + ".o")
        compile_object(source, target, True)
        objects.append(target)
    library = output / "libdqm_diagnostic.so"
    run([CLANG, "--target=aarch64-linux-android29", "--ld-path=" + str(LINKER), "-shared", "-nostdlib",
        "-Wl,-z,defs,-z,max-page-size=16384,-soname,libdqm_diagnostic.so", *objects, "-o", library], output / "jni-link.json")
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    alignments = [s["p_align"] for s in elf.iter_segments() if s["p_type"] == "PT_LOAD"]
    symbols = {s.name for s in elf.get_section_by_name(".dynsym").iter_symbols() if s["st_shndx"] != "SHN_UNDEF"}
    jni = sorted(name for name in symbols if name.startswith("Java_org_dqm_diagnostics_ShellActivity_"))
    if elf["e_machine"] != "EM_AARCH64" or not alignments or min(alignments) < 16384 or len(jni) != 11:
        raise RuntimeError("JNI ELF architecture, alignment or interface closure failed")
    if "fn_003453a8" not in symbols:
        raise RuntimeError("Actual recovered source symbol missing from JNI library")
    return library, {"library": pin(library), "machine": elf["e_machine"], "loadAlignments": alignments, "jniSymbols": jni}


def normalize_zip(base, target, additions):
    with zipfile.ZipFile(base) as source, zipfile.ZipFile(target, "w") as output:
        for old in source.infolist():
            info = zipfile.ZipInfo(old.filename, (1980, 1, 1, 0, 0, 0))
            info.compress_type = old.compress_type
            output.writestr(info, source.read(old.filename))
        for name, path, compression in additions:
            info = zipfile.ZipInfo(name, (1980, 1, 1, 0, 0, 0))
            info.compress_type = compression
            output.writestr(info, path.read_bytes())


def package_android(library, output):
    output.mkdir(parents=True, exist_ok=True)
    classes = output / "classes"
    classes.mkdir(exist_ok=True)
    android_jar = SDK / "platforms/android-36/android.jar"
    run([JDK / "bin/javac.exe", "--release", "8", "-Xlint:-options", "-classpath", android_jar,
        "-d", classes, SOURCE / "ShellActivity.java"], output / "javac.json")
    class_jar = output / "classes.jar"
    with zipfile.ZipFile(class_jar, "w", compression=zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(classes.rglob("*.class")):
            info = zipfile.ZipInfo(path.relative_to(classes).as_posix(), (1980, 1, 1, 0, 0, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            archive.writestr(info, path.read_bytes())
    dex = output / "dex"
    dex.mkdir(exist_ok=True)
    java = JDK / "bin/java.exe"
    run([java, "-cp", BUILD_TOOLS / "lib/d8.jar", "com.android.tools.r8.D8", "--release", "--min-api", "29",
        "--lib", android_jar, "--output", dex, class_jar], output / "d8.json")
    base = output / "base.apk"
    run([BUILD_TOOLS / "aapt2.exe", "link", "-I", android_jar, "--manifest", SOURCE / "AndroidManifest.xml",
        "--min-sdk-version", "29", "--target-sdk-version", "36", "-o", base], output / "aapt2.json")
    unsigned = output / "unsigned.apk"
    normalize_zip(base, unsigned, [("classes.dex", dex / "classes.dex", zipfile.ZIP_DEFLATED),
        ("lib/arm64-v8a/libdqm_diagnostic.so", library, zipfile.ZIP_STORED)])
    aligned = output / "aligned.apk"
    run([BUILD_TOOLS / "zipalign.exe", "-P", "16", "-f", "4", unsigned, aligned], output / "zipalign.json")
    signing = WORK / "signing"
    signing.mkdir(parents=True, exist_ok=True)
    key = signing / "diagnostic-debug.p12"
    if not key.exists():
        run([JDK / "bin/keytool.exe", "-genkeypair", "-keystore", key, "-storepass", "android", "-keypass", "android",
            "-alias", "androiddebugkey", "-dname", "CN=Private Diagnostic,O=Local Development,C=US", "-keyalg", "RSA",
            "-keysize", "2048", "-validity", "10000", "-storetype", "PKCS12"], signing / "key-generation.json")
    apk = output / "dqm-diagnostic-shell-debug.apk"
    signer = [java, "-jar", BUILD_TOOLS / "lib/apksigner.jar"]
    run([*signer, "sign", "--ks", key, "--ks-pass", "pass:android", "--key-pass", "pass:android", "--out", apk, aligned], output / "sign.json")
    verified = run([*signer, "verify", "--verbose", "--print-certs", apk], output / "signature-verify.json").decode()
    run([BUILD_TOOLS / "zipalign.exe", "-c", "-P", "16", "-v", "4", apk], output / "alignment-verify.json")
    badging = run([BUILD_TOOLS / "aapt2.exe", "dump", "badging", apk], output / "package-badging.json").decode()
    if "package: name='org.dqm.diagnostics'" not in badging or "targetSdkVersion:'36'" not in badging:
        raise RuntimeError("Android package identity/target SDK mismatch")
    with zipfile.ZipFile(apk) as archive:
        entry = archive.getinfo("lib/arm64-v8a/libdqm_diagnostic.so")
        content = apk.read_bytes()
        name_size, extra_size = struct.unpack_from("<HH", content, entry.header_offset + 26)
        offset = entry.header_offset + 30 + name_size + extra_size
        if entry.compress_type != zipfile.ZIP_STORED or offset % 16384 or archive.read(entry.filename) != library.read_bytes():
            raise RuntimeError("Packaged native library bytes or 16KB ZIP alignment invalid")
    return {"apk": pin(apk), "minimumApi": 29, "targetApi": 36, "abi": "arm64-v8a", "signatureVerified": True,
        "zipAlignmentVerified": True, "nativeLibraryDataOffset": offset, "developmentKey": pin(key),
        "signatureSummary": verified, "packageBadging": badging, "actuallyExecutedOnDevice": False, "apkInstalled": False}


def run_build(output=None):
    output = Path(output or WORK / "build").resolve()
    if not output.is_relative_to(WORK):
        raise RuntimeError("App-shell output escapes owned work root")
    output.mkdir(parents=True, exist_ok=True)
    tools, game = validate_inputs()
    sources = [pin(path) for path in sorted(SOURCE.iterdir()) if path.suffix in (".c", ".h", ".java", ".xml", ".def", ".json")]
    windows = build_windows(game, output / "windows")
    native_library, native = build_native_android(game, output / "android-native")
    android = package_android(native_library, output / "android-package")
    android["native"] = native
    validate_inputs()
    if sources != [pin(ROOT / row["path"]) for row in sources]:
        raise RuntimeError("Shell source changed during build/validation")
    report = {"status": "diagnostic-two-view-shell-builds-passed", "diagnosticOnly": True, "fullGameBuild": False,
        "acceptedSourceCredit": 0, "windows": windows, "android": android, "sources": sources,
        "gameSmoke": game, "toolInputs": pin(SOURCE / "tool-inputs.json"), "officialPackages": tools["packages"],
        "script": pin(Path(__file__)), "sourceStateModel": "one shared C state; primary callback owns ticks; secondary render has no tick",
        "implementedPaths": ["two logical views and single-window fallback", "physical display enumeration and optional Android Presentation",
            "letterbox-aware inverse touch mapping", "controller buttons/axes/dead zones", "pause/resume and surface-generation loss guards",
            "diagnostic tick persistence and resource recreation"],
        "limitations": ["No J3 game engine/assets/gameplay reconstructed by shell", "Windows GUI rendering not executed during automated headless validation",
            "Android lifecycle/input/multidisplay paths compiled but not exercised on device", "AYN Thor hardware/firmware unvalidated"],
        "reproductionArgv": ["tools/python/Scripts/python.exe", "toolscripts/app_shell_build.py", "--output", output.relative_to(ROOT).as_posix()]}
    save(output / "report.json", report)
    if output == WORK / "build":
        save(EVIDENCE / "report.json", report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    report = run_build(args.output)
    print(json.dumps({"status": report["status"], "windowsHeadlessExecuted": True, "androidApkSignedAndAligned": True,
        "androidDeviceExecuted": False, "fullGameBuild": False}))


if __name__ == "__main__":
    main()
