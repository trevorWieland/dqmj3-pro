import hashlib
import json

from squirrel_lookup020_build import SOURCES as FROZEN_SOURCES
from squirrel_lookup020_build import arm as frozen_arm, windows as frozen_windows, android as frozen_android
from native_material_wave011_build import ROOT, command, pin, save


SOURCE = ROOT / 'source/squirrel-wave023'
WORK = ROOT / 'work/squirrel-lookup023'
CALL_READY = ROOT / 'evidence/lanes/squirrel-vm-call022/ready.json'
CALL_READY_SHA256 = '64a08d949e507e59737db08356f5f45221ae18581bba315a2e58ce3036742202'


def call_sources():
    if hashlib.sha256(CALL_READY.read_bytes()).hexdigest() != CALL_READY_SHA256:
        raise ValueError('023 frozen022 ready identity changed')
    receipt = json.loads(CALL_READY.read_text())
    for row in receipt['ownedFiles'] + receipt['pins'] + receipt['files']:
        path = ROOT / row['path']
        if path.stat().st_size != row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != row['sha256']:
            raise ValueError('023 frozen022 input changed: ' + row['path'])
    products = json.loads((ROOT / 'evidence/lanes/squirrel-vm-call022/providers.json').read_text())['productFiles']
    return [ROOT / name for name in products if name.endswith('.c') and
        not name.endswith(('lookup_call_adapter.c','literal_format.c'))]


SOURCES = [p for p in FROZEN_SOURCES if p.as_posix() not in
    [(ROOT / 'source/squirrel-wave019/fixture_services.c').as_posix(),
     (ROOT / 'source/squirrel-wave020/fixture_services.c').as_posix()]] + call_sources() + sorted(SOURCE.glob('*.c'))


def arm(folder, sources=SOURCES):
    return frozen_arm(folder, sources)


def windows(folder, sources=SOURCES):
    return frozen_windows(folder, sources)


def android(folder):
    return frozen_android(folder, SOURCES)


def entrypoints(symbols):
    selected = dict(symbols)
    selected['fixture_prepare020'] = symbols['fixture_prepare023']
    selected['fixture_execute020'] = symbols['fixture_execute023']
    selected['fixture_snapshot020'] = symbols['fixture_snapshot023']
    return selected
