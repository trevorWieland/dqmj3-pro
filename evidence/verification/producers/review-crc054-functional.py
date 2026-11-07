import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path.cwd().resolve()
sys.path.insert(0,str(ROOT/'toolscripts'))
import ci_native_build as ci
import functional_report
import native_census_overlay

def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))

def pin(path):
    data=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())

coordinator_path=ROOT/'evidence/verification/crc054-coordinator-4346b30.json'
coordinator=read(coordinator_path)
assert coordinator['status']=='qualified-independent-crc054-canonical-little-endian-domain'
assert coordinator['exactSemanticComparison'] and coordinator['tests']==104
report=read(ROOT/'work/crc054/final/report.json')
assert pin(ROOT/'work/crc054/final/report.json')==coordinator['primaryReport']
registry=read(ROOT/'config/functional-functions.json')
census_path=ROOT/registry['census']['path']
assert hashlib.sha256(census_path.read_bytes()).hexdigest()==registry['census']['sha256']
census,overlays=native_census_overlay.compose(ROOT,read(census_path))
canonical={row['address']:row for row in census['functions']}
existing={int(row['name'][3:],16) for row in registry['functions']}
existing.update(int(row['symbol'][3:],16) for row in ci.accepted_functions(ROOT))
image=(ROOT/'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest()==registry['moduleSha256']
functions=[]
for coverage in report['coverage']:
    address=coverage['entry']
    original=canonical[address]
    assert address not in existing and original['mode']=='ARM' and original['textBodyBytes']==2696
    ranges=original['ranges']
    for owner in existing:
        assert not any(max(a['start'],b['start'])<min(a['endExclusive'],b['endExclusive'])
                       for a in ranges for b in canonical[owner]['ranges'])
    body=b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000] for p in ranges)
    assert len(body)==2696
    entry=next(p for p in ranges if p['start']<=address<p['endExclusive'])
    measurement=next(p for p in report['measurement']['functions'] if p['address']==address)
    functions.append(dict(symbol='fn_'+format(address,'08x'),
        canonicalIdentity=dict(address=address,mode='ARM',moduleSha256=registry['moduleSha256'],programId=registry['programId']),
        source=pin(ROOT/'src/native/wave054/crc.c'),functionalConfidence='medium',
        exactObjectSpan=False,exactLinkedSpan=False,originalInstructionBytes=2696,
        originalInstructionRanges=ranges,reportEntryBytes=entry['endExclusive']-address,
        originalBodySha256=hashlib.sha256(body).hexdigest(),candidateObject=report['artifacts']['arm']['object'],
        behavior=dict(allPassed=True,boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path),
            executionSummary=pin(ROOT/'evidence/lanes/crc054/execution.summary.json'),
            batchCaseSets=1024,perFunctionCaseSets=512,fourTargetObservations=4096,
            originalInstructionPcs=674,originalInstructionPcsVisited=277,
            classifiedCanonicalDomainUnreachablePcs=397,unreachableRanges=measurement['unreachableRanges'],
            unreachableCodeWasForcedOrPatched=False,allReachableInstructionPcsVisited=True,
            normallyReturningWrongImplementations=7,wrongSourceExecutions=42,
            genuineCrossEntryStreamingChecks=36,sourceGraphOriginalCodeMapped=False,
            actualWindowsAndHighAddressA64=True,canonicalDomain='Little-endian original module; unsigned32 seed/length; physically backed immutable input; ordinary stack and exclusive execution.',
            confidenceJustification='Medium: complete canonical range ownership, all reachable PCs, generated polynomial/table identity, four-target corpus and returning controls; not a universal memory or game proof.',
            limits=['Corpus lengths are finite through16384 bytes; NULL is separately tested with length0xffffffff.',
                    'Big-endian hardware execution is not qualified; lower endian alternate remains in the measured body.',
                    'Invalid/unbacked/wrapping/concurrently mutated/volatile buffers and arbitrary external register observations are excluded.',
                    'No complete gzip/SDK/game or physical Android qualification follows from this packet.'])))
packet=dict(schemaVersion=1,status='coordinator-reviewed-bounded-crc054-canonical-domain',
    moduleSha256=registry['moduleSha256'],acceptedSourceCreditGranted=0,
    functions=functions,headers=[pin(ROOT/'src/native/wave054/crc.h')],
    sourceDependencies=[pin(ROOT/'src/native/wave054/crc.c'),pin(ROOT/'src/native/wave054/crc.h')],
    sourceOriginalModuleMapped=False,importedTableOrExecutableBytes=False,
    polynomial='0xedb88320',tableDerivation=pin(ROOT/'evidence/lanes/crc054/claim.json'),
    originalPackets=[pin(ROOT/'evidence/lanes/crc054/ready.json'),pin(coordinator_path)],
    producer=pin(Path(__file__).resolve()),exactMatchingClaimed=False,confirmedOverallSourceCoverageClaimed=False)
output=ROOT/'evidence/functional/crc054.json'
output.write_text(json.dumps(packet,indent=2)+'\n',encoding='utf-8')
fragment=copy.deepcopy(registry)
fragment['functions']=[dict(name=row['symbol'],confidence='medium',packet=pin(output),sourceLookup='repository-function-index')for row in functions]
progress=read(ROOT/'build/update-content0/report.json')
assert len(functional_report.generate(ROOT,progress,fragment)['functions'])==2
work=ROOT/'work/crc054/admission';work.mkdir(parents=True,exist_ok=True)
rejected=[]
for kind in ['omitted-lower-range','counted-pool','wrong-source','unsupported-confidence']:
    wrong=copy.deepcopy(packet)
    first=wrong['functions'][0]
    if kind=='omitted-lower-range':first['originalInstructionRanges']=first['originalInstructionRanges'][1:]
    elif kind=='counted-pool':first['originalInstructionBytes']+=4
    elif kind=='wrong-source':first['source']=pin(ROOT/'src/native/wave054/crc.h')
    else:first['functionalConfidence']='high'
    bad=work/(kind+'.json');bad.write_text(json.dumps(wrong,indent=2)+'\n',encoding='utf-8')
    test=copy.deepcopy(fragment)
    for row in test['functions']:row['packet']=pin(bad)
    try:functional_report.generate(ROOT,progress,test)
    except ValueError as error:rejected.append(dict(case=kind,reason=str(error)))
    else:raise ValueError('Malformed CRC proof accepted: '+kind)
validation=dict(status='crc054-functional-schema-two-pass-four-malformed-proofs-rejected',
    proof=pin(output),functions=fragment['functions'],negativeControls=rejected,
    instructionFootprintBytes=5392,sourceAdmissionPendingRegistryMutation=True,
    exactMatchingCreditGranted=0,wholeGameClaimed=False,producer=pin(Path(__file__).resolve()))
(ROOT/'evidence/verification/crc054-functional-validation.json').write_text(json.dumps(validation,indent=2)+'\n',encoding='utf-8')
print(json.dumps(dict(functions=2,negativeControls=len(rejected),instructionFootprint=5392)))
