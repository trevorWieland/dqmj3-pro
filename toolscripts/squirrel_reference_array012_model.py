import squirrel_reference_mixed012_model as mixed


NULL, ARRAY = 0x01000001, 0x08000040


def cases():
    return [{'variant': variant, 'requested': requested, 'weak_order': order, 'failed': failed}
            for variant in range(4) for requested in (0, 1, 2, 4, 9) for order in range(3) for failed in range(2)]


def expected(case):
    variant, requested, order, failed = (case[key] for key in ('variant', 'requested', 'weak_order', 'failed'))
    initial_proto = 2 if variant & 1 else 1
    exists, has_weak = not failed, bool(order and not failed)
    cache = int(has_weak and order == 2)
    final_weak = (ARRAY, 10) if has_weak and order == 1 else (NULL, 0) if has_weak else (0, 0)
    events = []
    def event(identifier, units, chain, root_refs, prototype_refs, array_refs, weak_value=None, cache_value=None):
        values = final_weak if weak_value is None else weak_value
        events.append([identifier, units, chain, root_refs, prototype_refs, array_refs,
                       *values, cache if cache_value is None else cache_value])
    if has_weak and order == 1:
        event(12, 1, 10, 1, initial_proto, 1, (ARRAY, 10), 0)
    graph = mixed.expected(variant, 0)
    def graph_events():
        stage_weak = (ARRAY, 10) if has_weak else (0, 0)
        for offset in range(12, len(graph), 8):
            identifier, units, chain, root_refs, child_refs, prototype_refs, tag, vector_size = graph[offset:offset + 8]
            event(identifier, units, chain, root_refs, prototype_refs, 0,
                  stage_weak if exists and requested else None, int(has_weak and order != 1))
    if exists and requested:
        graph_events()
        event(11, requested, 0, 0, 0, 0, (ARRAY, 10) if has_weak else (0, 0), int(has_weak and order != 1))
    if exists:
        alive = int(not requested)
        event(10, 1, alive, alive, initial_proto if alive else 0, 0)
        if has_weak and order == 2:
            event(12, 1, alive, alive, initial_proto if alive else 0, 0)
    if not exists or not requested:
        graph_events()
    words = [0, variant, requested, order, failed, int(exists), 1, int(exists and requested != 0), 0,
             int(exists), requested if exists else 0, requested if exists else 0, cache, int(has_weak), 0,
             int(has_weak), *final_weak, NULL, NULL, len(events)]
    return words + [value for record in events for value in record] + [len(graph)] + graph
