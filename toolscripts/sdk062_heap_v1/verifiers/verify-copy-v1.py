import hashlib,json,re,ast,copy,types
from pathlib import Path
W=Path(__file__).resolve().parent
A=W/'qualification-final-v2';B=W/'copied-final-v2';S=W/'source-only-final-v2'

def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def artifacts(root):
 result={}
 for path in root.rglob('*'):
  if path.suffix not in ['.o','.obj','.dll','.elf','.lib','.exp']:continue
  key=path.relative_to(root).as_posix();key=re.sub(r'inputs/fresh-test-[^/]+/','inputs/fresh-test/<fresh>/',key)
  if key in result:raise ValueError('artifact key is not unique')
  result[key]=dict(sha256=digest(path),bytes=path.stat().st_size,path=path.relative_to(root).as_posix())
 return result

def semantic(value):
 if isinstance(value,dict):return{k:semantic(v)for k,v in value.items()if k not in ['arenaAddress','rawArenaSha256','originalRawArenaSha256','elapsedSeconds','finalArenaSha256']}
 if isinstance(value,list):return[semantic(v)for v in value]
 return value

model_path=A/'inputs/heap_model062ac.py'
model_namespace={'__name__':'qualified_heap_model','__file__':str(model_path)}
exec(compile(model_path.read_bytes(),str(model_path),'exec'),model_namespace)
primary_cases=json.loads((A/'generic/report.json').read_text())['cases']
case=next(r for r in primary_cases if(r['flags'],r['group'],r['policy'],r['split'])==(1,263,1,0))
if case['seed']!=5480:raise ValueError('control model seed changed')
layouts={'arm':[4,60,16,4,0,4,8,12,24,28,32,36,40,44,48,52,54,56,100,24,84,88],'windows':[8,112,24,8,0,8,16,24,48,56,64,72,80,88,96,104,106,108,176,32,144,152],'a64':[8,112,24,8,0,8,16,24,48,56,64,72,80,88,96,104,106,108,176,32,144,152]}

def allocation_role(control,target,reason):
 value=ast.literal_eval(reason)
 if type(value)is not tuple or len(value)!=4 or value[0]!='allocation selection':raise ValueError('not the named allocation-selection exception schema')
 expected_steps={'first-fit-for-best':('allocate',17,31,-16),'zero-allocation-null':('allocate',0,0,4)}
 if control not in expected_steps or value[1]!=expected_steps[control]:raise ValueError('unexpected pointer-bearing control observation')
 model=model_namespace['Model'](0,layouts[target],flags=1);model.controls(263,1,0);pointers={};expected=None;wrong=None
 profile=next(p for p in case['profiles']if p['target']==target)
 for event in profile['observations']:
  step=event['event']
  if not isinstance(step,list):continue
  if tuple(step)==value[1]:
   alternate=copy.deepcopy(model);alternate.policy=0;wrong=alternate.allocate(step[2],step[3]);expected=model.allocate(step[2],step[3]);break
  if step[0]=='allocate':pointers[step[1]]=model.allocate(step[2],step[3])
  else:model.dispose(pointers.pop(step[1]))
 if expected is None:raise ValueError('control step absent from qualified positive program')
 returned=int(value[2],16);expected_pointer=int(value[3],16);base=expected_pointer-expected;bits=32 if target=='arm'else 64
 if not 0<=returned<1<<bits or not 0<expected_pointer<1<<bits or base%64:raise ValueError('invalid explicitly named pointer representation')
 if target=='arm'and base!=0x2020000 or target=='a64'and base!=0x120200000 or target=='windows'and base<=0xffffffff:raise ValueError('pointer role does not match the qualified arena domain')
 offset=None if returned==0 else returned-base
 if control=='zero-allocation-null':
  if returned!=0:raise ValueError('null-result control returned storage')
 else:
  if offset!=wrong or not 0<=offset<0x18000 or returned%abs(value[1][3]):raise ValueError('wrong-fit pointer does not match its independently modeled allocation role')
 return dict(kind='allocation selection',step=list(value[1]),returnedPayloadOffset=offset,expectedPayloadOffset=expected,arenaAlignment=64,pointerBytes=layouts[target][0],rawPointerFieldsPreservedInOriginalReport=True)

