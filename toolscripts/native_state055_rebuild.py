import json
from pathlib import Path
from native_state055_build import build
from native_state055_measure import ROOT, WORK, pin


def run():
    before = json.loads((WORK/'build/build.json').read_text())
    rebuilt = build(WORK/'rebuild')
    rows = []
    for old, new in zip(before['artifacts'], rebuilt['artifacts']):
        assert old['sha256'] == new['sha256'] and old['bytes'] == new['bytes']
        assert (ROOT/old['path']).read_bytes() == (ROOT/new['path']).read_bytes()
        rows.append(dict(primary=old, fresh=new, byteIdentical=True))
    result = dict(schemaVersion=1, status='same-frozen-source-independent-output-directory-rebuild',
                  fullRepositoryOrToolCopiesCreated=False, originalMasterInputsCopied=False,
                  primary=pin(WORK/'build/build.json'), rebuilt=pin(WORK/'rebuild/build.json'), artifacts=rows,
                  completeColdRepositoryReplayClaimed=False, sourceCreditGranted=0,
                  producer=pin(Path(__file__).resolve()))
    path = WORK/'rebuild.json'
    path.write_text(json.dumps(result, indent=2)+'\n')
    return pin(path)


if __name__ == '__main__':
    print(json.dumps(run()))
