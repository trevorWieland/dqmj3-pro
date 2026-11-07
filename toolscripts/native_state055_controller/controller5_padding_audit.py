import copy
import hashlib
import json
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute
from controller5_program_target_probe import source
from controller5_remaining_probe import cases


def decode(words):
    packets=[];padding=[];cursor=0
    while cursor<len(words):
        assert cursor+1<len(words)
        header=words[cursor+1];count=((header>>20)&0x7ff)+1
        end=cursor+count+1
        assert end<=len(words)
        packets.append(dict(header=header,parameters=[words[cursor],*words[cursor+2:end]]))
        cursor=end
        if cursor&1:
            assert cursor<len(words)
            padding.append(cursor);cursor+=1
    return packets,padding


def run():
    rows=[];image=original_image();claim=json.loads((WORK/'claim.json').read_text())
    for original in [list(cases())[0],list(cases())[2],list(cases())[3]]:
        for seed in [0x12345678,0xa5a5a5a5]:
            case=copy.deepcopy(original);case['label']='padding-audit-'+case['label']+'-'+hex(seed)
            case['caller_frame_padding']=[seed,seed^0xffffffff];case['retain_command_words']=True
            a=execute(case,image,claim);assert a['returned'];b=source(case)
            actual=a.pop('commandWords');authored=b.pop('commandWords')
            assert len(actual)==len(authored)
            left,padding=decode(actual);right,padding2=decode(authored)
            assert left==right and padding==padding2
            differing=[index for index,(x,y)in enumerate(zip(actual,authored))if x!=y]
            assert differing and all(index in padding for index in differing)
            raw=lambda words:hashlib.sha256(json.dumps(words,separators=(',',':')).encode()).hexdigest()
            rows.append(dict(input=case,original=a,source=b,originalCommandWordsSha256=raw(actual),sourceCommandWordsSha256=raw(authored),
                             differences=[dict(word=index,original=actual[index],source=authored[index],packetAlignmentPadding=True)for index in differing],
                             completePacketParametersEqual=True,comparisonViewOnly=True,executedMemoryRegistersCodeAndLiteralsChanged=False))
    result=dict(schemaVersion=1,status='preserved-real-caller-stack-padding-differences',producer=pin(__file__),cases=rows,
                primaryFormatCorroboration='https://github.com/devkitPro/libctru/blob/62b7c42c88b1ee837f513358409d2e5c8f9001a9/libctru/source/gpu/gpu.c#L22-L40',
                sourceScratchContract='One backed 513-word span, initialized zero. Shared table scratch words remain defined; no out-of-bounds C read.',
                originalFrameContract='Reference entry-SP minus 0x880 is the measured current frame; only caller-provided words +0x808 and +0x50 are seeded before execution.',
                rawWholeArenaEqualityClaimedForTheseCases=False,sourceOutputRewritten=False,hardwareOrGameExecutionClaimed=False,sourceCreditGranted=0)
    out=WORK/'caller-padding-audit.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),cases=len(rows),preservedRawDifferences=sum(len(r['differences'])for r in rows))))


if __name__=='__main__':run()
