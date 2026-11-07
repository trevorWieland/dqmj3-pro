import hashlib
import json
import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_inputs import inputs as prerequisite_inputs,environment


def own_files():
    result=set(WORK.glob('*.py'))|set((WORK/'source').glob('*'))
    result.update(WORK/name for name in ['README.md','claim.json','primary-references.json','development-attempts.json','REFERENCE-LICENSE.txt'])
    return sorted(result)


def inputs():
    for name,module in sys.modules.items():
        if name.endswith('059')and getattr(module,'__file__',None):
            if Path(module.__file__).resolve().parent!=WORK.resolve():raise ValueError('059 own module shadowed by another source tree')
    result={r['path']:r for r in prerequisite_inputs()}
    for source in own_files():
        if not source.is_file():raise ValueError('059 owned input missing')
        raw=source.read_bytes()
        path=source.relative_to(ROOT).as_posix()
        result[path]=dict(path=path,bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())
    return [result[key]for key in sorted(result)]


def guard(before,output):
    after=inputs()
    if after!=before:raise ValueError('059 source/runtime inputs changed during qualification')
    (output/'input-guard.json').write_text(json.dumps(dict(before=before,after=after,unchanged=True,environment=environment()),indent=2)+'\n',encoding='utf-8')
