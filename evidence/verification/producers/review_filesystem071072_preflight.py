import hashlib
import importlib.util
import json
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'toolscripts'))


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def main():
    folder=ROOT/'work/filesystem071072-root-placement-smoke-v1'
    ready=read(folder/'ready.json')
    require(ready['status']=='combined071072-public-source-replay-passed' and ready['smoke']
        and ready['sourceOnly'] and len(ready['children'])==49,'Placement smoke incomplete')
    source=ROOT/'toolscripts/filesystem071072_replay.py'
    spec=importlib.util.spec_from_file_location('filesystem071072_placement_review',source)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    counts={}
    for row in ready['children']:
        record=read(folder/('receipt-'+row['child']+'.json'))
        probe=record['probe']
        journal=module.verify_journal(folder/('journal-'+row['child']+'.jsonl'),bool(probe),
            bool(probe and probe.startswith('after-terminal-')))
        require(journal==row['postExitJournal'] and record['immutableInputsUnchanged']
            and record['bytecodePrefixAbsent'] and not record['originalImageAccessPermitted'],
            'Actual post-exit source boundary or immutable input differs')
        for name,identity in record['inputPins'].items():
            p=Path(name).resolve()
            raw=p.read_bytes()
            require(len(raw)==identity['bytes'] and hashlib.sha256(raw).hexdigest()==identity['sha256'],
                'Placement replay input or artifact changed')
        counts[record['mode']]=counts.get(record['mode'],0)+1
        if probe:
            require(row['persistentProbeRejected'],'Boundary child escaped persistent rejection')
        else:
            require(row['exitCode']==0 and record['status']=='passed'
                and not record['audit']['forbiddenAccessAttempts'],'Positive placement child failed')
        if record['mode']=='source':
            nested=read(Path(record['result']['report']))
            require(record['profile']=='windows' and record['result']['sourceReturned']
                and nested['status']=='passed' and not nested['originalImageMapped'],
                'Actual Windows source body did not return cleanly')
    require(counts==dict(build=2,abi=1,source=28,probe=18),'Placement child roster differs')
    compile_path=ROOT/'work/filesystem071072-default-profile-preflight-v1/receipt.json'
    compiled=read(compile_path)
    require(len(compiled['results'])==12 and all(r['status']=='compiled' for r in compiled['results']),
        'Four new sources must compile on all three default targets')
    for row in compiled['results']:
        for item in row['inputs']:
            require(hashlib.sha256((ROOT/item['path']).read_bytes()).hexdigest()==item['sha256'],
                'Default compilation source or header changed')
        obj=ROOT/row['object']['path']
        require(obj.stat().st_size==row['object']['bytes']
            and hashlib.sha256(obj.read_bytes()).hexdigest()==row['object']['sha256'],
            'Default compiled object changed')
    intake=ROOT/'evidence/lanes/native-file071072/public-inputs-v1'
    placements=read(intake/'placements.json')
    for row in placements['canonicalSharedHeadersMustNotBeReplaced']:
        require(pin(ROOT/row['path'])==row,'Canonical historical header changed')
    canonical=read(ROOT/'work/filesystem071072-root-canonical-comparison-v1.json')
    missing=[r['name']for r in canonical['candidates']if not r['canonicalPresent']]
    require(missing==['fn_0044da8c','fn_00123114','fn_0044df60'],'Pending canonical repair roster differs')
    result=dict(status='coordinator-filesystem071072-public-placement-preflight-passed',
        producer=pin(Path(__file__).resolve()),placementChildren=49,positiveWindowsSourceBodies=28,
        persistentBoundaryPrograms=18,defaultSourceCompileCases=12,sourceUnits=616,
        compileReceipt=pin(compile_path),worker217ChildReview=pin(ROOT/'work/filesystem071072-root-worker-output-review-v1.json'),
        frozenPinReview=pin(ROOT/'work/filesystem071072-root-pin-review-v1.json'),
        independentCommittedReplayPending=True,canonicalRepairPending=missing,
        sourceCreditGranted=0,exactMatchingClaimed=False,wholeGameClaimed=False)
    output=ROOT/'evidence/verification/filesystem071072-root-preflight.json'
    require(not output.exists(),'Preserve the prior placement preflight')
    output.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(result))


if __name__=='__main__':
    main()
