from native_archive032_fixtures import cases,pack


LOOKUP=['fn_00183688','fn_00176d74','fn_006eddc0','fn_006ede48']
INDEXED=['fn_006edd88','fn_006eddec','fn_006ede0c','fn_006ede84']


def qualified():
    rows=[]
    for index,item in enumerate(cases()):
        names=LOOKUP if index%8==0 else LOOKUP[:1]
        for name in names:rows.append({'name':item['name']+'-'+name,'function':name,'specification':item['specification']})
    for mode in [0,1,2]:
        image=pack([b'a',b'b',b'c'],mode)
        for index in [0,1,2,3,0xffffffff]:
            for name in INDEXED+['fn_006edeb4']:
                rows.append({'name':'indexed-'+str(mode)+'-'+str(index)+'-'+name,'function':name,
                    'specification':{'image':image,'index':index}})
    image=pack([b'a',b'b'])
    for name in ['fn_00118624','fn_005f5cd8','fn_005f5cac','fn_005f5d3c','fn_005f5d14']:
        rows.append({'name':'ownership-'+name,'function':name,'specification':{'image':image,'fresh':name in ['fn_00118624','fn_005f5cd8']}})
    for name in ['fn_00118624','fn_005f5cd8']:
        rows.append({'name':'null-allocation-invalid-magic-'+name,'function':name,
            'specification':{'image':b'BAD!'+bytes(36),'allocator_fail':1,'fresh':True}})
    rows.extend([
        {'name':'null-bind-clears','function':'fn_005f5cac','specification':{'image':image,'null_bind':True}},
        {'name':'bad-bind-retains','function':'fn_005f5cac','specification':{'image':image,'bind_image':b'BAD!'}},
        {'name':'failed-empty-constructor','function':'fn_005f5cd8','specification':{'image':image,'allocator_fail':1,'fresh':True}},
        {'name':'empty-holder-release','function':'fn_005f5d3c','specification':{'image':image,'holder_null':True}},
        {'name':'empty-holder-delete-view','function':'fn_005f5d14','specification':{'image':image,'holder_null':True}}])
    return rows
