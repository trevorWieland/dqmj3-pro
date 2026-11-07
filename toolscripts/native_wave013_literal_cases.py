def cases():
    patterns=['','a','abc','abc.*','.*abc','.*abc.*','^abc','abc$','^abc$','.*','^','$','^$',
        'a.*b','(abc)','a|b','[a-z]','\\d+','.*.*','^abc.*','abc$z','^abc$z','.*abc.*z','.*abc$','ab\\Q.\\E']
    candidates=['','a','A','abc','ABC','abcd','xabc','xABCx','abcx','ab.','x','abcabc','a\n']
    result=[]
    for pattern in patterns:
        for candidate in candidates:
            result.append({'literal_fast':True,'pattern':pattern,'candidate':candidate})
    for pattern,candidate,offset,count in [('abc','xabc',1,3),('abc','xAbC',1,3),('abc','abx',0,3),
        ('abc','abc',0,0),('','',0xfffffffe,4),('','',0xffffffff,1),('','',0xffffffff,0)]:
        result.append({'literal_compare':[offset,count],'pattern':pattern,'candidate':candidate})
    characters=['a','A','k','K','\u212a','s','S','\u017f','I','i','\u0130','\u0131','\u00df','\u03a3','\u03c3','\u03c2','\uffff']
    for pattern in characters:
        for candidate in characters:
            result.append({'literal_fast':True,'pattern':pattern,'candidate':candidate})
    for pattern in ['[','\\','a{','\\p{bad}','a\\xZZ','\\Qabc','a??','.*a.*.*','^a^','a$$']:
        for candidate in ['', 'a','ABC']:
            result.append({'literal_fast':True,'pattern':pattern,'candidate':candidate})
    for count in range(0,12):
        for pattern in ['abc','.*abc.*','^abc$','a|b']:
            result.append({'literal_fast':True,'pattern':pattern,'candidate':'ABC','free_slots':count})
    for index,row in enumerate(result):
        row['id']='literal-'+str(index)
    return result
