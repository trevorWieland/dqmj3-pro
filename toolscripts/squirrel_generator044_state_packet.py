import json
from native_material_wave011_build import pin,save
from squirrel_generator044_state_build import ROOT,WORK,SOURCE
from squirrel_generator044_state_replay import source_closure,python_closure,PRIMARY,CONTROLS


def seal():
 evidence=ROOT/'evidence/lanes/squirrel-generator046';report=WORK/PRIMARY/'execution.json';controls=WORK/CONTROLS/'controls.json';verification=WORK/'copied-source/verification.json'
 result=json.loads(report.read_text());replay=json.loads(verification.read_text())
 if result['caseSets']!=88 or not replay['completeReportByteIdentical']:raise ValueError('046 qualification incomplete')
 for source,target in[(report,evidence/'execution.json'),(controls,evidence/'controls.json'),(verification,evidence/'replay.json'),(WORK/'native-model-validation.json',evidence/'native-model-validation.json')]:target.write_bytes(source.read_bytes())
 paths=source_closure()|python_closure()|{ROOT/'docs/squirrel-generator046.md',ROOT/'tests/test_squirrel_generator046.py',evidence/'claim.json',evidence/'qualification-conditions.json',evidence/'execution.json',evidence/'controls.json',evidence/'replay.json',evidence/'native-model-validation.json'}
 owned=set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h'))
 if not owned<=paths:raise ValueError('046 readiness omitted production source/header')
 record=dict(schemaVersion=1,component='squirrel-generator046-state',status='frozen-for-independent-review',files=[pin(p)for p in sorted(paths)],
  scope='Typed actual040 VM and opaque044 generator Yield/Resume; positive ownership and inactive/same-closure debug domain.',
  caseSets=88,targetObservations=352,returningControls=6,sameFinalArenaControls=2,copiedReplayQualified=True,
  yieldInstructionPCs=[156,167],resumeInstructionPCs=[280,300],sourceOrInventoryCreditGranted=0,wholeVmOrGameClaim=False,
  frozen044=pin(ROOT/'evidence/lanes/squirrel-generator044/ready.json'),frozen040Core=pin(ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'),
  limits=result['limits'],producer=pin(ROOT/'toolscripts/squirrel_generator044_state_packet.py'))
 save(evidence/'ready.json',record);print(json.dumps(pin(evidence/'ready.json')))


if __name__=='__main__':seal()
