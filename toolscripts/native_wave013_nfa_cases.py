import random


def cases(properties):
    patterns = ['', 'a', 'ab', 'abc', 'a|b', '|a', 'a|', 'a||b', '(ab|c)', '(a(b|c))', '(a|b)c',
                'a?', 'a*', 'a+', 'a??', 'a**', 'a++', 'a{0}', 'a{1}', 'a{2}', 'a{3}',
                'a{0,}', 'a{1,}', 'a{2,}', 'a{0,0}', 'a{0,1}', 'a{1,1}', 'a{1,3}', '(ab){2}', '(a|b){2,3}',
                '[a-z]', '[^ab]', '[a-z&&b]', '[a-z&&[^b]]', '[abc]', '[b-a]', '[-a]', '[a-]',
                '[[ab]]', '[a[b]]', '[a&&]', '[a&&&b]', '[a&&b&&c]', '[]', '[^]', '[', '(', ')', '*', '+', '?',
                '^abc$', '.', '\u00c4', '\u0391', '\u0414', '\u0130', '\u01c5', '\u212a', '\uff41', '\x00',
                '\\d', '\\D', '\\w', '\\W', '\\s', '\\S', '\\Q(a*)\\E', '[\\p{Lower}]', '[^\\d]']
    result = [{'id': 'grammar-'+str(index), 'pattern': value} for index,value in enumerate(patterns)]
    for row in properties:
        identifier = ''.join(map(chr,row['units']))
        result.append({'id': 'property-'+str(row['id']), 'pattern': '\\p{'+identifier})
    for number in range(0,35):
        for index,pattern in enumerate(['a{2}', '[a-z&&[^b]]', '(ab|cd){2,3}', '\\p{IsLl}']):
            result.append({'id': 'oom-'+str(index)+'-'+str(number), 'pattern': pattern, 'free_slots': number})
    for index,pattern in enumerate(['a{2,}', 'a{1,3}', 'a?', '^', '\\P{Lower}', '[^ab]',
                                    '[a[bc]]', '[a[^bc]]', '[a\\P{ASCII}]', '[a-z&&q]']):
        for number in range(0,50):
            result.append({'id': 'extra-oom-'+str(index)+'-'+str(number), 'pattern': pattern, 'free_slots': number})
    for cursor in [1, 17, 0xa40-16, 0xa40-1]:
        for index,pattern in enumerate(['(a|b){2,3}', '[a-z&&b]', '\\p{IsP}']):
            result.append({'id': 'cursor-'+str(cursor)+'-'+str(index), 'pattern': pattern, 'cursor': cursor})
    for index,initial in enumerate([[0,0], [0,65535], [1,65535], [0,1], [65535,65535]]):
        result.append({'id': 'complement-boundary-'+str(index), 'range_cycles': 1, 'range_initial': initial})
    rng = random.Random(13013)
    for index in range(32):
        inserts = [[rng.randrange(64), rng.randrange(64)] for unused in range(6)]
        steps = [{'insert': sorted(pair)} for pair in inserts]
        steps.append({'intersection' if index%2 else 'union': [[0,4],[9,22],[40,65535]]})
        result.append({'id': 'ranges-'+str(index), 'range_steps': steps})
    for address in [0x4c15e4, 0x4c1658]:
        result.append({'id': 'direct-error-callback-'+hex(address), 'direct_callback': address})
    for number in range(4):
        result.append({'id': 'transition-helper-'+str(number), 'transition_helper': True, 'free_slots': number})
    for number in range(7):
        result.append({'id': 'empty-complement-'+str(number), 'range_steps': [{'complement': True}], 'free_slots': number})
        result.append({'id': 'complement-oom-'+str(number), 'range_cycles': 1, 'free_slots': number})
        result.append({'id': 'intersection-split-oom-'+str(number), 'range_steps': [
                       {'insert': [0,10]}, {'intersection': [[2,3],[7,8]]}], 'free_slots': number})
    for index,pattern in enumerate(['[&&a]', '[&&]', '[&&&&]', '(a*){2}', '(a|b){2}', '\ud800', '\udfff', '\uffff']):
        result.append({'id': 'final-grammar-'+str(index), 'pattern': pattern})
    for number in range(31):
        result.append({'id': 'alternation-continuation-oom-'+str(number), 'pattern': 'a|b{2}', 'free_slots': number})
    for number in range(3,6):
        result.append({'id': 'complement-two-range-oom-'+str(number), 'range_steps': [
            {'insert': [1,2]}, {'insert': [4,5]}, {'complement': True}], 'free_slots': number})
    result.append({'id': 'intersection-third-split-oom', 'range_steps': [
        {'insert': [3,10]}, {'intersection': [[2,4]]}], 'free_slots': 2})
    result.append({'id': 'full-arena-retired-slot-reuse', 'range_cycles': 1800})
    return result
