from pathlib import Path

from digest024_build import ROOT, FLAGS, command, pin, load


SOURCE = ROOT / "src/native/wave033/tree_erase.c"
REBALANCE = ROOT / "src/native/wave033/tree_rebalance.c"
EXPORTS = ["tree_erase033", "tree_layout033"]
LAYOUT = ROOT / "toolscripts/tree_erase033_layout.c"


def build(folder, target, source=SOURCE, rebalance=REBALANCE):
    folder = Path(folder).resolve()
    folder.mkdir(parents=True, exist_ok=True)
    if target == "arm":
        flags = ["--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-mfloat-abi=soft", *FLAGS]
    elif target == "windows":
        flags = ["--target=x86_64-pc-windows-msvc", *FLAGS]
    elif target == "android":
        flags = ["--target=aarch64-linux-android29", "-fPIC", *FLAGS]
    else:
        raise ValueError("Unknown tree erase target")
    objects = []
    for number, path in enumerate([source, rebalance, LAYOUT]):
        obj = folder / (path.stem + (".obj" if target == "windows" else ".o"))
        command([ROOT / "tools/clang-21/clang.exe", *flags, "-I", SOURCE.parent, "-I", REBALANCE.parent,
            "-c", path, "-o", obj], folder / ("compile-" + str(number) + ".json"))
        objects.append(obj)
    receipt = {"sources": [pin(source), pin(rebalance), pin(LAYOUT)], "objects": [pin(p) for p in objects],
        "flags": flags, "sourceGraphOriginalCodeMapped": False, "undefinedSymbols": []}
    linker = ROOT / "tools/clang-21/ld.lld.exe"
    if target == "windows":
        output = folder / "tree_erase033.dll"
        command([linker, "-flavor", "link", "/dll", "/noentry", "/nodefaultlib", "/machine:x64", "/timestamp:0",
            *["/export:" + name for name in EXPORTS], "/out:" + str(output), *objects], folder / "link.json")
        receipt["library"] = pin(output)
    else:
        arm = target == "arm"
        low = 0xf00000 if arm else 0x110000000
        script = folder / "tree_erase.ld"
        sections = " ".join(name + " " + hex(low + index * 0x10000) + " : { *(" + name + "*) }" for index, name in enumerate([".text", ".rodata", ".data", ".bss"]))
        script.write_text("SECTIONS { " + sections + " /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n")
        output = folder / "tree_erase.elf"
        command([linker, "-m", "armelf" if arm else "aarch64elf", "--no-undefined", "--build-id=none",
            "--entry=tree_erase033", "-T", script, *objects, "-o", output], folder / "link-model.json")
        receipt.update(linkedElf=pin(output), linkerScript=pin(script))
        if not arm:
            library = folder / "libtree_erase033.so"
            command([linker, "-m", "aarch64elf", "--shared", "--no-undefined", "--build-id=none",
                "-z", "max-page-size=16384", "-z", "common-page-size=16384", *objects, "-o", library], folder / "link-library.json")
            receipt.update(sharedLibrary=pin(library), androidOsOrPhysicalDeviceExecuted=False)
    return output, receipt


if __name__ == "__main__":
    import json
    print(json.dumps({target: build(ROOT / "work/tree-erase033/development" / target, target)[1] for target in ["arm", "windows", "android"]}, indent=2))
