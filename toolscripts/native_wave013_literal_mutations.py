def mutations():
    return [
        ('missing-case-group-matches','literal_compare.c','if (group == (void *)0)\n                return 0;',
         'if (group == (void *)0)\n                return 1;',{'literal_fast':True,'pattern':'%','candidate':'x'}),
        ('skip-first-case-alternative','literal_compare.c','unsigned int index = 1;','unsigned int index = 2;',
         {'literal_fast':True,'pattern':'a','candidate':'A'}),
        ('prefix-requires-exact-length','literal_fast_path.c','if (matcher->length < count)',
         'if (matcher->length != count)',{'literal_fast':True,'pattern':'abc.*','candidate':'abcd'}),
        ('substring-skips-first-position','literal_fast_path.c','unsigned int offset = 0;','unsigned int offset = 1;',
         {'literal_fast':True,'pattern':'.*abc.*','candidate':'abcx'}),
        ('doubled-string-length','literal_compare.c','++length;','length += 2;',
         {'literal_fast':True,'pattern':'a','candidate':'a'}),
        ('reject-supported-exact-match','literal_fast_path.c','? 1 : 2;','? 2 : 1;',
         {'literal_fast':True,'pattern':'abc','candidate':'abc'})]