def control_semantic(report):
 result=semantic(report)
 for control in result['controls']:
  for outcome in control['outcomes']:
   if outcome['reason'].startswith("('allocation selection',"):
    outcome['reason']=allocation_role(control['name'],outcome['target'],outcome['reason'])
 return result

rows=[]
for name in ['generic','default','registry','setters','disabled','controls']:
 a=A/name/'report.json';b=B/name/'report.json';left=control_semantic(json.loads(a.read_text()))if name=='controls'else semantic(json.loads(a.read_text()));right=control_semantic(json.loads(b.read_text()))if name=='controls'else semantic(json.loads(b.read_text()))
 if left!=right:raise ValueError(('strict semantic report mismatch',name))
 rows.append(dict(scope=name,primaryRawReportSha256=digest(a),copyRawReportSha256=digest(b),semanticSha256=hashlib.sha256(json.dumps(left,sort_keys=True,separators=(',',':')).encode()).hexdigest(),semanticEqual=True,rawReportsRequiredEqual=False))
a=artifacts(A);b=artifacts(B)
if set(a)!=set(b):raise ValueError(('artifact set mismatch',sorted(set(a)^set(b))))
for name in a:
 if a[name]['sha256']!=b[name]['sha256']or a[name]['bytes']!=b[name]['bytes']:raise ValueError(('artifact bytes differ',name))
source_artifacts=artifacts(S);baseline_build={k:v for k,v in a.items()if k.startswith('build/')}
if set(source_artifacts)!=set(baseline_build)or any(source_artifacts[k]['sha256']!=baseline_build[k]['sha256']for k in source_artifacts):raise ValueError('source-only built artifact set or bytes changed')
receipts=[json.loads((root/'receipt.json').read_text())for root in [A,B,S]]
if any(r['status']!='passed'or r['rejectedAttempts']for r in receipts):raise ValueError('scope guard failed')
if receipts[2]['originalConstructions']!=0:raise ValueError('source-only constructed original')
canonical=[row['path']for row in receipts[0]['helperPins']if row['path'].startswith('generated/')]
source_original_reads=[p for p in receipts[2]['reads']if '/generated/'in p.replace('\\','/')]
if source_original_reads:raise ValueError('source-only read original inputs')
if receipts[0]['inputs']!=receipts[1]['inputs']or receipts[0]['inputs']!=receipts[2]['inputs']:raise ValueError('own input copies changed')
if receipts[0]['allOriginalPcs']!=receipts[1]['allOriginalPcs']:raise ValueError('reference PC observations changed')
report=dict(status='passed',ownInputFiles=len(receipts[0]['inputs']),ownInputBytes=sum(r['bytes']for r in receipts[0]['inputs']),strictArtifactCount=len(a),sourceOnlyIdenticalArtifactCount=len(source_artifacts),artifacts=a,semanticReports=rows,sourceOnlyOriginalConstructions=0,sourceOnlyOriginalReads=[],scopes=[dict(path=str(root.relative_to(W)),receiptSha256=digest(root/'receipt.json'))for root in [A,B,S]],windowsRawAddressesAndArenasPreservedPerRun=True,projectionUsesOnlyValidatedOwnershipFields=True,pointerLookingWordsScanned=False,controlPointerProjection=dict(fields=['allocation-selection.returnedPayload','allocation-selection.expectedPayload'],modelSha256=digest(model_path),positiveProgramSeed=5480,returnedChoiceValidatedAgainstWrongFitModel=True))
(W/'copy-verification-v2.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps({k:v for k,v in report.items()if k in ['status','ownInputFiles','ownInputBytes','strictArtifactCount']}))
