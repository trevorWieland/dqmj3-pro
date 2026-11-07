import hashlib
import json

from squirrel_class_call030_build import ROOT,WORK,SOURCE,pin,save


def seal():
    evidence=ROOT/'evidence/lanes/squirrel-class-call030'
    if (evidence/'ready.json').exists():raise ValueError('030 packet is already frozen')
    execution=json.loads((WORK/'primary-qualified/execution.json').read_text())
    controls=json.loads((WORK/'controls-final/controls.json').read_text())
    replay=json.loads((WORK/'copied-source/verification.json').read_text())
    if (execution['sets'],controls['count'],replay['testsPassed'])!=(54,13,11):raise ValueError('030 evidence incomplete')
    if not replay['completeFourTargetReportByteIdentical'] or not replay['returningControlsByteIdentical']:
        raise ValueError('030 copied execution or controls differ')
    for path in SOURCE.glob('*.c'):
        text=path.read_text()
        if len(text.splitlines())>500 or '/*' in text or '//' in text:raise ValueError('030 authored C style failed')
    paths=set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h'))
    paths|=set((ROOT/'toolscripts').glob('squirrel_class_call030*.py'))
    paths|={ROOT/'tests/test_squirrel_class_call030.py'}
    paths|={path for path in evidence.iterdir() if path.is_file() and path.name!='ready.json'}
    records=[pin(path) for path in sorted(paths)]
    result={'schemaVersion':1,'status':'frozen-bounded-class-native-constructor-and-lifetime030-for-coordinator-review',
        'files':records,'sets':54,'targetObservations':216,'normallyReturningControls':13,
        'sameFinalSourceArenaControls':controls['sameFinalSourceArenaControls'],
        'freshTestsPassed':11,'copiedTestsPassed':11,'ownCTranslationUnits':14,
        'allOwnCTranslationUnitsCompileForArmWindowsAndA64':True,
        'completeExecutionReport':pin(WORK/'primary-qualified/execution.json'),
        'completeControlsReport':pin(WORK/'controls-final/controls.json'),
        'copiedReplay':pin(WORK/'copied-source/verification.json'),
        'header':pin(SOURCE/'class_call.h'),
        'canonicalFamilyInstructionBytes':4624,'newSourceOrInventoryAdmissionGranted':0,
        'frozenPredecessorsChanged':False,'sourceOriginalExecutableImageRetained':False,
        'allocatorGcScriptConstructorsWholeVmGameOrDeviceClaimed':False,
        'producer':pin(ROOT/'toolscripts/squirrel_class_call030_seal.py')}
    save(evidence/'ready.json',result)
    for record in records:
        if hashlib.sha256((ROOT/record['path']).read_bytes()).hexdigest()!=record['sha256']:
            raise ValueError('030 input changed during freeze')
    return pin(evidence/'ready.json')


if __name__=='__main__':print(json.dumps(seal()))
