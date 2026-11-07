def cases():
    return [(variant, operation) for variant in range(4) for operation in range(3)]


def expected(variant, operation):
    ids = [2, 3]
    if variant & 1:
        ids.append(4)
    if variant & 2:
        ids.append(5)
    ids.append(1)
    if operation == 2:
        ids.append(6)
    size = int(operation == 2)
    words = [0, 1, variant, 0, 0, 0, 0, 0x05000002, size, len(ids), 1, 1]
    for item in ids:
        units = 4 if item in (4, 6) else 3 if item == 5 else 1
        words += [item, units, 0, 0, 0, 0, 0x05000002, int(operation != 0)]
    return words
