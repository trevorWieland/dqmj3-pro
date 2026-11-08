import argparse
import hashlib
import importlib.util
import json
import lzma
import sys
from pathlib import Path

sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[1]
import unicorn
from unicorn import arm_const as arm


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=sha(raw))


def registers(cpu):
    return {name:cpu.reg_read(getattr(arm,'UC_ARM_REG_'+name.upper())) for name in
        [*['r'+str(i) for i in range(13)],'sp','lr','cpsr']}


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('profile',choices=['holes','normal-caller'])
    args=parser.parse_args()
    output=HERE/('original-'+args.profile+'-v1')
    if output.exists():
        raise ValueError('Refusing to replace original observer output')
    contract=json.loads((HERE/'contract-v1.json').read_text())
    original_factory=unicorn.Uc
    def selected(architecture,*values,**options):
        cpu=original_factory(architecture,*values,**options)
        if architecture==unicorn.UC_ARCH_ARM:
            cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        return cpu
    unicorn.Uc=selected
    source=ROOT/'work/native-file071-namespace-v1/observe_v4.py'
    spec=importlib.util.spec_from_file_location('fs_inventory_namespace071_frozen',source)
    observer=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(observer)
    instances=[]
    spans=[(row['entry'],row['instructionRanges'][0]['endExclusive']) for row in contract['candidates']]+[(0x117378,0x1173e4)]
    watched={0x44da8c,0x123114,0x44df60,0x117378,0x1173d8,0x1173dc,0x1173e0}
    class Machine(observer.Machine):
        def __init__(self,elf):
            self.inventory_events=[]
            self.inventory_positions={}
            self.inventory_previous=None
            super().__init__(elf)
            instances.append(self)

        def code(self,cpu,address,size,user):
            state=registers(cpu)
            if address in watched:
                self.inventory_events.append(dict(pc=address,bytes=size,mode='Thumb' if state['cpsr']&32 else 'ARM',
                    registers=state,previous=self.inventory_previous))
            for start,end in spans:
                if start<=address<address+size<=end:
                    raw=bytes(cpu.mem_read(address,size))
                    if size!=4 or state['cpsr']&32 or raw!=self.reference.image[address-0x100000:address-0x100000+size]:
                        raise ValueError('Actual original instruction/mode differs')
                    self.inventory_positions[address]=dict(pc=address,bytes=size,mode='ARM',sha256=sha(raw),entry=start)
            self.inventory_previous=dict(pc=address,bytes=size,mode='Thumb' if state['cpsr']&32 else 'ARM',registers=state,
                instructionSha256=sha(bytes(cpu.mem_read(address,size))),originalTextAddress=0x100000<=address<0x7b9890)
            super().code(cpu,address,size,user)
    observer.Machine=Machine
    component=observer.observe_v3.observe_v2.observe.qualifier_observer.service_observer.pool_observer.device_destructor_reference.destructor_reference.shutdown_reference.singleton_replay.singleton_bootstrap.patch_provider.fs_priority.run_component
    base=component.romfs_constructor_view.generated_romfs_provider.romfs_mount_pool_v3.romfs_mount_frontier.romfs_large
    base.ELF=ROOT/'work/native-file068/build-v2/arm/effect_resource.elf'
    base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY=True
    outcome={}
    try:
        if args.profile=='holes':
            observer.run('holes',output)
        else:
            output.mkdir(parents=True)
            machine=Machine(base.ELF)
            machine.setup()
            machine.functions.update(original_caller117378=0x117378,filesystem_shutdown_inventory=0x10c4f4)
            machine.active=True
            machine.invoke('filesystem_bootstrap068',[0,1,0])
            before=registers(machine.cpu)
            result=machine.invoke('original_caller117378',[0])
            after=registers(machine.cpu)
            machine.invoke('filesystem_shutdown_inventory',[])
            machine.active=False
            outcome=dict(status='original-restored-frame-caller-tail-and-filesystem-lifecycle-returned',resultBits=result&0xffffffff,
                invocationBefore=before,invocationAfter=after,callerArgument0=0,
                callerInputProvenance='Explicit null argument to unchanged original117378, after genuine frozen filesystem bootstrap')
    finally:
        unicorn.Uc=original_factory
    machine=instances[-1]
    if sha(machine.reference.image)!=contract['moduleSha256']:
        raise ValueError('Reference module identity differs')
    registry=bytes(machine.cpu.mem_read(0x8e3470,512))
    stack=bytes(machine.cpu.mem_read(machine.stack,0x8000))
    (output/'registry-after.private.bin.xz').write_bytes(lzma.compress(registry))
    (output/'stack-after.private.bin.xz').write_bytes(lzma.compress(stack))
    sources=[]
    for name,module in sorted(sys.modules.items()):
        path=getattr(module,'__file__',None)
        if path and Path(path).is_file() and Path(path).is_relative_to(ROOT) and Path(path).suffix=='.py':
            sources.append(pin(Path(path)))
    visits=sorted(machine.inventory_positions)
    views=[dict(entry=start,instructionPositions=(end-start)//4,observedPositions=len(set(range(start,end,4))&set(visits)),
        unvisitedPositions=sorted(set(range(start,end,4))-set(visits))) for start,end in spans]
    report=dict(status='actual-original-filesystem-route-inventory-observation-returned',profile=args.profile,outcome=outcome,
        moduleSha256=contract['moduleSha256'],cpuModel=machine.cpu.ctl_get_cpu_model(),targetCpu='ARM11MPCORE',
        originalObserver=pin(source),externalFixture=pin(base.ELF),effectivePythonSources=sources,
        events=machine.inventory_events,instructionWitnesses=list(machine.inventory_positions.values()),views=views,
        rawRegistrySha256=sha(registry),rawStackSha256=sha(stack),rawStackBytes=len(stack),
        kernelContracts=machine.kernel_contracts,ipcAttempts=machine.ipc_attempts,
        sdkGlobalsRegistryOrPoolsManuallySeeded=False,originalCodeOrDataPatched=False,
        physicalServiceOrFilesystemExecuted=False,sourceCreditGranted=0,canonicalAdmissionPerformed=False)
    (output/'inventory-observation-v1.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(profile=args.profile,views=views,events=len(report['events']),outcome=outcome)))


if __name__=='__main__':
    main()
