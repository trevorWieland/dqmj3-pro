import hashlib
import json
import shutil

from squirrel_capture041_build import ROOT,WORK,SOURCES,pin,save


def packet():
    report_path=WORK/'primary-qualified/execution.json';controls_path=WORK/'controls-corrected/controls.json'
    replay_path=WORK/'copied-source/verification.json'
    report=json.loads(report_path.read_text());controls=json.loads(controls_path.read_text())
    replay=json.loads(replay_path.read_text())
    if report['sets']!=136 or report['targetObservations']!=544 or controls['count']!=7:
        raise ValueError('038 qualification cohort is incomplete')
    if not replay['completeFourTargetReportByteIdentical']or not replay['compiledArtifactsByteIdentical']or not replay['returningControlsByteIdentical']:
        raise ValueError('038 isolated replay has not reproduced all primary evidence')
    for record in report['sourceFiles']+[report['runtimeProducer'],report['producer']]:
        data=(ROOT/record['path']).read_bytes()
        if len(data)!=record['bytes']or hashlib.sha256(data).hexdigest()!=record['sha256']:
            raise ValueError('038 executed source/producer pin changed')
    folder=ROOT/'evidence/lanes/squirrel-capture041'
    for name,path in [('execution.json',report_path),('controls.json',controls_path),('replay-verification.json',replay_path)]:
        shutil.copyfile(path,folder/name)
    owned=list((ROOT/'source/squirrel-wave038').glob('*'))
    owned+=list((ROOT/'toolscripts').glob('squirrel_capture041*.py'))
    owned+=[ROOT/'tests/test_squirrel_capture041.py',ROOT/'docs/squirrel-capture041.md']
    owned+=list(folder.glob('*.json'))
    owned=[path for path in owned if path.is_file()and path.name!='ready.json']
    record={'schemaVersion':1,'status':'frozen-complete-controller-contract-component-pending-coordinator-review',
        'files':[pin(path)for path in sorted(set(owned))],
        'sets':136,'fourTargetObservations':544,'wholeComparisonArenaEqualSets':report['postAliasWholeArenaEqualSets'],
        'returningControls':7,'authoredNativeControlNormalReturns':14,'sameFinalArenaControls':controls['sameFinalSourceArenaControls'],
        'freshTestsPassed':15,'copiedTestsPassed':replay['testsPassed'],
        'normalReturnSets':132,'terminalBoundarySets':4,'preservedFrozen038Cases':108,
        'rawFrozenSourceArenaIdentityClaimed':False,'frozenComparisonViewOnlyFixtureAliases':True,
        'refcountWrapHazardIsNotValidOwnershipSafety':True,
        'terminalPolicyIsNotOriginalKernelExecution':True,
        'completeOriginalControllerInstructionBytes':1104,'exercisedControllerPcs':273,'totalControllerPcs':276,
        'originalExecuteOwnerFragmentPcs':len(report['opcode48FragmentOriginalPcCoverage']),
        'candidateCompleteControllerUnderDeclaredContracts':True,'functionalAdmissionGranted':False,'wholeExecuteAdmissionGranted':False,
        'sourceByteOrInventoryCreditGranted':0,'coordinatorReviewRequired':True,
        'actualWindowsHighAddressExecution':True,'androidAarch64ObjectExecution':True,
        'androidOsPhysicalDeviceAynThorOrFullGameClaim':False,
        'guardedPredecessors':[pin(ROOT/'evidence/lanes/squirrel-capture038/ready.json'),pin(ROOT/'evidence/lanes/squirrel-class034/ready.json'),
            pin(ROOT/'evidence/lanes/squirrel-execute031/ready.json'),pin(ROOT/'evidence/lanes/squirrel-script-create018/ready.json')],
        'privateFailuresPreserved':True,'noOriginalPayloadsPublished':True,
        'producer':pin(ROOT/'toolscripts/squirrel_capture041_packet.py')}
    save(folder/'ready.json',record)
    return pin(folder/'ready.json')


if __name__=='__main__':print(json.dumps(packet()))
