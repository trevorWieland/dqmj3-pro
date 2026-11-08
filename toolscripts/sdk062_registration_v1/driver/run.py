import argparse
import atexit
import hashlib
import importlib
import importlib.machinery
import json
import os
from pathlib import Path
import sys
import time

P = argparse.ArgumentParser()
P.add_argument('--out', type=Path, required=True)
P.add_argument('--root', type=Path)
P.add_argument('--manifest', type=Path)
P.add_argument('--inputs', type=Path)
P.add_argument('--source-only', action='store_true')
P.add_argument('--guard-control')
A = P.parse_args()
W = Path(__file__).resolve().parent
ROOT = (A.root or next(p for p in W.parents if (p / 'AGENTS.md').is_file())).resolve()
OUT = A.out.resolve()
INPUTS = (A.inputs or ROOT).resolve()
MANIFEST = (A.manifest or INPUTS/'evidence/lanes/sdk-registration062-public-input/source-map-v1.json').resolve()
H = ROOT/'src/native/wave062-heap'
OUT.mkdir(parents=True, exist_ok=False)
STAGE = OUT / 'inputs'
STAGE.mkdir()
(STAGE / 'source').mkdir()
(OUT / 'AGENTS.md').write_bytes((ROOT / 'AGENTS.md').read_bytes())
sys.dont_write_bytecode = True
prior = importlib.machinery.SourceFileLoader.get_code


def fresh(loader, name):
    if Path(loader.path).is_relative_to(ROOT):
        return loader.source_to_code(loader.get_data(loader.path), loader.path)
    return prior(loader, name)


importlib.machinery.SourceFileLoader.get_code = fresh
sys.path.insert(0,str(W))
from contract import load
from reference import build as selected_reference_build
manifest,files=load(ROOT,INPUTS,MANIFEST)
production=INPUTS/manifest['productionRoot']
qualification=INPUTS/manifest['qualificationRoot']
pins=[path for row,path in files]+[ROOT/row['path']for row in manifest['readOnlyHelpers']]+[MANIFEST]
for row,path in files:
    if row['role'] in ['support','driver']:
        (STAGE/path.name).write_bytes(path.read_bytes())
for name in ['heap_runtime062ac.py','heap_model062ac.py','heap_gate062ac.py']:
    source=ROOT/'toolscripts/sdk062_heap_v1'/name
    (STAGE/name).write_bytes(source.read_bytes())
transport=ROOT/'toolscripts/sdk062_heap_v1/driver/transport_gate.py'
(STAGE/'transport_gate.py').write_bytes(transport.read_bytes())
pins+=list(STAGE.glob('*.py'))
input_pins=[dict(path=str(path),bytes=path.stat().st_size,sha256=hashlib.sha256(path.read_bytes()).hexdigest())for path in pins]
sys.path[:0] = [str(STAGE), str(ROOT / 'toolscripts')]
import gc
import weakref
import unittest
import unittest.mock
import tempfile
import ctypes
import capstone
import unicorn
import elftools
from elftools.elf.elffile import ELFFile
import sdk062_original_v1 as oracle
import heap_gate062ac as gates
from transport_gate import TransportGate
from importlib.metadata import version
from unicorn.unicorn_py3 import unicorn as native_unicorn
runtime_paths = [Path(sys.executable), Path(getattr(sys, '_base_executable', sys.executable)),
                 ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe',
                 Path(native_unicorn.uclib._name), Path(capstone._cs._name)]
runtime_pins = [dict(path=str(path), bytes=path.stat().st_size,
                    sha256=hashlib.sha256(path.read_bytes()).hexdigest()) for path in runtime_paths]
effective_runtime = dict(python=sys.version, unicornPackage=version('unicorn'),
                         unicornBinding=unicorn.__version__, unicornNative=list(unicorn.uc_version()),
                         capstone=capstone.__version__, pyelftools=version('pyelftools'))
if effective_runtime != manifest['effectiveRuntime']:
    raise ValueError('registration runtime package/binding metadata changed')
if [(r['sha256'],r['bytes'])for r in runtime_pins] != [(r['sha256'],r['bytes'])for r in manifest['runtimePins']]:
    raise ValueError('registration runtime/tool binary changed')
reference = dict(files=manifest['referenceFiles'])
(OUT / 'input-manifest.json').write_text(json.dumps(dict(files=input_pins,
    runtimePins=runtime_pins, effectiveRuntime=effective_runtime, reference=reference), indent=2) + '\n')
sys.path[:] = [p for p in sys.path if p not in [str(ROOT/'toolscripts'),str(W)]]


class RegistryGate(TransportGate):
    def check_candidate(self, candidate, operation, directory):
        super().check_candidate(candidate, operation, directory)
        if operation == 'ctypes.dlopen' and not candidate.is_relative_to(self.output) and candidate not in self.runtime_files:
            self.reject('undeclared native library ' + str(candidate))


gate = RegistryGate(ROOT, OUT, pins, reference, A.source_only,
                    [Path(pkg.__file__).parent for pkg in [unicorn,capstone,elftools]], runtime_paths)


