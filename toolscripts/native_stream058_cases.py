def corpus():
    cases=[]
    def add(name,**fields):
        cases.append(dict(id=len(cases),name=name,**fields))
    for default in(False,True):
        for bits in list(range(-20,65))+[-2147483648,2147483647]:
            add('window-domain',window_bits=bits,default_allocate=default,default_dispose=default)
        for failure in('bad-version','null-version','wrong-size','null-stream','allocation-fail','preexisting-fail'):
            fields=dict(default_allocate=default,default_dispose=default)
            if failure=='bad-version':fields['version']='bad'
            if failure=='null-version':fields['version']='null'
            if failure=='wrong-size':fields['wrong_size']=True
            if failure=='null-stream':fields['null_stream']=True
            if failure in('allocation-fail','preexisting-fail'):fields['fail_at']=1
            if failure=='preexisting-fail':fields['preexisting_state']=True
            add(failure,**fields)
        for version in('valid','bad','null'):
            add('default-init-wrapper',operation='default_init',version=version,default_allocate=default,default_dispose=default)
    for wrap in(0,1,2,3,0x80000000,0xffffffff):
        for window in(False,True):add('reset-retained-window',operation='reset',wrap=wrap,window=window)
    add('reset-null-stream',operation='reset',null_stream=True)
    add('reset-null-state',operation='reset',null_state=True)
    for default in(False,True):
        for window in(False,True):
            for reentry in range(8):
                add('finalizer-callback-reload',operation='end',window=window,reentry=reentry,default_dispose=default)
    for failure in('stream','state','disposer'):
        add('invalid-finalizer',operation='end',**{'null_'+('dispose'if failure=='disposer'else failure):True})
    for count in(0,1,3,65535,0x80000001,0xffffffff):
        for bytes_count in(0,1,2,4096,65535):
            add('default-unsigned-product',operation='allocate',count=count,bytes=bytes_count)
    add('default-release-null',operation='dispose',null_memory=True)
    add('default-release-memory',operation='dispose')
    return cases


def caller_payloads():
    values=[b'',b'a',b'a'*258,b'abcd0123456789'*400,bytes(range(256))*20]
    values.extend(bytes((i*17+index)%256 for i in range(1024+index*13))for index in range(8))
    return values
