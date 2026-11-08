import hashlib
import json
from pathlib import Path
import subprocess
import sys

W = Path(__file__).resolve().parent
R = next(p for p in W.parents if (p / 'AGENTS.md').is_file())


def main():
    output = W / 'boundary-controls-v1'
    output.mkdir(exist_ok=False)
    rows = []
    for name in ['stat','lstat','listdir','scandir','open','original','cached',
                 'library','source-write','generated-stat']:
        out = output / name
        command = [sys.executable,'-I','-B',str(W/'proposed/toolscripts/sdk062_registration_v1/driver/launch.py'),
                   '--root',str(R),'--inputs',str(W/'proposed'),'--manifest',str(W/'source-map-v1.json'),'--out',str(out),'--source-only','--guard-control',name]
        result = subprocess.run(command,capture_output=True,text=True)
        completion = json.loads((out/'process-completion.json').read_text())
        report = json.loads((out/'report.json').read_text())
        if result.returncode == 0 or completion['status'] != 'failed' or not completion['rejectedAfterChildExit']:
            raise ValueError('caught boundary did not remain terminal: '+name)
        if report['profiles'] or report['originalConstructions']:
            raise ValueError('boundary reached an execution profile')
        rows.append(dict(name=name, status='rejected-terminal',
                         rejected=completion['rejectedAfterChildExit'],
                         childReturnCode=completion['returnCode']))
    support = output/'toy-support'
    support.mkdir()
    for source in [R/'toolscripts/sdk062_heap_v1/heap_gate062ac.py',
                   R/'toolscripts/sdk062_heap_v1/driver/transport_gate.py']:
        (support/source.name).write_bytes(source.read_bytes())
    toy = support/'caught-at-exit.py'
    toy.write_text("""import atexit,json,os,sys
from pathlib import Path
root=Path(sys.argv[1]);out=Path(sys.argv[2]);support=Path(__file__).parent
sys.path.insert(0,str(support));sys.dont_write_bytecode=True
from transport_gate import TransportGate
out.mkdir();gate=TransportGate(root,out,[support/'heap_gate062ac.py',support/'transport_gate.py'],{'files':[]},True,[],[])
(out/'report.json').write_text(json.dumps({'status':'passed'}))
def late():
 try:os.stat(root/'work/native-asset062-sdk-owner-core-v1/ready-v1.json')
 except ValueError:pass
atexit.register(late)
""")
    launch = W/'proposed/toolscripts/sdk062_registration_v1/driver/launch.py'
    out = output/'caught-at-exit-child-zero'
    code = """import runpy,subprocess,sys
real=subprocess.run
toy,root,out,launch=sys.argv[1:]
def route(command,stdout,stderr):
 return real([sys.executable,'-I','-B',toy,root,out],stdout=stdout,stderr=stderr)
subprocess.run=route
sys.argv=[launch,'--out',out]
runpy.run_path(launch,run_name='__main__')
"""
    runner = support/'route-supervisor.py'
    runner.write_text(code)
    result = subprocess.run([sys.executable,'-I','-B',str(runner),str(toy),str(R),str(out),str(launch)],capture_output=True,text=True)
    completion = json.loads((out/'process-completion.json').read_text())
    if result.returncode != 1 or completion['returnCode'] != 0 or not completion['rejectedAfterChildExit']:
        raise ValueError('real supervisor accepted child-exit0 with late persistent rejection')
    if json.loads((out/'report.json').read_text())['status'] != 'passed':
        raise ValueError('synthetic initial passed receipt was not preserved')
    rows.append(dict(name='caught-at-exit-child-zero',status='rejected-terminal',
                     childReturnCode=0,initialReceiptStatus='passed',supervisorReturnCode=result.returncode,
                     actualSupervisorSha256=hashlib.sha256(launch.read_bytes()).hexdigest(),
                     rejected=completion['rejectedAfterChildExit']))
    (output/'report.json').write_text(json.dumps(dict(status='passed',controls=rows),indent=2)+'\n')
    print('registry persistent boundaries passed',len(rows))


if __name__ == '__main__':
    main()
