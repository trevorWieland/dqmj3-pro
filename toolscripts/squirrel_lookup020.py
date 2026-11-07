import hashlib
import json
import re
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_lookup020_build import ROOT,SOURCE,WORK,SOURCES,arm,windows,android,pin,save,command
from squirrel_lookup020_oracle import Arm,Windows
from squirrel_lookup020_android import Android
from squirrel_lookup020_controls import run as controls
from squirrel_lookup020_boundaries import measure
from squirrel_script_create018 import PREDECESSORS as FROZEN


EVIDENCE=ROOT/'evidence/lanes/squirrel-lookup020'
PREDECESSORS=FROZEN+[
    ('evidence/lanes/squirrel-reference-prefix012/array-ready.json','69693ebbab8f59e4886de43a737e7d7002a3899a57e5814fef43b33a2feb5ebc'),
    ('evidence/lanes/squirrel-table-lookup019/ready.json','fbb50eb434cdb2e81276ba160b6ae04f076d5fb4e992253d0eda735cb0b5ac56'),
    ('evidence/lanes/squirrel-script-create018/ready.json','56547b1c93abf90d92fd7e4bfbbceb7d13fe8e8db6bd27a609ea7be4d394c2a4')]
STABLE=[('source/squirrel-wave020/lookup.h','37d79b9460b3206ca91ea800e0559abee8d1b294a5b9914c03790ba5a9c688ab'),
    ('source/squirrel-wave020/lookup_bindings.c','081a40b761423a60538f79f5b0be319c5cffaabc1c37a5f252e072b55bde3d0a')]


def sha(blob):
    return hashlib.sha256(blob).hexdigest()


def check(row):
    path=ROOT/row['path']
    if path.stat().st_size!=row['bytes'] or sha(path.read_bytes())!=row['sha256']:
        raise ValueError('020 pinned dependency changed: '+row['path'])


def headers():
    pending,found=list(SOURCES),set()
    while pending:
        path=pending.pop().resolve()
        for name in re.findall(r'^\s*#include\s*"([^"]+)"',path.read_text(encoding='utf-8'),re.M):
            target=(path.parent/name).resolve();target.relative_to(ROOT)
            if target not in found:found.add(target);pending.append(target)
    return [pin(path) for path in sorted(found)]


def validate():
    measure()
    claim=json.loads((EVIDENCE/'claim.json').read_text())
    image=original_image()
    if sha(image)!=claim['moduleSha256']:raise ValueError('020 original module identity changed')
    prerequisites=[]
    for path,expected in PREDECESSORS:
        source=ROOT/path
        if sha(source.read_bytes())!=expected:raise ValueError('020 frozen receipt changed: '+path)
        record=json.loads(source.read_text())
        rows=record.get('files',[])+record.get('pins',[])+record.get('ownedFiles',[])
        if 'header' in record:rows.append(record['header'])
        for row in rows:check(row)
        prerequisites.append(pin(source))
    for path,expected in STABLE:
        if sha((ROOT/path).read_bytes())!=expected:raise ValueError('020 shared ABI changed: '+path)
    sdk=json.loads((EVIDENCE/'reference-sdk-exchange.json').read_text())
    if sdk['moduleSha256']!=claim['moduleSha256']:raise ValueError('020 reference-only SDK identity changed')
    return claim,prerequisites


def evidence_mode(variant):
    if variant in [13,14,65]:return 'actual-meta-provider-and-controller-with-explicit-vm-invocation-contract'
    if variant in [21,22,23,24,25,26]:return 'read-only-class-instance-userdata-storage-bindings'
    if 28<=variant<=33:return 'actual-original-sdk-error-reference-independent-c-string-integer-formatting'
    if 34<=variant<=52:return 'type-name-shared-tail'
    if 53<=variant<=63:return 'shared-scratch-storage'
    if variant==64:return 'null-delegate-no-vm-read'
    return 'actual-typed-table-array-string-default-and-root-lookup'


