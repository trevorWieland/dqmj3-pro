import argparse
import json
import re
import subprocess
from pathlib import Path

from native_wave013_common import ROOT,OUT,WORK,record,save


def nested_pins(value):
    if isinstance(value,dict):
        if {'path','sha256','bytes'}<=set(value):yield value
        else:
            for child in value.values():yield from nested_pins(child)
    elif isinstance(value,list):
        for child in value:yield from nested_pins(child)


def verify(path,run_tests=True):
    packet=json.loads(path.read_text());pins=[]
    for key in ['sources','headers','producers','evidenceInputs','runtimeInputs','compiler','linker','objects','referenceProvider',
        'linkedElf','linkerScript','referenceTrace','referenceInputPins','ABI','platform','functions','negativeControls']:
        pins.extend(nested_pins(packet[key]))
    unique={row['path']:row for row in pins}
    for row in unique.values():
        if record(ROOT/row['path'])!=row:raise ValueError('Owner pinned input/artifact changed: '+row['path'])
    if len(packet['functions'])!=6 or packet['functionalOriginalInstructionBytes']!=816:
        raise ValueError('Owner complete body set differs')
    if packet['acceptedSourceCreditGranted'] or packet['dependencies']['retainedOriginalExecutableHelpers']:
        raise ValueError('Owner packet admits credit or retains source helpers')
    if not packet['behavior']['allQualifiedCasesPassed'] or packet['behavior']['attemptedFixtureCases']!=95:
        raise ValueError('Owner bounded fixture set is incomplete')
    if packet['behavior']['flagAndReturnCrossProductCases']!=32:raise ValueError('Owner return/flags profile incomplete')
    if len(packet['negativeControls'])!=11 or any(not row[platform]['returnedNormally'] or not row[platform]['immutableMemoryPreserved']
        or not row[platform]['rejected'] for row in packet['negativeControls'] for platform in ['arm','windows']):
        raise ValueError('Owner normally returning semantic controls are incomplete')
    delayed=next(row for row in packet['negativeControls'] if row['name']=='delayed-clear-same-final')
    if not delayed['sameFinalGameAndProviderState'] or not delayed['onlyIndependentConfigurationFlagObservationDiffers']:
        raise ValueError('Independent caller-owned flag observer control is incomplete')
    if packet['platform']['android']['deviceExecuted'] or packet['platform']['wholeGameBuildOrExecution']:
        raise ValueError('Owner bounded component claims a complete game/device')
    result={'schemaVersion':1,'status':'packet-and-current-inputs-verified','packet':record(path),
        'producer':record(Path(__file__)),'checkedPinsAndArtifacts':len(unique),'newFunctions':6,
        'originalInstructionBytes':816,'acceptedSourceCreditGranted':0,'independentCleanReplayClaimed':False}
    if run_tests:
        command=[str(ROOT/'tools/python/Scripts/python.exe'),'-m','unittest','discover','-s','tests',
            '-p','test_native_wave013_file_owner_orchestration.py','-v']
        process=subprocess.run(command,cwd=ROOT,capture_output=True,timeout=180)
        log=WORK/'file-owner-orchestration-sealed/verification-tests.private.log'
        log.parent.mkdir(parents=True,exist_ok=True);log.write_bytes(process.stdout+process.stderr)
        count=re.search(rb'Ran (\d+) tests?',process.stderr)
        result.update({'testCommand':command,'testExitCode':process.returncode,
            'testSource':record(ROOT/'tests/test_native_wave013_file_owner_orchestration.py'),
            'testCount':int(count.group(1)) if count else None,'privateTestLog':record(log)})
        if process.returncode:
            save(path.parent/'verification.json',{**result,'status':'tests-failed'});raise RuntimeError('Owner tests failed; log retained')
    save(path.parent/'verification.json',result);return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--packet',type=Path,
        default=OUT/'file/owner/orchestration/packet.json');parser.add_argument('--skip-tests',action='store_true')
    args=parser.parse_args();print(json.dumps(verify(args.packet.resolve(),not args.skip_tests)),flush=True)
