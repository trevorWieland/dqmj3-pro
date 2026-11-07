import ctypes

from native_wave013_common import ROOT,record
from native_wave013_file_owner_game_compare import SemanticMismatch
from native_wave027_owner_session_build import arm,windows
from native_wave027_owner_session_compare import compare
from native_wave027_owner_session_native import execute as native
import native_wave027_owner_session_runtime as runtime
import native_wave013_nfa_data as unicode_services


def mutations():
    return [
        ('wrong-payload-offset','owner_archive_lookup.c','*offset = backend->header[9] + relative;',
            '*offset = backend->header[9] + relative + 2;'),
        ('wrong-filename-component','owner_archive_services.c','const unsigned short *name = path + position;',
            'const unsigned short *name = path + position + 1;'),
        ('close-event-without-live-release','owner_archive_file.c','    file->live = 0;',
            '    (void)file;'),
        ('wrong-archive-read-offset','owner_archive_file.c','file->offset + offset, output, requested, copied);',
            'file->offset + offset + 1, output, requested, copied);'),
        ('kernel-close-before-resource-close','native_wave027_owner_session_fixture.c',
            '    owner_session_kernel_file_close(context, handle);\n    owner_session_kernel_handle_close(context, handle);',
            '    owner_session_kernel_handle_close(context, handle);\n    owner_session_kernel_file_close(context, handle);')]


def controls(folder,target,specification,arm_abi,windows_abi,unicode,seed=0):
    rows=[];receipts=[]
    for name,filename,before,after in mutations():
        original=ROOT/('toolscripts' if filename.startswith('native_') else 'src/native/wave027')/filename
        text=original.read_text()
        if text.count(before)!=1:raise RuntimeError('Session returning-control mutation is not unique')
        directory=folder/name;directory.mkdir(parents=True,exist_ok=True);changed=directory/filename
        changed.write_text(text.replace(before,after));override={filename:changed}
        source=arm(directory/'arm',receipts,override)
        actual=runtime.execute(source,specification,arm_abi,unicode,seed=seed)
        try:compare(actual,target)
        except (SemanticMismatch,ValueError) as error:
            if not actual['returnedNormally'] or not actual['immutableMemoryPreserved']:raise
            arm_result={'rejectedSemantically':True,'returnedNormally':True,'immutableMemoryPreserved':True,'reason':str(error)}
        else:raise RuntimeError('Session returning ARM mutation passed')
        dll=windows(directory/'windows',receipts,override);library=ctypes.CDLL(str(dll))
        binding=unicode_services.bind_windows(library,unicode)
        try:native(library,binding,specification,target,windows_abi,seed=seed)
        except SemanticMismatch as error:
            if not error.details['returnedNormally'] or not error.details['immutableMemoryPreserved']:raise
            windows_result=error.details
        except ValueError as error:
            if not str(error).startswith('Session native private file contract differs:'):raise
            windows_result={'rejectedSemantically':True,'returnedNormally':True,'immutableMemoryPreserved':True,'reason':str(error)}
        else:raise RuntimeError('Session returning Windows mutation passed')
        rows.append({'name':name,'mutation':record(changed),'originalSource':record(original),
            'arm':arm_result,'windows':windows_result,'normallyReturningControl':True})
        print('session returning control '+str(len(rows)),flush=True)
    return rows,receipts
