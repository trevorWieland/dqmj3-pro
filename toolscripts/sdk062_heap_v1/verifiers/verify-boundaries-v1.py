import hashlib,importlib.util,json,subprocess,sys,textwrap,types
from pathlib import Path
I=Path(__file__).resolve().parent;R=next(p for p in I.parents if(p/'AGENTS.md').is_file());P=I/'proposed';D=P/'toolscripts/sdk062_heap_v1/driver';OUT=I/'boundary-controls-v1';OUT.mkdir(exist_ok=False);rows=[]
for name in ['stat','lstat','listdir','scandir','open','original','generated-stat','cached-bytecode','library','source-write']:
 output=OUT/name;argv=[sys.executable,'-I','-B',str(D/'launch.py'),'--root',str(R),'--inputs',str(P),'--manifest',str(I/'source-map-v1.json'),'--out',str(output),'--source-only','--no-controls','--guard-control',name];process=subprocess.run(argv,capture_output=True,text=True);completion=json.loads((output/'process-completion.json').read_text());receipt=json.loads((output/'receipt.json').read_text())
 if process.returncode==0 or completion['status']!='failed'or not completion['postExitAuditRejections']or receipt['originalConstructions']!=0:raise ValueError(('caught boundary was not terminal',name))
 rows.append(dict(name=name,status='caught-attempt-terminal',processExit=process.returncode,violations=completion['postExitAuditRejections'],receiptSha256=hashlib.sha256((output/'receipt.json').read_bytes()).hexdigest()))
late=OUT/'late-caught';late.mkdir();(late/'heap_gate062ac.py').write_bytes((P/'toolscripts/sdk062_heap_v1/heap_gate062ac.py').read_bytes());(late/'transport_gate.py').write_bytes((D/'transport_gate.py').read_bytes());child=late/'child.py'
child.write_text("""import atexit,json,os,sys
from pathlib import Path
W=Path(__file__).resolve().parent
sys.path.insert(0,str(W))
from transport_gate import TransportGate
ROOT=Path(ROOT_VALUE)
gate=TransportGate(ROOT,W,[],{'files':[]},True,[],[])
(W/'receipt.json').write_text(json.dumps({'status':'passed','rejectedAttempts':[]}))
def caught():
 try:os.stat(ROOT/'work/native-asset062-sdk-owner-core-v1/ready-v1.json')
 except ValueError:pass
atexit.register(caught)
""".replace('ROOT_VALUE',repr(str(R))),encoding='utf-8')
spec=importlib.util.spec_from_file_location('actual_heap_supervisor',D/'launch.py');supervisor=importlib.util.module_from_spec(spec);exec(compile((D/'launch.py').read_bytes(),str(D/'launch.py'),'exec'),supervisor.__dict__);real_run=subprocess.run;child_results=[]
def actual_child(*args,**kwargs):
 process=real_run([sys.executable,'-I','-B',str(child)],capture_output=True,text=True);child_results.append(process.returncode);return process
supervisor.subprocess=types.SimpleNamespace(run=actual_child)
try:supervisor.main(['--out',str(late)])
except SystemExit as exc:
 if exc.code!=1:raise
else:raise ValueError('supervisor accepted a caught shutdown violation')
completion=json.loads((late/'process-completion.json').read_text())
if child_results!=[0]or completion['status']!='failed'or not completion['postExitAuditRejections']:raise ValueError('late caught control did not exercise successful child/failed supervisor')
rows.append(dict(name='caught-at-exit-after-passed-receipt',status='supervisor-rejected',childExit=0,violations=completion['postExitAuditRejections']))
(OUT/'report.json').write_text(json.dumps(dict(status='passed',controls=rows),indent=2)+'\n');print('eleven boundary controls passed')
