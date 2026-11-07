import hashlib
import json
from pathlib import Path
import re
import struct


class PacketComparison:
    def __init__(self,primary,independent):
        self.primary=Path(primary).resolve();self.independent=Path(independent).resolve();self.variants=[]

    def text(self,value,root):
        value=value.replace(str(root).replace("\\","\\\\"),"<ROOT>").replace(str(root),"<ROOT>").replace(root.as_posix(),"<ROOT>")
        return value.replace("seal-first","seal").replace("<ROOT>/","").replace("<ROOT>\\","")

    def log_text(self,value,root):
        value=self.text(value,root)
        return re.sub(r"Ran (\d+) tests in [0-9.]+s",r"Ran \1 tests in <TIME>s",value)

    def compare(self,a,b,context=""):
        assert type(a)==type(b),(context,"type")
        if isinstance(a,dict):
            assert a.keys()==b.keys(),(context,"keys")
            if {"path","sha256","bytes"}<=a.keys():
                assert self.text(a["path"],self.primary)==self.text(b["path"],self.independent),(context,"pin path")
                x,y=self.primary/a["path"],self.independent/b["path"]
                first,second=x.read_bytes(),y.read_bytes()
                assert hashlib.sha256(first).hexdigest()==a["sha256"] and hashlib.sha256(second).hexdigest()==b["sha256"]
                assert len(first)==a["bytes"] and len(second)==b["bytes"]
                if first!=second:
                    kind=""
                    if x.suffix.lower() in [".obj",".dll"]:
                        assert len(first)==len(second)
                        stamp=struct.unpack_from("<I",first,0x3c)[0]+8 if first[:2]==b"MZ" else 4
                        changes=[i for i,(u,v) in enumerate(zip(first,second)) if u!=v]
                        assert set(changes)<=set(range(stamp,stamp+4)),(context,"non-timestamp binary")
                        kind="coff-timestamp-only"
                    elif x.suffix.lower()==".json":
                        self.compare(json.loads(first),json.loads(second),context+"/pinned-json")
                        kind="recursively-compared-json"
                    else:
                        assert self.log_text(first.decode("utf-8"),self.primary)==self.log_text(second.decode("utf-8"),self.independent),(context,"non-path-or-timing text")
                        kind="verified-root-output-paths-or-unittest-timing-text"
                    self.variants.append({"path":a["path"],"kind":kind,"primarySha256":a["sha256"],"independentSha256":b["sha256"]})
                for key in a.keys()-{"path","sha256","bytes"}:self.compare(a[key],b[key],context+"/"+key)
                return
            for key in a:
                if key=="elapsedSeconds":assert isinstance(a[key],(int,float)) and a[key]>=0 and b[key]>=0
                else:self.compare(a[key],b[key],context+"/"+key)
        elif isinstance(a,list):
            assert len(a)==len(b),(context,"length")
            for index,(x,y) in enumerate(zip(a,b)):self.compare(x,y,context+"/"+str(index))
        elif isinstance(a,str):assert self.text(a,self.primary)==self.text(b,self.independent),(context,a[:90],b[:90])
        else:assert a==b,(context,a,b)
