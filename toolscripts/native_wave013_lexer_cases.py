def units(text):
    return [ord(character) for character in text]


def fixtures(original, overlay):
    cases = [{'operation': 'lex', 'units': []},
             {'operation': 'lex', 'units': [97], 'cursor': 0xa3f},
             {'operation': 'lex', 'units': [97, 98], 'cursor': 0xa3f}]
    for depth in [-2, 0, 2]:
        for existing in [0, 2, 8]:
            cases.append({'operation': 'construct', 'units': units('old'), 'depth': depth,
                          'position': 2, 'existing': existing})
    for value in range(128):
        cases.append({'operation': 'lex', 'units': [value]})
        cases.append({'operation': 'lex', 'units': [92, value]})
    entries = {}
    for table in overlay['tables']:
        if table['name'] == 'nfa-primary-and-continuation':
            continue
        for row in table['entries']:
            entries.setdefault(row['target'], row['key'])
    for entry, key in sorted(entries.items()):
        for depth in [-2, 0, 1, 2]:
            for ending in [[], [key], [94], [65]]:
                cases.append({'operation': 'handler', 'entry': entry, 'units': [key, *ending], 'depth': depth})
    specials = ['abc', 'a b\u3000c', '[a-z&&[^b]]+', '(a|b)*c?', '^abc$',
                '\\Q[a-z] \\E$', '\\Qabc', '\\Q\\Q', '\\Q\\E\\E', '\\Q \u3000 \\E',
                '\\Q\\', '\\E', '\\cA', '\\c_', '\\c@', '\\ca', '\\c',
                '\\u3042', '\\xA0', '\\0123', '\\p{Lower}', '\\P{IsCs}', '\\p{Unknown}',
                '\\p', '\\p{', '\\pLower}', '\\p{Lower}tail', '[]', '[^]', '[', ']', '&&', '[&&]', '[[a]]']
    for pattern in specials:
        cases.append({'operation': 'lex', 'units': units(pattern)})
    repeats = ['{0}', '{1,}', '{65535,65535}', '{0,65535}', '{65536}', '{12,65536}', '{12,11}',
               '{x}', '{', '{1', '{1,', '{1,x}', '{1,2x}', '{1,2}', '{1,1}', '{00001,00002}',
               '{01}', '{0,0}', '{0,}', '{65535}', '{65535,65534}', '{12,,}', '{12,655350}']
    for text in repeats:
        for depth in [0, 1]:
            cases.append({'operation': 'handler', 'entry': 0x4bf9e0, 'units': units(text), 'depth': depth})
        cases.append({'operation': 'lex', 'units': units('a' + text)})
    for text in ['x', 'x0', 'x00', 'x0g', 'xFFFF', 'xA0', 'x0A', 'xg0', 'u', 'u123', 'u12xz',
                 'uFFFF', 'u0000', 'uAbCd', 'u3042', 'x\uff10\uff10']:
        cases.append({'operation': 'handler', 'entry': 0x4bf7a0 if text[0] == 'u' else 0x4bf7f0, 'units': units(text)})
        cases.append({'operation': 'lex', 'units': [92, *units(text)]})
    for text in ['0', '00', '000', '0000', '0377', '040', '0477', '0777', '0800', '0A', '0128',
                 '012345', '00x', '0177', '077', '0\uffff']:
        cases.append({'operation': 'handler', 'entry': 0x4bf248, 'units': units(text)})
        cases.append({'operation': 'lex', 'units': [92, *units(text)]})
    for text in ['abc', '\\Qabc\\E', 'a{1,2}', '[a-z]', '\\p{Lower}']:
        for free in [0, 1, 2, 3, 4, 8]:
            for cursor in [0, 1, 0xa40]:
                cases.append({'operation': 'lex', 'units': units(text), 'free_slots': free, 'cursor': cursor})
        for existing in [2, 8]:
            cases.append({'operation': 'lex', 'units': units(text), 'existing': existing})
    for prop in original['properties']:
        for ending in [[], units('tail')]:
            cases.append({'operation': 'property', 'units': prop['units'] + ending})
        cases.append({'operation': 'property', 'units': prop['units'], 'length': prop['consumed'] - 1})
        for prefix in ['\\p{', '\\P{']:
            cases.append({'operation': 'lex', 'units': units(prefix) + prop['units']})
    for text in ['', 'Lower', 'lower}', 'IsBad}', 'IsCs', 'InLatinExtended-Z}', 'IsCs}x']:
        cases.append({'operation': 'property', 'units': units(text)})
    for left, right in [([], []), ([0], [65535]), ([65535], [0]), ([1], [2]), ([1, 2], [1, 3]),
                        ([1, 2], [1, 2]), ([0, 2], [0, 3]), ([1, 0, 5], [1, 0, 9])]:
        for length in range(len(left) + 1):
            cases.append({'operation': 'compare', 'units': left, 'right': right, 'length': length})
    for value in [0, 128, 0x3000, 0xd800, 0xdfff, 65535]:
        cases.append({'operation': 'lex', 'units': [value, 97]})
        cases.append({'operation': 'lex', 'units': [92, value]})
    return cases
