import hashlib
import json
from pathlib import Path
import subprocess

ROOT = next(p for p in Path(__file__).resolve().parents if (p / "AGENTS.md").is_file())
WORK = Path(__file__).resolve().parent
PUBLIC = WORK.parents[1]
PRODUCTION = PUBLIC / "src/native/md5-stream062"
FIXTURE = PUBLIC / "tests/fixtures/md5-stream062/fixture_layout062ag.c"
SOURCES = [PRODUCTION / "md5_stream062ag.c", PRODUCTION / "md5_block062ag.c", ROOT / "src/native/wave024/digest.c"]
FLAGS = ["-std=c11", "-O2", "-ffreestanding", "-fno-builtin", "-fno-stack-protector",
    "-Wall", "-Wextra", "-Werror"]
EXPORTS = ["sdk_md5_initialize062ag", "sdk_md5_update062ag", "sdk_md5_finish062ag",
    "sdk_md5_block062ag", "sdk_md5_methods062ag"]


def pin(path):
    path = Path(path)
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size,
        sha256=hashlib.sha256(path.read_bytes()).hexdigest())


def run(argv, log):
    result = subprocess.run(list(map(str,argv)),cwd=ROOT,capture_output=True,text=True,timeout=120)
    log.write_text(json.dumps(dict(argv=list(map(str,argv)),returncode=result.returncode,
        stdout=result.stdout,stderr=result.stderr),indent=2)+"\n")
    if result.returncode:
        raise ValueError("digest build failed: "+str(log))


def build(target, folder, sources=None):
    folder=Path(folder);folder.mkdir(parents=True,exist_ok=False)
    sources=SOURCES if sources is None else list(sources)
    compiler=ROOT/"tools/clang-21/clang.exe";linker=ROOT/"tools/clang-21/ld.lld.exe"
    target_flags={"arm":["--target=arm-none-eabi","-mcpu=mpcore","-marm","-mfloat-abi=soft"],
        "windows":["--target=x86_64-pc-windows-msvc","-mno-incremental-linker-compatible"],
        "android":["--target=aarch64-linux-android29","-fPIC"]}[target]
    objects=[]
    for index, source in enumerate(sources):
        obj=folder/(str(index)+(".obj" if target=="windows" else ".o"))
        run([compiler,*target_flags,*FLAGS,"-I",PRODUCTION,"-I",ROOT/"src/native/wave024",
            "-c",source,"-o",obj],folder/("compile"+str(index)+".json"))
        objects.append(obj)
    from layout062ag import extract
    layout_object=folder/("layout.obj" if target=="windows" else "layout.o")
    run([compiler,*target_flags,*FLAGS,"-I",PRODUCTION,"-c",FIXTURE,"-o",layout_object],folder/"compile-layout.json")
    values=extract(layout_object,"fixture_md5_layout062ag")
    (folder/"layout.json").write_text(json.dumps(dict(values=values,object=pin(layout_object),fixture=pin(FIXTURE),linkedIntoProduction=False),indent=2)+"\n")
    if target=="windows":
        artifact=folder/"digest.dll"
        run([linker,"-flavor","link","/dll","/noentry","/nodefaultlib","/machine:x64",
            "/timestamp:0",*["/export:"+x for x in EXPORTS],"/out:"+str(artifact),*objects],folder/"link.json")
    else:
        address="0xf00000" if target=="arm" else "0x110000000"
        script=folder/"layout.ld"
        script.write_text("SECTIONS { . = "+address+"; .text : { *(.text*) } . = ALIGN(4096); .rodata : { *(.rodata*) } . = ALIGN(4096); .data : { *(.data*) } . = ALIGN(4096); .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n")
        artifact=folder/"digest.elf"
        run([linker,"-m","armelf" if target=="arm" else "aarch64elf","--no-undefined",
            "--build-id=none","--entry=sdk_md5_initialize062ag","-T",script,*objects,"-o",artifact],folder/"link.json")
        if target=="android":
            run([linker,"-m","aarch64elf","--shared","--no-undefined","--build-id=none",
                "-z","max-page-size=16384",*objects,"-o",folder/"libdigest062ag.so"],folder/"link-library.json")
    (folder/"inputs.json").write_text(json.dumps(dict(target=target,flags=target_flags+FLAGS,
        sources=[pin(p) for p in sources],qualificationLayout=pin(FIXTURE),tools=[pin(compiler),pin(linker)],artifact=pin(artifact)),indent=2)+"\n")
    return artifact
