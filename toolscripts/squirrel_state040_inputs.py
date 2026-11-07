import ast
import re
from pathlib import Path

from native_wave013_common import ROOT,record


def source_closure(sources):
    paths=set();pending=list(sources)
    while pending:
        path=pending.pop().resolve()
        if path in paths:continue
        path.relative_to(ROOT);paths.add(path)
        for name in re.findall(r'^\s*#\s*include\s*"([^"]+)"',path.read_text(),re.M):
            include=(path.parent/name).resolve()
            if not include.is_file():raise ValueError('040 quoted source dependency missing: '+str(include))
            pending.append(include)
    return paths


def producer_closure(producers):
    paths=set();pending=list(producers)
    while pending:
        path=pending.pop().resolve()
        if path in paths:continue
        path.relative_to(ROOT);paths.add(path)
        tree=ast.parse(path.read_text(encoding='utf-8-sig'))
        names=[]
        for node in ast.walk(tree):
            if isinstance(node,ast.Import):names.extend(row.name for row in node.names)
            elif isinstance(node,ast.ImportFrom) and node.module:names.append(node.module)
        for name in names:
            candidate=ROOT/'toolscripts'/(name.split('.')[0]+'.py')
            if candidate.is_file():pending.append(candidate)
    return paths


def input_records(sources,producers):
    return [record(path) for path in sorted(source_closure(sources)|producer_closure(producers))]