def main():
    claim,prerequisites=validate()
    quoted=headers()
    sections,symbols,functions,build=arm(WORK/'replay/arm')
    host_path=windows(WORK/'replay/windows')
    mobile_sections,mobile_symbols,mobile_functions,mobile_build=android(WORK/'replay/android')
    original,source=Arm(sections,symbols,functions,True),Arm(sections,symbols,functions)
    host,mobile=Windows(host_path),Android(mobile_sections,mobile_symbols)
    layout=[152,280,64,72,132,144,152,80,48,40,88,264]
    if host.layout!=layout:raise ValueError('020 qualified native storage layout changed')
    cases,digest=[],hashlib.sha256()
    for cleanup in [0,1]:
        for variant in range(66):
            expected,heap=original.execute(variant,cleanup)
            actual,source_heap=source.execute(variant,cleanup)
            native=host.execute(variant,cleanup)
            android_words=mobile.execute(variant,cleanup)
            if actual!=expected or source_heap!=heap or native!=expected or android_words!=expected:
                raise ValueError('020 original/source/Windows/A64 differs: '+str((variant,cleanup)))
            packed=struct.pack('<'+'I'*len(expected),*expected);digest.update(packed)
            cases.append({'variant':variant,'cleanup':cleanup,'evidenceMode':evidence_mode(variant),
                'observationWords':len(expected),'orderedObservationsSha256':sha(packed),
                'wholeNormalizedArmArenaSha256':sha(heap),'wholeArmArenaEqual':True,
                'sourceArmEqual':True,'actualWindowsEqual':True,'actualAndroidObjectsCpuModelEqual':True})
        print(json.dumps({'positiveCleanupRootPassed':cleanup,'variants':66}),flush=True)
    coverage=[]
    for row in claim['functions']:
        instructions=set(range(row['entry'],row['endExclusive'],4))
        visited=instructions&original.coverage
        coverage.append({'role':row['role'],'entry':row['entry'],'instructionAddresses':len(instructions),
            'visited':len(visited),'unvisited':sorted(instructions-visited)})
    meta=next(row for row in coverage if row['entry']==0x202cf4)
    if meta['visited']!=10:raise ValueError('020 actual table meta provider did not execute all40 instruction bytes')
    save(WORK/'replay/private-coverage.json',{'original':sorted(original.coverage),'source':sorted(source.coverage)})
    semantic=controls()
    test="import sys,unittest; suite=unittest.defaultTestLoader.discover("+repr(str(ROOT/'tests'))+",pattern='test_squirrel_lookup020.py'); assert suite.countTestCases()==30; r=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not r.wasSuccessful() or bool(r.skipped))"
    command([sys.executable,'-c',test],WORK/'replay/tests.json')
    for row in quoted:check(row)
    report={'schemaVersion':1,'status':'qualified-bounded-opaque-lookup-error-and-table-metamethod-component',
        'program':claim['program'],'version':claim['version'],'module':claim['module'],'moduleSha256':claim['moduleSha256'],
        'claim':pin(EVIDENCE/'claim.json'),'overlayCandidate':pin(EVIDENCE/'metamethod-overlay-candidate.json'),
        'measuredUniqueInstructionBytes':3232,'literalPoolBytes':116,'originalInstructionCoverage':coverage,
        'typeNamePrefixAndTailPhysicalUnionBytes':244,'prefixAloneCompleteReturningFunction':False,
        'frozenPrerequisites':prerequisites,'consumedQuotedIncludeHeaders':quoted,
        'stableSharedAbiInputs':[pin(ROOT/path) for path,expected in STABLE],
        'cases':len(cases),'comparisonsAgainstOriginal':len(cases)*3,'wholeArmArenaComparisons':len(cases),
        'casesByProfile':cases,'orderedCaseDigest':digest.hexdigest(),'actualWindowsExecuted':True,
        'actualAndroidObjectsCpuModelExecuted':True,'androidReturnedApis':mobile.calls,
        'androidModel':'Cortex-A72 AArch64 above 4 GiB; x18/saved integer/floating-point/stack checked',
        'androidOperatingSystemOrPhysicalDeviceExecuted':False,'wholeVmOrGameExecuted':False,
        'nativeLayout':dict(zip(['vmBytes','sharedStorageBytes','rootOffset','errorOffset','frameByteSlot','sharedOffset',
            'classReadStorageBytes','instanceReadValuesOffset','extendedVtableBytes','methodSlotOffset',
            'defaultDelegatesOffset','scratchOffset'],layout)),
        'actualExtendedVtableWithExactNamedThreeSlotPrefix':True,'existing019VtableExtendedOrCastBeyondActualObject':False,
        'methodControllerRequiresActuallyPublishedExtendedObject':True,
        'extendedPublicationObservedOnlyAfterFullInitialization':True,
        'commonSharedMetaNamesOffset':0,'commonSharedString015Offset':20,
        'sharedPointerSlotNonoverlapQualifiedForFourAndEightBytePointers':True,
        'fullVmSharedClassInstanceConstructionOrLifetimeQualified':False,
        'readOnlyClassInstanceUserdataStorageContracts':True,'legacy006009LayoutOrCallbackReinterpretation':False,
        'actualCompactPrototypePrefixBytes':12,'genericFullCollectableCastOfPrototype':False,
        'originalNegativeStringIndexPreservedOnlyForPhysicallyBackedInitializedReads':True,
        'floatingIndexDomain':'finite values representable as signed32; no NaN/infinity/out-of-range conversion claim',
        'table019IocExceptionStatusLimitationInherited':True,'mandatoryFpscrControlsAndSavedStateChecked':True,
        'actualOriginalSdkFormattingExecutedForReference':True,
        'sdkReferenceWitnesses':pin(EVIDENCE/'reference-sdk-exchange.json'),
        'independentPeerReferenceOverlap':pin(EVIDENCE/'reference-peer-comparison.json'),
        'sdkFunctionBoundaryInventoryOrSourceAdmissionGranted':0,
        'sourceFormattingDomain':'independent authored integer conversion and string/precision format; float/general printf unsupported',
        'sourceModeOriginalImageCodeDataSdkServicesMapped':False,'cachedOriginalResultsFedToSource':False,
        'sourceGraphUndefinedSymbols':[],'fullVmCall17ffacQualified':False,
        'vmInvocationBoundary':'explicit typed C fixture using actual script017/prototype011 and returning ownership controls',
        'nativeCallableStorageInvoked':False,
        'unsupported':['failed/null allocation and exhausted storage','malformed pointers/indices/counts or overflow',
            'unbacked negative string indices and INT_MIN','unpublished or old three-slot objects in slot5 dispatch',
            'unqualified class/instance/delegable construction/finalization and non-table method providers',
            'general/floating formatting and nonfinite/out-of-range numeric conversion',
            'full VM invocation/Execute, GC, cycles, races or universal equivalence'],
        'heapComparisonCapturedBeforeObservationSnapshot':True,
        'addressNormalization':'only three copied lifetime callbacks and the exact typed method bridge; identities verified, executing bytes unchanged',
        'sourceInstructionOrObjectPatching':False,'returningControls':semantic,
        'nativeTests':{'passed':30,'log':pin(WORK/'replay/tests.json')},'armBuild':build,
        'actualWindowsDll':pin(host_path),'androidBuild':mobile_build,
        'toolIdentities':[pin(ROOT/'tools/clang-21/clang.exe'),pin(ROOT/'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion':unicorn.__version__,'unicornNativeVersion':list(unicorn.uc_version()),
        'requestedExactBytes':0,'acceptedSourceCreditGranted':0,'inventoryAdmissionGranted':0,
        'coordinatorAdmissionRequired':True,'originalPayloadsPublished':False,
        'reproduction':['tools/python/Scripts/python.exe','toolscripts/squirrel_lookup020.py']}
    save(EVIDENCE/'execution.json',report)
    files=sorted(SOURCE.glob('*'))+sorted((ROOT/'toolscripts').glob('squirrel_lookup020*.py'))
    files += [ROOT/'tests/test_squirrel_lookup020.py',EVIDENCE/'claim.json',EVIDENCE/'metamethod-overlay-candidate.json',
        EVIDENCE/'reference-sdk-exchange.json',EVIDENCE/'reference-peer-comparison.json',EVIDENCE/'execution.json']
    save(EVIDENCE/'ready.json',{'schemaVersion':1,'status':'frozen-ready-for-independent-review',
        'files':[pin(path) for path in files if path.is_file()],'measuredUniqueInstructionBytes':3232,
        'requestedExactBytes':0,'acceptedSourceCreditGranted':0,'inventoryAdmissionGranted':0,
        'wholeVmOrGameClaimed':False,'canonicalMappingAndAdmissionOwnedByCoordinator':True,'originalPayloadsPublished':False})
    print(json.dumps({'cases':len(cases),'comparisonsAgainstOriginal':len(cases)*3,'androidReturnedApis':mobile.calls,
        'returningControls':len(semantic['controls']),'ready':pin(EVIDENCE/'ready.json')}))


if __name__=='__main__':
    main()
