import hashlib
import importlib.metadata
import json
import platform
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
import elftools

from squirrel_coercion026_build import ROOT,pin,save
from squirrel_lookup020_build import FLAGS


def external_file(path,label):
    path=Path(path)
    return {'runtimeLabel':label,'filename':path.name,'bytes':path.stat().st_size,
        'sha256':hashlib.sha256(path.read_bytes()).hexdigest(),'sharedDependencyRuntime':True}


def produce(output):
    package_modules=[('unicorn',unicorn),('capstone',capstone),('pyelftools',elftools)]
    packages=[]
    for distribution,module in package_modules:
        package=Path(module.__file__).parent
        libraries=[external_file(path,distribution+'-native') for path in package.rglob('*.dll')]
        packages.append({'distribution':distribution,'metadataVersion':importlib.metadata.version(distribution),
            'moduleVersion':getattr(module,'__version__',None),'module':external_file(module.__file__,distribution+'-python'),
            'nativeLibraries':libraries})
    compiler=ROOT/'tools/clang-21/clang.exe'
    version=subprocess.check_output([str(compiler),'--version'],text=True).strip()
    result={'schemaVersion':1,'status':'effective026-tools-and-runtime-identity',
        'pythonVersion':platform.python_version(),'pythonRuntime':external_file(sys.executable,'python-launcher'),
        'pythonBaseRuntime':external_file(Path(sys.base_prefix)/'python.exe','python-interpreter'),
        'hostMachine':platform.machine(),'compiler':pin(compiler),'linker':pin(ROOT/'tools/clang-21/ld.lld.exe'),
        'compilerVersionOutput':version,'armCompilerFlags':FLAGS,
        'windowsTriple':'x86_64-pc-windows-msvc','androidTriple':'aarch64-linux-android29',
        'androidLinkFlags':['-z','max-page-size=16384','-z','common-page-size=16384'],
        'packages':packages,'unicornNativeApiVersion':list(unicorn.uc_version()),
        'unicornPackagePatchNotInferredFromNativeMajorMinorApi':True,
        'sourceBackendOriginalExecutableMapped':False,'originalBackendImageIdentityVerified':True,
        'windowsArena':{'requestedAddress':0x120000000,'bytes':0x40000,'actualAllocationAddressVerified':True,'freedAfterEachSet':True},
        'androidObjectArena':0x110000000,'androidOperatingSystemOrPhysicalDeviceExecuted':False,
        'copiedSourceUsesExplicitSharedPythonDependencyRuntime':True,
        'producer':pin(ROOT/'toolscripts/squirrel_coercion026_provenance.py')}
    save(output,result)
    return result


if __name__=='__main__':produce(ROOT/'evidence/lanes/squirrel-coercion026/tool-provenance.json')
