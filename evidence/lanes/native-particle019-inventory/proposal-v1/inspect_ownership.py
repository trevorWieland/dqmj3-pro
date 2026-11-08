import hashlib
import json
from pathlib import Path
import sys

ROOT=Path.cwd();WORK=ROOT/'work/particle019-inventory-proposal-v1';PARENT=ROOT/'work/shader018-normal-emitter-v1';sys.path.insert(0,str(ROOT/'toolscripts'))
import native_shader_inventory as inventory


def pin(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def main():
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json';base=json.loads(census_path.read_bytes());config_paths=sorted((ROOT/'config').glob('native-*-overlays.json'));before=[pin(path)for path in config_paths];composed,references=inventory.compose(ROOT,base);assert before==[pin(path)for path in config_paths]
    cfg=json.loads((PARENT/'normal-update-cfg-v8.json').read_bytes());observed=json.loads((PARENT/'actual-original-instruction-closure-v1.public.json').read_bytes());seen={row['pc']for row in observed['instructions']};current={row['address']:row for row in composed['functions']};entries=[]
    for row in cfg['functions']:
        entry=row['entry'];owned=[]
        for owner in composed['functions']:
            intersections=[]
            for original in owner['ranges']:
                for part in row['instructionRanges']+row['pools']:
                    start=max(original['start'],part.get('start',part.get('address')));end=min(original['endExclusive'],part.get('endExclusive',part.get('address',0)+part['bytes']))
                    if start<end:intersections.append(dict(start=start,endExclusive=end,bytes=end-start))
            if intersections:owned.append(dict(canonicalEntry=owner['address'],mode=owner['mode'],ranges=owner['ranges'],textBodyBytes=owner['textBodyBytes'],intersections=intersections,boundaryStatus=owner.get('boundaryStatus')))
        entries.append(dict(entry=entry,mode=row['mode'],genuinelyObservedEntry=entry in seen,observedInstructionPositions=sum(ins['pc']in seen for ins in row['instructions']),staticInstructionPositions=len(row['instructions']),alreadyCanonicalEntry=entry in current,currentOwnership=owned))
    result=dict(status='read-only-current-canonical-composition-and-observed-candidate-audit',canonicalBase=pin(census_path),configurationInputs=before,compositionReferences=references,composedFunctionCount=len(current),moduleSha256=base['codeSha256'],entries=entries,sourceCreditGranted=0,inventoryAdmissionGranted=False,nativeTextDenominatorChanged=False)
    (WORK/'ownership-inspection-v1.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(currentFunctions=len(current),entries=[dict(entry=hex(row['entry']),observed=row['genuinelyObservedEntry'],alreadyEntry=row['alreadyCanonicalEntry'],owners=[hex(part['canonicalEntry'])for part in row['currentOwnership']])for row in entries])))


if __name__=='__main__':main()
