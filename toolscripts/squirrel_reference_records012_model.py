TAGS = (0x05000002, 0x08002000, 0x08000040)


def cases():
    return [{'group': group, 'size': size, 'capacity': capacity, 'requested': requested, 'fill_kind': fill}
            for group in (0, 1) for size, capacity in ((0, 0), (0, 4), (1, 4), (4, 4), (1, 8), (4, 8))
            for requested in (0, 1, 4, 7) for fill in (0, 1, 2)]


def tagged(kind, incoming=False):
    return TAGS[kind], (2 if incoming else 0) + kind if kind else 17


def old_record(group, position):
    primary = tagged((position + 1) % 3)
    return [primary] if not group else [primary, tagged(2 if position % 2 == 0 else 1)]


def fill_record(group, kind):
    primary = tagged(kind, True)
    return [primary] if not group else [primary, tagged(2 if kind == 1 else 1 if kind == 2 else 0, True)]


def model(case, index):
    records = [old_record(case['group'], position) for position in range(case['size'])]
    fill = fill_record(case['group'], case['fill_kind'])
    counts = [0, 0, 7, 7]
    for record in records:
        for tag, value in record:
            if tag & 0x08000000:
                counts[value - 1] += 1
    callback = [0] * 5
    capacity = case['capacity']
    services = [0] * 3
    if case['requested'] > capacity:
        services = [1, capacity, case['requested']]
        capacity = case['requested']
    if case['requested'] < len(records):
        for record in records[case['requested']:]:
            for tag, value in reversed(record):
                if tag & 0x08000000:
                    counts[value - 1] -= 1
                    if counts[value - 1] == 0:
                        callback = [callback[0] + 1, 1 if value in (1, 3) else 2, 0, TAGS[0],
                                    counts[fill[0][1] - 1] if fill[0][0] & 0x08000000 else 0]
        records = records[:case['requested']]
    else:
        for unused in range(case['size'], case['requested']):
            records.append(fill)
            for tag, value in fill:
                if tag & 0x08000000:
                    counts[value - 1] += 1
    object_hash, record_hash = 0, 0
    for position, record in enumerate(records):
        for tag, value in record:
            object_hash = ((object_hash * 33 + tag) * 33 + value) & 0xffffffff
        if not case['group']:
            values = (17, 19, 0xffffffff, 2, 0, 3, 4) if position >= case['size'] else (position + 1, position + 3, position + 5, 2, 0, 3, 4)
            for value in values:
                record_hash = (record_hash * 33 + value) & 0xffffffff
    return {'case': index, 'counts': counts, 'size': case['requested'], 'capacity': capacity,
            'objectHash': object_hash, 'recordHash': record_hash, 'callback': callback, 'services': services, 'canaries': 1}
