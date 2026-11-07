def cases():
    base={'game_operation':'session','unallocated':True,'initialized':0,'registered':0,'mounted':0,
        'sdk_constructor':True,'instruction_limit':1000000,'selection_input':1,'regions':[1,1],
        'language':1,'candidates':['a']}
    rows=[]
    def add(name,**fields):rows.append({'name':name,'specification':{**base,**fields}})
    add('cold-literal-hit')
    add('cold-literal-miss',candidates=['z'])
    add('cold-different-archive-payload',file_units=[0xfeff,ord('z'),10])
    add('cold-two-rules-hit-second',file_units=[0xfeff,ord('z'),10,ord('a'),10])
    add('cold-regex-closure',file_units=[0xfeff,ord('a'),ord('*'),ord('b'),10],candidates=['aaab'])
    add('cold-numeric-counter',candidates=['123456'])
    add('cold-null-query',candidates=[None])
    add('cold-empty-file',file_units=[])
    add('cold-bom-only',file_units=[0xfeff])
    add('cold-no-trailing-newline',file_units=[0xfeff,ord('a')])
    add('cold-crlf',file_units=[0xfeff,ord('a'),13,10])
    add('cold-wide-case',file_units=[0xfeff,0xff21,10],candidates=['a'])
    for region,language in [(0,0),(1,0),(1,2),(2,0),(3,1),(4,1),(5,1),(6,1)]:
        add('cold-locale-'+str(region)+'-'+str(language),regions=[region,region],language=language)
    for result in [0xd8804470,0x80000001]:add('archive-open-error-'+hex(result),mount_result=result)
    add('missing-selected-file',archive_file_ids=[])
    add('cold-reentrant-replacement',reentry_mode=1)
    add('cold-reentrant-same-candidate',reentry_mode=2)
    return rows
