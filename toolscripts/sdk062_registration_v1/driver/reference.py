import json
import subprocess


def build(root, production, qualification, folder, profiles):
    output = folder/'reference-observer'
    output.mkdir(exist_ok=False)
    source = qualification/'fixture_observer062ad.c'
    obj, artifact = output/'observer.o', output/'observer.elf'
    includes = [production, root/'src/native/wave062-sdk/include',
                root/'src/native/wave062-runtime/include', root/'src/native/wave062-owner/include']
    commands = [
        [str(root/'tools/clang-21/clang.exe'),*profiles['arm'],'-std=c11','-O2',
         '-ffreestanding','-fno-builtin','-fno-stack-protector',
         *['-I'+str(path) for path in includes],'-c',str(source),'-o',str(obj)],
        [str(root/'tools/clang-21/ld.lld.exe'),'-Ttext=0xa00000',
         '--defsym=registry_observer_acquire_endpoint062ad=0x474598',
         '--defsym=registry_observer_release_endpoint062ad=0x4745b8',
         '-e','fixture_registry_observe062ad','-o',str(artifact),str(obj)]
    ]
    rows = []
    for argv in commands:
        result = subprocess.run(argv,capture_output=True,text=True)
        rows.append(dict(argv=argv,status=result.returncode,output=result.stdout+result.stderr))
        if result.returncode:
            raise RuntimeError(rows[-1])
    (output/'build.json').write_text(json.dumps(rows,indent=2)+'\n')
