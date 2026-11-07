import hashlib
import json
import subprocess
import sys
import time
import re
import platform
import importlib.metadata
import unicorn
import capstone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_compose057_build import inputs,selected,pin
from squirrel_compose057_reference import Original,ReferenceImage
from squirrel_compose057_source import Source
from squirrel_compose057_observe import observe

OUTPUT=ROOT/'evidence/lanes/squirrel-compose057/stage-v1'


def digest(value):
    return hashlib.sha256(json.dumps(value,sort_keys=True,separators=(',',':')).encode()).hexdigest()


def save(name,value):
    path=OUTPUT/name
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(value,indent=2)+'\n')
    return pin(path)


def runtime_artifacts():
    paths=[WORK/('session-v2-'+profile)/name for profile,name in
           [('arm','compose057.elf'),('a64','compose057.elf'),('windows','compose057.dll'),('android','compose057.so')]]
    paths+=[WORK/'layout-probes'/profile/'probes.json'for profile in ['arm','a64','windows']]
    return [pin(path)for path in paths]


def imported_producers():
    paths=set()
    for module in list(sys.modules.values()):
        filename=getattr(module,'__file__',None)
        if filename:
            path=Path(filename).resolve()
            if path.is_relative_to(ROOT)and path.suffix=='.py':paths.add(path)
    return [pin(path)for path in sorted(paths)]


def expected(case):
    profile=case['profile']
    kind=0x08000040 if profile==8 else 0x05000002
    value=case['value']if profile==8 else 2*case['value']+1 if profile==256 else -64
    return [1,kind,value&0xffffffff,1,0,0,0]


def differences(original,source,path=''):
    if type(original)!=type(source):return [{'path':path,'original':original,'source':source}]
    if isinstance(original,dict):
        if set(original)!=set(source):raise ValueError('Typed graph keys differ')
        return sum([differences(original[key],source[key],path+'.'+key)for key in original],[])
    if isinstance(original,list):
        if len(original)!=len(source):return [{'path':path+'.length','original':len(original),'source':len(source)}]
        return sum([differences(left,right,path+'['+str(index)+']')for index,(left,right)in enumerate(zip(original,source))],[])
    return []if original==source else[{'path':path,'original':original,'source':source}]


def post_residuals(case,original,source):
    residuals=differences(original,source)
    for row in residuals:
        if case['profile']!=8 or not re.fullmatch(r'\.vm\.calls\.frames\[1\]\.(instruction|literals|target|root)',row['path']):
            raise ValueError('Unexpected typed post-call residual: '+row['path'])
    for graph in [original,source]:
        vm=graph['vm']
        if vm['callCount']or not vm['nullPointers']['current']:
            raise ValueError('Post-call residual includes an active frame')
        for frame in vm['calls']['frames']:
            if frame['closure']!={'type':0x01000001,'zeroPayload':True}or not frame['generator']or frame['traps']:
                raise ValueError('An inactive frame still owns live closure/generator/trap state')
    return residuals


def run_session(session,profile,case):
    startup=session.boot(case['stackSize'])
    graph_before=observe(session,profile)
    heap_before=session.heap_counts()
    metamethod=session.meta_contract()
    result=session.execute(case['profile'],case['value'],case['flags'],case['cleanup'])
    after_cleanup=session.cleanup()if not case['cleanup']else result['state']
    graph_after=observe(session,profile)
    heap_after=session.heap_counts()
    if metamethod!=[1,0x05000002,0x5757,0,18,15,0x01000001]:
        raise ValueError('Actual composed metamethod service differs from its declared table input')
    if result['returned']!=expected(case):raise ValueError('Composed program differs from independent semantic result')
    return {'startup':startup,'metamethod':metamethod,'program':result,'afterCleanup':after_cleanup,
            'coldGraphSha256':digest(graph_before),'afterGraphSha256':digest(graph_after),
            'heapBefore':heap_before,'heapAfter':heap_after},graph_before,graph_after


