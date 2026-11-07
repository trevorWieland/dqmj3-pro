import argparse
import json
import re
import subprocess
from pathlib import Path

from native_wave013_file_owner_orchestration_verify import nested_pins
from native_wave013_file_owner_game_cases import cases
from native_wave013_file_owner_game_mutations import mutations
from native_wave013_common import ROOT,OUT,WORK,record,save


def verify(path,run_tests=True):
    packet=json.loads(path.read_text());pins=[]
    for key in ['allValidationInputs','runtimeInputs','compiler','linker','objects','referenceKernelProvider','linkedElf',
        'linkerScript','referenceTrace','referenceInputPins','ABI','platform','functions','negativeControls']:
        pins.extend(nested_pins(packet[key]))
    unique={row['path']:row for row in pins}
    for row in unique.values():
        if record(ROOT/row['path'])!={key:row[key] for key in ['path','sha256','bytes']}:raise ValueError('Mount pinned input/artifact changed: '+row['path'])
    if len(packet['functions'])!=5 or packet['allCandidateInstructionBytes']!=520:
        raise ValueError('Mount complete body set differs')
    if packet['acceptedSourceCreditGranted'] or packet['dependencies']['retainedOriginalExecutableHelpers']:
        raise ValueError('Mount packet admits credit or retains source helpers')
    if not packet['behavior']['allQualifiedCasesPassed'] or packet['behavior']['cases']!=len(cases()):
        raise ValueError('Mount bounded fixture set is incomplete')
    if packet['behavior']['flagAndReturnCrossProductCases']!=32:raise ValueError('Mount return/flags profile incomplete')
    if len(packet['negativeControls'])!=len(mutations()) or any(not row[platform]['returnedNormally'] or not row[platform]['immutableMemoryPreserved']
        or not row[platform]['rejected'] for row in packet['negativeControls'] for platform in ['arm','windows']):
        raise ValueError('Mount normally returning semantic controls are incomplete')
    if packet['platform']['android']['deviceExecuted'] or packet['platform']['wholeGameBuildOrExecution']:
        raise ValueError('Mount bounded component claims a complete game/device')
    if packet['behavior']['wholeMemoryEquivalenceClaimed'] or packet['behavior']['sourceOutputPatched']:
        raise ValueError('Mount packet overstates its platform representation contract')
    if packet['referencePreconditions']['actualSdkInitializer']!=0x7087fc:
        raise ValueError('Mount actual SDK initialization differs')
    trace=json.loads((ROOT/packet['referenceTrace']['path']).read_text())
    if not any(row['address']==0x7087fc for row in trace['instructions']):
        raise ValueError('Mount actual SDK initializer has no executed instruction witness')
    numeric=packet['numericCounter']
    if not numeric['allPassed'] or numeric['allU16SingleUnitQueries']!=65536 or numeric['counterFlagsAndReturnCases']!=32:
        raise ValueError('Game exhaustive numeric classifier profile is incomplete')
    reentry=next(row for row in packet['negativeControls'] if row['name']=='old-slot-before-allocation')
    if not reentry['sameNewOwnerAndCallerSlot'] or not reentry['interveningOwnerReleaseAndIndependentTraceDiffer']:
        raise ValueError('Game reentrant independent ownership observer is incomplete')
    result={'schemaVersion':1,'status':'packet-and-current-inputs-verified','packet':record(path),
        'producer':record(Path(__file__)),'checkedPinsAndArtifacts':len(unique),'newFunctions':5,
        'originalInstructionBytes':520,'acceptedSourceCreditGranted':0,'independentCleanReplayClaimed':False}
    if run_tests:
        command=[str(ROOT/'tools/python/Scripts/python.exe'),'-m','unittest','discover','-s','tests',
            '-p','test_native_wave013_file_owner_game.py','-v']
        process=subprocess.run(command,cwd=ROOT,capture_output=True,timeout=180)
        log=WORK/'file-owner-game-sealed/verification-tests.private.log';log.parent.mkdir(parents=True,exist_ok=True)
        log.write_bytes(process.stdout+process.stderr);count=re.search(rb'Ran (\d+) tests?',process.stderr)
        result.update({'testCommand':command,'testExitCode':process.returncode,
            'testSource':record(ROOT/'tests/test_native_wave013_file_owner_game.py'),
            'testCount':int(count.group(1)) if count else None,'privateTestLog':record(log)})
        if process.returncode:
            save(path.parent/'verification.json',{**result,'status':'tests-failed'});raise RuntimeError('Mount tests failed; log retained')
    save(path.parent/'verification.json',result);return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--packet',type=Path,default=OUT/'file/owner/game/packet.json')
    parser.add_argument('--skip-tests',action='store_true');args=parser.parse_args()
    print(json.dumps(verify(args.packet.resolve(),not args.skip_tests)),flush=True)
