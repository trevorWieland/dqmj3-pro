import argparse
import hashlib
import json
from pathlib import Path
import subprocess

ROOT=Path.cwd();WORK=ROOT/'work/particle019-velocity-v1';SOURCE=WORK/'proposed/src/native/particle019-velocity';CLANG=ROOT/'tools/clang-21/clang.exe';LINK=ROOT/'tools/clang-21/ld.lld.exe'


def pin(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def main(args):
    output=WORK/args.output;assert output.resolve().is_relative_to(WORK.resolve());output.mkdir(exist_ok=False);commands=[];units=[]
    source=SOURCE/'particle_velocity.c'if args.control=='none'else WORK/'controls'/(args.control+'.c')
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-ffp-contract=off','-Wall','-Wextra','-Werror','-I',str(SOURCE)]
    def run(argv):
        result=subprocess.run([str(item)for item in argv],capture_output=True);record=dict(argv=[str(item)for item in argv],exitCode=result.returncode,stdout=result.stdout.decode(errors='replace'),stderr=result.stderr.decode(errors='replace'));commands.append(record)
        (output/'commands.json').write_text(json.dumps(commands,indent=2)+'\n');assert result.returncode==0,record
    for target,triple,extra,base in [('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp'],0xf00000),('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'],0x140000000),('windows','x86_64-pc-windows-msvc',['-mno-incremental-linker-compatible'],0)]:
        objects=[]
        for name,path,role in [('production',source,'production'if args.control=='none'else'returning-control'),('fixture',WORK/'fixtures/velocity_fixture.c','qualification-fixture')]:
            obj=output/(target+'-'+name+('.obj'if target=='windows'else'.o'));run([CLANG,'--target='+triple,*extra,*flags,'-c',path,'-o',obj]);objects.append(obj);units.append(dict(target=target,source=pin(path),object=pin(obj),role=role,includeDirectories=[SOURCE.relative_to(ROOT).as_posix()],quotedHeaders=[pin(SOURCE/'particle_velocity.h')]))
        if target=='windows':run([LINK,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(output/'velocity019.dll'),*objects])
        else:
            script=output/(target+'.ld');script.write_text('SECTIONS { .text '+hex(base)+' : { *(.text*) } .rodata '+hex(base+0x10000)+' : { *(.rodata*) } .data '+hex(base+0x20000)+' : { *(.data*) } .bss '+hex(base+0x30000)+' : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n');run([LINK,'-T',script,'-e','velocity_apply019',*objects,'-o',output/(target+'.elf')])
    receipt=dict(status='source-production-and-separate-fixture-built-from-actual-proposed-paths',control=args.control,producer=pin(Path(__file__)),compiler=pin(CLANG),linker=pin(LINK),units=units,commands=commands,artifacts=[pin(output/name)for name in ['arm.elf','a64.elf','velocity019.dll']],sourceCreditGranted=0);(output/'build.json').write_text(json.dumps(receipt,indent=2)+'\n');print(json.dumps(dict(status=receipt['status'],control=args.control,units=len(units))))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',default='build-v1');parser.add_argument('--control',choices=['none','algebraic','skip_z'],default='none');main(parser.parse_args())
