import argparse
import hashlib
import importlib.machinery
import json
from pathlib import Path
import random
import struct
import sys

W=Path(__file__).resolve().parent
ROOT=next(p for p in W.parents if (p/"AGENTS.md").is_file())
OLD_GET_CODE=importlib.machinery.SourceFileLoader.get_code

def fresh(self, fullname):
    path=Path(self.path).absolute()
    if path.is_relative_to(W) or path.is_relative_to(ROOT/"toolscripts"):
        return compile(self.get_data(self.path),self.path,"exec",dont_inherit=True)
    return OLD_GET_CODE(self,fullname)
importlib.machinery.SourceFileLoader.get_code=fresh
sys.path.insert(0,str(W))
from build062ag import build,pin,PRODUCTION,FIXTURE
from runtime062ag import Arm,Windows,Android,CTX
import model062ag as model


def sha(data):return hashlib.sha256(data).hexdigest()


def fingerprint(runtime,memory):
    width=runtime.layout[1]
    if int.from_bytes(memory[CTX:CTX+width],"little")!=runtime.vtable:
        raise ValueError("known vtable pointer field changed")
    return sha(memory[:CTX]+b"SDK_MD5_VTABLE_ROLE"+memory[CTX+width:])


def structural(runtime,seed,count):
    rng=random.Random(0x62a90000+seed)
    memory=bytearray(model.arena(runtime,seed))
    struct.pack_into("<4I",memory,CTX+runtime.layout[2],*[rng.getrandbits(32) for unused in range(4)])
    struct.pack_into("<I",memory,CTX+runtime.layout[3],count)
    memory[CTX+runtime.layout[4]:CTX+runtime.layout[4]+64]=rng.randbytes(64)
    memory[CTX+runtime.layout[5]:CTX+runtime.layout[5]+16]=rng.randbytes(16)
    memory[512:2560]=rng.randbytes(2048)
    return bytes(memory)


def cases():
    for i in range(16):yield dict(id="init-"+str(i),kind="init",seed=i,count=0,old=0,output=False)
    for i in range(64):yield dict(id="block-"+str(i),kind="block",seed=16+i,count=0,old=i,output=False)
    for old in [0,1,31,55,56,63,0x1fffffff,0xffffffe0,0xffffffff]:
        for count in [0,1,3,7,8,31,55,63,64,65,127,128,257]:
            yield dict(id="update-"+hex(old)+"-"+str(count),kind="update",seed=old&255,count=count,old=old,output=False)
    for old in list(range(64))+[0x1fffffff,0x20000000,0x3fffffff,0xffffffbf,0xffffffc0,0xfffffffe,0xffffffff]:
        for separate in [False,True]:
            yield dict(id="finish-"+hex(old)+"-"+str(separate),kind="finish",seed=old&255,count=0,old=old,output=separate)


def compare(runtime,kind,memory,count,output,seed,label):
    expected=model.operation(memory,runtime.layout,kind,count,output)
    actual=runtime.execute(kind,memory,count,output,seed)
    if actual!=expected:
        offsets=[i for i,(a,b)in enumerate(zip(actual,expected))if a!=b]
        raise ValueError((label,kind,"entire caller arena differs",offsets[:32]))
    return actual


def program(runtime,message,chunks,seed):
    memory=structural(runtime,seed,0)
    observations=[]
    memory=compare(runtime,"init",memory,0,None,seed,"program-init")
    observations.append(fingerprint(runtime,memory))
    position=step=0
    while position<len(message):
        count=min(chunks[step%len(chunks)],len(message)-position)
        mutable=bytearray(memory);mutable[512:512+count]=message[position:position+count];memory=bytes(mutable)
        memory=compare(runtime,"update",memory,count,None,seed+step,"program-update")
        observations.append(fingerprint(runtime,memory));position+=count;step+=1
    memory=compare(runtime,"finish",memory,0,None,seed,"program-finish")
    digest=memory[CTX+runtime.layout[5]:CTX+runtime.layout[5]+16]
    if digest!=hashlib.md5(message).digest():raise ValueError("independent hashlib disagrees")
    observations.append(fingerprint(runtime,memory))
    return dict(messageBytes=len(message),chunks=chunks,operations=len(observations),
        operationFingerprints=observations,finalArenaSha256=sha(memory),
        finalFingerprint=fingerprint(runtime,memory),digest=digest.hex())


def main():
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    parser.add_argument("--source-only",action="store_true");args=parser.parse_args()
    out=args.output.resolve();out.mkdir(parents=True,exist_ok=False)
    artifacts={target:build(target,out/"compiled"/target)for target in ["arm","windows","android"]}
    runtimes={"arm":Arm(artifacts["arm"]),"windows":Windows(artifacts["windows"]),"android":Android(artifacts["android"])}
    if not args.source_only:
        from gates062ag import active
        with active.original_window():runtimes={"original":Arm(),**runtimes}
    report=dict(status="running",sourceOnly=args.source_only,rows=[],programs=[],layouts={k:v.layout for k,v in runtimes.items()},
        sourceCreditGranted=0,wholeTaskOrGameClaim=False,
        projection="Only the single validated methods pointer field is encoded as its explicit symbol role; executed memory is never changed for projection.")
    try:
        for number,case in enumerate(cases()):
            row=dict(case=case,targets={})
            for target,runtime in runtimes.items():
                memory=structural(runtime,case["seed"],case["old"])
                output=3072 if case["output"] else CTX+runtime.layout[5]
                actual=compare(runtime,case["kind"],memory,case["count"],output,case["seed"],case["id"])
                row["targets"][target]=dict(entireArenaEqual=True,rawArenaSha256=sha(actual),fingerprint=fingerprint(runtime,actual))
            report["rows"].append(row)
            if number%64==0:print("structural",number,flush=True)
        for index,size in enumerate([0,1,2,7,8,15,16,31,55,56,57,63,64,65,119,120,127,128,129,255,256,1024]):
            message=bytes((j*73+size)&255 for j in range(size))
            for chunks in [[2048],[1,7,64,3]]:
                row=dict(id="program-"+str(size)+"-"+str(len(chunks)),targets={})
                for target,runtime in runtimes.items():row["targets"][target]=program(runtime,message,chunks,index)
                report["programs"].append(row)
        report["calls"]={k:v.calls for k,v in runtimes.items()}
        report["coverage"]={k:sorted(v.coverage)for k,v in runtimes.items()if hasattr(v,"coverage")}
        report["status"]="qualified-full-arena-SDK-MD5-streams-no-admission"
        report["counts"]=dict(structuralCases=len(report["rows"]),programs=len(report["programs"]),targets=len(runtimes))
        report["inputs"]=[pin(p)for p in [PRODUCTION/"sdk_md5062ag.h",PRODUCTION/"md5_stream062ag.c",PRODUCTION/"md5_block062ag.c",FIXTURE,ROOT/"src/native/wave024/digest.c",ROOT/"src/native/wave024/digest.h",ROOT/"src/native/wave024/digest_constants.h"]]
    except BaseException as error:
        report["status"]="failed-preserved-attempt";report["error"]=repr(error);raise
    finally:
        (out/"report.json").write_text(json.dumps(report,indent=2)+"\n")
    print(report["status"],report["counts"],report["calls"],flush=True)

if __name__=="__main__":main()
