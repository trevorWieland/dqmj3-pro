import hashlib
import json
import re
from controller6_measure import ROOT,WORK,pin,PREDECESSOR,EXPECTED_PREDECESSOR


def audit():
    assert pin(PREDECESSOR)['sha256']==EXPECTED_PREDECESSOR
    selected=sorted((WORK/'source').glob('*.c'))
    selected += [ROOT/'work/native-state055/controller-v5/source/apply_bindings055.c',ROOT/'src/native/wave055/state055.c']
    search=[ROOT/'src/native/wave055',ROOT/'src/native/wave055/controller-deps-v1']
    files=set(selected);pending=list(selected)
    while pending:
        path=pending.pop();text=path.read_text()
        assert len(text.splitlines())<=500,path
        assert not re.search(r'/\*|//',text),path
        for name in re.findall(r'^\s*#include\s+"([^"]+)"',text,re.M):
            candidate=next((p.resolve()for p in[path.parent/name,*[directory/name for directory in search]]if p.is_file()),None)
            assert candidate is not None and candidate.is_relative_to(ROOT),(path,name)
            if candidate not in files:files.add(candidate);pending.append(candidate)
    result=dict(status='exact-selected-source-and-quoted-header-roster-before-final-freeze',producer=pin(__file__),
                predecessor=pin(PREDECESSOR),sourceFiles=[pin(path)for path in selected],headers=[pin(path)for path in sorted(files)if path.suffix=='.h'],
                originalExecutableCopiedIntoSource=False,noCompilerOutputPatches=True,sourceCreditGranted=0,
                globalInitializationAllocatorHardwareOrGameClaimed=False)
    out=WORK/'source-roster-frontier.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(roster=pin(out),sources=len(selected),headers=len(result['headers']))))
    return result


if __name__=='__main__':audit()
