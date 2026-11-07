import ctypes

import native_wave013_file_owner_game_build as build_tools
import native_wave013_file_owner_game_runtime as runtime
import native_wave013_file_owner_game_native as native
import native_wave013_nfa_data as unicode_services
from native_wave013_file_owner_game_compare import compare,SemanticMismatch,projection
from native_wave013_file_owner_game_mutations import mutations
from native_wave013_file_owner_mount_provider import Provider
from native_wave013_file_owner_mount_romfs import build as romfs
from native_wave013_common import ROOT,record


def controls(folder,reference,provider,abi,data,service_dll,receipts):
    rows=[]
    for name,filename,before,after,count,spec in mutations():
        current=folder/name;current.mkdir(parents=True,exist_ok=True)
        source_path=ROOT/'src/native/wave013'/filename;text=source_path.read_text()
        if text.count(before)!=count:raise ValueError('Game source mutation site count differs: '+name)
        changed=current/filename;changed.write_text(text.replace(before,after));override={filename:changed}
        graph=build_tools.arm(current/'arm',receipts,override)
        kernel=Provider(service_dll,romfs({})['image'],open_result=ctypes.c_int(spec.get('mount_result',0)).value)
        original=runtime.execute(provider,spec,abi['arm'],data,reference,seed=47,thumb=True,flags=15,kernel_provider=kernel)
        actual=runtime.execute(graph,spec,abi['arm'],data,seed=47,thumb=True,flags=15)
        try:compare(actual,original)
        except SemanticMismatch as error:arm={**error.details,'rejected':True}
        else:raise RuntimeError('Game wrong source escaped ARM: '+name)
        dll=build_tools.windows(current/'windows',receipts,override);library=ctypes.CDLL(str(dll))
        binding=unicode_services.bind_windows(library,data)
        try:native.execute(library,binding,spec,original,abi['windows'],seed=47)
        except SemanticMismatch as error:windows={**error.details,'rejected':True}
        else:raise RuntimeError('Game wrong source escaped Windows: '+name)
        row={'name':name,'changedSource':record(changed),'arm':arm,'windows':windows,'windowsDll':record(dll)}
        if name=='old-slot-before-allocation':
            value=projection(actual,original)
            fields=[field for field in actual['layout']['fields'] if field['name'].startswith('owner.') or field['name']=='game.slot']
            if any(value.expected[field['offset']:field['offset']+field['size']]!=actual['after'][field['offset']:field['offset']+field['size']] for field in fields):
                raise RuntimeError('Reentry control did not retain the same new owner and caller slot')
            row['sameNewOwnerAndCallerSlot']=True
            row['interveningOwnerReleaseAndIndependentTraceDiffer']=True
        rows.append(row);print('game negative passed '+name,flush=True)
    return rows
