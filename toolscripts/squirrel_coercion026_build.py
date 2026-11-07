import hashlib
import json

from squirrel_lookup023_build import ROOT, SOURCES as FROZEN_SOURCES
from squirrel_lookup023_build import arm as frozen_arm, windows as frozen_windows
from squirrel_lookup020_build import android as frozen_android
from native_material_wave011_build import pin, save, command


SOURCE = ROOT/'source/squirrel-wave026'
WORK = ROOT/'work/squirrel-coercion026'
READY = ROOT/'evidence/lanes/squirrel-lookup023/ready.json'
if hashlib.sha256(READY.read_bytes()).hexdigest() != '2162f8e84ff2197cc443fb50e6bee268fb528ae37fe5e64034f23163c0685acf':
    raise ValueError('026 frozen023 receipt identity changed')
for row in json.loads(READY.read_text())['files']:
    path = ROOT/row['path']
    if path.stat().st_size != row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != row['sha256']:
        raise ValueError('026 frozen023 input changed: '+row['path'])
SOURCES = [path for path in FROZEN_SOURCES if path.name != 'fixture_services020.c'] + sorted(SOURCE.glob('*.c'))


def arm(folder,sources=SOURCES):
    return frozen_arm(folder,sources)


def windows(folder,sources=SOURCES):
    return frozen_windows(folder,sources)


def android(folder,sources=SOURCES):
    sections,symbols,functions,receipt=frozen_android(folder,sources)
    library=folder/'libcoercion026.so'
    command([ROOT/'tools/clang-21/ld.lld.exe','-shared','--no-undefined','-z','max-page-size=16384',
        '-z','common-page-size=16384','-soname',library.name,
        *[ROOT/row['path'] for row in receipt['objects']],'-o',library],folder/'library026-link.json')
    from squirrel_coercion026_android import inspect
    alignment={'schemaVersion':1,'qualified':inspect(library),
        'inheritedMaxPageOnlyIntermediate':inspect(folder/'liblookup020.so',False),
        'normalLinkerFlags':['-z','max-page-size=16384','-z','common-page-size=16384'],
        'compilerOutputPatched':False,'predecessorFilesChanged':False}
    save(folder/'alignment026.json',alignment)
    receipt=dict(receipt,sharedLibrary=pin(library),alignment=pin(folder/'alignment026.json'))
    return sections,symbols,functions,receipt


def entrypoints(symbols):
    result = dict(symbols)
    for original, current in [('fixture_prepare020','fixture_prepare026'),
        ('fixture_execute020','fixture_execute026'),('fixture_snapshot020','fixture_snapshot026')]:
        result[original] = symbols[current]
    return result
