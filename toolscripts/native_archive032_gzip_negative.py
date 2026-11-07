import ctypes

from native_wave013_common import ROOT,record
import native_archive032_gzip_build as build
from native_archive032_gzip_oracle import execute,windows
from native_archive032_gzip_a64 import execute as a64_execute
from native_archive032_gzip_cases import encode
from native_archive032_gzip_compare import compare


def definitions():
    image=encode(b'bounded resource gzip control '*17)
    return [
        ('constructor-wrong-input-count','gzip_owner.c','fresh->input_bytes = 0;',
            'fresh->input_bytes = 1;','fn_005f5f90',{'input':image,'fresh':True}),
        ('setter-reads-crc-instead-of-size','gzip_owner.c','archive_word(input + bytes - 4)',
            'archive_word(input + bytes - 8)','fn_005f5d60',{'input':image}),
        ('clear-retains-nonzero-input-count','gzip_owner.c','view->buffer->input_bytes = 0;',
            'view->buffer->input_bytes = 1;','fn_005f5d98',{'input':image}),
        ('inflate-wrong-success-status','gzip_inflate.c','        return 1;',
            '        return 0;','fn_005f5eac',{'input':image}),
        ('release-skips-owned-output','gzip_owner.c','if (buffer->owns_output != 0)',
            'if (buffer->owns_output == 0)','fn_005f601c',{'input':image,'owns':1,'old_output':True}),
        ('inflate-frees-output-after-codec-state','gzip_inflate.c',
            '    if (buffer->owns_output != 0)\n        services->release(services->context, buffer->output);\n    buffer->output = (void *)0;\n    inflateEnd(&stream);',
            '    unsigned char *retired = buffer->output;\n    buffer->output = (void *)0;\n    inflateEnd(&stream);\n    if (buffer->owns_output != 0)\n        services->release(services->context, retired);',
            'fn_005f5eac',{'input':image[:-8]+bytes([image[-8]^1])+image[-7:],'owned':True}),
        ('inflate-leaks-codec-state','gzip_inflate.c','        inflateEnd(&stream);\n        return 1;',
            '        return 1;','fn_005f5eac',{'input':image})]


def run(folder,reference,source):
    rows=[];receipts=[]
    for profile in ['modern14','historical127']:
        build.configure(profile)
        for label,file,before,after,name,spec in definitions():
            original=ROOT/'src/native/wave036'/file;text=original.read_text()
            if text.count(before)!=1:raise ValueError('Gzip returning mutation is not unique')
            output=folder/profile/label;output.mkdir(parents=True,exist_ok=True)
            changed=output/file;changed.write_text(text.replace(before,after));override={file:changed}
            arm=build.arm(output/'arm',receipts,override);dll=build.windows(output/'windows',receipts,override)
            library=ctypes.CDLL(str(dll));a64=build.a64(output/'a64',receipts,override)
            target=execute(source,name,spec,reference);profiles={}
            for platform,candidate in [('arm',execute(arm,name,spec)),('windows',windows(library,name,spec)),
                    ('a64',a64_execute(a64,name,spec))]:
                verdict=compare(target,candidate)
                if verdict['equivalent']:raise ValueError('Normally returning gzip mutation passed semantic observer')
                profiles[platform]={'returnedNormally':candidate['returnedNormally'],
                    'immutableMemoryPreserved':candidate['immutableMemoryPreserved'],'rejectedSemantically':True,
                    'differentFields':verdict['differentFields'],'comparison':verdict}
            rows.append({'name':label,'dependencyProfile':profile,'function':name,'originalSource':record(original),
                'mutation':record(changed),'profiles':profiles})
    return rows,receipts
