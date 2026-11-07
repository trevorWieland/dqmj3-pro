import json
from pathlib import Path
from native_caller055_measure import ROOT, WORK, SOURCE, pin
from native_state055_build import command


def run():
    output = WORK/'preflight'
    output.mkdir(parents=True,exist_ok=True)
    clang = ROOT/'tools/clang-21/clang.exe'
    flags = ['-std=c11','-O2','-ffreestanding','-fno-builtin','-ffp-contract=off','-Wall','-Wextra','-Werror','-I',SOURCE]
    profiles = [('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),
                ('windows','x86_64-pc-windows-msvc',[]),
                ('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]
    rows = []
    for name in ['address055.c','selector055.c']:
        for profile,target,extra in profiles:
            obj = output/(profile+'-'+name+'.o')
            result = command([clang,'--target='+target,*extra,*flags,'-c',SOURCE/name,'-o',obj])
            rows.append(dict(source=pin(SOURCE/name),profile=profile,compiler=pin(clang),command=result,object=pin(obj)))
    report = dict(schemaVersion=1,status='new-public-C-independent-compiler-preflight',compilations=6,rows=rows,
                  privateOriginalInputRequired=False,originalProgramExecuted=False,
                  windowsOnlyNewProductionC=False,sourceCreditGranted=0,producer=pin(Path(__file__).resolve()))
    path = WORK/'preflight.json'
    path.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return report


if __name__=='__main__':
    run()
