import atexit
from contextlib import contextmanager
import hashlib
import json
import os
from pathlib import Path
import sys

active=None


class Gate:
    def __init__(self,root,own,output,source_only):
        global active
        self.root=Path(root).resolve();self.own=Path(own).resolve();self.output=Path(output).resolve()
        self.public=self.own.parents[1];self.manifest_path=self.own/"inputs.json"
        manifest=json.loads(self.manifest_path.read_text())
        files=[self.public/row["path"]for row in manifest["authored"]]
        files += [self.root/row["path"]for row in manifest["existingPublic"]]
        for row,path in zip(manifest["authored"]+manifest["existingPublic"],files):
            if path.is_symlink()or self.digest(path)!=row["sha256"]:raise ValueError("public input manifest drift: "+str(path))
        files += [self.manifest_path,Path(os.environ["SystemRoot"])/"System32/kernel32.dll"]
        self.originals=[self.root/"generated/update-content0/code.bin",self.root/"evidence/lanes/native-inventory-completion/seeded/update-census.json"]
        self.original_keys={self.key(p)for p in self.originals}
        self.files={self.key(p)for p in files}
        self.inputs=files+([]if source_only else self.originals)
        self.before={self.key(p):self.digest(p)for p in self.inputs}
        self.runtime=self.key(self.root/"tools/python");self.clang=self.key(self.root/"tools/clang-21")
        self.base_runtime=self.key(sys.base_prefix);self.out=self.key(self.output)
        self.own_key=self.key(self.own);self.toolscripts=self.key(self.root/"toolscripts")
        self.metadata={self.key(p)for f in files+[self.output]for p in f.parents}
        self.metadata.update(self.key(p/"AGENTS.md")for p in [self.own,*self.own.parents])
        self.rejected=[];self.reads=set();self.libraries=set();self.source_only=source_only
        self.original_depth=0;self.original_constructors=0;self.original_reads=0;self.integrity=False
        self.stat=os.stat;self.lstat=os.lstat;self.listdir=os.listdir;self.scandir=os.scandir
        os.stat=self.wrap(self.stat,"stat");os.lstat=self.wrap(self.lstat,"lstat")
        os.listdir=self.wrap(self.listdir,"listdir");os.scandir=self.wrap(self.scandir,"scandir")
        sys.addaudithook(self.audit);atexit.register(self.terminal);active=self
        import ctypes
        old_init=ctypes.CDLL.__init__;runtime_lib=self.root/"tools/python/Lib/site-packages/unicorn/lib"
        self.runtime_aliases=[]
        def exact_runtime(instance,name,*args,**kwargs):
            if isinstance(name,str)and name.lower()in ["libwinpthread-1.dll","libgcc_s_seh-1.dll","libgcc_s_dw2-1.dll"]:
                resolved=str(runtime_lib/name);self.runtime_aliases.append(dict(requested=name,resolved=resolved));name=resolved
            return old_init(instance,name,*args,**kwargs)
        ctypes.CDLL.__init__=exact_runtime

    @staticmethod
    def key(path):return os.path.normcase(os.path.abspath(os.fspath(path)))

    @staticmethod
    def digest(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()

    @staticmethod
    def inside(path,root):return path==root or path.startswith(root+os.sep)

    @contextmanager
    def original_window(self):
        if self.source_only:self.reject("original-window","source-only cannot construct original execution")
        self.original_depth+=1
        try:yield
        finally:self.original_depth-=1

    def require_original_constructor(self):
        if self.source_only or not self.original_depth:self.reject("original-constructor","outside explicit reference construction window")
        self.original_constructors+=1

    def reject(self,event,path):
        frames=[];frame=sys._getframe(1)
        for unused in range(12):
            if frame is None:break
            frames.append(dict(file=frame.f_code.co_filename,function=frame.f_code.co_name,line=frame.f_lineno));frame=frame.f_back
        self.rejected.append(dict(event=event,path=str(path),frames=frames))
        self.persist("rejected-persisted-before-raising")
        raise PermissionError("SDK MD5 public input gate rejected "+event+": "+str(path))

    def check(self,event,value,writing=False):
        if isinstance(value,int)or value is None:return
        path=self.key(value)
        if self.inside(path,self.out):return
        if writing:self.reject("write-outside-exclusive-output",path)
        if path in self.original_keys:
            if self.integrity:return
            if self.source_only or not self.original_depth:self.reject("original-input-outside-reference-window",path)
            if event=="open":self.reads.add(path);self.original_reads+=1
            return
        if self.inside(path,self.runtime)or self.inside(path,self.clang)or self.inside(path,self.base_runtime):return
        if path in self.files:
            if event=="open":self.reads.add(path)
            return
        if event in ["stat","lstat"]and path in self.metadata:return
        if event in ["listdir","scandir"]and path in [self.own_key,self.toolscripts]:return
        self.reject(event,path)

    def wrap(self,function,event):
        def checked(path=".",*args,**kwargs):
            self.check(event,path);return function(path,*args,**kwargs)
        return checked

    def audit(self,event,args):
        if event=="open":
            mode=args[1];flags=args[2]
            writing=(isinstance(mode,str)and any(c in mode for c in "wax+"))or(isinstance(flags,int)and bool(flags&(os.O_WRONLY|os.O_RDWR|os.O_CREAT|os.O_TRUNC|os.O_APPEND)))
            self.check("open",args[0],writing)
        elif event=="ctypes.dlopen":
            if isinstance(args[0],str)and args[0].lower()in ["kernel32","kernel32.dll"]:
                self.libraries.add("declared-Windows-known-module:kernel32");return
            self.check(event,args[0])
            if args[0]is not None:self.libraries.add(str(args[0]))

    def persist(self,status):
        data=dict(status=status,sourceOnly=self.source_only,publicDataOnly=self.source_only,rejected=self.rejected,
            originalReadsSucceeded=self.original_reads,originalConstructors=self.original_constructors,
            originalInputsAllowedOnlyDuringExplicitReferenceConstruction=True,inputs=[dict(path=str(p),sha256=self.before[self.key(p)])for p in self.inputs],
            actualOpenedAuthoredInputs=sorted(self.reads),loadedLibraries=sorted(self.libraries),runtimeAliases=getattr(self,"runtime_aliases",[]),
            noHistoricalWorkReadAttempts=not self.rejected,manifestSha256=self.before[self.key(self.manifest_path)])
        (self.output/"gate-receipt.json").write_text(json.dumps(data,indent=2)+"\n")
        return data

    def receipt(self,status):
        self.integrity=True
        try:after={self.key(p):self.digest(p)for p in self.inputs}
        finally:self.integrity=False
        if after!=self.before:self.reject("input-mutation","declared source/support input")
        return self.persist(status)

    def terminal(self):
        if self.rejected:
            try:self.receipt("terminal-rejected-even-if-exception-caught")
            finally:os._exit(86)
