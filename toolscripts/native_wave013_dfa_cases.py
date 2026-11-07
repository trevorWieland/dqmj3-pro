def cases():
    values=[{'id':'compiler-constructor','compiler_constructor':True}]
    families=[('', ['', 'a']),('a',['','a','A','b']),('ab',['ab','AB','a','abc']),
       ('a|b',['a','b','B','c']),('a*',['','a','AAA','b']),('a{2}',['a','aa','AA','aaa']),
       ('[a-z]',['a','Z','1','\u0130','\u0131','\u017f','\u212a']),('[^ab]',['x','A','b']),
       ('[a-z]|[m-z]',['a','m','Z','0']),('\\d',['0','9','a']),('^abc$',['abc','ABC','ab','abcd']),
       ('(ab|c){1,2}',['ab','c','abc','cc','abab','ccc']),('a?',['','a','aa']),('a+',['','a','aa','b']),
       ('[a-f]|[d-z]',['a','c','d','f','q','z','0']),('([a-z]|[0-9]){2}',['ab','a1','12','a','abc']),
       ('\\w+',['abc','012','abc_','?']),('a.b',['a0b','a\nb','ab']),('a\\sb',['a b','a\tb','a\nb','ab']),
       ('[a-z&&[^bc]]',['a','b','c','d']),('a{2,}',['a','aa','aaaa']),('a{0,2}',['','a','aa','aaa']),
       ('((ab)|c)+',['ab','c','abc','cab','cc','abab','a']),('^$',['','a','\n'])]
    for index,(pattern,candidates) in enumerate(families):
        for number,candidate in enumerate(candidates):
            values.append({'id':'match-'+str(index)+'-'+str(number),'pattern':pattern,'candidate':candidate})
    for number in range(0,100):
        for index,pattern in enumerate(['a','[a-z]|[m-z]','(ab|c){1,2}','^a$','\\p{IsLl}']):
            values.append({'id':'oom-'+str(index)+'-'+str(number),'pattern':pattern,'candidate':'a','free_slots':number})
    for index,pattern in enumerate(['(a|b){2,3}','[a-z]|[m-z]','[a-f]|[d-z]']):
        for cursor in [1,17,0xa40-16,0xa40-1]:
            values.append({'id':'cursor-'+str(index)+'-'+str(cursor),'pattern':pattern,'candidate':'a','cursor':cursor})
    import random
    rng=random.Random(13014)
    for number in range(48):
        destination=[sorted([rng.randrange(32),rng.randrange(32)]) for unused in range(3)]
        source=[sorted([rng.randrange(32),rng.randrange(32)]) for unused in range(2)]
        for operation in ['subtraction','overlap']:
            values.append({'id':'ranges-'+operation+'-'+str(number),
                           'range_steps':[*[{'insert':pair} for pair in destination],{operation:source}]})
    for number in range(4):
        values.append({'id':'subtraction-split-oom-'+str(number),'range_steps':[
            {'insert':[0,65535]},{'subtraction':[[3,6]]}],'free_slots':number})
    for index,(pattern,candidate) in enumerate([('[a-z]b','ab'),('[a-z]b','ZB'),('[a-f]|[x-z]','y'),
        ('[^\\p{ASCII}\\P{ASCII}]','a'),('\\p{ASCII}|[a-f]','A')]):
        values.append({'id':'range-phase-extra-'+str(index),'pattern':pattern,'candidate':candidate})
    for index,pattern in enumerate(['\\p{ASCII}|[a-f]','[^\\p{ASCII}\\P{ASCII}]']):
        for number in range(100):
            values.append({'id':'range-phase-oom-'+str(index)+'-'+str(number),
                           'pattern':pattern,'candidate':'A','free_slots':number})
    return values