def final_guard():
    if gate.rejected:
        with gate.internal():
            (OUT / 'late-rejections.json').write_text(json.dumps(gate.rejected, indent=2) + '\n')
        os._exit(3)


atexit.register(final_guard)


class Finder(gates.AuthoredFinder):
    def find_spec(self, fullname, path=None, target=None):
        if importlib.machinery.BuiltinImporter.find_spec(fullname) or importlib.machinery.FrozenImporter.find_spec(fullname):
            return None
        return super().find_spec(fullname, path, target)


sys.meta_path.insert(0, Finder(ROOT, pins, OUT, gate))
gate.install_original(oracle)
guarded_original = oracle.Original


def original_factory(*args, **kwargs):
    with gate.profile('original'):
        return guarded_original(*args, **kwargs)


names = ['heap_runtime062ac', 'heap_model062ac', 'registry_build062ad',
         'registry_model062ad', 'registry_observer062ad', 'registry_proof062ad',
         'registry_controls062ad', 'test_registry062ad']
modules = {}
for name in names:
    module = importlib.import_module(name)
    modules[name] = module
    if hasattr(module, 'R'):
        module.R = ROOT
    if hasattr(module, 'Original'):
        module.Original = original_factory
builder=modules['registry_build062ad']
builder.H=H
builder.S=production
builder.W=OUT
original_build=builder.build
fixture_overrides={Path(row['target']).name:path for row,path in files if row['role']=='qualification'}
fixture_overrides.update({name:ROOT/'toolscripts/fixtures/sdk062_heap_v1'/name for name in ['fixture_heap062ac.c','fixture_default062ac.c']})
def selected_build(output=None,mutation=None):
    selected=dict(fixture_overrides)
    selected.update(mutation or{})
    return original_build(output,mutation=selected)
builder.build=selected_build
modules['registry_controls062ad'].build=selected_build
modules['registry_controls062ad'].W=OUT
modules['registry_controls062ad'].S=production
modules['registry_observer062ad'].S=production
modules['registry_observer062ad'].build=lambda folder:selected_reference_build(ROOT,production,qualification,folder,builder.PROFILES)
proof=modules['registry_proof062ad']
proof.H=ROOT/'toolscripts/sdk062_heap_v1'
modules['test_registry062ad'].TEST_OUTPUT=OUT/'fresh-tests'
rows, tests, status = [], 0, 'failed'
started = time.time()
try:
    if A.guard_control:
        target = ROOT/'work/native-asset062-sdk-registration-v1/ready-v1.json'
        try:
            if A.guard_control == 'stat': os.stat(target)
            elif A.guard_control == 'lstat': os.lstat(target)
            elif A.guard_control == 'listdir': os.listdir(target.parent)
            elif A.guard_control == 'scandir': list(os.scandir(target.parent))
            elif A.guard_control == 'open': target.read_bytes()
            elif A.guard_control == 'original': oracle.Original()
            elif A.guard_control == 'generated-stat': os.stat(ROOT / 'generated/update-content0/code.bin')
            elif A.guard_control == 'source-write':
                with (production/'lookup062ad.c').open('ab') as stream: stream.write(b'forbidden')
            elif A.guard_control == 'cached':
                path = OUT / 'cache.pyc'
                path.write_bytes(b'cache')
                path.read_bytes()
            elif A.guard_control == 'library': ctypes.CDLL(str(ROOT / 'work/undeclared.dll'))
            else: raise ValueError('unknown control')
        except ValueError:
            pass
        gate.require_clean()
    folder = builder.build(OUT / 'build')
    if not A.source_only:
        modules['registry_observer062ad'].build(folder)
    for seed, flag, disposer in [(622,0,False),(623,128,True),(624,255,False),(625,1,True)]:
        for target in ['arm','windows','a64']:
            rows.append(proof.execute(target, folder, seed, flag, disposer, not A.source_only))
            print('guarded registry', target, seed, 'passed', flush=True)
    suite = unittest.defaultTestLoader.loadTestsFromModule(modules['test_registry062ad'])
    result = unittest.TextTestRunner().run(suite)
    tests = result.testsRun
    if not result.wasSuccessful():
        raise ValueError('fresh registry tests failed')
    if not A.source_only:
        modules['registry_controls062ad'].main()
    gate.require_clean()
    with gate.internal():
        for row in input_pins:
            if hashlib.sha256(Path(row['path']).read_bytes()).hexdigest() != row['sha256']:
                raise ValueError('pinned registry input drift')
    status = 'passed'
finally:
    receipt = dict(status=status, tests=tests, sourceOnly=A.source_only,
                   seconds=time.time()-started, originalConstructions=gate.original_constructions,
                   originalFileReads=sorted(p for p in gate.reads if Path(p) in gate.reference),
                   rejectedAttempts=gate.rejected, metadataCounts=gate.metadataCounts,
                   nativeLibraries=sorted(gate.libraries), profiles=rows, sourceCreditGranted=0)
    (OUT / 'report.json').write_text(json.dumps(receipt, indent=2) + '\n')
