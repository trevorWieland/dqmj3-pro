import hashlib
import json

from squirrel_class034_build import ROOT,WORK,SOURCE,SOURCES,FLAGS,pin,save
from squirrel_class_call030_packet import runtime_record
from squirrel_coercion026_android import inspect


EVIDENCE=ROOT/'evidence/lanes/squirrel-class034'


def condition(entry,address):
    if entry==0x1996f4:
        if 0x199840<=address<0x199848:return 'excluded-allocation-failure-assert'
        if address<0x19978c:return 'invalid-base-exit-retains-only-constant-null-attributes'
        return 'published-class-attributes-retain-final-local-attribute-owner'
    if entry==0x1804b4:
        if 0x1806bc<=address<0x1806e4 or 0x18084c<=address<0x180874:
            return 'new-member-secondary-local-is-constant-null'
        if 0x180708<=address<0x18071c or 0x180898<=address<0x1808a8:
            return 'new-vector-member-keeps-primary-temporary-owner-live'
        return 'valid-member-descriptor-is-integer-or-null-not-reference'
    if entry==0x1880d0:return 'valid-meta-index-table-contains-integer-values-and-null-miss'
    if entry==0x173d60:
        if address>=0x174058:return 'class-newslot-fails-only-while-locked-with-no-intervening-mutation'
        return 'qualified-call-failure-leaves-initial-null-result-unchanged-broader-execute-errors-excluded'
    if entry==0x198418:
        return 'excluded-allocation-failure-assert' if address<0x198498 else 'field-resolution-old-descriptor-is-integer-not-reference'
    raise ValueError('034 missing PC has no reviewed condition')


