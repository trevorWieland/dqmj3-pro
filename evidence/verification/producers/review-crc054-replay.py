import hashlib
import json
from pathlib import Path
import re
import struct
import sys

ROOT=Path.cwd().resolve()
sys.path.insert(0,str(ROOT/'toolscripts'))
from replay_packet_compare import PacketComparison

def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))

def pin(path):
    data=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())

class Comparison(PacketComparison):
    def text(self,value,root):
        return super().text(value,root).replace('work/crc054/final','<RUN>').replace('work/crc054/root-review','<RUN>')

    def compare(self,a,b,context=''):
        if isinstance(a,dict) and {'path','sha256','bytes'}<=a.keys() and a['path'].endswith('.o'):
            x,y=self.primary/a['path'],self.independent/b['path']
            first,second=x.read_bytes(),y.read_bytes()
            if first!=second and struct.unpack_from('<H',first)[0]==0x8664:
                assert len(first)==len(second)==a['bytes']==b['bytes']
                assert hashlib.sha256(first).hexdigest()==a['sha256'] and hashlib.sha256(second).hexdigest()==b['sha256']
                assert self.text(a['path'],self.primary)==self.text(b['path'],self.independent)
                assert {i for i,(u,v) in enumerate(zip(first,second)) if u!=v}<=set(range(4,8))
                self.variants.append(dict(path=a['path'],kind='coff-object-timestamp-only',primarySha256=a['sha256'],independentSha256=b['sha256']))
                for key in a.keys()-{'path','sha256','bytes'}:
                    self.compare(a[key],b[key],context+'/'+key)
                return
        return super().compare(a,b,context)

raw_path=ROOT/'evidence/verification/crc054-isolated-4346b30.json'
raw=read(raw_path)
assert raw['sourceRevision']=='4346b3060699d96f611c1810a59bd7121c9232bc'
assert raw['status']=='passed' and all(row['returncode']==0 for row in raw['steps'])
fresh=Path(raw['replayRoot']).resolve()
assert fresh==ROOT/'work/clean-replay/crc054-4346b30'
primary_path=ROOT/'work/crc054/final/report.json'
independent_path=fresh/'work/crc054/root-review/report.json'
primary,independent=read(primary_path),read(independent_path)
comparison=Comparison(ROOT,fresh)
comparison.compare(primary,independent,'crc054')
assert primary['status']=='crc054-bounded-four-target-qualified'
assert primary['sets']==1024 and primary['observations']==4096
assert len(primary['negativeControls'])==7
assert all(row['allSixCallsActuallyReturned'] and row['allSixRejectedByIndependentModel'] for row in primary['negativeControls'])
assert len(primary['streaming'])==36
assert primary['orderedSemanticDigest']=='f83c2f68b46586fd96e0314abe8a8d1f66e328014b506aab6191f706c365a20f'
assert len(primary['coverage'])==2
for row in primary['coverage']:
    assert row['measuredInstructionPcs']==674 and row['visitedInstructionPcs']==277
    assert row['staticallyClassifiedUnreachablePcs']==397 and row['all277ReachableInstructionPcsVisited']
ready_path=ROOT/'evidence/lanes/crc054/ready.json'
ready=read(ready_path)
for row in ready['files']:
    path=ROOT/row['path']
    assert pin(path)==row
    assert hashlib.sha256((fresh/row['path']).read_bytes()).hexdigest()==row['sha256']
compiled_path=fresh/'work/source-compile-ci/committed-replay/manifests/compilation.json'
compiled=read(compiled_path)
assert compiled['unitCount']==424 and len(compiled['results'])==1202
assert all(row['status']=='compiled' for row in compiled['results'])
tests=0
for step in raw['steps']:
    if step['name'].endswith('-tests'):
        text=(fresh/step['log']).read_text(encoding='utf-8')
        found=re.search(r'Ran (\d+) tests',text)
        assert found and text.strip().endswith('OK')
        tests+=int(found[1])
assert tests==104,tests
receipt=dict(schemaVersion=1,status='qualified-independent-crc054-canonical-little-endian-domain',
             sourceRevision=raw['sourceRevision'],rawReplay=pin(raw_path),ready=pin(ready_path),
             primaryReport=pin(primary_path),independentReport=pin(independent_path),
             exactSemanticComparison=True,variants=comparison.variants,
             artifactVarianceLimit='Only verified four-byte COFF object timestamps; no instruction, section, relocation or linked-artifact differences allowed.',
             sets=1024,observations=4096,streamingChecks=36,returningControls=7,returningControlExecutions=42,
             reachablePcsPerRoutine=277,measuredPcsPerRoutine=674,classifiedUnreachablePcsPerRoutine=397,
             tests=tests,publicUnits=424,publicCompilations=1202,
             instructionFootprintBytes=5392,sourceAdmissionGranted=False,exactMatchingCreditGranted=0,
             universalMemoryOrWholeGzipSdkGameClaimed=False,physicalAndroidClaimed=False,
             producer=pin(Path(__file__).resolve()))
output=ROOT/'evidence/verification/crc054-coordinator-4346b30.json'
output.write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8')
print(json.dumps(dict(passed=True,tests=tests,sets=1024,variants=len(comparison.variants))))
