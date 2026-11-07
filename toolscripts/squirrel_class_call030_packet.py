import hashlib
import importlib
import importlib.metadata
import json
import platform
import sys

from squirrel_class_call030_build import ROOT,WORK,SOURCE,SOURCES,FLAGS,pin,save
from squirrel_coercion026_android import inspect


EVIDENCE=ROOT/'evidence/lanes/squirrel-class-call030'


def coverage_reason(entry,address):
    if entry==0x198418:
        return ('excluded-allocation-failure-assert' if address<0x198498 else 'valid-constructor-descriptor-is-nonreference-integer')
    if entry==0x1a18a8:
        if 0x1a198c<=address<0x1a19dc:return 'fresh-meta-vector-starts-zero-and-grows-to18-never-shrinks'
        if 0x1a1bdc<=address<0x1a1ca0:return 'fully-live-base-and-new-class-have-fixed18-meta-slots'
        return 'constant-null-local-fill-retain-or-destruction'
    if entry==0x1a4734:
        if 0x1a48f8<=address<0x1a4920:return 'constant-integer-position-has-no-reference-owner'
        return 'stable-source-and-new-clone-keep-temporary-key-value-owners-live'
    if entry==0x1a2b2c:return 'excluded-invalid-cursor-assert'
    if entry==0x665f20:return 'constant-null-local-fill-retain-or-destruction'
    if entry==0x1cdcc4:return 'literal-null-replacement-cannot-retain-reference'
    raise ValueError('030 missing instruction has no reviewed condition')


