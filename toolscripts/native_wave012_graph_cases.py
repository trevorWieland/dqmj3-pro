def fixtures():
    cases = []
    for ranges in [[], [[0, 0]], [[0, 10]], [[5, 5], [8, 10]], [[32767, 32769], [65534, 65535]]]:
        for point in [0, 1, 5, 7, 8, 9, 10, 11, 32767, 32768, 32769, 65534, 65535]:
            for free in [0, 2, None]:
                cases.append({'operation': 'erase', 'ranges': ranges, 'point': point, 'free_slots': free})
    for operation in ['copy_label', 'copy_wrapper']:
        for kind in [0, 1, 2, 3, 4, 255]:
            for ranges in [[], [[0, 10]], [[1, 2], [32768, 65535]]]:
                for free in [0, 1, None]:
                    cases.append({'operation': operation, 'kind': kind, 'ranges': ranges,
                                  'old_ranges': [[3, 3]], 'free_slots': free})
        for kind in [1, 2, 3, 4]:
            cases.append({'operation': operation, 'kind': kind, 'ranges': [[3, 5]],
                          'old_ranges': [[1, 2]], 'provided_arena': False})
        cases.append({'operation': operation, 'self_copy': True, 'old_ranges': [[1, 2], [5, 9]]})
    for count in [0, 1, 2, 4, 8, 17, 32]:
        edges = [[index, (index + 1) % count, 1, 0, []] for index in range(count)]
        for initial in [[1] + [0] * (count - 1) if count else [], [7] * count, [0] * count]:
            cases.append({'operation': 'closure', 'count': count, 'edges': edges, 'members': initial})
    for operation in ['populate', 'intern']:
        edges = [[0, 1, 2, 97, []], [0, 2, 3, 0, [[65, 90], [97, 122]]],
                 [1, 3, 1, 0, []], [2, 0, 4, 3, []]]
        for initial in [[0, 0, 0, 0], [1, 0, 0, 0], [0, 1, 0, 0], [1, 1, 1, 1]]:
            for free in [0, 1, 2, 3, 4, 5, 6, 8, 12, 24, None]:
                cases.append({'operation': operation, 'count': 4, 'edges': edges, 'members': initial, 'free_slots': free})
            if operation == 'intern':
                cases.append({'operation': operation, 'count': 4, 'edges': edges, 'members': initial,
                              'existing': [[0, 1, 0, 0], initial]})
    patterns = [[], [[0, 2, 97, []]], [[0, 2, 97, []], [1, 2, 97, []]],
                [[0, 2, 97, []], [1, 2, 98, []]],
                [[0, 2, 97, []], [1, 3, 0, [[97, 97]]]],
                [[0, 2, 97, []], [1, 3, 0, [[95, 99]]]],
                [[2, 4, 7, []], [0, 2, 32768, []], [1, 3, 0, [[32767, 32769]]]],
                [[0, 2, 65535, []], [1, 2, 65535, []], [2, 2, 0, []]]]
    for pending in patterns:
        for free in [0, 1, 2, 3, 4, 5, 6, 8, 12, 24, None]:
            for epsilon in [False, True]:
                edges = [[0, 1, 1, 0, []], [1, 2, 1, 0, []], [2, 0, 1, 0, []]] if epsilon else []
                cases.append({'operation': 'transform', 'count': 4, 'pending': pending, 'edges': edges,
                              'free_slots': free})
    for count in [0, 1, 3, 17, 32]:
        pending = [[0, 2, 65535, []]] if count else []
        for operation in ['transform', 'intern', 'populate', 'closure']:
            cases.append({'operation': operation, 'count': count, 'pending': pending})
    cases.append({'operation': 'erase', 'ranges': [[1, 5], [3, 7]], 'point': 3})
    for left in range(4):
        for right in range(4):
            for count in [0, 1, 2, 3, 4, 5, 7, 8, 16, 31, 32, 63, 64, 65, 128]:
                cases.append({'operation': 'copy_bytes', 'bytes': count, 'left_align': left,
                              'right_align': right, 'different': count - 1})
                if left == right == 0:
                    cases.append({'operation': 'copy_aligned', 'bytes': count, 'different': count - 1})
                for different in sorted({-1, 0, count // 2, count - 1}):
                    if different >= count:
                        continue
                    for positive in [True, False]:
                        cases.append({'operation': 'compare', 'bytes': count, 'left_align': left,
                                      'right_align': right, 'different': different, 'positive': positive})
    for count in [4, 8, 12, 16]:
        for different in range(count):
            for left, right in [(0, 255), (250, 1)]:
                cases.append({'operation': 'compare', 'bytes': count, 'different': different,
                              'left_byte': left, 'right_byte': right})
    return cases
