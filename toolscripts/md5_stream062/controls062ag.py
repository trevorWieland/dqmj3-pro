import argparse
import hashlib
import json
from pathlib import Path
import sys
W=Path(__file__).resolve().parent
sys.path.insert(0,str(W))
from build062ag import build,SOURCES,PRODUCTION
from runtime062ag import Arm,Windows,Android,CTX
from qualify062ag import structural,fingerprint,program
import model062ag as model


def mutated(name):
    stream=(PRODUCTION/"md5_stream062ag.c").read_text()
    block=(PRODUCTION/"md5_block062ag.c").read_text()
    changes={
        "wrong-marker":("const Md5Byte062ag marker = 0x80;","const Md5Byte062ag marker = 0x81;"),
        "wrong-padding-boundary":("64u - used < 8u","64u - used <= 8u"),
        "wrong-update-count":("context->count += count;","context->count += count + 1u;"),
        "initializer-clears-live-block":("    context->count = 0;","    context->count = 0;\n    for (Md5Word062ag i = 0; i < 64u; ++i) context->block[i] = 0;"),
        "wrong-high-length":("    Md5Word062ag bits = context->count << 3;","    Md5Word062ag high = context->count >> 29;\n    Md5Word062ag bits = context->count << 3;"),
        "finalizer-clears-count":("    for (Md5Word062ag i = 0; i < 16u; ++i)","    context->count = 0;\n    for (Md5Word062ag i = 0; i < 16u; ++i)"),
    }
    if name=="wrong-block-feedforward":
        before="    fn_001b2554(context->state, context->block);"
        if block.count(before)!=1:raise ValueError("block control token changed")
        block=block.replace(before,before+"\n    context->state[0] ^= 1u;")
    else:
        before,after=changes[name]
        if stream.count(before)!=1:raise ValueError("stream control token changed")
        stream=stream.replace(before,after)
        if name=="wrong-high-length":
            before="        context->block[i] = 0;\n    context->methods->block(context);"
            if stream.count(before)!=1:raise ValueError("length control token changed")
            stream=stream.replace(before,"        context->block[i] = (Md5Byte062ag)(high >> (8u * (i - 60u)));\n    context->methods->block(context);")
    return stream,block


def main():
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    parser.add_argument("--baseline",type=Path,required=True);args=parser.parse_args()
    out=args.output.resolve();out.mkdir(parents=True,exist_ok=False)
    baseline={"arm":Arm(args.baseline/"arm/digest.elf"),"windows":Windows(args.baseline/"windows/digest.dll"),
        "android":Android(args.baseline/"android/digest.elf")}
    cases={"wrong-marker":("finish",3,0),"wrong-padding-boundary":("finish",55,0),
        "wrong-update-count":("update",31,7),"initializer-clears-live-block":("init",0,0),
        "wrong-high-length":("finish",0x20000000,0),"finalizer-clears-count":("finish",63,0),
        "wrong-block-feedforward":("block",17,0)}
    report=dict(status="running",controls=[],productionSourceUnchanged=True)
    try:
        for name,(operation,old,count) in cases.items():
            folder=out/name;folder.mkdir();stream,block=mutated(name)
            a=folder/"md5_stream062ag.c";b=folder/"md5_block062ag.c";a.write_text(stream);b.write_text(block)
            sources=[a,b,*SOURCES[2:]]
            artifacts={t:build(t,folder/t,sources) for t in baseline}
            controls={"arm":Arm(artifacts["arm"]),"windows":Windows(artifacts["windows"]),"android":Android(artifacts["android"])}
            row=dict(name=name,operation=operation,targets={})
            for target,runtime in controls.items():
                memory=structural(runtime,37,old)
                expected=model.operation(memory,runtime.layout,operation,count)
                actual=runtime.execute(operation,memory,count,seed=37)
                if actual==expected:raise ValueError("normally returning wrong C escaped: "+name+"/"+target)
                normal=baseline[target];normal_memory=structural(normal,37,old)
                normal_actual=normal.execute(operation,normal_memory,count,seed=37)
                if normal_actual!=model.operation(normal_memory,normal.layout,operation,count):
                    raise ValueError("normal source no longer matches control reference")
                result=dict(normallyReturned=True,rejected=True,
                    differentOffsets=[i for i,(a,b)in enumerate(zip(actual,expected))if a!=b],
                    actualRawArenaSha256=hashlib.sha256(actual).hexdigest(),expectedRawArenaSha256=hashlib.sha256(expected).hexdigest())
                if name=="initializer-clears-live-block":
                    finals=[]
                    for obj in [normal,runtime]:
                        mem=structural(obj,37,0);mem=obj.execute("init",mem)
                        mem=bytearray(mem);mem[512:515]=b"abc";mem=bytes(mem)
                        mem=obj.execute("update",mem,3);mem=obj.execute("finish",mem)
                        finals.append(dict(fingerprint=fingerprint(obj,mem),rawArenaSha256=hashlib.sha256(mem).hexdigest()))
                    if finals[0]["fingerprint"]!=finals[1]["fingerprint"]:
                        raise ValueError("same-final-state control did not reconverge")
                    result.update(sameFinalTypedArena=True,finalObservations=finals,
                        distinguishingObservation="intermediate complete initialization arena")
                row["targets"][target]=result
            report["controls"].append(row);print("returning control",name,flush=True)
        report["status"]="all-seven-compiled-returning-controls-rejected-on-three-source-targets"
    except BaseException as error:
        report["status"]="failed-preserved-attempt";report["error"]=repr(error);raise
    finally:(out/"report.json").write_text(json.dumps(report,indent=2)+"\n")

if __name__=="__main__":main()
