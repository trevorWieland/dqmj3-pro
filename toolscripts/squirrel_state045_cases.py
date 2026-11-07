def masks():
    rows=[];seen=set()
    def add(label,value):
        if value in seen:return
        seen.add(value);rows.append({'label':label,'input':value})
    for value in range(256):add('single-byte-'+str(value),bytes([value]))
    alphabet=b'oifnbstaucgpvyxr'
    for left in alphabet:
        for right in alphabet:add('pair-'+chr(left)+'-'+chr(right),bytes([left])+b'|'+bytes([right]))
    for length in [0,2,3,4,5,7,8,9,15,16,17,31,32,33,63,64,65]:
        add('growth-'+str(length),b'a'*length)
    for value in [b' ',b'   ',b'a|',b'a| ',b'a|  ',b'a |b',b'a| b',b'a||b',b'a|.|b',b'.|a',b'a|.',b'a|.b',
        b'a| b| ',b'a\tb',b'a\nb',b'aan?',b'a|?',b'c x|y|t',b' s n  n',b's s n ',b'  . | ',b'|',b'||',b'oifnbs tau',
        b'aaaaaaaa?',b'aaaaaaaa|',b'a|b|c|d',b'.'*33,b' a|b c|g  .\xff',b'\xffa',b'a\xff',b'c\x00a',b'a\x00\xff']:
        add('syntax-'+str(len(rows)),value)
    return rows
