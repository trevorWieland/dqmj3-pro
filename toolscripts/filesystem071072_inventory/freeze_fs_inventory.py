import hashlib
import json
import sys
from pathlib import Path

sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def main():
    if (HERE/'contract-v1.json').exists():
        raise ValueError('Refusing to replace frozen predecessor contract')
    import native_particle_inventory
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base=json.loads(census_path.read_text())
    canonical,references=native_particle_inventory.compose(ROOT,base)
    if canonical['functionCount']!=26673:
        raise ValueError('Expected current particle predecessor26673')
    entries={row['address']:row for row in canonical['functions']}
    wanted={0x44da8c,0x123114,0x44df60}
    if wanted&set(entries):
        raise ValueError('Candidate already has an exact canonical entry')
    owner=entries[0x117378]
    if owner['ranges']!=[dict(start=0x117378,endExclusive=0x1173e4,bytes=108),dict(start=0x123114,endExclusive=0x1231e0,bytes=204)]:
        raise ValueError('Historical caller/alias owner changed')
    bindings_path=ROOT/'evidence/lanes/native-file071072/public-inputs-v1/candidate-bindings.json'
    bindings=json.loads(bindings_path.read_text())
    candidates=[row for row in bindings['candidates'] if row['entry'] in wanted]
    closure=[]
    for name,module in sorted(sys.modules.items()):
        path=getattr(module,'__file__',None)
        if path and Path(path).is_file() and Path(path).is_relative_to(ROOT/'toolscripts'):
            closure.append(pin(Path(path)))
    configs=[pin(path) for path in sorted((ROOT/'config').glob('native-*-overlays.json'))]
    result=dict(status='frozen-three-entry-filesystem-inventory-repair-contract-not-admission',
        programId='0004000e001acb00',moduleSha256=base['codeSha256'],beforeDiscoveredEntries=canonical['functionCount'],
        compositor='native_particle_inventory.compose',compositorSources=closure,configurations=configs,
        supplementalReferences=references,seededCensus=pin(census_path),originalImage=pin(ROOT/'generated/update-content0/code.bin'),
        candidateBindings=pin(bindings_path),rootOverlapReview=pin(ROOT/'work/filesystem071072-root-unowned-candidates-v1.json'),
        oldOwner=owner,candidates=[{key:row[key] for key in ('entry','mode','instructionRanges','literalPoolRanges',
            'originalObservedInstructionPositions','originalTotalInstructionPositions','originalUnvisitedPositions')} for row in candidates],
        requiredProof=['Whole candidate CFG/literal readers and actual ARM-state entry/caller transfers',
            'Retain original108B caller; reparent204B alias; independently compute discovery and instruction ownership deltas',
            'Preserve every original code/data/unclassified disposition and exclude literal pools',
            'Keep unvisited stream-allocation failure branch and owning/OS ABI limits explicit'],
        noProductionSourceAdded=True,sourceCreditGranted=0,canonicalAdmissionPerformed=False,sharedEdits=False)
    (HERE/'contract-v1.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(predecessor=canonical['functionCount'],candidateEntries=[hex(row['entry']) for row in candidates],oldOwnerInstructionBytes=owner['textBodyBytes'])))


if __name__=='__main__':
    main()
