import hashlib
import json
import shutil
import subprocess
import sys

from squirrel_coercion026_build import ROOT,WORK,SOURCE,pin,save
from squirrel_coercion026_android import inspect
from squirrel_coercion026_provenance import produce as provenance


EVIDENCE=ROOT/'evidence/lanes/squirrel-coercion026'


def seal():
    replay=WORK/'copied-source-v3/verification.json'
    copied=json.loads(replay.read_text())
    report=WORK/'primary-final-raw/execution.json'
    result=json.loads(report.read_text())
    if not copied['completeFourTargetReportByteIdentical'] or result['sets']!=302 or result['preAliasCompleteArenaEqualSets']!=0:
        raise ValueError('026 final raw-preserving copied replay incomplete')
    primary=WORK/'primary-final-raw'
    tests=subprocess.run([sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_coercion026.py','-v'],
        cwd=ROOT,capture_output=True,timeout=120)
    (primary/'fresh-tests.log').write_bytes(tests.stdout+tests.stderr)
    if tests.returncode:raise ValueError('026 fresh tests failed')
    for source,target in [(report,'execution.json'),(primary/'float-host-reference.json','float-host-reference.json'),
            (WORK/'primary-v2/controls/controls.json','returning-controls.json'),(replay,'copied-source-replay.json')]:
        shutil.copy2(source,EVIDENCE/target)
    provenance(EVIDENCE/'tool-provenance.json')
    linkage={'schemaVersion':1,'qualified':inspect(primary/'android/libcoercion026.so'),
        'inheritedMaxPageOnlyIntermediate':inspect(primary/'android/liblookup020.so'),
        'strongerSuccessorNormalLinkFlags':['-z','max-page-size=16384','-z','common-page-size=16384'],
        'initialFalsePositiveDiagnostic':pin(WORK/'relro-false-positive-diagnostic.json'),
        'officialGuidance':'https://developer.android.com/guide/practices/page-sizes',
        'sameTrailingProtectedPageRuleApplied':True,'oldDeploymentFailureEstablished':False,
        'predecessorFilesAltered':False,'androidOperatingSystemDeviceOrPhysicalPageExecutionClaimed':False}
    save(EVIDENCE/'android-linkage.json',linkage)
    products=[SOURCE/name for name in ['coercion.h','coercion.c','stack_string.c','float_text.h','float_text.c',
        'scalar_text.c','pointer_text.c']]
    providers={'schemaVersion':1,'productFiles':[path.relative_to(ROOT).as_posix() for path in products],
        'allFixtureTranslationUnitsExcludedFromProduction':True,
        'canonicalBodies':[{'address':0x1a83dc,'instructionBytes':508,'poolBytes':44,'sourceSymbol':'sq_value_to_string026'},
            {'address':0x7434e8,'instructionBytes':152,'poolBytes':4,'sourceSymbol':'sq_index_to_string026'}],
        'requiredNamedObjects':['011opaque objects/compact prototypes','012references/arrays','013native closures',
            '014weak references','015raw byte strings','017script closures','019tables','020full shared/read storage',
            '022full VM/call frames','023instance method provider'],
        'requiredSourceServices':['020scratch/typename/meta-call/table-meta/bindings','022Call/CallNative/frames/stack/array/error',
            '019table engine and actual object lifetime providers','bounded literal error formatter for022 arity failure'],
        'explicitExternalProviders':['allocation failure/assert','deterministic caller-provisioned heap/resources',
            'script Execute','class construction/lifetime','true userdata virtual-method provider','GC','general printf'],
        'vmStorage':'actual SqVmCallStorage022 with exact common020 first member',
        'sharedStorage':'actual complete SqLookupSharedStorage020',
        'typeNameEightBytePrefixStandaloneReturningFunction':False,
        'floatDomain':'all measured binary32 values; finite six-significant-digit g plus signed infinity and NaN text',
        'nativePointerText':'actual16hex digits and33-byte scratch request; no truncation or text normalization',
        'targetPointerText':'actual8hex digits; original24-byte request retained; generator needs25physically backed bytes',
        'arenaDataAliases':'verified typed callback fields in Python post-execution comparison copies only',
        'preAliasArenaHashesAndEveryMismatchOffsetRetained':True,
        'unsupportedObservers':['022uninitialized instruction/literals/target/root fields','debug/asynchronous observers'],
        'newExactInventoryOrSdkCreditGranted':0,'fullVmGameAllocatorGcOrDeviceClaimed':False}
    save(EVIDENCE/'providers.json',providers)
    owned=list(SOURCE.rglob('*'))+list((ROOT/'toolscripts').glob('squirrel_coercion026*.py'))
    owned += [ROOT/'tests/test_squirrel_coercion026.py']+list(EVIDENCE.glob('*.json'))
    files=[pin(path) for path in sorted(set(owned)) if path.is_file() and path.name!='ready.json']
    receipt={'schemaVersion':1,'status':'frozen-bounded-coercion026-ready-for-independent-review',
        'files':files,'sets':302,'targetObservations':1208,'returningSemanticControls':14,'freshAndCopiedTests':12,
        'controllerCoverage':{'covered':125,'total':127,'excludedAssertPcs':[0x1a85d0,0x1a85d4]},
        'stackApiCoverage':{'covered':38,'total':38},'finiteIndependentFloatCases':4730,
        'preAliasWholeArenaEqualSets':0,'postVerifiedCallbackAliasWholeArenaEqualSets':286,'definedMemoryEqualSets':302,
        'preAliasHashesMismatchOffsetsAndTypedActualCallbackValuesRetained':True,
        'copiedFullExecutionControlsAndArtifactsByteIdentical':True,
        'ordinaryCompleteCanonicalInstructionBytesReconstructed':660,'requestedExactBytes':0,
        'acceptedSourceCreditGranted':0,'inventoryAdmissionGranted':0,'sdkSourceCreditGranted':0,
        'canonicalMappingAndAdmissionOwnedByCoordinator':True,'wholeVmGameAllocatorGcOrDeviceClaimed':False,
        'originalPayloadsPublished':False,'producer':pin(ROOT/'toolscripts/squirrel_coercion026_seal.py')}
    save(EVIDENCE/'ready.json',receipt)
    return pin(EVIDENCE/'ready.json')


if __name__=='__main__':print(json.dumps(seal()))
