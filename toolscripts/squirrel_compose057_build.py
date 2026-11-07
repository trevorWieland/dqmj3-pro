import json
import argparse
import hashlib
import re
import os
import subprocess
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
TOOL_ROOT=Path(os.environ.get('SQUIRREL_COMPOSE057_TOOL_ROOT',str(ROOT))).resolve()
PROVIDERS=ROOT/'evidence/lanes/squirrel-compose057/stage-v1/providers.json'
sys.path.insert(0,str(ROOT/'toolscripts'))


def pin(path):
    try:name=path.relative_to(ROOT).as_posix()
    except ValueError:name=path.as_posix()
    return {'path':name,'bytes':path.stat().st_size,
            'sha256':hashlib.sha256(path.read_bytes()).hexdigest()}


def inputs(paths):
    pending=[*paths,SOURCE/'bindings057.h']
    seen=set()
    while pending:
        path=pending.pop().resolve()
        if path in seen:continue
        if not path.is_relative_to(ROOT):raise ValueError('Quoted input escaped the repository')
        seen.add(path)
        for relative in re.findall(r'^\s*#\s*include\s*"([^"]+)"',path.read_text(),re.M):
            header=(path.parent/relative).resolve()
            if not header.is_file():header=(SOURCE/relative).resolve()
            if not header.is_file():raise ValueError('Quoted source input is missing: '+relative)
            pending.append(header)
    seen.add(ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json')
    seen.add(PROVIDERS)
    return [pin(path)for path in sorted(seen)]


def selected():
    providers=json.loads(PROVIDERS.read_text())
    result=[(ROOT/name).resolve()for name in providers['selectedSources']]
    if len(result)!=97 or len(set(result))!=97 or any(not path.is_relative_to(ROOT)for path in result):
        raise ValueError('Explicit composition selection changed or escaped the source root')
    return result,providers['excludedSources']


CONTROLS={
    'premature-retired-frame-read':('../../source/squirrel-wave047/native_call.c',
        '    publish_frame(vm,&local);',
        '    const void *volatile retired_instruction057=\n'
        '        sq_vm_call_stack022(vm)[sq_vm_call_count022(vm)].instruction;\n'
        '    (void)retired_instruction057;\n    publish_frame(vm,&local);'),
    'wrong-metamethod-vector':('metamethod057.c',
        'sq_startup_metamethod_names045(sq_execution_shared047(vm))',
        'sq_startup_type_names045(sq_execution_shared047(vm))'),
    'leaked-program-owner':('programs057.c','    sq_prefix_clear(&program057);','    (void)program057;'),
    'leaked-caller-top':('programs057.c','    fn_00173cb8(vm,1);','    fn_00173cb8(vm,0);'),
    'polluted-legacy-carrier':('boot057.c','    return live_vm057;',
        '#if __SIZEOF_POINTER__ == 8\n'
        '    __builtin_memcpy(sq_shared_prefix040(live_vm057->shared)->unknown_0000,\n'
        '        &live_vm057->shared,sizeof(void*));\n#endif\n    return live_vm057;')}


def build(profile,control=None):
    output=WORK/'controls'/control/profile if control else WORK/('session-v2-'+profile)
    output.mkdir(parents=True,exist_ok=True)
    paths,excluded=selected()
    initial_inputs=inputs(paths)
    baseline=None
    if control:
        baseline=json.loads((WORK/('session-v2-'+profile)/'inventory.json').read_text())
        if baseline.get('inputs')!=initial_inputs or baseline['linkExitCode']:
            raise ValueError('Control cannot reuse objects from different source/header inputs')
        if baseline['objects']!=[pin(ROOT/row['path'])for row in baseline['objects']]:
            raise ValueError('Control baseline object identity changed')
    if control:
        name,before,after=CONTROLS[control]
        original=(SOURCE/name).resolve()
        if paths.count(original)!=1:raise ValueError('Control must replace exactly one actually selected source')
        content=original.read_text()
        if content.count(before)!=1:raise ValueError('Control edit no longer has exactly one source site')
        mutant=output/Path(name).name
        mutant.write_text(content.replace(before,after))
        paths=[mutant if path==original else path for path in paths]
    receipts=[]
    objects=[]
    for index,path in enumerate(paths):
        if control and path!=mutant:
            objects.append(ROOT/baseline['objects'][index]['path'])
            receipts.append({'source':path.relative_to(ROOT).as_posix(),
                             'reusedExactBaselineObject':baseline['objects'][index]})
            continue
        target=output/(str(index)+('.obj'if profile=='windows'else'.o'))
        target_flags={'windows':['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],
                      'arm':['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp'],
                      'a64':['--target=aarch64-none-elf'],
                      'android':['--target=aarch64-linux-android35','-fPIC']}[profile]
        quotes=['-iquote',original.parent]if control else []
        argv=[TOOL_ROOT/'tools/clang-21/clang.exe',*target_flags,*quotes,
              '-std=c11','-O3','-ffreestanding','-fno-builtin','-fno-stack-protector',
              '-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables',
              '-Wall','-Wextra','-Werror','-iquote',SOURCE,'-include',SOURCE/'bindings057.h','-c',path,'-o',target]
        result=subprocess.run([str(item)for item in argv],cwd=ROOT,capture_output=True,timeout=60)
        log=output/(str(index)+'.log')
        log.write_bytes(result.stdout+result.stderr)
        receipts.append({'source':path.relative_to(ROOT).as_posix(),'argv':[str(value)for value in argv],'exitCode':result.returncode,
                         'log':log.relative_to(ROOT).as_posix()})
        if result.returncode:
            (output/'compile-attempt.json').write_text(json.dumps(receipts,indent=2)+'\n')
            print(json.dumps(receipts[-1]))
            raise SystemExit(result.returncode)
        objects.append(target)
    linker=TOOL_ROOT/'tools/clang-21/ld.lld.exe'
    if profile=='windows':
        exports=['factory','execute','boot','observe','run','cleanup','heap_counts','heap_events','heap_allocations','meta_contract']
        callback_rows=json.loads((ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json').read_text())['bindings']
        callback_exports=['/export:'+row['sourceSymbol']for row in callback_rows]
        data_exports=['/export:'+name+',data'for name in ['sq_table_vtable019','sq_native_closure_vtable013',
            'sq_string_vtable015','sq_fixture_vm_operations045']]
        argv=[linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',
              *['/export:sq_compose_'+name+'057'for name in exports],
              *callback_exports,*data_exports,
              '/export:sq_compose_fault057,data','/out:'+str(output/'compose057.dll'),*objects]
    elif profile=='android':
        argv=[linker,'-m','aarch64elf','-shared','--no-undefined','-z','max-page-size=16384',
              *objects,'-o',output/'compose057.so']
    else:
        start=0x900000 if profile=='arm' else 0x100900000
        script=output/'compose057.ld'
        script.write_text('SECTIONS { . = '+hex(start)+'; .text : { *(.text .text.*) } '
                          '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                          '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                          '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
        argv=[linker,'-m','armelf'if profile=='arm'else'aarch64elf','--no-undefined',
              '--entry=sq_compose_boot057','-T',script,*objects,'-o',output/'compose057.elf']
    result=subprocess.run([str(item)for item in argv],cwd=ROOT,capture_output=True,timeout=120)
    if inputs(selected()[0])!=initial_inputs:raise ValueError('Source or quoted header changed during compilation')
    (output/'link.log').write_bytes(result.stdout+result.stderr)
    record={'status':'source-selection-link-inventory-not-executed','selectedSources':[q.relative_to(ROOT).as_posix()for q in paths],
            'excludedSources':excluded,'compilationReceipts':receipts,'linkExitCode':result.returncode,
            'linkLog':(output/'link.log').relative_to(ROOT).as_posix(),'productionStartupQualified':False,
            'linkArgv':[str(value)for value in argv],'control':control,
            'inputs':initial_inputs,'objects':[pin(path)for path in objects],
            'producer':pin(Path(__file__)),'compiler':pin(TOOL_ROOT/'tools/clang-21/clang.exe'),
            'linker':pin(TOOL_ROOT/'tools/clang-21/ld.lld.exe'),
            'frozenSourcesModified':False,'sourceCreditGranted':0}
    (output/'inventory.json').write_text(json.dumps(record,indent=2)+'\n')
    print(json.dumps({'selectedSources':len(paths),'excludedSources':len(excluded),'linkExitCode':result.returncode}))
    if result.returncode:
        print(result.stderr.decode())
    return record


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--profile',choices=['windows','arm','a64','android'],default='windows')
    parser.add_argument('--control',choices=sorted(CONTROLS))
    args=parser.parse_args()
    build(args.profile,args.control)
