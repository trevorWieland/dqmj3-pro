from contextlib import contextmanager
import importlib.abc
import importlib.machinery
import os
from pathlib import Path
import sys
import threading

class Gate:
    def __init__(self,root,output,pinned,reference,source_only=False):
        self.root=root.resolve();self.output=output.resolve();self.pinned={Path(p).resolve()for p in pinned};self.reference={root/r['path']for r in reference['files']};self.source_only=source_only;self.target='source';self.rejected=[];self.reads=set();self.libraries=set();self.original_constructions=0
        self._local=threading.local();self._resolve=Path.resolve;self.metadataCounts={};self.metadataPaths={};self.rejectedMetadata=[]
        self._install_metadata()
        sys.addaudithook(self.audit)
    def reject(self,message):
        self.rejected.append(message);raise ValueError(message)
    @contextmanager
    def profile(self,target):
        if target=='original'and self.source_only:self.reject('source-only original profile forbidden')
        old=self.target;self.target=target
        try:yield
        finally:self.target=old
    @contextmanager
    def internal(self):
        old=getattr(self._local,'depth',0);self._local.depth=old+1
        try:yield
        finally:self._local.depth=old
    def internal_active(self):return bool(getattr(self._local,'depth',0))
    def canonical(self,value):
        with self.internal():return self._resolve(Path(os.fsdecode(value)),strict=False)
    def check_candidate(self,candidate,operation,directory):
        if candidate in self.reference or candidate.is_relative_to(self.root/'generated'):
            if self.target!='original'or self.source_only:self.reject('source original-input metadata/read forbidden '+operation+' '+str(candidate))
            if candidate not in self.reference:self.reject('noncanonical original input forbidden '+str(candidate))
        if candidate.is_relative_to(self.root/'work')and not candidate.is_relative_to(self.output):
            if candidate not in self.pinned or directory:
                item=dict(operation=operation,path=str(candidate));self.rejectedMetadata.append(item);self.reject('historical metadata/input forbidden '+operation+' '+str(candidate))
    def check_path(self,value,operation,directory=False):
        if isinstance(value,int):
            self.rejectedMetadata.append(dict(operation=operation,path='fd:'+str(value)));self.reject('unresolved descriptor metadata forbidden '+operation)
        lexical=Path(os.path.abspath(os.fsdecode(value)))
        self.check_candidate(lexical,operation,directory)
        path=self.canonical(value)
        if path!=lexical:self.check_candidate(path,operation,directory)
        return path
    def metadata(self,value,operation,directory=False):
        if self.internal_active():return
        path=self.check_path(value,operation,directory)
        self.metadataCounts[operation]=self.metadataCounts.get(operation,0)+1
        self.metadataPaths.setdefault(str(path),set()).add(operation)
    def _install_metadata(self):
        gate=self;prior_stat=os.stat;prior_lstat=os.lstat;prior_listdir=os.listdir;prior_scandir=os.scandir;prior_resolve=self._resolve
        def stat(path,*args,**kwargs):
            if not gate.internal_active():
                if kwargs.get('dir_fd')is not None:gate.reject('unresolved dir_fd stat forbidden')
                gate.metadata(path,'os.stat')
            return prior_stat(path,*args,**kwargs)
        def lstat(path,*args,**kwargs):
            if not gate.internal_active():
                if kwargs.get('dir_fd')is not None:gate.reject('unresolved dir_fd lstat forbidden')
                gate.metadata(path,'os.lstat')
            return prior_lstat(path,*args,**kwargs)
        def listdir(path='.'):
            gate.metadata('.'if path is None else path,'os.listdir',True);return prior_listdir(path)
        def scandir(path='.'):
            gate.metadata('.'if path is None else path,'os.scandir',True);return prior_scandir(path)
        def resolve(path,strict=False):
            if gate.internal_active():return prior_resolve(path,strict=strict)
            gate.metadata(path,'Path.resolve')
            with gate.internal():return prior_resolve(path,strict=strict)
        os.stat=stat;os.lstat=lstat;os.listdir=listdir;os.scandir=scandir;Path.resolve=resolve
        import importlib._bootstrap_external as bootstrap
        bootstrap._os.stat=stat;bootstrap._os.lstat=lstat;bootstrap._os.listdir=listdir;bootstrap._os.scandir=scandir
    def audit(self,event,values):
        if self.internal_active():return
        if event in ['os.listdir','os.scandir']and values:
            self.metadata(values[0]if values[0]is not None else '.',event,True);return
        if event not in ['open','ctypes.dlopen']or not values or not isinstance(values[0],(str,bytes)):return
        path=self.check_path(values[0],event);mode=values[1]if len(values)>1 else None;read=event=='ctypes.dlopen'or not isinstance(mode,str)or not any(c in mode for c in 'wax+')
        if not read and (path in self.reference or path.is_relative_to(self.root/'generated')):self.reject('original-input write forbidden '+str(path))
        if read and path.suffix=='.pyc'and path.is_relative_to(self.root):
            with self.internal():exists=path.is_file()
            if exists:self.reject('authored cached-bytecode read forbidden '+str(path))
        if event=='ctypes.dlopen':self.libraries.add(str(path))
        elif read:self.reads.add(str(path))
    def install_original(self,oracle):
        gate=self;prior=oracle.Original
        class Original(prior):
            def __init__(self,*args,**kwargs):
                if gate.target!='original'or gate.source_only:gate.reject('source original-construction forbidden')
                gate.original_constructions+=1;super().__init__(*args,**kwargs)
        oracle.Original=Original
    def require_clean(self):
        if self.rejected:raise ValueError('caught owner intake boundary attempt is terminal')

class SourceOnlyLoader(importlib.machinery.SourceFileLoader):
    def get_code(self,fullname):
        return self.source_to_code(self.get_data(self.path),self.path)

class AuthoredFinder(importlib.abc.MetaPathFinder):
    def __init__(self,root,allowed,output,gate):self.root=root;self.allowed={Path(p).resolve()for p in allowed};self.output=output;self.gate=gate
    def find_spec(self,fullname,path=None,target=None):
        spec=importlib.machinery.PathFinder.find_spec(fullname,path)
        if spec and spec.origin and spec.origin not in ['built-in','frozen']:
            p=Path(spec.origin).resolve()
            if p.is_relative_to(self.root/'toolscripts')or p.is_relative_to(self.root/'work'):
                if p.suffix!='.py'or p not in self.allowed:
                    self.gate.reject('undeclared authored import '+fullname+' '+str(p))
                spec.loader=SourceOnlyLoader(fullname,str(p));return spec
        return None
