def cases():
    def units(text):
        return [0xfeff,*map(ord,text)]
    values=[]
    files=['','a','ab','a\n','a\nb\n','ab\ncd','ab\nc','\n','\n\n','a\n\nb\n',
        'a\n\0b','ab\0c','[a-z]\n','(ab|c){1,2}\n','^abc$\n','a|b\n[a-z]\n',
        '[a-z]\na|b\n(ab|c){1,2}\n','a\r\n','.*abc.*\n']
    candidates=['a','b','A','abc','ABC','ab','c','cc','xABCy','@','\uff20','\uff21','\u3041','\uff76\uff9e','']
    for text in files:
        values.append({'file_units':units(text),'candidates':candidates})
        values.append({'file_units':units(text),'candidates':[]})
    for bit in [-128,-1,0,1,7,31,32,127]:
        for bypass in [0,1,2]:
            values.append({'file_units':units('a\n'),'candidates':['a','@','\uff20','b'],
                'flags':[0,0,0,0x42],'bit_index':bit,'bypass_at_sign':bypass})
    for index in range(4):
        data=['@','a','b','c'];data[index]=None
        values.append({'file_units':units('a\n'),'candidates':data})
    for size in [0,1,2,3,4,0x3fff,0x4000,0x4001,0x7fffffff,0x80000000,0xffffffff]:
        values.append({'file_units':units('a\n'),'candidates':['@','a'],'advertised_size':size,'read_result':0,'copy_limit':1})
    for maximum in [0,1,2,3,4,5,6]:
        values.append({'file_units':units('a\n'),'candidates':['@','a'],'read_result':maximum,'copy_limit':maximum})
    for raw in [[],[0],[0xff],[0xff,0xfe],[0xff,0xfe,0x61],[0xff,0xfe,0x61,0],
        [0xff,0xfe,0x61,0,10],[0,0],[0xfe,0xff,0,0x61],[0xff,0xfe,0,0]]:
        values.append({'file_bytes':raw,'candidates':['@','a','']})
    for pattern in ['a\n','[a-z]\n','a|b\n']:
        values.append({'file_units':units(pattern),'candidates':['a']*16,'flags':[index for index in range(16)]})
    for capacity_text in [' '*110+'a','\uff21'*100,'\u3041'*100,'\uff76\uff9e'*60,'a @ b','\uff20']:
        values.append({'file_units':units('a\n'),'candidates':[capacity_text]})
    for index,row in enumerate(values):
        row['id']='file-'+str(index)
    return values
