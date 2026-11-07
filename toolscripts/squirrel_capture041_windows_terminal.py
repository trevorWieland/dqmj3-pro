import ctypes
import subprocess
import sys


def child(library,variant):
    from squirrel_capture041_oracle import Windows
    runner=Windows(library);module=runner.module;base=0x120000000
    if runner.kernel.VirtualAlloc(base,0x40000,0x3000,4)!=base:raise ValueError('041 terminal child arena unavailable')
    if module.fixture_table_bind019(base,0x40000,*[module.fixture_vtable020(i)for i in range(7)])!=1:
        raise ValueError('041 terminal child bind failed')
    module.fixture_prepare020(variant,0)
    function_type=ctypes.CFUNCTYPE(None,ctypes.c_uint32)
    kernel=ctypes.WinDLL('kernel32');kernel.ExitProcess.argtypes=[ctypes.c_uint32];kernel.ExitProcess.restype=None
    sink=function_type(ctypes.cast(kernel.ExitProcess,ctypes.c_void_p).value)
    module.fixture_terminal_sink041.argtypes=[function_type];module.fixture_terminal_sink041(sink)
    module.fixture_execute020()
    raise ValueError('041 fatal service unexpectedly returned')


def execute(library,variant):
    expected={66:0x4101,67:0x4102,68:0x4202,69:0x4203}[variant]
    result=subprocess.run([sys.executable,__file__,str(library),str(variant)],capture_output=True,timeout=30)
    if result.returncode!=expected:raise ValueError('041 terminal child status differs: '+repr((variant,result.returncode,result.stdout,result.stderr)))
    return {'variant':variant,'actualWindowsChildExitCode':result.returncode,'normalReturn':False,
        'portableFatalServiceContract':True,'originalKernelPanicOrDeviceExecutionClaimed':False}


if __name__=='__main__':child(sys.argv[1],int(sys.argv[2]))
