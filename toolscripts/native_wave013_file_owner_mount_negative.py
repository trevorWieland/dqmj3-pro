import ctypes

import native_wave013_file_owner_full_build as build_tools
import native_wave013_file_owner_mount_runtime as runtime
import native_wave013_file_owner_mount_native as native
from native_wave013_file_owner_mount_compare import compare,SemanticMismatch
from native_wave013_file_owner_mount_mutations import mutations
from native_wave013_file_owner_mount_provider import Provider
from native_wave013_file_owner_mount_romfs import build as romfs
from native_wave013_common import ROOT,record


def controls(folder,reference_image,provider,abi,data,service_dll,receipts):
    rows=[]
    for name,filename,before,after,specification in mutations():
        current=folder/name;current.mkdir(parents=True,exist_ok=True)
        source_path=ROOT/'src/native/wave013'/filename
        text=source_path.read_text()
        if text.count(before)!=1:raise ValueError('Mount semantic mutation no longer has one source site: '+name)
        changed=current/filename;changed.write_text(text.replace(before,after));override={filename:changed}
        graph=build_tools.arm(current/'arm',receipts,override)
        kernel=Provider(service_dll,romfs({})['image'],open_result=ctypes.c_int(specification.get('mount_result',0)).value)
        original=runtime.execute(provider,specification,abi['arm'],data,reference_image,seed=47,thumb=True,flags=15,kernel_provider=kernel)
        actual=runtime.execute(graph,specification,abi['arm'],data,seed=47,thumb=True,flags=15)
        try:compare(actual,original)
        except SemanticMismatch as error:arm={**error.details,'rejected':True}
        else:raise RuntimeError('Mount ARM wrong source escaped: '+name)
        library_path=build_tools.windows(current/'windows',receipts,override);library=ctypes.CDLL(str(library_path))
        try:native.execute(library,specification,original,abi['windows'],seed=47)
        except RuntimeError as error:
            if not hasattr(error,'details'):raise
            windows={**error.details,'rejected':True}
        else:raise RuntimeError('Mount native wrong source escaped: '+name)
        rows.append({'name':name,'changedSource':record(changed),'arm':arm,'windows':windows,'windowsDll':record(library_path)})
        print('mount negative passed '+name,flush=True)
    return rows