def write():
    import importlib
    import importlib.metadata
    import platform
    import sys
    from pathlib import Path
    report_path=WORK/'primary-qualified/execution.json';report=json.loads(report_path.read_text())
    control_path=WORK/'controls-sealed/controls.json';controls=json.loads(control_path.read_text())
    if (report['sets'],controls['count'])!=(102,15):raise ValueError('034 proof corpus incomplete')
    rows=[dict(row,missingConditions=[{'address':a,'condition':condition(row['address'],a)}
        for a in row['missingInstructionAddresses']]) for row in report['coverage']]
    save(EVIDENCE/'coverage.json',{'schemaVersion':1,'functions':rows,'allMissingPcsClassified':True,
        'invariantsRestrictedToDeclaredTypedProviderAndObserverDomains':True,'universalEquivalenceClaimed':False,
        'wholeExecuteCreditGranted':0,'sourceOrInventoryAdmissionGranted':0})
    summary={key:value for key,value in report.items() if key not in ('observations','sourceFiles')}
    summary.update(privateCompleteReport=pin(report_path),qualifiedScriptModes=['normal-return','nested-native-call'],
        frozen031DeclaredProviderOnly=True,completeSharedStateLifetimeClaimed=False,
        uniqueFactorySymbol='sq_vm_create_instance034',newSourceOrInventoryAdmissionGranted=0)
    save(EVIDENCE/'execution.json',summary);save(EVIDENCE/'returning-controls.json',controls)
    mappings=[(0x1996f4,'sq_vm_class_create034','class_create.c'),(0x1804b4,'sq_class_new_slot034','member_definition.c'),
        (0x1880d0,'sq_class_meta_index034','meta_names.c'),(0x173d60,'sq_vm_new_slot034','new_slot.c'),
        (0x198418,'sq_vm_create_instance034','instance_factory.c')]
    products=[SOURCE/name for name in ('class.h','class_create.c','member_definition.c','meta_names.c','new_slot.c',
        'instance_factory.c','call_adapter.c','class_dependencies.c','format_provider.c')]
    save(EVIDENCE/'providers.json',{'schemaVersion':1,'productFiles':[pin(path) for path in products],
        'canonicalSourceCandidates':[{'address':address,'symbol':symbol,'source':pin(SOURCE/name),
            'sourceOrInventoryAdmissionGranted':0} for address,symbol,name in mappings],
        'canonicalExistingInstructionBytes':3108,'classifiedNoninstructionBytes':280,
        'allFixtureUnitsExcludedFromProduction':True,'sourceExecutionFiles':[pin(path) for path in SOURCES],
        'frozen030':pin(ROOT/'evidence/lanes/squirrel-class-call030/ready.json'),
        'frozen031':pin(ROOT/'evidence/lanes/squirrel-execute031/ready.json'),
        'frozen025':pin(ROOT/'evidence/lanes/squirrel-type-error025/ready.json'),
        'actualVmStorage':'SqExecuteStorage028 with exact022/common020 first',
        'actualSharedStorage':'SqClassSharedStorage034, exact030 first, named native table pointer296, full304',
        'borrowedBindings':'caller owns actual names/table/constructor-name leases until final call',
        'classAndInstance':'actual030 full class92/152 and instance44/88 header plus physical values',
        'sharedStateConstructorReconstructed':False,'olderPartialInstanceOrLegacyRefCastsAllowed':False,
        'tableMetaDispatch':'actual named six-slot020 storage; unchanged019 three-slot object never overread',
        'scriptOwnerDomain':'external script/compact-prototype owners remain; no new prototype factory or GC claim',
        'formatterDomain':'frozen025 literal/%s/%d; existing023 finite14g service only where its domain permits',
        'explicitServices':['typed deterministic aligned heap and retained freed test backing',
            'ordinary native constructor/inherited/newslot clients','borrowed complete shared-state provisioner'],
        'unsupported':['allocation failure/overflow/assert','malformed descriptor/index tables','GC/shared-state lifetime',
            'structured throws/unwind/generators/debug/asynchronous observers','arbitrary construction-time observers',
            'mutation of stable clone source','general printf','whole Execute/VM/game/device'],
        'newSdkInventoryOrSourceCreditGranted':0})
    save(EVIDENCE/'android-linkage.json',dict(inspect(WORK/'primary-qualified/android/libcoercion026.so'),
        officialGuidance='https://developer.android.com/guide/practices/page-sizes',
        actualA64ObjectModelExecuted=True,androidOsPhysicalDeviceOrAynThorExecuted=False))
    packages=[]
    for name in ('unicorn','capstone','elftools'):
        module=importlib.import_module(name);folder=Path(module.__file__).parent
        distribution='pyelftools' if name=='elftools' else name
        packages.append({'distribution':distribution,'metadataVersion':importlib.metadata.version(distribution),
            'moduleVersion':getattr(module,'__version__',None),'module':runtime_record(Path(module.__file__)),
            'nativeLibraries':[runtime_record(path) for path in sorted(folder.rglob('*.dll'))]})
    import unicorn
    save(EVIDENCE/'tool-provenance.json',{'schemaVersion':1,'compiler':pin(ROOT/'tools/clang-21/clang.exe'),
        'linker':pin(ROOT/'tools/clang-21/ld.lld.exe'),'armFlags':FLAGS,'windowsTriple':'x86_64-pc-windows-msvc',
        'androidTriple':'aarch64-linux-android29','androidLinkFlags':['-z','max-page-size=16384','-z','common-page-size=16384'],
        'pythonVersion':platform.python_version(),'python':runtime_record(Path(sys.executable)),
        'pythonBase':runtime_record(Path(sys._base_executable)),'packages':packages,
        'unicornNativeApi':list(unicorn.uc_version()),'packageAndNativeDifferencesPreserved':True,
        'allOwnCCompileForArmWindowsAndA64':True,'ownCTranslationUnits':len(list(SOURCE.glob('*.c'))),
        'windowsOnlyOwnCTranslationUnits':[]})
    attempts=[('member-first','rejected-duplicate-frozen-wrapper-format-definitions'),
        ('names-first','rejected-source-text-overlapped-fixed-rodata-before-normal-linker-layout-fix'),
        ('names-first-v2','rejected-unregistered-resource-free-for-explicit-meta-table'),
        ('members-cohort','rejected-missing-fixture-helper-prototype'),
        ('members-cohort-v2','rejected-unnamed-fixture-helper-code-guard-before-explicit-name'),
        ('controller-first','explicit-top-binding-added-before-qualified-rerun'),
        ('controls-first','crashing-reclassification-control-not-counted'),
        ('controls-pre-final','superseded-process-stopped-task-owned-logs-retained'),
        ('controls-sealed','qualified15normally-returning-controls-five-same-final-arena')]
    save(EVIDENCE/'development-attempts.json',{'schemaVersion':1,
        'attempts':[{'privatePath':'work/squirrel-class034/'+path,'outcome':outcome,
            'retained':(WORK/path).exists()} for path,outcome in attempts],
        'crashesNeverCountedAsReturningControls':True,'supersededCorpusRunsExcluded':True,
        'allFrozenPredecessorsUnchanged':True})
    verification=WORK/'copied-source/verification.json'
    if verification.exists():save(EVIDENCE/'copied-source-replay.json',json.loads(verification.read_text()))
    return summary


if __name__=='__main__':print(write()['sets'])
