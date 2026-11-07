import hashlib
import json
from squirrel_generator044_build import ROOT,WORK,SOURCE,pin,save
from squirrel_generator044_replay import source_closure,python_closure,PRIMARY,CONTROLS


def seal():
 evidence=ROOT/'evidence/lanes/squirrel-generator044';report=WORK/PRIMARY/'execution.json';controls=WORK/CONTROLS/'controls.json';verification=WORK/'copied-source/verification.json'
 result=json.loads(report.read_text());replay=json.loads(verification.read_text())
 if result['caseSets']!=34 or not replay['completeReportByteIdentical']:raise ValueError('044 qualification incomplete')
 for source,target in[(report,evidence/'stage-a-execution.json'),(controls,evidence/'stage-a-controls.json'),(verification,evidence/'stage-a-replay.json')]:target.write_bytes(source.read_bytes())
 paths=source_closure()|python_closure()|{ROOT/'docs/squirrel-generator044.md',ROOT/'tests/test_squirrel_generator044.py',evidence/'claim.json',evidence/'stage-a-execution.json',evidence/'stage-a-controls.json',evidence/'stage-a-replay.json'}
 owned=set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h'))
 if not owned<=paths:raise ValueError('044 ready packet omitted own production source or header')
 rows=[pin(p)for p in sorted(paths)];listed={row['path']for row in rows}
 if any(p.relative_to(ROOT).as_posix()not in listed for p in owned):raise ValueError('044 ready pin coverage failed')
 record=dict(schemaVersion=1,component='squirrel-generator044-stage-a',status='frozen-for-independent-review',files=rows,
  scope='Opaque generator factory normal-domain ownership and complete final-owner lifetime. No Yield/Resume/Execute.',
  caseSets=34,targetObservations=136,returningControls=4,sameFinalArenaControls=3,copiedReplayQualified=True,
  completeFactoryQualified=False,sourceOrInventoryCreditGranted=0,duplicate008Credit=0,completeVmOrGameClaim=False,
  core040Manifest=dict(path='evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json',sha256='23a38012b40a93aa1426a9fa08f424949d418a95c9cac939f7abdc2b237f2e28'),
  limits=result['limits'],producer=pin(ROOT/'toolscripts/squirrel_generator044_packet.py'))
 save(evidence/'ready.json',record);print(json.dumps(pin(evidence/'ready.json')))


if __name__=='__main__':seal()
