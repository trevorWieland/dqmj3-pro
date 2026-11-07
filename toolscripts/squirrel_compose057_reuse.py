import json
import subprocess
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_compose057_windows import Windows
from squirrel_compose057_observe import observe
from squirrel_compose057_packet import post_residuals,expected

SEQUENCE=[(8,0),(256,1),(8,1),(257,0),(8,0),(256,0),(8,1)]


def windows():
    session=Windows()
    session.boot()
    rows=[]
    for program,flags in SEQUENCE:
        result=session.execute(program,3,flags,1)
        graph=observe(session,'windows')
        rows.append({'program':program,'flags':flags,'result':result,'graph':graph})
    return rows


def main():
    (WORK/'frame-lifetime').mkdir(parents=True,exist_ok=True)
    traces={}
    for profile in ['original','arm','a64']:
        result=subprocess.run([sys.executable,str(ROOT/'toolscripts/squirrel_compose057_frames.py'),profile],cwd=ROOT,capture_output=True,timeout=120)
        (WORK/'frame-lifetime'/(profile+'.log')).write_bytes(result.stdout+result.stderr)
        if result.returncode:raise ValueError(result.stderr.decode())
        traces[profile]=json.loads((WORK/'frame-lifetime'/(profile+'.json')).read_text())
        if traces[profile]['readsBeforeReinitialization']:
            raise ValueError('Genuine bounded reuse read a retired non-owning field before initialization')
    result=subprocess.run([sys.executable,__file__,'windows'],cwd=ROOT,capture_output=True,timeout=120)
    if result.returncode:raise ValueError(result.stderr.decode())
    native=json.loads(result.stdout)
    (WORK/'frame-lifetime/windows.json').write_text(json.dumps(native,indent=2)+'\n')
    rows=[]
    for index,(program,flags)in enumerate(SEQUENCE):
        original=traces['original']['steps'][index]
        for profile,source in [('arm',traces['arm']['steps'][index]),('a64',traces['a64']['steps'][index]),
                               ('windows',native[index])]:
            if source['result']!=original['result']or source['result']['returned']!=expected({'profile':program,'value':3}):
                raise ValueError('Same-VM source/original caller-visible reuse differs')
            residuals=post_residuals({'profile':program},original['graph'],source['graph'])
            rows.append({'step':index,'program':program,'flags':flags,'profile':profile,
                         'callerVisibleResultAndLiveStateEqual':True,'rawPostGraphResiduals':residuals})
    record={'status':'bounded-seven-step-same-VM-native-script-native-and-throw-catch-reuse',
            'sequence':SEQUENCE,'rows':rows,'allRelevantFrameReadsAndWritesTracedOn':['originalARM','authoredARM','highAarch64'],
            'frameEvents':{profile:len(trace['events'])for profile,trace in traces.items()},
            'retiredFieldsReadBeforeReinitialization':{profile:0 for profile in traces},
            'windowsActualExecution':True,'windowsPerInstructionMemoryReadsObserved':False,
            'fullPostGraphEqualityClaimed':False,'universalLifetimeEquivalenceClaimed':False}
    (WORK/'frame-lifetime/reuse.json').write_text(json.dumps(record,indent=2)+'\n')
    print(json.dumps({'sameVmSteps':7,'targetExecutions':28,'resultAndLiveStateComparisons':21,
                      'retiredReadBreaches':0,'fullPostGraphEqualityClaimed':False}))


if __name__=='__main__':
    if len(sys.argv)>1:print(json.dumps(windows()))
    else:main()
