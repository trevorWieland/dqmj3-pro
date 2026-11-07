import argparse
import hashlib
import json
import traceback
from pathlib import Path

from native_stream056_build import ROOT, WORK, SYMBOLS, build, pin
from native_stream056_cases import corpus
from native_stream056_layout import TARGET, NATIVE
from native_stream056_measure import measure, save
from native_stream056_oracle import Machine, Windows
from native_stream056_inputs import inputs, environment
from native_stream056_proof import prove


def verify(output):
    if not output.resolve().is_relative_to(ROOT/'work/native-stream056'):
        raise ValueError('056 outputs must remain in their private workspace')
    output.mkdir(parents=True,exist_ok=True)
    before_inputs = inputs()
    claim = measure()
    builds = [build(output/target,target) for target in ('arm','windows','a64')]
    machines = dict(original=Machine(),arm=Machine('arm',builds[0][0]),
                    windows=Windows(builds[1][0]),a64=Machine('a64',builds[2][0]))
    observations,raw = [],[]
    cases = corpus()
    for symbol in SYMBOLS:
        for case in cases:
            entries = {}
            for target,machine in machines.items():
                try:
                    row = machine.execute(symbol,case)
                except Exception as error:
                    save(output/'failed-attempt.json',dict(symbol=symbol,case=case,target=target,
                                                           error=repr(error),traceback=traceback.format_exc()))
                    raise
                raw.append(dict(symbol=symbol,case=case['id'],target=target,
                                rawWholeArenaSha256=row.pop('rawWholeArenaSha256'),
                                messagePointer=row.pop('messagePointer')))
                entries[target] = row
            keys = ['input_used','available_input','available_output','hold','bits','mode','message',
                    'outputBytes','outputSha256','modePaddingSha256']
            if any({key:row[key] for key in keys} != {key:entries['original'][key] for key in keys}
                   for row in entries.values()):
                raise ValueError('Four-target semantic state differs')
            observations.append(dict(symbol=symbol,case=case['id'],name=case['name'],targets=entries))
            if case['id']%100 == 0:
                print(symbol,case['id'],'four-target cases passed',flush=True)
    coverage = []
    for function in claim['functions']:
        visited = set(function['instructionAddresses']) & machines['original'].coverage
        missing = sorted(set(function['instructionAddresses'])-visited)
        coverage.append(dict(symbol=function['symbol'],instructionPcs=len(function['instructionAddresses']),
                             visited=len(visited),unvisited=missing))
    proof = prove()
    for coverage_row,function in zip(coverage,proof['functions']):
        excluded = {pc for row in function['ranges'] for pc in range(row['start'],row['endExclusive'],4)}
        if set(coverage_row['unvisited']) != excluded:
            raise ValueError('056 missing PCs are not exactly the statically qualified alternatives')
    if inputs() != before_inputs:
        raise ValueError('056 source/tool/dependency inputs changed during the proof')
    save(output/'input-guard.json',dict(before=before_inputs,after=inputs(),unchanged=True,environment=environment()))
    save(output/'raw-runtime-pointer-observations.json',raw)
    stable_builds = [dict(target=entry['target'],objectSha256s=[p['sha256'] for p in entry['objects']],
                         artifactSha256=entry['artifact']['sha256'],sourceSha256=entry['source']['sha256'],
                         headerSha256=entry['header']['sha256']) for _,entry in builds]
    report = dict(schemaVersion=1,status='bounded-original-source-independent-model-passed',
                  caseSets=len(observations),fourTargetObservations=len(observations)*4,
                  canonicalClaimSha256=hashlib.sha256(json.dumps(claim,sort_keys=True).encode()).hexdigest(),
                  targetLayout=TARGET,nativeLayout=NATIVE,builds=stable_builds,
                  observations=observations,coverage=coverage,
                  comparisons=dict(fullInitializedArenaAgainstIndependentModel=True,
                                   inputTablesHistoryAndAllUntouchedBytesPreserved=True,
                                   rawArenasNeverModifiedForComparison=True,
                                   reportPointerProjection='After full raw expected-byte equality, zero seven typed pointer fields in a separate hash-only copy; offsets and message roles remain independently checked.',
                                   rawRuntimePointerHashes='private separate record; ASLR is deliberately not a deterministic report field'),
                  exactObjectMatch=False,sourceCreditGranted=0,wholeSdkOrGameClaim=False,
                  unsupported=['insufficient input/output at entry','invalid/unallocated decode tables',
                               'uninitialized or insufficient history backing','big-endian original execution',
                               'arbitrary stream/state aliases or concurrent mutation','full SDK root/decompression composition',
                               'physical Android OS execution'])
    save(output/'report.json',report)
    save(output/'build-profiles.json',[entry for _,entry in builds])
    machines['windows'].close()
    print('passed',len(observations),'sets; coverage',[(row['visited'],row['instructionPcs']) for row in coverage],flush=True)
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,default=WORK/'qualification')
    arguments = parser.parse_args()
    verify(arguments.output.resolve())
