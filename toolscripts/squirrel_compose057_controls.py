import json
import subprocess
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_compose057_source import Source
from squirrel_compose057_windows import Windows
from squirrel_compose057_frames import Frames
from squirrel_compose057_observe import observe


def check(control,profile):
    directory=WORK/'controls'/control/profile
    session=Windows(165,directory)if profile=='windows'else Source(profile,165,directory)
    try:
        before=session.boot()
    except ValueError as error:
        if control!='polluted-legacy-carrier'or not getattr(session,'vm',0):raise
        if 'fake legacy fields'not in str(error):raise
        return {'control':control,'profile':profile,'normallyReturnedApi':'boot-and-observe',
                'observerRejected':True,'reason':str(error),'nativeExecution':profile=='windows'}
    if control=='wrong-metamethod-vector':
        value=session.meta_contract()
        if value==[1,0x05000002,0x5757,0,18,15,0x01000001]:
            raise ValueError('Wrong metadata provider escaped the independent table-result check')
        return {'control':control,'profile':profile,'normallyReturnedApi':'meta-contract',
                'returned':value,'observerRejected':True,'reason':'actual _get key was searched through the wrong shared vector',
                'nativeExecution':profile=='windows'}
    if control=='premature-retired-frame-read':
        tracker=Frames(session,profile)
        first=session.execute(8,3,1,1)
        expected=observe(session,profile)
        tracker.retire()
        tracker.step='retired-frame-read-control'
        second=session.execute(8,3,1,1)
        actual=observe(session,profile)
        if not tracker.breaches or first!=second or actual!=expected:
            raise ValueError('Premature-read control did not normally return with identical final state and a detected read')
        return {'control':control,'profile':profile,'normallyReturnedApi':'two-complete-program-runs',
                'returned':second,'observerRejected':True,'sameFinalGraphAndCallerState':True,
                'readBeforeReinitialization':tracker.breaches,'nativeExecution':False}
    value=session.execute(256,3,1,1)
    if value['returned']!=[1,0x05000002,7,1,0,0,0]:
        raise ValueError('Lifetime/caller-state control failed to return the correct independent result')
    key='gcMembers'if control=='leaked-program-owner'else'top'
    if value['state'][key]==before[key]:raise ValueError('Wrong source escaped the independent post-call state check')
    return {'control':control,'profile':profile,'normallyReturnedApi':'complete-program-run',
            'returned':value,'observerRejected':True,'reason':'post-call '+key+' differs from the actual original cleanup',
            'nativeExecution':profile=='windows'}


def main():
    rows=[]
    for control in ['wrong-metamethod-vector','leaked-program-owner','leaked-caller-top',
                    'polluted-legacy-carrier','premature-retired-frame-read']:
        profiles=['a64','windows']if control=='polluted-legacy-carrier'else \
                 ['arm','a64']if control=='premature-retired-frame-read'else['arm','a64','windows']
        for profile in profiles:
            if profile=='windows':
                result=subprocess.run([sys.executable,__file__,'child',control,profile],
                                      cwd=ROOT,capture_output=True,timeout=120)
                if result.returncode:raise ValueError(result.stderr.decode())
                row=json.loads(result.stdout)
            else:row=check(control,profile)
            rows.append(row)
            print(json.dumps({'control':control,'profile':profile,'normalReturnAndIndependentRejection':True}),flush=True)
    path=WORK/'controls/results.json'
    path.write_text(json.dumps({'status':'returning-semantic-and-lifetime-controls','rows':rows},indent=2)+'\n')


if __name__=='__main__':
    if len(sys.argv)>1:print(json.dumps(check(sys.argv[2],sys.argv[3])))
    else:main()
