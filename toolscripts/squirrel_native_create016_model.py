NULL, INTEGER, FLOAT, PROTOTYPE, NATIVE = 0x01000001, 0x05000002, 0x05000004, 0x08002000, 0x08000200


def cases():
    return [{'captures': captures, 'flags': flags, 'cleanup': cleanup}
            for captures in (0, 1, 2, 4, 5, 8, 9) for flags in range(8) for cleanup in range(2)]


def expected(case):
    captures, flags, cleanup = (case[key] for key in ('captures', 'flags', 'cleanup'))
    top = captures + 2
    initial_top = top
    objects = [(INTEGER, 7), (INTEGER, 11)] + [(PROTOTYPE, 3) if not index & 1 else (FLOAT, 0x7fc00001 + index)
                                             for index in range(captures)] + [(NULL, 0)]
    references = max((captures + 1) // 2, 1)
    chain = 2 if flags & 2 else 0
    events = [[1, 1, top, chain, 0xffffffff, references, *objects[top - 1]]]
    chain = 1
    outers, capacity, reallocations = [], 0, 0
    for index in range(captures):
        if len(outers) == capacity:
            capacity = capacity * 2 if capacity else 4
            kind, value = objects[top - 1]
            if flags & 4 and not kind & 0x08000000:
                objects[top - 1] = (kind, value ^ 0x01020304)
            events.append([2, capacity, top, 1, 0, references, *objects[top - 1]])
            reallocations += 1
        outers.append(objects[top - 1])
        top -= 1
        objects[top] = (NULL, 0)
    objects[top] = (NATIVE, 1)
    top += 1
    root_references, root_table, prototype_table, resident_previous, disposals = 1, 1, 1, int(bool(flags & 2)), 0
    if cleanup:
        top -= 1
        objects[top] = (NULL, 0)
        chain = 2 if flags & 2 else 0
        root_references = root_table = resident_previous = 0
        for kind, value in outers:
            if kind == PROTOTYPE:
                references -= 1
                if not references:
                    prototype_table = 0
                    events.append([3, 3, top, chain, 0, 0, *objects[top - 1]])
                    disposals += 1
        if capacity:
            identifier = {4: 4, 8: 5, 16: 6}[capacity]
            events.append([3, identifier, top, chain, 0, references, *objects[top - 1]])
            disposals += 1
        events.append([3, 1, top, chain, 0, references, *objects[top - 1]])
        disposals += 1
    words = [0, 0, top, 2 if flags & 1 else 1, chain, 0, root_references, root_table, 0, 1, 1,
             len(outers), capacity, references, prototype_table, resident_previous, 1, reallocations,
             disposals, len(events), initial_top]
    return words + [value for pair in outers + objects for value in pair] + [value for event in events for value in event]
