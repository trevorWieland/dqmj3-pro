import argparse
import hashlib
import json

from native_stream058_build import ROOT,WORK,build
from pathlib import Path
from native_stream058_cases import corpus,caller_payloads
from native_stream058_execution import Backend
from native_stream058_caller import execute as caller
from native_stream058_measure import measure
from native_stream058_proof import prove
from native_stream058_inputs import inputs,environment


def verify(output):
    output.mkdir(parents=True,exist_ok=True)
    before_inputs=inputs()
    for target in('arm','windows','a64'):build(output/'build'/target,target)
    backends={target:Backend(target,output/'build')for target in('original','arm','windows','a64')}
    observations=[]
    for case in corpus():
        rows={target:backend.execute(case)for target,backend in backends.items()}
        if any(row!=rows['original']for row in rows.values()):raise ValueError('058 semantic status differs')
        observations.append(dict(case=case,observations=rows))
    programs=[];unsupported=[]
    for index,payload in enumerate(caller_payloads()):
        try:rows={target:caller(backend,payload)for target,backend in backends.items()}
        except ValueError as error:
            if str(error).startswith('Fixture is not a single final fixed-Huffman'):
                unsupported.append(dict(index=index,bytes=len(payload),reason=str(error)));continue
            raise
        observable=lambda row:{key:value for key,value in row.items()if key!='kernelEntries'}
        if any(observable(row)!=observable(rows['original'])for row in rows.values()):raise ValueError('058 real-input caller differs')
        if any(rows[target]['kernelEntries']!=rows['original']['kernelEntries']for target in('arm','a64')):
            raise ValueError('058 source kernel-entry state differs from genuine original caller')
        programs.append(dict(index=index,payloadSha256=hashlib.sha256(payload).hexdigest(),observations=rows))
    claim=measure();original=backends['original'].machine;coverage=[]
    for function in claim['functions']:
        visited=sorted(set(function['instructionAddresses'])&original.coverage)
        coverage.append(dict(symbol=function['symbol'],instructionPcs=len(function['instructionAddresses']),
                             visitedPcs=len(visited),missing=sorted(set(function['instructionAddresses'])-set(visited))))
    report=dict(schemaVersion=1,status='bounded-complete-init-reset-end-model-and-real-input-passed',
                canonicalCases=len(observations),canonicalObservations=len(observations)*4,
                realInputPrograms=len(programs),realInputObservations=len(programs)*4,
                observations=observations,programs=programs,unsupportedFixturePrograms=unsupported,
                coverage=coverage,originalCallerFastEntries=original.fast_entries,
                canonicalInstructionBytes=636,sourceCreditGranted=0,wholeOuterInflaterRecovered=False,
                productionCallerDomain='one final fixed-Huffman gzip block, flags0, adequate output; no optional/dynamic/stored/general stream claim')
    proof=prove()
    excluded=set(range(proof['unreachableStart'],proof['unreachableEndExclusive'],4))
    if set(coverage[0]['missing'])!=excluded or any(row['missing']for row in coverage[1:]):
        raise ValueError('058 instruction coverage has an unexplained gap')
    if inputs()!=before_inputs:raise ValueError('058 source/runtime inputs changed during qualification')
    (output/'input-guard.json').write_text(json.dumps(dict(before=before_inputs,after=inputs(),unchanged=True,environment=environment()),indent=2)+'\n')
    (output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print('canonical',len(observations),'real caller',len(programs),'coverage',[(r['visitedPcs'],r['instructionPcs'])for r in coverage])
    backends['windows'].machine.close()
    return report


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,default=WORK/'qualification')
    arguments=parser.parse_args()
    if not arguments.output.resolve().is_relative_to(ROOT/'work/native-stream058'):
        raise ValueError('058 outputs must remain in its private workspace')
    verify(arguments.output.resolve())
