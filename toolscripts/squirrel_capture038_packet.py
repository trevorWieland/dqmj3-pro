import hashlib
import json
import shutil

from squirrel_capture038_build import ROOT,WORK,SOURCES,pin,save


def packet():
    report_path=WORK/'primary-qualified/execution.json';controls_path=WORK/'controls-sealed/controls.json'
    replay_path=WORK/'copied-source/verification.json'
    report=json.loads(report_path.read_text());controls=json.loads(controls_path.read_text())
    replay=json.loads(replay_path.read_text())
    if report['sets']!=108 or report['targetObservations']!=432 or controls['count']!=7:
        raise ValueError('038 qualification cohort is incomplete')
    if not replay['completeFourTargetReportByteIdentical']or not replay['compiledArtifactsByteIdentical']or not replay['returningControlsByteIdentical']:
        raise ValueError('038 isolated replay has not reproduced all primary evidence')
    for record in report['sourceFiles']+[report['runtimeProducer'],report['producer']]:
        data=(ROOT/record['path']).read_bytes()
        if len(data)!=record['bytes']or hashlib.sha256(data).hexdigest()!=record['sha256']:
            raise ValueError('038 executed source/producer pin changed')
    folder=ROOT/'evidence/lanes/squirrel-capture038'
    for name,path in [('execution.json',report_path),('controls.json',controls_path),('replay-verification.json',replay_path)]:
        shutil.copyfile(path,folder/name)
    owned=list((ROOT/'source/squirrel-wave038').glob('*'))
    owned+=list((ROOT/'toolscripts').glob('squirrel_capture038*.py'))
    owned+=[ROOT/'tests/test_squirrel_capture038.py',ROOT/'docs/squirrel-capture038.md']
    owned+=list(folder.glob('*.json'))
    owned=[path for path in owned if path.is_file()and path.name!='ready.json']
    record={'schemaVersion':1,'status':'frozen-bounded-real-script-capture-component-pending-coordinator-review',
        'files':[pin(path)for path in sorted(set(owned))],
        'sets':108,'fourTargetObservations':432,'wholeComparisonArenaEqualSets':report['postAliasWholeArenaEqualSets'],
        'returningControls':7,'authoredNativeControlNormalReturns':14,'sameFinalArenaControls':controls['sameFinalSourceArenaControls'],
        'freshTestsPassed':12,'copiedTestsPassed':replay['testsPassed'],
        'completeOriginalControllerInstructionBytes':1104,'exercisedControllerPcs':248,'totalControllerPcs':276,
        'originalExecuteOwnerFragmentPcs':len(report['opcode48FragmentOriginalPcCoverage']),
        'wholeControllerFunctionalAdmissionRecommended':False,'wholeExecuteAdmissionGranted':False,
        'sourceByteOrInventoryCreditGranted':0,'coordinatorReviewRequired':True,
        'actualWindowsHighAddressExecution':True,'androidAarch64ObjectExecution':True,
        'androidOsPhysicalDeviceAynThorOrFullGameClaim':False,
        'guardedPredecessors':[pin(ROOT/'evidence/lanes/squirrel-class034/ready.json'),
            pin(ROOT/'evidence/lanes/squirrel-execute031/ready.json'),pin(ROOT/'evidence/lanes/squirrel-script-create018/ready.json')],
        'privateFailuresPreserved':True,'noOriginalPayloadsPublished':True,
        'producer':pin(ROOT/'toolscripts/squirrel_capture038_packet.py')}
    save(folder/'ready.json',record)
    return pin(folder/'ready.json')


if __name__=='__main__':print(json.dumps(packet()))
