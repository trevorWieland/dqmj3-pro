import argparse
import json
import re
import subprocess
from pathlib import Path

from native_wave013_common import ROOT,OUT,WORK,record,save


def verify(packet_path,run_tests=True):
    packet=json.loads(packet_path.read_text())
    pins=[*packet['sources'],*packet['headers'],*packet['producers'],*packet['evidenceInputs'],
          *packet['runtimeInputs'],packet['compiler'],packet['linker']]
    artifacts=[packet['linkedElf'],packet['linkerScript'],packet['platform']['windowsDll'],
               packet['platform']['android']['sharedLibrary'],packet['ABI']['armObject'],
               packet['ABI']['windowsObject'],packet['ABI']['windowsDll']]
    for row in packet['functions']:
        artifacts.append(row['candidateObject']['object'])
    for pin in [*pins,*artifacts]:
        if record(ROOT/pin['path'])!=pin:
            raise ValueError('literal pinned input/artifact changed: '+pin['path'])
    if len(packet['functions'])!=4 or packet['functionalOriginalInstructionBytes']!=1018:
        raise ValueError('literal complete claimed body set differs')
    if packet['acceptedSourceCreditGranted'] or packet['dependencies']['retainedOriginalExecutableHelpers']:
        raise ValueError('literal packet changes credit or retains executable helpers')
    rows=packet['negativeControls']
    semantic=rows
    if len(semantic)!=6 or any(not row[platform]['returnedNormally'] or not row[platform]['immutableMemoryPreserved']
                              for row in semantic for platform in ['arm','windows']):
        raise ValueError('literal normally returning semantic controls are incomplete')
    result={'schemaVersion':1,'status':'packet-and-current-inputs-verified','packet':record(packet_path),
            'producer':record(Path(__file__)),'checkedPinsAndArtifacts':len(pins)+len(artifacts),
            'newFunctions':4,'originalInstructionBytes':1018,'acceptedSourceCreditGranted':0,
            'independentCleanReplayClaimed':False}
    if run_tests:
        test_source=ROOT/'tests/test_native_wave013_literal.py'
        command=[str(ROOT/'tools/python/Scripts/python.exe'),'-m','unittest','discover','-s','tests',
                 '-p','test_native_wave013_literal.py','-v']
        process=subprocess.run(command,cwd=ROOT,capture_output=True,timeout=180)
        log=WORK/'literal-sealed/verification-tests.private.log'
        log.parent.mkdir(parents=True,exist_ok=True)
        log.write_bytes(process.stdout+process.stderr)
        count=re.search(rb'Ran (\d+) tests?',process.stderr)
        result.update({'testCommand':command,'testExitCode':process.returncode,'testSource':record(test_source),
                       'testCount':int(count.group(1)) if count else None,'privateTestLog':record(log)})
        if process.returncode:
            save(OUT/'literal/verification.json',{**result,'status':'tests-failed'})
            raise RuntimeError('literal tests failed; private log retained')
    save(OUT/'literal/verification.json',result)
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--packet',type=Path,default=OUT/'literal/packet.json')
    parser.add_argument('--skip-tests',action='store_true')
    arguments=parser.parse_args()
    print(json.dumps(verify(arguments.packet.resolve(),not arguments.skip_tests)),flush=True)
