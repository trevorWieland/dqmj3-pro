def cases():
    values=[]
    families=[('a',['a','A','b','']),('abc.*',['abcd','xabc','ABC']),('.*abc.*',['xABCy','abc','ab']),
        ('[a-z]',['a','Z','1','\u0130']),('a|b',['a','b','B','c']),('^abc$',['abc','ab','abcd']),
        ('(ab|c){1,2}',['ab','abc','c','cc','ccc']),('', ['', 'a']),('[',['a']),('a)', ['a']),
        ('a{3,2}', ['aaa']),('k',['K','\u212a','x']),('s',['S','\u017f']),('\u03a3',['\u03c2','\u03c3','x']),
        ('a*',['','a','AAAA','b']),('a+',['','a','aaa','b']),('a?',['','a','aa']),
        ('[a-f]|[d-z]',['a','d','q','0']),('[a-z&&[^bc]]',['a','b','c','d']),
        ('a.b',['a0b','a\nb','ab']),('a\\sb',['a b','a\tb','ab']),('\\d+',['1','012','x']),
        ('a{2,}',['a','aa','aaaa']),('a{0,2}',['','a','aa','aaa']),('^$',['','a','\n'])]
    for pattern,candidates in families:
        values.append({'pattern':pattern,'candidates':candidates})
        values.append({'pattern':pattern,'candidates':[]})
    for bit in range(-128,128):
        values.append({'pattern':'a','candidates':['a','A','b'],'flags':[0,0,0x5a5a5a5a],'bit_index':bit})
    for bit in [0,1,7,31]:
        for pattern in ['abc','[a-z]']:
            values.append({'pattern':pattern,'candidates':['abc','ABC','x'],'flags':[1<<bit,0,1<<bit],'bit_index':bit})
    for alignment in range(4):
        for count in [0,1,2,3,4,5,7,8,15,16,17,31,32,33,63,64,65,95,96]:
            values.append({'leaf':'zero-any','alignment':alignment,'bytes':count})
    for count in [0,1,2,3,4,7,8,15,16,17,31,32,33,63,64,65,95,96]:
        values.append({'leaf':'zero-aligned','bytes':count})
    values += [{'leaf':'arena-constructor'},{'leaf':'arena-init'}]
    for index,row in enumerate(values):
        row['id']='outer-'+str(index)
    return values
