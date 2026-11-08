import ctypes
import json
from pathlib import Path
from controller6_measure import WORK,pin
from controller6_execution import model
from controller6_uniform_probe import machine,Windows,cases as uniform_cases
from controller6_property_probe import cases as property_cases
from controller6_global_probe import cases as global_cases
from controller6_reference import execute as original
from controller6_build import build
from native_wave014_oracle import original_image


def inputs():
    matrix=next(case for case in uniform_cases()if case['label']=='matrix-0-3-1-2')
    forced=next(case for case in property_cases()if case['label']=='property-120-6-1')
    half=next(case for case in property_cases()if case['label']=='property-013-6-1')
    global_change=next(case for case in global_cases()if case['label']=='global-035-0-1-1')
    return matrix,forced,half,global_change


def variants():
    matrix,forced,half,global_change=inputs()
    return [
        ('ignore-transpose','dispatch_uniform6.c',[('transpose ? column : row','transpose && 0 ? column : row'),('transpose ? row : column','transpose && 0 ? row : column')],matrix),
        ('short-dirty-span','dispatch_uniform6.c',[('StateWord055 span = rows*count;','StateWord055 span = rows*count-1;')],matrix),
        ('ignore-forced-cache','dispatch_property6.c',[('state_context_byte055(state_apply_context055,12) != 0;','state_context_byte055(state_apply_context055,12) != 0 && 0;')],forced),
        ('omit-format','dispatch_property6.c',[('(StateWord055)format<<','(StateWord055)(format&0)<<')],forced),
        ('omit-context-dirty','dispatch_property6.c',[('state_context_word055(state_apply_context055,0)|0x80000','state_context_word055(state_apply_context055,0)|0')],forced),
        ('wrong-cache-slot','dispatch_property6.c',[('selection->values[identifier] = ~merged;','selection->values[(identifier+1)%189] = ~merged;')],forced),
        ('wrong-float-bias','dispatch_reduced6.c',[('(int)(magnitude>>23)-(int)bias : 0','(int)(magnitude>>23)-(int)bias+1 : 0')],half),
        ('omit-coupled-recompute','dispatch_global6.c',[('if (changed) {','if (changed && 0) {')],global_change)
    ]


def module_identity(native,expected):
    native.kernel.GetModuleFileNameW.argtypes=[ctypes.c_void_p,ctypes.c_wchar_p,ctypes.c_ulong]
    native.kernel.GetModuleFileNameW.restype=ctypes.c_ulong
    buffer=ctypes.create_unicode_buffer(32768)
    count=native.kernel.GetModuleFileNameW(native.dll._handle,buffer,len(buffer));assert 0<count<len(buffer)
    actual=Path(buffer.value).resolve();assert str(actual).casefold()==str(expected.resolve()).casefold()
    return pin(actual)


def run(stage=None):
    work=Path(stage).resolve()if stage is not None else WORK
    assert work.is_relative_to(WORK)
    image=original_image();claim=json.loads((WORK/'claim.json').read_text());rows=[]
    copied_root=work/'source-root'
    selected_source=copied_root/'work/native-state055/dispatcher-v6/source'if copied_root.is_dir()else WORK/'source'
    previous=copied_root/'work/native-state055/controller-v5/source'if copied_root.is_dir()else None
    dependency=copied_root/'src/native/wave055'if copied_root.is_dir()else None
    for name,filename,replacements,case in variants():
        directory=work/'controls-v1'/name;source=directory/'source'/filename
        assert not directory.exists()
        source.parent.mkdir(parents=True)
        baseline=selected_source/filename;text=baseline.read_text()
        for old,new in replacements:
            assert text.count(old)==1,(name,old);text=text.replace(old,new)
        source.write_text(text)
        build(stage=directory,source=selected_source,previous=previous,dependency=dependency,overrides={filename:source})
        expected=original(case,image,claim);assert expected['returned']
        arm=machine(case,False,'state_dispatch6',model,False,directory)
        native=Windows('state_dispatch6',model,directory)
        try:
            module=module_identity(native,directory/'uniform-build/uniform6.dll')
            windows=native.execute(case,False)
        finally:native.close()
        high=machine(case,True,'state_dispatch6',model,False,directory)
        assert all(not row['independentModelEqual']for row in[arm,windows,high]),name
        assert arm['finalArenaSha256']!=expected['finalArenaSha256'],name
        rows.append(dict(name=name,input=case,baseline=pin(baseline),mutatedSource=pin(source),replacements=replacements,
                         original=expected,sourceArm=arm,actualWindows=windows,highAarch64=high,actualLoadedWindowsModule=module,
                         allThreeNormallyReturnedAndRejected=True))
        print('returning control',name,'passed',flush=True)
    result=dict(status='eight-normal-returning-source-semantic-controls',producer=pin(__file__),controls=len(rows),executions=len(rows)*3,
                cases=rows,noCrashCountedAsReturningControl=True,noOriginalAnswersFedToAuthoredC=True,sourceCreditGranted=0)
    out=work/'returning-controls.json';out.write_text(json.dumps(result,separators=(',',':'))+'\n')
    print(json.dumps(dict(report=pin(out),controls=len(rows),executions=len(rows)*3)))
    return result


if __name__=='__main__':
    import argparse
    parser=argparse.ArgumentParser();parser.add_argument('--stage');args=parser.parse_args();run(args.stage)
