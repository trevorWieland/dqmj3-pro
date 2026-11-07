import ast
import importlib.metadata
from pathlib import Path
import sys

import capstone
import unicorn

from native_stream056_build import ROOT, WORK, SOURCE_ROOT, SOURCE, pin


def inputs():
    for name,module in sys.modules.items():
        if name.startswith('native_stream056_') and getattr(module,'__file__',None):
            if Path(module.__file__).resolve().parent != (SOURCE_ROOT/'toolscripts').resolve():
                raise ValueError('056 loaded an own helper outside the selected source snapshot')
    own = set((SOURCE_ROOT/'toolscripts').glob('native_stream056_*.py'))
    own.update([SOURCE,SOURCE.with_suffix('.h'),SOURCE_ROOT/'toolscripts/native_stream056_layout.c',
                SOURCE_ROOT/'docs/native-stream056.md',SOURCE_ROOT/'tests/test_native_stream056.py'])
    evidence=SOURCE_ROOT/'evidence/lanes/native-stream056/stage-v1'
    own.update(evidence/name for name in ('claim.json','static-unreachable-proof.json',
                                        'primary-references.json','reference-completion.json',
                                        'development-attempts.json','domain-qualification.json','path-relocation.json'))
    shared = {ROOT/'toolscripts/digest024_build.py',ROOT/'toolscripts/digest024_oracle.py'}
    queue = list(shared)
    while queue:
        path = queue.pop()
        for statement in ast.walk(ast.parse(path.read_text())):
            names = [statement.module] if isinstance(statement,ast.ImportFrom) else [item.name for item in statement.names] if isinstance(statement,ast.Import) else []
            for name in names:
                if name:
                    candidate = ROOT/'toolscripts'/(name.split('.')[0]+'.py')
                    if candidate.is_file() and candidate not in shared:
                        shared.add(candidate)
                        queue.append(candidate)
    tools = {ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe',Path(sys.executable),
             Path(unicorn.__file__),Path(capstone.__file__),Path(unicorn.unicorn_py3.unicorn.__file__),
             Path(unicorn.unicorn_py3.unicorn.uclib._name),Path(capstone._cs._name)}
    return sorted([pin(path.resolve()) for path in own|shared|tools],key=lambda item:item['path'])


def environment():
    return dict(python=sys.version,unicornPackage=importlib.metadata.version('unicorn'),
                unicornModule=unicorn.__version__,unicornNative=unicorn.uc_version(),
                capstonePackage=importlib.metadata.version('capstone'),capstoneModule=capstone.__version__,
                capstoneNative=capstone.cs_version(),
                packageNativeDiscrepanciesPreserved=True,
                sourceWindowsActuallyExecuted=True,aarch64PhysicalOsExecuted=False)
