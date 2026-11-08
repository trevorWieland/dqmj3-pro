import importlib
import sys
from pathlib import Path

STAGES={'binding':'062v','binding-start':'062w','construction':'062x','manager':'062y','erase':'062z','timer':'062aa'}

def bind(root,intake,output,stage,manifest):
    all_folders=[output/name for name in STAGES]
    public=[root/'toolscripts/sdk062'/name for name in ['context','object','startup','arbiter','legacy']]
    paths=[str(p)for p in all_folders+public]+[str(root/'toolscripts')]
    def reset():
        sys.path[:]=paths+[p for p in sys.path if p not in paths and not Path(p or '.').resolve().is_relative_to(root/'work')]
    reset()
    import sdk062_original_v1 as oracle
    for name in ['runtime062','runtime062c','runtime062s','kernel062s']:
        module=importlib.import_module(name)
        if not Path(module.__file__).resolve().is_relative_to(root/'toolscripts/sdk062'):raise ValueError('inherited runtime escaped public support '+name)
        reset()
    import digest024_build as compiler
    original_command=compiler.command
    include=[intake/'proposed/src/native/wave062-runtime/include',root/'src/native/wave062-sdk/include']
    declared={str((root/'work'/name/'source').resolve())for name in ['native-asset062-sdk','native-asset062-sdk-object','native-asset062-sdk-startup','native-asset062-sdk-factory','native-asset062-sdk-factory-owner','native-asset062-sdk-construction','native-asset062-sdk-manager','native-asset062-sdk-info','native-asset062-sdk-timer']}
    declared.update(str((p/'source').resolve())for p in all_folders+public)
    def command(argv,*args,**kwargs):
        result=[];index=0;includes=False
        while index<len(argv):
            item=argv[index]
            if str(item)=='-I':
                path=Path(argv[index+1]).resolve()
                if str(path)not in declared:raise ValueError('undeclared historical include '+str(path))
                index+=2
                if not includes:
                    for p in include:result.extend(['-I',p])
                    includes=True
                continue
            result.append(item);index+=1
        return original_command(result,*args,**kwargs)
    compiler.command=command
    selected={Path(r['proposedPath']).name:intake/r['intakePath']for r in manifest['files']if r['proposedPath'].endswith('.c')}
    selected.update({Path(r['path']).name:root/r['path']for r in manifest['existingSdkInputs']if r['path'].endswith('.c')})
    builders={}
    for suffix in ['062s',*STAGES.values()]:
        name='build'+suffix;module=importlib.import_module(name)
        expected=root/'toolscripts/sdk062'if suffix=='062s'else output
        if not Path(module.__file__).resolve().is_relative_to(expected):raise ValueError('builder escaped selected support '+name)
        module.command=command
        original=module.build
        def build(folder,target,overrides=None,original=original):
            replacement=dict(selected)
            for key,value in(overrides or{}).items():
                path=Path(value).resolve()
                if key not in selected or path.name!=key or not path.is_file()or not path.is_relative_to(output):raise ValueError('control escaped output')
                replacement[key]=path
            return original(folder,target,replacement)
        module.build=build
        if suffix!='062s':module.WORK=output/next(k for k,v in STAGES.items()if v==suffix)
        builders[suffix]=module;reset()
    for lane,suffix in STAGES.items():
        for prefix in ['runtime','model','proof','controls']:
            path=output/lane/(prefix+suffix+'.py')
            if not path.is_file():continue
            module=importlib.import_module(prefix+suffix)
            if not Path(module.__file__).resolve().is_relative_to(output):raise ValueError('owned support escaped snapshot')
            module.WORK=output/lane;reset()
    baseline=output/stage/'final-v1/build'
    oracle.install(baseline);reset()
    return builders[STAGES[stage]],baseline
