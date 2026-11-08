import importlib
import json
import os
import types
from pathlib import Path
import sys
from contract import ROOT,checked,pin
from gates import AuthoredFinder

def json_reference(intake):return json.loads((intake/'reference-inputs-v1.json').read_bytes())['files']

def bind(intake,output,source,support,gate):
    own=output/'owner'
    (output/'AGENTS.md').write_bytes((ROOT/'AGENTS.md').read_bytes())
    for row in support['files']:
        relative=Path(row['proposedPath']).relative_to('toolscripts/sdk062_owner_v1');target=own/relative;target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(checked(intake,row['intakePath'],row).read_bytes())
    for row in source['files']:
        target=own/'source'/Path(row['proposedPath']).name;target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(checked(intake,row['intakePath'],row).read_bytes())
    public=[ROOT/'toolscripts/sdk062'/n for n in ['context','legacy']]+[ROOT/'toolscripts/sdk062_runtime_v1'/n for n in ['erase','timer']]+[ROOT/'toolscripts']
    paths=[str(own)]+[str(p)for p in public]
    def reset():sys.path[:]=paths+[p for p in sys.path if p not in paths and not Path(os.path.abspath(p or '.')).is_relative_to(ROOT/'work')and not Path(os.path.abspath(p or '.')).is_relative_to(ROOT/'toolscripts')]
    reset();sys.meta_path.insert(0,AuthoredFinder(ROOT,{p for p in gate.pinned if p.suffix=='.py'and not p.is_relative_to(intake/'provenance')}|{p.resolve()for p in own.rglob('*.py')},output,gate))
    oracle=importlib.import_module('sdk062_original_v1');gate.install_original(oracle)
    expected={r['path']:r['sha256']for r in json_reference(intake)}
    if expected!=oracle.IDENTITIES:raise ValueError('owner canonical original identity/view differs')
    alias=types.ModuleType('native_stream058_original');alias.__file__=oracle.__file__;alias.Original=oracle.Original;alias.RAM=oracle.RAM;alias.SIZE=0x100000;alias.STACK=oracle.STACK;alias.STOP=oracle.STOP;sys.modules[alias.__name__]=alias
    for name in ['runtime062','runtime062c','runtime062s','kernel062s']:importlib.import_module(name);reset()
    oracle.install(output/'owner-build');reset()
    for name in ['runtime062','runtime062c','runtime062s','kernel062s','build062s','map_proof062s','model062z','model062aa']:
        module=importlib.import_module(name)
        if not Path(module.__file__).resolve().is_relative_to(ROOT/'toolscripts'):raise ValueError('owner inherited helper escaped public source '+name)
        reset()
    builder=importlib.import_module('build062ab');reset()
    if Path(builder.__file__).resolve().parent!=own:raise ValueError('owner builder escaped new snapshot')
    builder.ROOT=ROOT
    selected={Path(r['proposedPath']).name:checked(intake,r['intakePath'],r)for r in source['files']if r['proposedPath'].endswith('.c')}
    selected.update({Path(r['path']).name:checked(ROOT,r['path'],r)for r in source['existingSdkInputs']if r['path'].endswith('.c')})
    builder.SOURCES=[selected[p.name]for p in builder.SOURCES]
    if len(builder.SOURCES)!=33 or len(set(builder.SOURCES))!=33:raise ValueError('owner exact compiled closure differs')
    allowed={Path(p).resolve()for p in [own/'source',builder.SDK/'source',builder.CLOCK/'source',builder.MANAGER/'source',builder.TIMER/'source',builder.ERASE/'source']}
    include=[intake/'proposed/src/native/wave062-owner/include',ROOT/'src/native/wave062-sdk/include',ROOT/'src/native/wave062-runtime/include']
    prior_command=builder.base.command
    def command(argv,*args,**kwargs):
        values=[];i=0;inserted=False
        while i<len(argv):
            if str(argv[i])=='-I':
                if Path(argv[i+1]).resolve()not in allowed:raise ValueError('owner undeclared compiler include')
                if not inserted:
                    for p in include:values.extend(['-I',p])
                    inserted=True
                i+=2
            else:values.append(argv[i]);i+=1
        return prior_command(values,*args,**kwargs)
    builder.base.command=command
    original=builder.build
    def build(folder,target,overrides=None):
        replacement={}
        for name,value in(overrides or{}).items():
            p=Path(value).resolve()
            if name not in selected or p.name!=name or not p.is_relative_to(output)or not p.is_file():raise ValueError('owner control escaped exclusive output')
            replacement[name]=p
        return original(folder,target,replacement)
    builder.build=build
    for name in ['runtime062ab','proof062ab','selector062ab','owner_proof062ab','owner_model062ab','owner_controls062ab']:
        module=importlib.import_module(name)
        if Path(module.__file__).resolve().parent!=own:raise ValueError('owner helper escaped own snapshot '+name)
        module.ROOT=ROOT
        reset()
    return builder
