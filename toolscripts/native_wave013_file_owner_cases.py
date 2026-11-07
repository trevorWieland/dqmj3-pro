def cases():
    rows=[]
    def add(name,**values):rows.append({'name':name,'specification':values})
    for identifier,(regions,language) in enumerate([([0,0],0),([1,1],1),([1,1],2),([1,1],5),([2,2],1),
        ([2,2],2),([2,2],3),([2,2],4),([2,2],5),([2,2],8),([5,5],7),([4,4],6),([2,2],9),([2,2],10),
        ([1,1],9),([6,6],11),([6,1],1)]):
        add('locale-file-'+str(identifier),regions=regions,language=language,flags=[0xffffffff,0x80000000])
    for region,language in [(3,0),(255,255),(0,11),(1,255),(2,255),(4,0),(5,0),(6,1)]:
        add('fallback-'+str(region)+'-'+str(language),regions=[region,region],language=language)
    patterns=['','a','ab','a*','a+','a?','(a|b)+','[a-z]','[^a]','[a-c]+','a{1,3}','\\d+',
        'a.b','^a$','@a','\\p{L}+','[','(a','a\\']
    for index,pattern in enumerate(patterns):
        add('file-pattern-'+str(index),file_units=[0xfeff,*map(ord,pattern),10],
            candidates=['a','ab','ba','abc','1','@a',''],bypass_at_sign=index%2,flags=[0x12345678]*7)
    add('two-distinct-files',regions=[2,2],language=2,candidates=['ab','ba','x'],flags=[0xffffffff]*3,
        files={'5':{'units':[0xfeff,97,98,10]},'4':{'units':[0xfeff,98,97,10]}})
    for raw in [[],[0],[0xff],[0,0],[0xff,0xfe],[0xfe,0xff,0,97],[0xff,0xfe,97,0,10,0,88]]:
        add('raw-file-'+str(len(rows)),files={'1':{'bytes':raw}})
    for chunk in [1,2,3,5,6,7,16]:add('chunk-'+str(chunk),chunk=chunk,file_units=[0xfeff,97,98,99,10],candidates=['abc','ab'])
    add('sixteen-candidates',candidates=['a','b']*8,flags=[0xffffffff]*16)
    add('zero-candidates',candidates=[],flags=[])
    add('empty-selected-file',file_units=[],candidates=['a'])
    for operation in ['reset','delete']:
        for initialized,mounted,allocated in [(1,1,True),(1,0,True),(0,1,True),(0,0,True),(0,0,False)]:
            add(operation+'-'+str(initialized)+str(mounted)+str(int(allocated)),operation=operation,
                initialized=initialized,mounted=mounted,unallocated=not allocated,initial_file_id=231)
    for value in [0,1,127,255]:add('constructor-preserves-file-id-'+str(value),operation='construct',initial_file_id=value)
    for operation in ['validate','apply']:
        for name,values in [('normal',{}),('unallocated',{'unallocated':True}),('null-flags',{'null_flags':True}),
            ('null-candidates',{'null_candidates':True}),('over-limit',{'count':17}),('uint-max',{'count':0xffffffff})]:
            add(operation+'-'+name,operation=operation,**values)
    for index in [0,1]:
        for error in [0x80000001,0xd8804470,0xffffffff]:
            add('open-error-'+str(index)+'-'+hex(error),regions=[1,1],language=2,open_error_index=index,open_error=error)
    add('unregistered-provider',registered=0)
    return rows
