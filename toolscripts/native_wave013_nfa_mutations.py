def mutations():
    return [
        ('state-identifiers', 'nfa_state.c', 'unsigned int identifier = 0;', 'unsigned int identifier = 1;', {'pattern': 'ab'}),
        ('literal-character', 'nfa_primary.c', 'unsigned short character = builder->cursor->value.character;',
         'unsigned short character = (unsigned short)(builder->cursor->value.character + 1);', {'pattern': 'a'}),
        ('epsilon-kind', 'nfa_labels.c', 'set->kind = INTERVAL_SET_EPSILON;',
         'set->kind = INTERVAL_SET_SINGLE;', {'pattern': 'a?'}),
        ('case-equivalence', 'pattern_unicode.c', 'return group;', 'return (void *)0;', {'pattern': 'a'}),
        ('insert-first', 'range_insert.c', 'created->first = (unsigned short)first;',
         'created->first = (unsigned short)(first + 1);', {'range_steps': [{'insert': [1,5]}]}),
        ('property-ranges', 'range_properties.c', 'unsigned int remaining = index->count;',
         'unsigned int remaining = index->count == 0 ? 0 : index->count - 1;', {'pattern': '\\p{ASCII}'}),
        ('clone-destination', 'nfa_clone.c', 'void *value = target;', 'void *value = state;', {'pattern': 'a{2}'}),
        ('repeat-minimum', 'nfa_repetition.c', 'minimum < 2 && maximum != 0',
         'minimum < 1 && maximum != 0', {'pattern': 'a{1,3}'}),
        ('error-result', 'nfa_primary.c', 'return 8;', 'return 7;', {'direct_callback': 0x4c15e4}),
    ]


def read_order_mutation():
    return ('retired-map-read-order', 'nfa_clone.c',
            'IntrusiveLink *following = link->next;\n            fn_004c3994(map->entry_arena, link, 1);',
            'fn_004c3994(map->entry_arena, link, 1);\n            IntrusiveLink *following = link->next;',
            {'pattern': 'a{2}'})
