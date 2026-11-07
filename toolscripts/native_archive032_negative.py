import ctypes

from native_wave013_common import ROOT,record
from native_archive032_build import arm,windows,a64
from native_archive032_compare import compare,SemanticMismatch
from native_archive032_oracle import execute,windows as native
from native_archive032_a64 import execute as model64
from native_archive032_fixtures import pack


def definitions():
    deleting='void fn_005f5d14(ArchiveView *view)\n{\n    fn_005f5d3c(view);\n    active_archive_services->release(active_archive_services->context, view);\n}'
    reversed='void fn_005f5d14(ArchiveView *view)\n{\n    ArchiveImage *image = view->image;\n    view->operations = &archive_operations;\n    active_archive_services->release(active_archive_services->context, view);\n    active_archive_services->release(active_archive_services->context, image);\n}'
    return [
        ('logical-instead-of-arithmetic-shift','archive_lookup.c','return value >> bits | sign << (32 - bits);',
            'return value >> bits;','fn_00183688',{'image':pack([b'\x81xy']), 'query':b'\x81xy'}),
        ('wrong-trailer-index','archive_lookup.c','return archive_word(entry + 4);',
            'return archive_word(entry + 4) ^ 1u;','fn_00183688',{'image':pack([b'a',b'b']), 'query':b'a'}),
        ('member-key-instead-of-size','archive_members.c','return archive_word(image + 32 + index * 16 + 4);',
            'return archive_word(image + 32 + index * 16 + 12);','fn_006ede84',{'image':pack([b'a']), 'query':b'a'}),
        ('null-bind-retains-old-image','archive_owner.c','view->image->bytes = bytes;',
            'view->image->bytes = checked;','fn_005f5cac',{'image':pack([b'a']),'null_bind':True}),
        ('release-view-before-holder','archive_owner.c',deleting,reversed,'fn_005f5d14',{'image':pack([b'a'])})]


def run(folder,source,reference):
    rows=[];receipts=[]
    for label,file,before,after,name,specification in definitions():
        original=ROOT/'src/native/wave032'/file;text=original.read_text()
        if text.count(before)!=1:raise ValueError('Archive returning-control mutation is not unique')
        output=folder/label;output.mkdir(parents=True,exist_ok=True);changed=output/file;changed.write_text(text.replace(before,after))
        override={file:changed};arm_graph=arm(output/'arm',receipts,override)
        dll=windows(output/'windows',receipts,override);library=ctypes.CDLL(str(dll));a64_graph=a64(output/'a64',receipts,override)
        target=execute(source,name,specification,reference)
        verdicts={}
        for platform,actual in [('arm',execute(arm_graph,name,specification)),
            ('windows',native(library,name,specification)),('a64',model64(a64_graph,name,specification))]:
            try:compare(actual,target)
            except SemanticMismatch as error:
                if not error.details['returnedNormally'] or not error.details['immutableMemoryPreserved']:raise
                verdicts[platform]={**error.details,'rejectedSemantically':True}
            else:raise ValueError('Archive normally returning mutation passed')
        rows.append({'name':label,'function':name,'originalSource':record(original),'mutation':record(changed),'profiles':verdicts})
    return rows,receipts
