def mutations():
    return [
        ('overlap-hit', 'dfa_ranges.c', 'if (second->first <= first->last)\n                return 1;',
         'if (second->first <= first->last)\n                return 0;',
         {'range_steps':[{'insert':[0,4]},{'overlap':[[2,3]]}]}),
        ('subtraction-boundary', 'dfa_ranges.c', 'right->first = (unsigned short)(high + 1);',
         'right->first = high;', {'range_steps':[{'insert':[0,10]},{'subtraction':[[3,6]]}]}),
        ('range-membership', 'dfa_range_phase.c', 'members[destination->identifier] = 1;',
         'members[destination->identifier] = 0;', {'pattern':'[a]','candidate':'a'}),
        ('accepting-state', 'dfa_driver.c', 'result = 1;', 'result = 0;', {'pattern':'a','candidate':'a'}),
        ('list-label-kind', 'dfa_ranges.c', 'set->kind = INTERVAL_SET_LIST;',
         'set->kind = INTERVAL_SET_EPSILON;', {'pattern':'[a]','candidate':''}),
        ('constructor-count', 'dfa_driver.c', 'context->source_count = 0;',
         'context->source_count = 1;', {'compiler_constructor':True}),
    ]
