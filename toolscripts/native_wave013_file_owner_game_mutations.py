def mutations():
    fresh={'game_operation':'initialize','registered':0,'sdk_constructor':True,'instruction_limit':100000}
    query={'game_operation':'check','candidates':['a'],'selection_input':1,'language':1,'regions':[1,1]}
    before='        const PatternGameFilterServices *services = pattern_game_filter_services();\n        PatternFileOwner *fresh = services->allocate_owner(services->context);\n        if (fresh != (void *)0)\n            fresh = fn_004c4358(fresh);\n        PatternFileOwner *prior = filter->owner;'
    after='        const PatternGameFilterServices *services = pattern_game_filter_services();\n        PatternFileOwner *prior = filter->owner;\n        PatternFileOwner *fresh = services->allocate_owner(services->context);\n        if (fresh != (void *)0)\n            fresh = fn_004c4358(fresh);'
    return [
        ('wrong-factory-return','pattern_file_owner_game.c','    return 1;','    return 0;',1,fresh),
        ('old-slot-before-allocation','pattern_file_owner_game.c',before,after,1,{**fresh,'reentry_mode':1}),
        ('skip-destroyed-slot-clear','pattern_file_owner_game.c',
            'owner->operations->destroy(owner);\n            filter->owner = (void *)0;',
            'owner->operations->destroy(owner);',1,{'game_operation':'destroy','registered':1}),
        ('ignore-rule-flag','pattern_file_owner_game_check.c','flag != 0 || fn_004c3b1c(text) > 5',
            'fn_004c3b1c(text) > 5',2,query),
        ('wrong-numeric-threshold','pattern_file_owner_game_check.c','fn_004c3b1c(text) > 5',
            'fn_004c3b1c(text) > 6',2,{**query,'candidates':['123456']}),
        ('normalize-away-superscript-i','pattern_file_owner_game_count.c','unit - 0x2070u <= 9',
            'unit - 0x2070u <= 0',1,{**query,'candidates':['\u2071'*6]}),
    ]
