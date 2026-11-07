from pathlib import Path
import json
import sys
root=Path.cwd().resolve()
sys.path.insert(0,str(root/'toolscripts'))
from replay_packet_compare import PacketComparison
fresh=root/'work/clean-replay/startup049-cf00637'
primary='evidence/lanes/squirrel-state049/stage-v1'
independent='work/replay049/proof'
class Comparison(PacketComparison):
 def text(self,value,base):
  value=super().text(value,base)
  for prefix,tag in [(primary,'<OUTPUT>'),(independent,'<OUTPUT>'),('work/squirrel-state049/sealing-v1','<RUN>'),('work/replay049/run','<RUN>')]:
   value=value.replace(prefix,tag).replace(prefix.replace('/',chr(92)),tag)
  return value
import hashlib
import re

def read(path):return json.loads(Path(path).read_text(encoding='utf-8'))
def pin(path):
 data=path.read_bytes()
 return dict(path=path.relative_to(root).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())
def checked(record,base=root):
 path=base/record['path'];data=path.read_bytes()
 assert len(data)==record['bytes'] and hashlib.sha256(data).hexdigest()==record['sha256']
 return path

raw_path=root/'evidence/verification/startup049-isolated-cf00637.json'
raw=read(raw_path)
assert raw['status']=='passed' and raw['sourceRevision']=='cf0063767245f267eb3869cea7b8bf57ee6c191a'
assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
assert Path(raw['replayRoot']).resolve()==fresh and all(row['returncode']==0 for row in raw['steps'])
for row in raw['packets']:checked(row,fresh)
a=read(root/primary/'packet.json');b=read(fresh/independent/'packet.json')
assert pin(root/primary/'packet.json')['sha256']=='46cb26f67ba99d2e4f8a3d6b7f559535796ae5d2ae42f2f251538d323e41811b'
comparison=Comparison(root,fresh)
comparison.compare(a,b,'packet.json')
comparison.compare(read(root/primary/'verification.json'),read(fresh/independent/'verification.json'),'verification.json')
assert len(comparison.variants)==7
assert {v['path'] for v in comparison.variants}=={primary+'/packet.json',primary+'/returning-controls.json',primary+'/reference-trace.json','work/squirrel-state049/sealing-v1/tests.log'}
assert all(v['kind'] in ['recursively-compared-json','verified-root-output-paths-or-unittest-timing-text'] for v in comparison.variants)
assert a['candidateFunctions']==13 and a['candidateInstructionBytes']==2508
assert a['actualWindowsExecution'] and not a['sourceMapsOriginalImageOrSdk'] and not a['referenceExecutesAuthoredAllocatorOrHelper']
assert a['unresolvedUninvokedEngineCallbacks']==56 and not a['windowsCalleeSavedRegistersDirectlyObserved']
for key in ['parentVmInitializationQualified','allocationFailureQualified','arbitraryRepeatedInitializationQualified','vmDestructionQualified','completeInterpreterOrGameQualified','androidOsOrDeviceExecuted','universalEquivalenceClaimed','wholeMemoryEquivalenceClaimed']:
 assert a[key] is False
for row in a['inputs']:
 checked(row);checked(row,fresh)
rows=read(checked(a['caseRows']))
assert len(rows)==27
for row in rows:
 assert row['allQualifiedProfilesAgree'] and set(row['profiles'])=={'arm','windows','a64'}
 for profile in row['profiles'].values():
  assert profile['returnedNormally'] and profile['sourceOnlyExecution'] and profile['callerGuardsPreserved']
  assert profile['stateSha256']==row['originalStateSha256']
  assert profile['liveAllocationRoles']==row['originalSdkLiveBlocks']
  assert profile['apiResults']==row['originalApiResults']
controls=read(checked(a['negativeControls']))
assert controls['controls']==7 and controls['platformExecutions']==21
assert len(controls['rows'])==7
for row in controls['rows']:
 for profile in row['profiles']:
  assert profile['returnedNormally'] and profile['callerGuardsPreserved'] and profile['sourceOnlyExecution']
  assert profile['semanticMismatchDetected'] or profile['typedObserverRejection']
tests=0
for step in raw['steps']:
 if step['name'].endswith('-tests'):
  text=(fresh/step['log']).read_text(encoding='utf-8');found=re.search(r'Ran (\d+) tests',text)
  assert found and text.strip().endswith('OK');tests+=int(found[1])
inner=[v for v in b['compilerAndTestReceipts'] if 'actualWindowsTestsPassed' in v]
assert len(inner)==1 and inner[0]['actualWindowsTestsPassed']==15
tests+=15
assert tests==109,tests
compiled_path=fresh/'work/source-compile-ci/committed-replay/manifests/compilation.json'
compiled=read(compiled_path)
assert compiled['unitCount']==423 and len(compiled['results'])==1199
assert all(v['status']=='compiled' for v in compiled['results'])
cleanup=read(fresh/'intake-cleanup.json')
assert cleanup['status']=='removed-verified-replay-input-copies'
assert sum(v['bytes'] for v in cleanup['copiedInputs'])==1607322944
receipt=dict(schemaVersion=1,status='qualified-independent-startup049-bounded-root-factory-callers',
 sourceRevision=raw['sourceRevision'],completeUnmodifiedBatchReplayPassed=True,rawReplay=pin(raw_path),
 primaryPacket=pin(root/primary/'packet.json'),independentPacket=pin(fresh/independent/'packet.json'),
 recursiveComparisonPassed=True,variants=comparison.variants,caseRows=a['caseRows'],returningControls=a['negativeControls'],
 referenceTrace=a['referenceTrace'],cases=27,authoredProfileObservations=81,originalArmSessions=27,
 returningControlCount=7,returningControlExecutions=21,tests=tests,publicUnits=423,publicCompilations=1199,
 publicCompilation=pin(compiled_path),inputFiles=len(a['inputs']),liveColdAllocationRoles=276,
 liveColdStrings=92,liveColdTables=14,liveColdClosures=83,liveColdGcMembers=98,
 candidateFunctions=13,candidateInstructionFootprintBytes=2508,uninvokedCallbackCount=56,
 windowsActualExecutionCompared=True,windowsCalleeSavedRegistersDirectlyObserved=False,
 windowsHistoricalWholeFileIdentityClaimed=False,sourceAdmissionGranted=False,matchingCreditGranted=0,
 sdkCreditGranted=0,wholeVmInitializationDestructionInterpreterGameAndroidOrUniversalClaimed=False,
 priorMetadataRestart=pin(root/'evidence/verification/startup049-c2aa3ee-metadata-restart.json'),
 producer=pin(Path(__file__).resolve()))
output=root/'evidence/verification/startup049-coordinator-cf00637.json'
output.write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8')
print(json.dumps(dict(passed=True,tests=tests,cases=27,variants=len(comparison.variants))))
