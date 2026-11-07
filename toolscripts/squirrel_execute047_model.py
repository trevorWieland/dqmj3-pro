import squirrel_iteration043_model as iteration


def project_iteration_contract(words,case):
    result=list(words)
    if case['mode']<128:
        pointer=result[21]
        if pointer not in(4,8)or result[19]!=(168 if pointer==4 else 264)or result[20]!=(48 if pointer==4 else 72):raise ValueError('047 actual040 physical ABI metadata differs')
        if pointer==8:result[19]=296
    return result


def validate_iteration(words,case):
    iteration.validate(project_iteration_contract(words,case),case)


def normalized_iteration(words,case):
    return iteration.normalized(project_iteration_contract(words,case))


def cases():
    rows=list(iteration.cases())
    for mode in(256,257):
        for value in(-7,0,3,1024):
            for flags in(0,1):
                for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flags,cleanup=cleanup))
    return rows


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','value','flags','cleanup'}or any(type(value)is not int for value in case.values()):raise ValueError('047 malformed profile')
    if case not in cases():raise ValueError('047 outside stage corpus')


def validate(words,case):
    if case['mode']<256:return validate_iteration(words,case)
    if len(words)<19 or words[:6]!=[0x470047,case['mode'],case['value']&0xffffffff,case['cleanup'],0,1]:raise ValueError('047 mixed execution failed')
    expected=2*case['value']+1 if case['mode']==256 else -64
    output=[0x01000001,0]if case['cleanup']else[0x05000002,expected&0xffffffff]
    if words[6:15]!=output+[8,1,0,0,0,0 if case['cleanup']else 2,0]:raise ValueError('047 capture/iteration/catch state')
    pointer=words[17]
    if pointer not in(4,8)or words[15:17]!=([168,180]if pointer==4 else[264,448]):raise ValueError('047 complete storage ABI')
    if len(words)!=35+words[18]*8:raise ValueError('047 mixed event extent')
    records=[words[i:i+8]for i in range(19,19+words[18]*8,8)]
    expected_kinds=[3,2]
    if case['cleanup']:
        if case['mode']==256:expected_kinds.append(4)
        expected_kinds.append(1)
    if [r[0]for r in records]!=expected_kinds:raise ValueError('047 owned lifetime ordering')
    if words[-16:]!=[0]*11+[4,4,4,0,0]:raise ValueError('047 complete VM logical state changed')
    for row in records[:2]:
        if row[2:6]!=[13,5,1,1]:raise ValueError('047 unwind/capture release ordering')
    sizes={1:196 if pointer==4 else 312,2:64 if pointer==4 else 112,3:8 if pointer==4 else 16,4:32 if pointer==4 else 64}
    for row in records:
        if row[1]!=sizes[row[0]]:raise ValueError('047 actual allocation/disposal bytes')


def normalized(words,case):
    if case['mode']<256:return normalized_iteration(words,case)
    result=list(words);result[15:18]=[0,0,0]
    for start in range(19,19+result[18]*8,8):result[start+1]=result[start]
    return result
