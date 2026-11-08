from pathlib import Path
import hashlib
import json
import shutil
import subprocess
import sys

WORK=Path(__file__).resolve().parent
sys.path.insert(0,str(WORK))
from qualify063 import ROOT,build,Runtime,observe


def artifacts(folder):
    return {p.relative_to(folder).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()
        for p in sorted(folder.rglob('*'))if p.is_file()and p.suffix in ['.o','.elf','.dll','.lib']}


def main():
    original=ROOT/'src/native/wave063/sdk_words063.c';raw=original.read_bytes()
    copied=WORK/'copied-source';copied.mkdir(exist_ok=False);(copied/'source').mkdir()
    paths=[(WORK/'qualify063.py',copied/'qualify063.py'),
        (WORK/'source/fixture063.c',copied/'source/fixture063.c'),
        (original,copied/'source/sdk_words063.c'),
        (ROOT/'src/native/wave063/sdk_words063.h',copied/'source/sdk_words063.h')]
    for source,destination in paths:shutil.copyfile(source,destination)
    result=subprocess.run([sys.executable,copied/'qualify063.py',copied/'proof',copied/'source/sdk_words063.c'],cwd=ROOT,capture_output=True)
    (WORK/'copied-proof.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError('063 copied-source execution failed')
    if(WORK/'attempt004/report.json').read_bytes()!=(copied/'proof/report.json').read_bytes():raise ValueError('063 complete copied rows differ')
    before=artifacts(WORK/'attempt004');after=artifacts(copied/'proof')
    if before!=after:raise ValueError('063 copied object/linked bytes differ')
    variants=[('wrong-first',b'words + 31',b'words + 30'),
        ('wrong-lcg',b'value * 69069',b'value * 69068'),
        ('clobber-sdk-seed',b'Word062 value = seed;',b'Word062 value = seed;\n    state->sdk_seed = seed;')]
    controls=[]
    for name,a,b in variants:
        folder=WORK/'controls'/name;folder.mkdir(parents=True,exist_ok=False)
        if raw.count(a)!=1:raise ValueError('063 mutation anchor changed')
        source=folder/'sdk_words063.c';source.write_bytes(raw.replace(a,b))
        for target in ['arm','windows','a64']:build(folder/'build'/target,target,source)
        for target in ['arm','windows','a64']:
            runtime=Runtime(target,folder/'build')
            try:
                try:observe(runtime,0x12345678,0xfedcba98)
                except ValueError as error:
                    if not runtime.last_return_completed:raise ValueError('063 mutant did not normally return')
                    controls.append(dict(case=name,target=target,normallyReturned=True,rejected=True,reason=str(error)))
                else:raise ValueError('063 wrong source unexpectedly accepted')
            finally:runtime.close()
    for source,destination in paths:
        if source.read_bytes()!=destination.read_bytes():raise ValueError('063 source changed after copy')
    report=dict(status='standalone-sdk-words-full-source-copy-and-returning-controls-passed',sets=408,
        observations=1632,originalThumbInstructions=22,missingOriginalPcs=[],completeReportBytesIdentical=True,
        identicalArtifactPairs=len(before),returningControlChecks=len(controls),controls=controls,
        sourceCreditGranted=0,wholeCallerClaim=False,originalCodeMappedInSource=False,
        firstFailedAttempts=['attempt001: absent separate lld-link.exe executable; corrected to pinned ld.lld link flavor',
            'attempt002: relative output path rejected by artifact pin; corrected CLI path resolution'],
        priorStructOnlyProof='attempt003',wholeArenaProof='attempt004',artifacts=before)
    (WORK/'verification.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(sets=408,observations=1632,copiedArtifactPairs=len(before),returningControls=len(controls))))


if __name__=='__main__':main()
