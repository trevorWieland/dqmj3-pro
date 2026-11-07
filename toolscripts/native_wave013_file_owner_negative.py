import ctypes

import native_wave013_file_owner_full_build as build_tools
import native_wave013_file_owner_runtime as runtime
import native_wave013_file_owner_native as native
from native_wave013_file_owner_compare import compare,projection,SemanticMismatch
from native_wave013_file_owner_mutations import mutations,apply
from native_wave013_common import ROOT,record


def controls(folder,reference_image,provider,abi,data,receipts):
    rows=[]
    for name,filename,before,after,specification in mutations():
        current=folder/name;current.mkdir(parents=True,exist_ok=True)
        source_path=ROOT/'src/native/wave013'/filename
        changed=current/filename;changed.write_text(apply(name,source_path.read_text(),before,after))
        override={filename:changed}
        graph=build_tools.arm(current/'arm',receipts,override)
        original=runtime.execute(provider,specification,abi['arm'],data,reference_image,seed=47,thumb=True,flags=15)
        actual=runtime.execute(graph,specification,abi['arm'],data,seed=47,thumb=True,flags=15)
        try:compare(actual,original)
        except SemanticMismatch as error:arm={**error.details,'rejected':True}
        else:raise RuntimeError('Owner ARM wrong source escaped: '+name)
        library_path=build_tools.windows(current/'windows',receipts,override)
        library=ctypes.CDLL(str(library_path));binding=__import__('native_wave013_nfa_data').bind_windows(library,data)
        try:native.execute(library,binding,specification,original,abi['windows'],seed=47)
        except SemanticMismatch as error:windows={**error.details,'rejected':True}
        else:raise RuntimeError('Owner native wrong source escaped: '+name)
        row={'name':name,'changedSource':record(changed),'arm':arm,'windows':windows,
            'mutatedObject':graph['functions']['fn_'+('004c4358' if name=='constructor-flag' else '004c42fc' if name=='skip-unmount' else
                '004c43a8' if name in ['skip-final-free','skip-owner-release'] else '004c3e74')]['objectOrigin']}
        if name=='delayed-clear-same-final':
            value=projection(actual,original)
            observed={i for item in actual['layout']['fields'] if item['name'].startswith('backend.cfg.')
                for i in range(item['offset'],item['offset']+item['size'])}
            differences={i for i,(a,b) in enumerate(zip(value.expected,actual['after'])) if a!=b}
            if not differences or not differences<=observed or actual['result']!=original['result']:
                raise RuntimeError('Delayed-clear observer control changed final game state or escaped trace')
            row['sameFinalGameAndProviderState']=True
            row['onlyIndependentConfigurationFlagObservationDiffers']=True
        rows.append(row)
        print('owner negative passed '+name,flush=True)
    return rows
