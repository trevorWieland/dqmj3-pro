import random


def edge(kind, destination, value=0, ranges=None):
    return {'kind': kind, 'destination': destination, 'value': value, 'ranges': ranges or []}


def state(result, edges=None):
    return {'result': result, 'edges': edges or []}


def fixtures():
    result = []
    inputs = [[], [97], [32], [9], [10], [13], [13, 10], [0x85], [0x2028], [0x2029],
              [0x3000], [0xa0], [0x2003], [97, 32, 98], [0xd800, 0xdc00], [65535]]
    for terminal in [-128, -1, 0, 1, 127]:
        for text in inputs:
            result.append({'states': [state(terminal, [edge(3, 0, ranges=[(1, 65535)])])], 'initial': 0, 'text': text})
    for bit in range(7):
        for text in inputs:
            states = [state(-7, [edge(4, 1, bit), edge(3, 0, ranges=[(1, 65535)])]),
                      state(19, [edge(3, 1, ranges=[(1, 65535)])])]
            result.append({'states': states, 'initial': 0, 'text': text})
    newline = [state(-3, [edge(4, 1, 1), edge(3, 0, ranges=[(1, 65535)])]),
               state(5, [edge(4, 2, 0), edge(2, 1, 13), edge(2, 1, 10), edge(2, 1, 0x85),
                         edge(2, 1, 0x2028), edge(2, 1, 0x2029)]), state(17)]
    for text in [[13], [10], [13, 10], [0x85], [0x2028], [0x2029], [13, 97], [97, 13, 10]]:
        result.append({'states': newline, 'initial': 0, 'text': text})
    overlap = [state(0, [edge(3, 1, ranges=[(0, 255)]), edge(3, 2, ranges=[(1, 65535)])]),
               state(5), state(9)]
    for text in inputs:
        result.append({'states': overlap, 'initial': 0, 'text': text})
    for terminal in [-128, 127]:
        states = [state(0, [edge(4, index + 1, 4)]) for index in range(15)]
        states.append(state(terminal, [edge(3, 0, ranges=[(1, 65535)])]))
        result.append({'states': states, 'initial': 0, 'text': [97] * 64})
    result.append({'states': [state(0, [edge(2, 1, index + 2) for index in range(15)] +
                                           [edge(3, 1, ranges=[(1, 1)])]), state(23)], 'initial': 0, 'text': [1]})
    result.append({'states': [state(0, [edge(3, 1, ranges=[(index, index) for index in range(15)] +
                                                                    [(65535, 65535)])]), state(-17)], 'initial': 0, 'text': [65535]})
    states = []
    for index in range(16):
        edges = [edge(3, (index + 1) % 16, ranges=[(65535, 65535)] * 16) for _ in range(15)]
        edges.append(edge(3, (index + 1) % 16, ranges=[(65535, 65535)] * 15 + [(1, 65534)]))
        states.append(state(index - 8, edges))
    result.append({'states': states, 'initial': 0, 'text': [97] * 64})
    rng = random.Random(101001)
    alphabet = [1, 9, 10, 13, 32, 33, 65, 97, 0x85, 0xa0, 0x2003, 0x2028, 0x2029, 0x3000, 0xd800, 0xdc00, 65535]
    for _ in range(128):
        count = rng.randrange(1, 9)
        states = []
        for index in range(count):
            edges = []
            for _ in range(rng.randrange(7)):
                kind = rng.choice([2, 3, 4, 0, 7])
                if kind == 4 and index + 1 < count:
                    edges.append(edge(4, rng.randrange(index + 1, count), rng.randrange(7)))
                elif kind == 2:
                    edges.append(edge(2, rng.randrange(count), rng.choice(alphabet)))
                elif kind == 3:
                    ranges = [(rng.randrange(65536), rng.randrange(65536)) for _ in range(rng.randrange(5))]
                    edges.append(edge(3, rng.randrange(count), ranges=ranges))
                else:
                    edges.append(edge(0, rng.randrange(count)))
            states.append(state(rng.randrange(-128, 128), edges))
        result.append({'states': states, 'initial': rng.randrange(count),
                       'text': [rng.choice(alphabet) for _ in range(rng.randrange(13))]})
    return result


def controls():
    result = []
    for bit in [*range(32), 32, 33, 127, 128, 255, 256, 257, 287, 288, 65535]:
        flag = 1 << (bit & 255) if (bit & 255) < 32 else 0
        for mask in [0, flag, 0xffffffff, flag ^ 0xffffffff]:
            case = {'states': [state(0, [edge(4, 1, bit)]), state(1)], 'initial': 0, 'text': []}
            result.append((case, mask))
    return result
