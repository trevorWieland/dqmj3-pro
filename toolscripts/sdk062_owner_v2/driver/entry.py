import argparse
from pathlib import Path
import sys
import types
sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent
sys.pycache_prefix=str(HERE/'entry-never-written-bytecode')

def source(name,filename=None):
    path=HERE/(filename or name+'.py');module=types.ModuleType(name);module.__file__=str(path);module.__package__='';sys.modules[name]=module
    exec(compile(path.read_bytes(),str(path),'exec'),module.__dict__)
    return module

contract=source('contract');source('gates');source('bindings')
prior=contract.load

def checked_load(intake,source_only=False):
    value=prior(intake,source_only);value[3][str(Path(__file__).resolve())]=contract.pin(Path(__file__).resolve());return value

contract.load=checked_load
runner=source('owner_public_runner','run.py')
parser=argparse.ArgumentParser();parser.add_argument('--output',required=True,type=Path);parser.add_argument('--mode',choices=['full','source-only'],default='full');args=parser.parse_args();runner.run(args.output,args.mode)
