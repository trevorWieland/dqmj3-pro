import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path.cwd().resolve()
sys.path.insert(0,str(ROOT/'toolscripts'))
import ci_native_build as ci
import functional_report
import native_census_overlay

def read(path):return json.loads(Path(path).read_text(encoding='utf-8'))
def pin(path):
 data=path.read_bytes()
 return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())

base=ROOT/'evidence/lanes/squirrel-state049/stage-v1'
primary=read(base/'packet.json')
coordinator_path=ROOT/'evidence/verification/startup049-coordinator-cf00637.json'
coordinator=read(coordinator_path)
assert coordinator['completeUnmodifiedBatchReplayPassed'] and coordinator['recursiveComparisonPassed']
assert coordinator['tests']==109 and coordinator['cases']==27
assert pin(base/'packet.json')==coordinator['primaryPacket']
proposal=read(base/'functional-proof-proposal.json')
registry=read(ROOT/'config/functional-functions.json')
assert len(registry['functions'])==312
census,overlays=native_census_overlay.compose(ROOT,read(ROOT/registry['census']['path']))
canonical={row['address']:row for row in census['functions']}
existing={int(row['name'][3:],16) for row in registry['functions']}
existing.update(int(row['symbol'][3:],16) for row in ci.accepted_functions(ROOT))
image=(ROOT/'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest()==primary['moduleSha256']==registry['moduleSha256']
source_rows={row['symbol']:row for row in primary['functions']}
packet=copy.deepcopy(proposal)
packet.update(status='coordinator-reviewed-bounded-startup049-root-factory-callers',
              independentCleanReplayClaimed=True,independentCoordinatorReview=pin(coordinator_path),
              producer=pin(Path(__file__).resolve()),sharedRegistryChanged=False)
packet['sourceDependencies']=[row for row in primary['inputs'] if row['path'].endswith(('.c','.h'))]
assert packet['acceptedSourceCreditGranted']==0 and len(packet['functions'])==13
unobserved=0
for row in packet['functions']:
 address=row['canonicalIdentity']['address'];original=canonical[address];witness=source_rows[row['symbol']]
 assert address not in existing and original['mode']=='ARM'
 assert row['originalInstructionRanges']==original['ranges']
 assert row['originalInstructionBytes']==original['textBodyBytes']==witness['instructionBytes']
 assert all(max(a['start'],b['start'])>=min(a['endExclusive'],b['endExclusive'])
            for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
 body=b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000]for p in original['ranges'])
 assert hashlib.sha256(body).hexdigest()==row['originalSpanSha256']
 expected={pc for part in original['ranges']for pc in range(part['start'],part['endExclusive'],4)}
 observed=set(witness['observedInstructionAddresses']);missing=set(witness['unobservedInstructionAddresses'])
 assert not observed&missing and observed|missing==expected
 unobserved+=len(missing)
 assert row['functionalConfidence']=='medium'
 row['behavior'].update(independentCleanReplayClaimed=True,independentSourceComponentReplay=pin(coordinator_path),
     windowsCalleeSavedRegistersDirectlyObserved=False,
     confidenceJustification='Medium: independent27-case root-factory/caller replay across originalARM, authoredARM, actualWindows and highA64 with normally-returning controls. Unhit paths, allocation/thread limits and56uninvoked callbacks remain explicit; no universal/whole-memory/SDK/game claim.')
assert sum(row['originalInstructionBytes']for row in packet['functions'])==2508
output=ROOT/'evidence/functional/startup049.json'
output.write_text(json.dumps(packet,indent=2)+'\n',encoding='utf-8')
fragment=copy.deepcopy(registry)
fragment['functions']=[dict(name=row['symbol'],confidence='medium',packet=pin(output),sourceLookup='repository-function-index')for row in packet['functions']]
report=read(ROOT/'build/update-content0/report.json')
assert len(functional_report.generate(ROOT,report,fragment)['functions'])==13
work=ROOT/'work/squirrel-state049/functional-admission';work.mkdir(parents=True,exist_ok=True)
controls=[]
for name in ['wrong-byte-count','wrong-source','wrong-confidence','wrong-alias-pin']:
 wrong=copy.deepcopy(packet)
 if name=='wrong-byte-count':wrong['functions'][0]['originalInstructionBytes']+=4
 elif name=='wrong-source':wrong['functions'][0]['source']=pin(ROOT/'source/squirrel-wave049/startup.h')
 elif name=='wrong-confidence':wrong['functions'][0]['functionalConfidence']='high'
 else:
  selected=next(row for row in wrong['functions']if row.get('sourceName',row['symbol'])!=row['symbol'])
  selected['symbolNames']['sha256']='0'*64
 bad=work/(name+'.json');bad.write_text(json.dumps(wrong,indent=2)+'\n',encoding='utf-8')
 test=copy.deepcopy(fragment)
 for row in test['functions']:row['packet']=pin(bad)
 try:functional_report.generate(ROOT,report,test)
 except ValueError as error:controls.append(dict(case=name,rejected=True,reason=str(error)))
 else:raise ValueError('Malformed startup proof accepted: '+name)
validation=dict(schemaVersion=1,status='startup049-thirteen-medium-functions-schema-validated-pending-registry',
 proof=pin(output),functions=fragment['functions'],instructionFootprintBytes=2508,
 unobservedInstructionPcs=unobserved,unobservedPathsProvenImpossible=False,
 controls=controls,sourceCreditGranted=0,exactMatchingCreditGranted=0,
 wholeVmGameSdkOrPhysicalDeviceClaimed=False,producer=pin(Path(__file__).resolve()))
(ROOT/'evidence/verification/startup049-functional-validation.json').write_text(json.dumps(validation,indent=2)+'\n',encoding='utf-8')
print(json.dumps(dict(functions=13,controls=len(controls),instructionFootprint=2508,unobservedPcs=unobserved)))
