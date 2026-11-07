import ctypes
import json
from pathlib import Path

from native_wave013_common import ROOT,record,save
import squirrel_state040_build as build
import squirrel_state040_model as model
from squirrel_state040_inputs import input_records


def run():
    output=ROOT/'evidence/lanes/squirrel-state040/core-abi-v1';output.mkdir(parents=True,exist_ok=True)
    work=ROOT/'work/squirrel-state040/core-abi-v1';receipts=[]
    arm=build.arm(work/'arm',receipts);android=build.a64(work/'a64',receipts)
    dll=build.windows(work/'windows',receipts);library=ctypes.CDLL(str(dll))
    target=model.abi(arm);native=model.native_abi(library);high=model.abi(android)
    if native!=high:raise ValueError('040 actual Windows and A64 compiled field probes disagree')
    ctor_folder=ROOT/'work/squirrel-state040/constructors-floating-guarded'
    receipt=json.loads((ctor_folder/'receipt.json').read_text())
    if any(record(ROOT/row['path'])!=row for row in receipt['inputs']):raise ValueError('040 strict constructor evidence has stale inputs')
    rows=json.loads((ctor_folder/'constructor-rows.json').read_text())
    if len(rows)!=32 or not all(row['allQualifiedProfilesAgree'] for row in rows):raise ValueError('040 constructor rows incomplete')
    claim=json.loads((ROOT/'evidence/lanes/squirrel-state040/claim.json').read_text())
    functions=[row for row in claim['functions'] if row['entry'] in [0x14c4c8,0x15467c]]
    for row in functions:
        expected={address for span in row['instructionRanges'] for address in range(span['start'],span['endExclusive'],4)}
        visited={address for result in rows if result['function']==f"fn_{row['entry']:08x}" for address in result['originalCodePath']}
        row['observedCandidateInstructions']=len(expected&visited);row['unobservedCandidateAddresses']=sorted(expected-visited)
        if expected-visited:raise ValueError('040 strict constructor corpus did not execute complete owned instruction body')
    header=ROOT/'source/squirrel-wave040/startup.h'
    probes={'status':'compiled-target-and-native-core-storage-probes','target':target,'nativeWindows':native,'highAarch64':high,
        'armElf':arm['linkedElf'],'windowsDll':record(dll),'highAarch64Elf':android['linkedElf'],'compilerReceipts':receipts,
        'probeSource':record(ROOT/'source/squirrel-wave040/layout.c'),'probeSymbol':'sq_startup_layout040'}
    save(output/'compiled-layout-probes.json',probes)
    save(output/'constructor-rows.json',rows)
    save(output/'constructor-receipt.json',receipt)
    core=[ROOT/'source/squirrel-wave040'/name for name in ['startup.h','bindings.c','shared_constructor.c','vm_constructor.c','fixture.h','fixture.c','layout.c']]
    handoff={'schemaVersion':1,'status':'sealed-core-storage-abi-v1-not-functional-admission','abiVersion':1,
        'moduleSha256':claim['moduleSha256'],'types':{'vm':'SqVm040','shared':'SqSharedState040','collectable':'SqPrefixCollectable012'},
        'header':record(header),'coreSources':[record(path) for path in core],
        'completeTargetStorageMeasured':True,'nativeStorageIsExplicitPortRepresentation':True,
        'compiledProbes':record(output/'compiled-layout-probes.json'),'constructorEvidence':record(output/'constructor-rows.json'),
        'constructorReceipt':record(output/'constructor-receipt.json'),'constructorFunctions':functions,
        'constructorInstructionBytes':516,'actualGlobalPrecondition':record(ROOT/'evidence/lanes/squirrel-state040/startup-template-execution.json'),
        'unknownFields':['VM target20..23/native40..43 preserved word','shared flag meanings','uninvoked shared callback signatures'],
        'callerSuppliedVmOperationsAreInvoked':False,'sharedPostconstructionInitializationQualified':False,
        'vmPostconstructionInitializationQualified':False,'factoryQualified':False,'destructionQualified':False,
        'completeVmOrGameQualified':False,'sourceCreditGranted':0,'sdkCreditGranted':0,'matchingCreditGranted':0,
        'inputs':input_records(build.SOURCES,[Path(__file__)]),'producer':record(Path(__file__)),
        'consumerRule':'Use actual named types and first-member bindings; add versioned providers instead of casting incomplete legacy fixture VMs.'}
    save(output/'handoff.json',handoff)
    paths=[*core,ROOT/'toolscripts/squirrel_state040_abi_handoff.py',*output.glob('*.json')]
    save(output/'frozen-manifest.json',{'schemaVersion':1,'status':'frozen-core-abi-v1-handoff-only-no-admission',
        'files':[record(path) for path in sorted(paths)],'producer':record(Path(__file__))})
    print(json.dumps({'handoff':record(output/'handoff.json'),'manifest':record(output/'frozen-manifest.json')}))


if __name__=='__main__':run()
