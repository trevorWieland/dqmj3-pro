import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

import md5_stream062_check as check
import md5_stream062_run as parent

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='evidence/lanes/md5-stream062/public-inputs-v1/expected-replay.json'


def digest(value):
    return hashlib.sha256(json.dumps(value,sort_keys=True,separators=(',',':')).encode()).hexdigest()


def verify(root,source,output):
    if not source.is_relative_to(root/'work')or not output.is_relative_to(root/'work'):
        raise ValueError('MD5 verification outputs must remain in owned work directories')
    expected=check.read(root/EXPECTED)
    parent.validate_completed(source,0,True)
    gate=check.read(source/'gate-receipt.json')
    if not gate['noHistoricalWorkReadAttempts']:
        raise ValueError('Source execution accessed historical work')
    inputs=gate['inputs']
    for row in inputs:
        if hashlib.sha256(Path(row['path']).read_bytes()).hexdigest()!=row['sha256']:
            raise ValueError('Selected MD5 input changed after source process exit')
    artifacts={p.relative_to(source).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()
        for p in source.rglob('*')if p.is_file()and p.suffix in {'.o','.obj','.elf','.dll','.so','.lib','.exp','.a'}}
    if artifacts!=expected['nativeArtifacts']or len(artifacts)!=136:
        raise ValueError('Complete raw native MD5 artifact roster differs')
    behavior=check.read(source/'behavior/report.json')
    controls=check.read(source/'controls/report.json')
    if digest(check.observations(behavior))!=expected['sourceObservationSha256']:
        raise ValueError('Structural or stream operation observations differ')
    if digest(check.semantic(controls))!=expected['returningControlSemanticsSha256']:
        raise ValueError('Compiled returning control behavior differs')
    output.mkdir(parents=True,exist_ok=False)
    denied=output/'forced-zero-parent'
    argv=[sys.executable,'-I','-B',str(root/'toolscripts/md5_stream062_run.py'),
        '--output',str(denied),'--public-data-only','--boundary-control','forced-exit0']
    run=subprocess.run(argv,cwd=root,capture_output=True,timeout=60)
    (output/'parent-attempt.log').write_bytes(run.stdout+run.stderr)
    failure=check.read(denied/'parent-validation.json')
    child=check.read(denied/'parent-process.json')
    denial=check.read(denied/'gate-receipt.json')
    if run.returncode==0 or child['returncode']!=0 or failure['status']!='rejected-after-child-exit'\
            or failure['childReturncode']!=0 or not denial['rejected']:
        raise ValueError('Forced child exit zero evaded the reusable parent')
    receipt=dict(status='MD5-committed-source-post-exit-check-passed',nativeArtifacts=136,
        allSelectedInputsRehashedAfterExit=len(inputs),sourceObservationSha256=expected['sourceObservationSha256'],
        returningControlSemanticsSha256=expected['returningControlSemanticsSha256'],
        actualChildExitZeroRejectedByReusableParent=True,rawArtifactHashes=artifacts,
        structuralCases=len(behavior['rows']),streamPrograms=len(behavior['programs']),
        sourceOnlyOriginalReads=0,physicalAndroidExecutionClaimed=False,sourceCreditGranted=0)
    (output/'report.json').write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps(dict(status=receipt['status'],nativeArtifacts=136,selectedInputsRehashed=len(inputs))))
    return receipt


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--source-output',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args()
    verify(ROOT,args.source_output.resolve(),args.output.resolve())
