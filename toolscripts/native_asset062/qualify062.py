import hashlib
import json
import sys
from pathlib import Path
from build062 import build,ROOT,WORK,FLAGS,command
from inputs062 import inputs,guard
import first062
import records_proof062
import seed_proof062
import metadata_proof062
import manager_proof062
import lifetime_proof062


PROOFS=[('first-packet-proof.json',first062,'sets'),('records-proof.json',records_proof062,'programs'),('seed-proof.json',seed_proof062,'sets'),('metadata-proof.json',metadata_proof062,'sets'),('manager-proof.json',manager_proof062,'sets'),('lifetime-proof.json',lifetime_proof062,'sets')]


def compile_draft(folder,target):
    profiles=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC']);folder.mkdir(parents=True,exist_ok=True)
    for name in ['resource062.c','headers062.c']:
        command([ROOT/'tools/clang-21/clang.exe',*profiles[target],*FLAGS,'-I',WORK/'source','-I',ROOT/'work/native-stream061/source','-I',ROOT/'work/native-stream059/source','-I',ROOT/'src/native/wave058','-I',ROOT/'src/native/wave056','-c',WORK/'source'/name,'-o',folder/(Path(name).stem+'.o')],folder/(name+'-compile.json'))


def qualify(output):
    output.mkdir(exist_ok=False);before=inputs();builds=[]
    for target in ['arm','windows','a64']:
        builds.append(build(output/'build'/target,target));compile_draft(output/'caller-draft'/target,target)
    (output/'build.json').write_text(json.dumps(builds,indent=2)+'\n',encoding='utf-8');baseline=json.loads((WORK/'baseline-preservation.json').read_text(encoding='utf-8'));preserved=[]
    for filename,module,field in PROOFS:
        module.main(output/'build',output/filename);report=json.loads((output/filename).read_text(encoding='utf-8'));digest=hashlib.sha256(json.dumps(report[field],separators=(',',':'),sort_keys=True).encode()).hexdigest();old=next(row for row in baseline['reports']if row['file']==filename)
        if digest!=old['sha256']:raise ValueError('062 prior complete observation contract changed: '+filename)
        preserved.append(dict(file=filename,field=field,sha256=digest))
    summary=dict(status='guarded-closed-providers-passed-caller-still-unqualified',setCount=681,fourProfileObservations=2724,preservedObservationContracts=preserved,wholeResourceCallerClaim=False,callerDraftOnlyCompiledObjects=6,sourceCreditGranted=0)
    (output/'summary.json').write_text(json.dumps(summary,indent=2)+'\n',encoding='utf-8');guard(before,output);print('062 guarded681sets2724observations preserved; owner remains unqualified',flush=True)
    return summary

if __name__=='__main__':qualify(Path(sys.argv[1])if len(sys.argv)>1 else WORK/'qualification-attempt001')
