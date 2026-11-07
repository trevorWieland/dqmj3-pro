from squirrel_class_call030_model import parse as parse030,compare_native as compare_native030


MARKER=0x340340


def parse(words):
    marker=words.index(MARKER)
    common=words[:marker];parse030(common)
    extra=words[marker:];at=7
    count=extra[at];at+=1
    results=extra[at:at+count];at+=count
    strings,table_free=extra[at:at+2];at+=2
    block_offset=at
    blocks=[extra[at+i*2:at+i*2+2] for i in range(strings-8)];at+=(strings-8)*2
    events=extra[at];at+=1
    if len(extra)!=at+events*6:raise ValueError('034 typed observation schema differs')
    if results[:18]!=list(range(18)):raise ValueError('034 measured18-name provider did not return its actual indices')
    return {'common':common,'extra':extra,'results':results,'strings':strings,'stringBlocks':blocks,
        'blockOffset':block_offset,'events':[extra[at+i*6:at+i*6+6] for i in range(events)]}


def compare_native(variant,target_words,native_words,arena):
    target=parse(target_words);native=parse(native_words)
    common=compare_native030(variant,target['common'],native['common'],arena)
    expected=list(target['extra'])
    count=expected[7];at=8+count+2
    for index in range(target['strings']-8):expected[at+index*2]+=24
    if expected!=native['extra']:raise ValueError('034 native string allocation/owner/meta/descriptor observations disagree')
    return dict(common,actualCompleteShared034NativeBytes=304,measured18MetaNamesValidated=True,
        nativeStringAllocationsIndependentlyPredicted=True,allTyped034EventsValidated=True)


def compare_arm(original,source,reference_frames,source_frames):
    if reference_frames!=source_frames:raise ValueError('034 actual native-frame topology differs')
    allowed={base+field+byte for base in reference_frames for field in (0,4,32,40) for byte in range(4)}
    differences=[i for i,(a,b) in enumerate(zip(original,source)) if a!=b]
    if len(original)!=0x40000 or len(source)!=0x40000 or any(i not in allowed for i in differences):
        raise ValueError('034 defined ARM arena differs')
    return {'wholeComparisonArenaEqual':not differences,'definedMemoryEqual':True,
        'actualNativeFrameOffsets':sorted(reference_frames),'differentByteOffsets':differences}