def main():
    if (OUTPUT/'packet.json').exists():raise ValueError('A sealed composition output already exists')
    started=time.monotonic()
    probe_sources=[ROOT/path for path in ['source/squirrel-wave040/layout.c','source/squirrel-wave045/fixture_layout.c',
        'source/squirrel-wave049/fixture_layout.c','source/squirrel-wave057/layout_probe.c',
        'toolscripts/squirrel_compose057_api_probe.c']]
    initial=inputs([*selected()[0],*probe_sources])
    own=[pin(path)for path in sorted((ROOT/'toolscripts').glob('squirrel_compose057_*.py'))]+[pin(SOURCE/'layout_probe.c')]
    reference=ReferenceImage()
    reference_pins=reference.pins
    imported=imported_producers()
    artifacts=runtime_artifacts()
    cases=[]
    for profile in [8,256,257]:
        for flags in [0,1]:
            for cleanup in [0,1]:
                cases.append({'profile':profile,'value':3,'flags':flags,'cleanup':cleanup,
                              'seed':165 if cleanup else 90,'stackSize':64})
    cases+=[{'profile':256,'value':-17,'flags':1,'cleanup':1,'seed':165,'stackSize':3},
            {'profile':8,'value':0,'flags':0,'cleanup':0,'seed':90,'stackSize':3}]
    rows=[]
    instructions={}
    reads=set()
    writes=set()
    source_paths={}
    witnesses=[]
    graphs={}
    for index,case in enumerate(cases):
        original=Original(reference)
        original_row,before,after=run_session(original,'arm',case)
        instructions.update(original.instructions)
        reads.update(original.reads)
        writes.update(original.writes)
        witnesses.append({'case':index,'observedPcs':len(original.instructions),
                          'phases':{name:len(values)for name,values in original.paths.items()}})
        graphs.setdefault(digest(before),before)
        graphs.setdefault(digest(after),after)
        comparisons={}
        for profile in ['arm','a64']:
            source=Source(profile,case['seed'])
            source_row,source_before,source_after=run_session(source,profile,case)
            for field in ['startup','metamethod','program','afterCleanup','coldGraphSha256']:
                if source_row[field]!=original_row[field]:raise ValueError('Original/source composed difference: '+profile+' '+field)
            if source_row['heapBefore']['active']!=original_row['heapBefore']['active']or \
               source_row['heapAfter']['active']!=original_row['heapAfter']['active']:
                raise ValueError('Original/source active allocation counts differ')
            source_paths.setdefault(profile,set()).update(address for values in source.paths.values()for address in values)
            source_row['rawPostGraphResiduals']=post_residuals(case,after,source_after)
            graphs.setdefault(digest(source_after),source_after)
            comparisons[profile]=source_row
        result=subprocess.run([sys.executable,str(ROOT/'toolscripts/squirrel_compose057_windows.py'),json.dumps(case)],
                              cwd=ROOT,capture_output=True,timeout=120)
        log=OUTPUT/('windows-'+str(index)+'.log')
        log.parent.mkdir(parents=True,exist_ok=True)
        log.write_bytes(result.stdout+result.stderr)
        if result.returncode:raise ValueError('Actual Windows composition failed: '+str(log))
        windows=json.loads(result.stdout)
        for field in ['startup','metamethod','program','afterCleanup','coldGraphSha256']:
            if windows[field]!=original_row[field]:raise ValueError('Original/Windows composed difference: '+field)
        if windows['heapBefore']['active']!=original_row['heapBefore']['active']or \
           windows['heapAfter']['active']!=original_row['heapAfter']['active']:
            raise ValueError('Original/Windows live allocation counts differ')
        windows_after=windows.pop('afterGraph')
        windows['rawPostGraphResiduals']=post_residuals(case,after,windows_after)
        graphs.setdefault(digest(windows_after),windows_after)
        rows.append({'input':case,'original':original_row,'authored':comparisons,'windows':windows})
        print(json.dumps({'case':index+1,'total':len(cases),'profile':case['profile'],'flags':case['flags'],
                          'cleanup':case['cleanup'],'stackSize':case['stackSize'],'callerResultAndBoundedOwnershipMatch':True}),flush=True)
    if inputs([*selected()[0],*probe_sources])!=initial or own!=[pin(ROOT/row['path'])for row in own]:
        raise ValueError('Composition source/producer inputs changed during execution')
    if imported!=[pin(ROOT/row['path'])for row in imported]or runtime_artifacts()!=artifacts:
        raise ValueError('Imported producer or mapped binary/layout artifact changed during execution')
    if ReferenceImage().pins!=reference_pins:raise ValueError('Reference ownership inputs changed during execution')
    trace=save('reference-trace.json',{'instructions':[instructions[key]for key in sorted(instructions)],
        'reads':[{'pc':pc,'address':address,'bytes':size}for pc,address,size in sorted(reads)],
        'writes':[{'pc':pc,'address':address,'bytes':size}for pc,address,size in sorted(writes)],
        'casePhases':witnesses,'heapStartup':original.precondition,'referencePins':reference_pins})
    graph_record=save('typed-graphs.json',graphs)
    packet={'schemaVersion':1,'status':'bounded-genuine-composition-with-explicit-inactive-frame-residuals',
        'sourceInputs':initial,'ownedProducersAndLayout':own,'referencePins':reference_pins,
        'importedProducers':imported,'mappedSourceArtifactsAndLayouts':artifacts,
        'python':pin(Path(sys.executable)),'pythonVersion':platform.python_version(),
        'unicornDistribution':importlib.metadata.version('unicorn'),'unicornRuntime':unicorn.uc_version(),
        'capstoneDistribution':importlib.metadata.version('capstone'),'capstoneInterface':capstone.__version__,
        'capstoneRuntime':capstone.cs_version(),
        'moduleSha256':hashlib.sha256(reference.image).hexdigest(),'caseSets':len(rows),'rows':rows,
        'referenceTrace':trace,'typedGraphs':graph_record,'observedOriginalPcs':len(instructions),
        'observedAuthoredPcs':{profile:len(values)for profile,values in source_paths.items()},
        'sourceMapsOriginalImageOrSdk':False,'referenceCallsAuthoredHelpers':False,
        'vmSharedFixtureProvisioningUsed':False,'syntheticProgramInputs':True,
        'all68NativeOpaquePrefixBytesPreserved':True,'sdkPrivateHeapForcedEqual':False,
        'fullColdTypedGraphEquality':True,'fullPostGraphEqualityClaimed':False,
        'nonOwningInactiveFrameResidualsRetained':True,
        'physicalAllocatorByteTotalsForcedEqual':False,'wholeMemoryEquivalenceClaimed':False,
        'singleActiveVm':True,'vmDestructionQualified':False,'allocationFailureQualified':False,
        'uninvokedEngineCallbackKinds':56,'completeInterpreterOrNativeGameQualified':False,
        'androidOsOrDeviceExecuted':False,'sourceCreditGranted':0,'sdkCreditGranted':0,
        'elapsedSeconds':round(time.monotonic()-started,3)}
    print(json.dumps({'packet':save('packet.json',packet)}),flush=True)


if __name__=='__main__':main()
