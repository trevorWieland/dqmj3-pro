import ast
import importlib.metadata
from pathlib import Path
import sys

import capstone
import unicorn

from native_stream058_build import ROOT,WORK,SOURCE_ROOT,SOURCE,pin


def inputs():
    for name,module in sys.modules.items():
        if name.startswith('native_stream058_')and getattr(module,'__file__',None):
            if Path(module.__file__).resolve().parent!=(SOURCE_ROOT/'toolscripts').resolve():
                raise ValueError('058 loaded an own helper outside its selected source snapshot')
    own=set((SOURCE_ROOT/'toolscripts').glob('native_stream058_*.py'))|set(SOURCE.glob('*'))
    own.update([SOURCE_ROOT/'docs/native-stream058.md',SOURCE_ROOT/'tests/test_native_stream058.py'])
    evidence=SOURCE_ROOT/'evidence/lanes/native-stream058/stage-v1'
    own.update(evidence/name for name in('claim.json','static-proof.json','development-attempts.json',
                                       'primary-references.json','real-caller-probe.json','reference-supplement.json','path-relocation.json'))
    shared={ROOT/'toolscripts/native_stream056_build.py',ROOT/'toolscripts/native_stream056_cases.py',
            ROOT/'toolscripts/digest024_build.py',ROOT/'toolscripts/digest024_oracle.py',ROOT/'toolscripts/inventory.py'}
    queue=list(shared)
    while queue:
        path=queue.pop()
        for statement in ast.walk(ast.parse(path.read_text())):
            names=[statement.module]if isinstance(statement,ast.ImportFrom)else[item.name for item in statement.names]if isinstance(statement,ast.Import)else[]
            for name in names:
                candidate=ROOT/'toolscripts'/((name or'').split('.')[0]+'.py')
                if candidate.is_file()and candidate not in shared:shared.add(candidate);queue.append(candidate)
    frozen={ROOT/'src/native/wave056/stream056.c',ROOT/'src/native/wave056/stream056.h',
            ROOT/'src/native/wave054/crc.c',ROOT/'src/native/wave054/crc.h',
            ROOT/'evidence/lanes/native-stream056/stage-v1/ready.json',ROOT/'evidence/lanes/crc054/ready.json',
            ROOT/'evidence/lanes/native-archive032/gzip/reference-heap-handoff.json',
            ROOT/'toolscripts/native_archive032_gzip_oracle.py'}
    tools={ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe',Path(sys.executable),
           Path(unicorn.__file__),Path(capstone.__file__),Path(unicorn.unicorn_py3.unicorn.__file__),
           Path(unicorn.unicorn_py3.unicorn.uclib._name),Path(capstone._cs._name)}
    required=own|shared|frozen|tools
    if any(not path.is_file()for path in required):raise ValueError('058 required source/runtime input is missing')
    return sorted([pin(path.resolve())for path in required],key=lambda row:row['path'])


def environment():
    return dict(python=sys.version,unicornPackage=importlib.metadata.version('unicorn'),unicornModule=unicorn.__version__,
                unicornNative=unicorn.uc_version(),capstonePackage=importlib.metadata.version('capstone'),
                capstoneModule=capstone.__version__,capstoneNative=capstone.cs_version(),
                actualWindows=True,physicalAndroidExecuted=False,packageNativeDiscrepanciesRetained=True)
