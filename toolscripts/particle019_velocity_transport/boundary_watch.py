import atexit
import ctypes
import io
import json
import os
from pathlib import Path
import sys


class BoundaryWatch019:
    def __init__(self,root,monitor,sidecar):
        self.root=root;self.guards=[];self.events=0;self.phase='main';self.finalized=False
        self.write=os.write;self.exit=os._exit;self.serialize=json.dumps;self.quote=json.encoder.encode_basestring_ascii;self.string=str;self.event_fd=os.open(monitor,os.O_WRONLY|os.O_CREAT|os.O_APPEND,0o600);self.sidecar_fd=os.open(sidecar,os.O_WRONLY|os.O_CREAT|os.O_APPEND,0o600)
        atexit.register(self.finish)

    def attach(self,guard):
        self.guards.append(guard);previous=guard.deny
        def deny(operation,value):
            self.events+=1;line='{"operation":'+self.quote(operation)+',"value":'+self.quote(self.string(value))+',"phase":'+self.quote(self.phase)+',"afterFinalizer":'+('true'if self.finalized else'false')+',"sequence":'+self.string(self.events)+'}\n'
            self.write(self.event_fd,line.encode());return previous(operation,value)
        guard.deny=deny

    def probe(self,name):
        guard=self.guards[-1];original=self.root/'generated/update-content0/code.bin'
        def original_constructor():sys.modules['velocity_machine019'].original_image019()
        def original_cpu():sys.modules['velocity_machine019'].Machine019('arm',Path('.'),original=True)
        probes={'open':lambda:open(original,'rb'),'io-open':lambda:io.open(original,'rb'),'os-open':lambda:os.open(original,os.O_RDONLY),'stat':lambda:os.stat(original),'lstat':lambda:os.lstat(original),'listdir':lambda:os.listdir(original.parent),'scandir':lambda:list(os.scandir(original.parent)),'resolve':lambda:original.resolve(),'original-constructor':original_constructor,'original-cpu':original_cpu,'undeclared-library':lambda:ctypes.CDLL(str(self.root/'tools/python/Lib/site-packages/capstone/lib/capstone.dll')),'whole-private-arena':lambda:(self.root/'work/shader018-normal-emitter-v1/route-v21/profile1-stack0-saved0-frames1-set0-group0/bank-after-route.private.bin.xz').read_bytes(),'old-helper':lambda:(self.root/'work/particle019-velocity-v1/velocity_machine019.py').read_bytes(),'original-library':lambda:ctypes.CDLL(str(original)),'private-normal-snapshot':lambda:(self.root/'work/particle019-velocity-v1/reference-normal-v1/profile1-stack0-saved42-frames1-set0-group0/velocity-particle0.private.bin.xz').read_bytes()}
        caught=False
        try:probes[name]()
        except ValueError:caught=True
        assert caught and self.events>0,name

    def finish(self):
        self.finalized=True;self.phase='after-exit-check';bad=self.events>0 or any(guard.rejected for guard in self.guards)
        record=dict(status='post-exit-boundary-rejected'if bad else'post-exit-check-clean-at-finalizer',eventsAtCheck=self.events,guards=len(self.guards),allInMemoryRejections=[guard.receipt()['forbiddenAttempts']for guard in self.guards],parentMustInspectEventLogAfterProcessExit=True)
        self.write(self.sidecar_fd,(self.serialize(record)+'\n').encode())
        if bad:
            sys.stdout.flush();sys.stderr.flush();self.exit(97)
