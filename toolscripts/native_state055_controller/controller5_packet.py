import hashlib
import json
import sys
from pathlib import Path
from controller5_measure import ROOT,WORK,pin
from controller5_verify import compare,verify_controls


def packet():
    primary=json.loads((WORK/'execution.json').read_text());copied=json.loads((WORK/'replay-v1/execution.json').read_text())
    compare(primary,copied)
    controls=json.loads((WORK/'returning-controls.json').read_text());copy_controls=json.loads((WORK/'replay-v1/returning-controls.json').read_text())
    verify_controls(controls);verify_controls(copy_controls)
    tests=json.loads((WORK/'tests.json').read_text());assert tests['returncode']==0 and tests['testCount']==15
    paths=set()
    for row in primary['pins']+primary['artifacts']+copied['pins']+copied['artifacts']:paths.add(ROOT/row['path'])
    for folder in [WORK/'source',WORK/'replay-v1/source',WORK/'replay-v1/dependency-source']:
        paths.update(path for path in folder.rglob('*')if path.is_file()and path.suffix in ['.c','.h'])
    names=['claim.json','inputs.json','execution.json','returning-controls.json','controller-contract.json','control-invariants.json','caller-padding-audit.json','source-copy.json','source-replay.json','tests.json','tests.txt','resource-layout-witness.json','derived-defaults-execution.json']
    paths.update(WORK/name for name in names)
    paths.update(WORK/'replay-v1'/name for name in ['inputs.json','claim.json','execution.json','returning-controls.json'])
    tools=['controller5_execution.py','controller5_program_build.py','controller5_storage_build.py','controller5_program_target_probe.py','controller5_program_native.py','controller5_reference.py','controller5_fixture.py','controller5_sequence.py','controller5_table_model.py','controller5_lighting_model.py','controller5_remaining_model.py','controller5_uniform_model.py','controller5_attribute_model.py','controller5_native_storage.py','controller5_measure.py','controller5_controls.py','controller5_lighting_probe.py','controller5_remaining_probe.py','controller5_attributes_probe.py','controller5_full_frontier.py','controller5_attributes_extended.py','controller5_padding_audit.py','controller5_invariants.py','controller5_copy.py','controller5_inputs.py','controller5_verify.py','controller5_packet.py','test_controller5.py']
    paths.update(ROOT/'work/native-state055'/name for name in tools)
    paths.update([ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe'])
    failures=[]
    for folder in (WORK/'attempts').iterdir():
        records=[path for path in folder.iterdir()if path.is_file()and path.suffix in ['.json','.c','.h','.py']]
        failures.extend(records)
    paths.update(failures)
    for report,stage in [(controls,WORK),(copy_controls,WORK/'replay-v1')]:
        for row in report['controls']:
            build=stage/'returning-controls'/row['name']/'program-build/build.json'
            paths.add(build)
            for item in json.loads(build.read_text())['sources']+json.loads(build.read_text())['headers']+row['build']:paths.add(ROOT/item['path'])
    for stage in [WORK,WORK/'replay-v1']:
        for relative in ['program-build/build.json','storage-build/build.json','program-build/program.ld','program-build/native-program.ld','program-build/windows_float_marker.c']:
            paths.add(stage/relative)
    pins=[pin(path)for path in sorted(paths)]
    for row in pins:
        data=(ROOT/row['path']).read_bytes();assert hashlib.sha256(data).hexdigest()==row['sha256']
    result=dict(schemaVersion=1,status='frozen-private-full-controller055-candidate',version='update-content0',module='main',entry=0x6fb25c,mode='ARM',instructionBytes=14600,
                sourceEntry='state_apply_controller055',source=pin(WORK/'source/apply_controller055.c'),
                primary=pin(WORK/'execution.json'),copied=pin(WORK/'replay-v1/execution.json'),replay=pin(WORK/'source-replay.json'),
                caseSets=569,observationsPerRun=2276,originalInstructionsExecuted=3633,provedUnreachableInstructions=17,canonicalInstructionTotal=3650,
                returningControls=10,returningSourceControlExecutionsPerRun=30,sameFinalArmControlArenas=4,
                rawRuntimeRowsIdenticalInCopiedReplay=True,fourRuntimeArtifactsIdenticalInCopiedReplay=True,allControlArtifactHashesIdentical=True,tests=15,
                paddingAudit=pin(WORK/'caller-padding-audit.json'),paddingCases=6,rawPaddingDifferencesPreserved=True,
                primaryFormatCommit='62b7c42c88b1ee837f513358409d2e5c8f9001a9',
                sourceSnapshotBytes=2265096,originalImagesToolsOrRepositoryCopied=False,
                contract=pin(WORK/'controller-contract.json'),files=pins,
                sourceCreditGranted=0,canonicalFragmentOrInheritedHelperCreditGranted=0,exactObjectMatchingClaimed=False,hardwareAndroidOsDeviceOrWholeGameClaimed=False,
                completeOriginalOwnerLayoutInitializationOrAllocatorClaimed=False,publicationPerformed=False)
    out=WORK/'ready.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(ready=pin(out),pins=len(pins),sets=569,sourceControlExecutionsPerRun=30)),flush=True)
    return result


if __name__=='__main__':packet()
