import hashlib
import json
from pathlib import Path
import subprocess

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / "work/digest024"
SOURCE = ROOT / "src/native/wave024/digest.c"
FLAGS = ["-std=c11", "-O2", "-ffreestanding", "-fno-builtin", "-fno-stack-protector", "-Wall", "-Wextra", "-Werror"]


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")


def command(argv, log):
    process = subprocess.run([str(a) for a in argv], cwd=ROOT, capture_output=True, text=True, timeout=180)
    save(log, {"argv": [str(a) for a in argv], "returncode": process.returncode, "stdout": process.stdout, "stderr": process.stderr})
    if process.returncode:
        raise RuntimeError("Digest compilation failed: " + str(log))


def load(path):
    with Path(path).open("rb") as stream:
        elf = ELFFile(stream)
        symbols = elf.get_section_by_name(".symtab")
        entries = {row.name: row["st_value"] for row in symbols.iter_symbols() if row.name and row["st_value"]}
        sections = [(row["sh_addr"], row["sh_size"], row["sh_flags"], row.data() if row["sh_type"] == "SHT_PROGBITS" else b"")
                    for row in elf.iter_sections() if row["sh_flags"] & 2 and row["sh_size"]]
        return sections, entries


def arm(folder, source=SOURCE):
    folder.mkdir(parents=True, exist_ok=True)
    obj, output, script = folder / "digest.o", folder / "digest.elf", folder / "digest.ld"
    flags = ["--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-mfloat-abi=soft", *FLAGS]
    command([ROOT / "tools/clang-21/clang.exe", *flags, "-I", SOURCE.parent, "-c", source, "-o", obj], folder / "compile.json")
    script.write_text("SECTIONS { .text 0xf00000 : { *(.text*) } .rodata 0xf10000 : { *(.rodata*) } .data 0xf20000 : { *(.data*) } .bss 0xf30000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n")
    command([ROOT / "tools/clang-21/ld.lld.exe", "-m", "armelf", "--no-undefined", "--build-id=none", "--entry=fn_001b2554", "-T", script, obj, "-o", output], folder / "link.json")
    return output, {"object": pin(obj), "linkedElf": pin(output), "linkerScript": pin(script), "source": pin(source), "flags": flags, "undefinedSymbols": []}


def windows(folder, source=SOURCE):
    folder.mkdir(parents=True, exist_ok=True)
    obj, output = folder / "digest.obj", folder / "digest.dll"
    command([ROOT / "tools/clang-21/clang.exe", "--target=x86_64-pc-windows-msvc", *FLAGS, "-I", SOURCE.parent,
             "-c", source, "-o", obj], folder / "compile.json")
    command([ROOT / "tools/clang-21/ld.lld.exe", "-flavor", "link", "/dll", "/noentry", "/nodefaultlib", "/machine:x64",
             "/timestamp:0", "/export:fn_001b2554", "/out:" + str(output), obj], folder / "link.json")
    return output, {"object": pin(obj), "library": pin(output), "source": pin(source), "actualOperatingSystemExecuted": False}


def android(folder, source=SOURCE):
    folder.mkdir(parents=True, exist_ok=True)
    obj, library, model, script = folder / "digest.o", folder / "libdigest024.so", folder / "digest-model.elf", folder / "digest.ld"
    command([ROOT / "tools/clang-21/clang.exe", "--target=aarch64-linux-android29", "-fPIC", *FLAGS, "-I", SOURCE.parent,
             "-c", source, "-o", obj], folder / "compile.json")
    command([ROOT / "tools/clang-21/ld.lld.exe", "-m", "aarch64elf", "--shared", "--no-undefined", "--build-id=none",
             "-z", "max-page-size=16384", obj, "-o", library], folder / "link-library.json")
    script.write_text("SECTIONS { .text 0x110000000 : { *(.text*) } .rodata 0x110010000 : { *(.rodata*) } .data 0x110020000 : { *(.data*) } .bss 0x110030000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n")
    command([ROOT / "tools/clang-21/ld.lld.exe", "-m", "aarch64elf", "--no-undefined", "--build-id=none", "--entry=fn_001b2554",
             "-T", script, obj, "-o", model], folder / "link-model.json")
    return model, {"object": pin(obj), "sharedLibrary": pin(library), "modelElf": pin(model), "source": pin(source), "androidOperatingSystemExecuted": False}