def runtime_record(path):
    data=path.read_bytes()
    return {'filename':path.name,'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),'sharedRuntimeOutsideCopy':True}


def write():
    from pathlib import Path
    report_path=WORK/'primary-qualified/execution.json';report=json.loads(report_path.read_text())
    control_path=WORK/'controls-final/controls.json';controls=json.loads(control_path.read_text())
    if report['sets']!=54 or controls['count']!=13:raise ValueError('030 qualification incomplete')
    rows=[]
    for function in report['coverage']:
        rows.append(dict(function,missingConditions=[{'address':address,'condition':coverage_reason(function['address'],address)}
            for address in function['missingInstructionAddresses']]))
    save(EVIDENCE/'coverage.json',{'schemaVersion':1,'functions':rows,
        'allMissingInstructionsClassified':True,'allInstructionConditionsUniversallyProven':False,
        'constructorStorageNotExternallyPublishedUntilInitialized':True,
        'classAndCloneInvariantDomainsExplicitInReadme':True,'sourceCreditGranted':0})
    summary={key:value for key,value in report.items() if key not in ('observations','sourceFiles')}
    summary['privateCompleteReport']=pin(report_path)
    summary['allFourTargetRowsAndRawArenaHashesRetainedPrivately']=True
    summary['snapshotStatesContainOnlyAuthoredFixtureObjectsAndObservations']=True
    save(EVIDENCE/'execution.json',summary)
    save(EVIDENCE/'returning-controls.json',controls)
    products=sorted(SOURCE.glob('class*.c'))+[SOURCE/'class_call.h',SOURCE/'class_internal.h']
    mappings=[(0x198418,'sq_vm_create_instance022','class_instance_create.c'),
        (0x190c50,'sq_class_create_instance030','class_instance_create.c'),
        (0x192548,'sq_class_instance_initialize030','class_instance_create.c'),
        (0x1a18a8,'sq_class_initialize030','class_initialize.c'),
        (0x19a308,'sq_class_lock030','class_instance_create.c'),
        (0x1a4734,'sq_class_table_clone030','class_table_clone.c'),
        (0x1a2b2c,'sq_class_clone_cursor030','class_table_clone.c'),
        (0x665ee0,'sq_class_release030','class_lifetime.c'),
        (0x666144,'sq_class_destroy030','class_lifetime.c'),
        (0x665f20,'sq_class_finalize030','class_lifetime.c'),
        (0x1a51e0,'sq_class_member_resize030','class_vectors.c'),
        (0x1cdba0,'sq_class_instance_release030','class_instance_lifetime.c'),
        (0x1cdcc4,'sq_class_instance_destroy030','class_instance_lifetime.c'),
        (0x1cdaec,'sq_class_instance_meta030','class_instance_lifetime.c')]
    save(EVIDENCE/'providers.json',{'schemaVersion':1,'productFiles':[pin(path) for path in products],
        'canonicalSourceCandidates':[{'address':address,'symbol':symbol,'source':pin(SOURCE/filename),
            'sourceOrInventoryAdmissionGranted':0} for address,symbol,filename in mappings],
        'allFixtureTranslationUnitsExcludedFromProduction':True,
        'requiredFrozenProviders':['011compact prototypes/exact opaque objects','012opaque references/arrays',
            '013native closures','014weak references','015raw byte strings','017script closures',
            '019table engine','020bindings/scratch/literal error','022Call/CallNative/frames/array'],
        'sourceExecutionClosure':[pin(path) for path in SOURCES],
        'frozenInputs':pin(ROOT/'evidence/lanes/squirrel-coercion026/ready.json'),
        'vmProvisioner':'actual full SqVmCallStorage022, common020 first',
        'sharedProvisioner':'actual SqClassSharedStorage030, common020 first, native constructor-name tail280',
        'classObject':'actual SqClass030, exact named020 common first, target92/native152',
        'instanceObject':'actual SqClassInstance030, target44/native88 header plus at least one object',
        'castToOlderPartialInstanceStorageAllowed':False,'namedPrefixCallbackTypesPreserved':True,
        'constructorNameBindingBorrowedWithExplicitExternalLease':True,
        'explicitServices':['typed deterministic allocation/reallocation/free with retained freed test backing',
            'caller native constructors and release hooks','bounded literal error formatter for tested022 failures'],
        'unsupported':['allocation failure/overflow/asserts','invalid descriptors or cursor tags',
            'GC mark/finalize/instance clone','full shared-state lifetime','VM CLASS/NewSlot',
            'script constructors/full Execute','native type-mask errors/general printf',
            'mutation of stable clone source','raw inactive022 frame/debug/asynchronous observers'],
        'newSourceInventoryGcWholeVmGameOrDeviceCreditGranted':0})
    save(EVIDENCE/'android-linkage.json',dict(inspect(WORK/'primary-qualified/android/libcoercion026.so'),
        officialGuidance='https://developer.android.com/guide/practices/page-sizes',
        actualA64ObjectModelExecuted=True,androidOperatingSystemOrPhysicalDeviceExecuted=False))
    packages=[]
    for name in ('unicorn','capstone','elftools'):
        module=importlib.import_module(name);folder=Path(module.__file__).parent
        distribution='pyelftools' if name=='elftools' else name
        packages.append({'distribution':distribution,'metadataVersion':importlib.metadata.version(distribution),
            'moduleVersion':getattr(module,'__version__',None),'module':runtime_record(Path(module.__file__)),
            'nativeLibraries':[runtime_record(path) for path in sorted(folder.rglob('*.dll'))]})
    import unicorn
    save(EVIDENCE/'tool-provenance.json',{'schemaVersion':1,'status':'effective030-tools-and-shared-package-identities',
        'compiler':pin(ROOT/'tools/clang-21/clang.exe'),'linker':pin(ROOT/'tools/clang-21/ld.lld.exe'),
        'armFlags':FLAGS,'windowsTriple':'x86_64-pc-windows-msvc','androidTriple':'aarch64-linux-android29',
        'androidLinkFlags':['-z','max-page-size=16384','-z','common-page-size=16384'],
        'pythonVersion':platform.python_version(),'python':runtime_record(Path(sys.executable)),
        'pythonBase':runtime_record(Path(sys._base_executable)),'packages':packages,
        'unicornNativeApi':list(unicorn.uc_version()),'packageNativeVersionDifferencesPreserved':True,
        'all14OwnCUnitsCompileForArmWindowsAndA64':True,'windowsOnlyOwnCUnits':[]})
    attempts=[('work/squirrel-class-call030/constructor-first','rejected-unsorted-fixed-vtable-link-layout'),
        ('work/squirrel-class-call030/graph-first','rejected-native-call-variant-gate-before-runtime-correction'),
        ('work/squirrel-class-call030/disjoint-heap','corrected-own30000-region-after-discovering10000-node-pool-overlap'),
        ('work/squirrel-class-call030/discovery-final','rejected-relative-output-pin-path'),
        ('work/squirrel-class-call030/controls-first','rejected-unobservable-clone-delegate-control'),
        ('work/squirrel-class-call030/controls-expanded','rejected-same-final-state-delegate-control-before-return-observer'),
        ('work/squirrel-class-call030/controls-final','qualified13normally-returning-controls-with-five-same-final-arena')]
    save(EVIDENCE/'development-attempts.json',{'schemaVersion':1,
        'attempts':[{'privatePath':path,'outcome':status,'retained':True} for path,status in attempts],
        'allEarlierDiagnosticHeapRunsExcludedFromFinalProof':True,'frozenPredecessorsEdited':False})
    verification=WORK/'copied-source/verification.json'
    if verification.exists():save(EVIDENCE/'copied-source-replay.json',json.loads(verification.read_text()))
    return summary


if __name__=='__main__':print(write()['sets'])
