TAGS = (0x05000002, 0x08002000, 0x08000040)


def cases():
    result = []
    for old in range(3):
        for incoming in range(3):
            for count in (1, 0x80000001):
                result.append({'operation': 0, 'old_kind': old, 'new_kind': incoming, 'initial_count': count})
        result.append({'operation': 0, 'old_kind': old, 'new_kind': 0, 'initial_count': 3, 'alias': 1})
    for size, capacity in ((0, 0), (0, 4), (1, 4), (4, 4), (1, 8), (4, 8)):
        for requested in (0, 1, 4, 7):
            for fill in range(3):
                result.append({'operation': 1, 'size': size, 'capacity': capacity, 'requested': requested, 'new_kind': fill})
        result.append({'operation': 2, 'size': size, 'capacity': capacity})
    result += [{'operation': 2, 'size': 4, 'capacity': 4, 'callback_action': action} for action in (1, 2)]
    return [dict({'old_kind': 0, 'new_kind': 0, 'alias': 0, 'initial_count': 0, 'size': 0, 'capacity': 0, 'callback_action': 0,
                  'requested': 0}, **row) for row in result]


def model(case, index):
    old, new = case['old_kind'], case['new_kind']
    counts = [case['initial_count'] if old == 1 else 0, case['initial_count'] if old == 2 else 0, 7, 7]
    destination = (TAGS[old], old if old else 17)
    incoming = (TAGS[new], 2 + new if new else 17)
    if case['alias']:
        incoming = destination
    callback = [0] * 5
    services = [0] * 5
    action = case['callback_action']

    def release(value):
        nonlocal size, capacity, values, action
        if value[0] & 0x08000000:
            node = value[1] - 1
            counts[node] = (counts[node] - 1) & 0xffffffff
            if not counts[node]:
                callback[:] = [callback[0] + 1, 1 if node in (0, 2) else 2, 0, destination[0],
                               counts[incoming[1] - 1] if incoming[0] & 0x08000000 else 0]
                if action == 1:
                    size, values = 1, values[:1]
                elif action == 2:
                    size, capacity, values = 4, 8, [(TAGS[0], 17), (TAGS[0], 17), (TAGS[2], 4), (TAGS[0], 17)]
                action = 0

    size, capacity = case['size'], case['capacity']
    values = []
    if case['operation']:
        counts[0] = counts[1] = 0
        for position in range(size):
            kind = 1 if position % 3 == 0 else 2 if position % 3 == 1 else 0
            values.append((TAGS[kind], kind if kind else 17))
            if kind:
                counts[kind - 1] += 1
    if case['operation'] == 0:
        previous = destination
        if incoming[0] & 0x08000000:
            counts[incoming[1] - 1] = (counts[incoming[1] - 1] + 1) & 0xffffffff
        destination = incoming
        release(previous)
    elif case['operation'] == 1:
        requested = case['requested']
        if requested > capacity:
            services[:3] = [1, capacity, requested]
            capacity = requested
        if requested < size:
            for value in values[requested:]:
                release(value)
            values = values[:requested]
        else:
            for unused in range(size, requested):
                values.append(incoming)
                if incoming[0] & 0x08000000:
                    counts[incoming[1] - 1] += 1
        size = requested
    elif capacity:
        position = 0
        while position < size:
            release(values[position])
            position += 1
        services[3:] = [1, capacity]
    value_hash = 0
    for tag, value in values:
        value_hash = ((value_hash * 33 + tag) * 33 + value) & 0xffffffff
    return {'case': index, 'returned': 1, 'destinationType': destination[0], 'destinationValue': destination[1],
            'counts': counts, 'size': size, 'capacity': capacity, 'valueHash': value_hash, 'canaries': 1,
            'callback': callback, 'services': services}
