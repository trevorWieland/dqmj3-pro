import hashlib
import json

from squirrel_class034_build import ROOT,WORK,SOURCE,pin,save


def seal():
    evidence=ROOT/'evidence/lanes/squirrel-class034'
    if (evidence/'ready.json').exists():raise ValueError('034 packet already frozen')
    report=json.loads((WORK/'primary-qualified/execution.json').read_text())
    controls=json.loads((WORK/'controls-sealed/controls.json').read_text())
    replay=json.loads((WORK/'copied-source/verification.json').read_text())
    if (report['sets'],controls['count'],replay['testsPassed'])!=(102,15,12):raise ValueError('034 qualification incomplete')
    if not replay['completeFourTargetReportByteIdentical'] or not replay['returningControlsByteIdentical']:
        raise ValueError('034 isolated copied receipts differ')
    for path in SOURCE.glob('*.c'):
        text=path.read_text()
        if len(text.splitlines())>500 or '/*' in text or '//' in text:raise ValueError('034 authored C style failed')
    paths=set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h'))
    paths|=set((ROOT/'toolscripts').glob('squirrel_class034*.py'))
    paths|={ROOT/'tests/test_squirrel_class034.py',ROOT/'docs/squirrel-class034.md'}
    paths|={path for path in evidence.iterdir() if path.is_file() and path.name!='ready.json'}
    records=[pin(path) for path in sorted(paths)]
    result={'schemaVersion':1,'status':'frozen-bounded-class-members-script-constructors034-for-coordinator-review',
        'files':records,'sets':102,'targetObservations':408,'normallyReturningControls':15,
        'sameFinalSourceArenaControls':controls['sameFinalSourceArenaControls'],'freshTestsPassed':12,'copiedTestsPassed':12,
        'ownCTranslationUnits':len(list(SOURCE.glob('*.c'))),'allOwnCCompileForArmWindowsAndA64':True,
        'completeExecutionReport':pin(WORK/'primary-qualified/execution.json'),
        'completeControlReport':pin(WORK/'controls-sealed/controls.json'),
        'copiedReplay':pin(WORK/'copied-source/verification.json'),'header':pin(SOURCE/'class.h'),
        'uniqueFactorySource':pin(SOURCE/'instance_factory.c'),'canonicalExistingInstructionBytes':3108,
        'newSourceOrInventoryAdmissionGranted':0,'allFrozenPredecessorsUnchanged':True,
        'sourceOriginalExecutableImageRetained':False,'wholeExecuteGcSharedCtorGameOrDeviceClaimed':False,
        'producer':pin(ROOT/'toolscripts/squirrel_class034_seal.py')}
    save(evidence/'ready.json',result)
    for row in records:
        if hashlib.sha256((ROOT/row['path']).read_bytes()).hexdigest()!=row['sha256']:
            raise ValueError('034 input changed during freeze')
    return pin(evidence/'ready.json')


if __name__=='__main__':print(json.dumps(seal()))
