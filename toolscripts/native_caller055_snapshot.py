import json
from pathlib import Path
from native_caller055_measure import WORK, ROOT, SOURCE, pin
from native_caller055_address_build import build as address_build
from native_caller055_address_qualify import run as address_qualify
from native_caller055_build import build as selector_build
from native_caller055_qualify import run as selector_qualify


def run():
    files = [SOURCE/name for name in ['selector055.c', 'selector055.h', 'address055.c', 'address055.h']]
    files += [ROOT/'src/native/wave055'/name for name in ['state055.c', 'state055.h']]
    before = [pin(path) for path in files]
    snapshot = WORK/'source-snapshot'
    snapshot.mkdir(parents=True, exist_ok=True)
    for path in files:
        target = snapshot/path.name
        target.write_bytes(path.read_bytes())
        assert target.read_bytes() == path.read_bytes()
    address_primary = json.loads((WORK/'address-build/build.json').read_text(encoding='utf-8'))
    selector_primary = json.loads((WORK/'selector-build/build.json').read_text(encoding='utf-8'))
    address_copy = address_build(snapshot/'address-build',snapshot/'address055.c')
    selector_copy = selector_build(snapshot/'selector-build',snapshot/'selector055.c',snapshot/'address055.c',snapshot/'state055.c')
    artifacts = []
    for label, first, second in [('address',address_primary,address_copy),('selector',selector_primary,selector_copy)]:
        for old,new in zip(first['artifacts'],second['artifacts']):
            assert old['bytes'] == new['bytes'] and old['sha256'] == new['sha256']
            assert (ROOT/old['path']).read_bytes() == (ROOT/new['path']).read_bytes()
            artifacts.append(dict(component=label, primary=old, sourceSnapshot=new, byteIdentical=True))
    address_report = address_qualify(snapshot/'address-build',snapshot/'address-execution.json')
    selector_report = selector_qualify(snapshot/'selector-build',snapshot/'selector-execution.json')
    for original,current in [(WORK/'address-execution.json',address_report),(WORK/'selector-execution.json',selector_report)]:
        assert json.loads(original.read_text(encoding='utf-8'))['cases'] == current['cases']
    assert all(pin(ROOT/row['path']) == row for row in before)
    result = dict(schemaVersion=1, originalFiles=before, sourceSnapshotFiles=[pin(snapshot/path.name) for path in files],
                  copiedSourceBytes=sum(path.stat().st_size for path in files), artifacts=artifacts,
                  completeAllCaseObservationsIdentical=True, addressCaseSets=156, selectorCaseSets=424,
                  totalSnapshotObservations=(156+424)*4, sourceSnapshotOnly=True,
                  repositoryToolOrOriginalImageCopied=False, fullColdRepositoryReplayClaimed=False,
                  sourceCreditGranted=0, reports=[pin(snapshot/'address-execution.json'),pin(snapshot/'selector-execution.json')],
                  producer=pin(Path(__file__).resolve()))
    path = WORK/'source-snapshot.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__ == '__main__':
    run()
