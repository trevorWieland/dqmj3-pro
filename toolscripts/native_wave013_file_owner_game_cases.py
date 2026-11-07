def cases():
    rows=[{'name':'slot-constructor','specification':{'game_operation':'construct','registered':0}}]
    for mode in [0,1,2]:
        for result in [0,0xd8804470,0x80000001]:
            rows.append({'name':'factory-reentry-'+str(mode)+'-status-'+hex(result),
                'specification':{'game_operation':'initialize','registered':0,'sdk_constructor':True,
                    'reentry_mode':mode,'mount_result':result,'instruction_limit':100000}})
    rows.extend([{'name':'factory-existing','specification':{'game_operation':'initialize','registered':0,'existing':True}},
        {'name':'destroy-mounted','specification':{'game_operation':'destroy','registered':1}},
        {'name':'destroy-unmounted','specification':{'game_operation':'destroy','registered':0,'mounted':0}},
        {'name':'destroy-empty-slot','specification':{'game_operation':'destroy','registered':0,'empty':True}}])
    texts=['a','z','longalphabetname','12345','123456','a123456','z12345',
        '\u2071'*5,'\u2071'*6,'\u24ea'*6,'\u24ff'*6,'\uff10'*6,
        '\u2160\u2170\u2460\u2474\u2488\u2776','\ud800\udc00z']
    for index,text in enumerate(texts):
        rows.append({'name':'check-'+str(index),'specification':{'game_operation':'check','candidates':[text],
            'selection_input':1,'language':1,'regions':[1,1]}})
    return rows
