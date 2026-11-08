import argparse
import hashlib
import importlib
import importlib.metadata
import json
from pathlib import Path
import sys
import unittest

import public_sdk062_replay as guard
import public_sdk062_runtime as runtime

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'evidence/lanes/native-effect065/resource-public-inputs-v1/inputs.json'
sys.dont_write_bytecode = True


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def contract():
    value = json.loads(MANIFEST.read_bytes())
    names = [row['path'] for row in value['files']]
    if value.get('schemaVersion') != 1 or names != sorted(set(names)):
        raise ValueError('Resource public input schema, ordering or unique membership differs')
    for row in value['files']:
        path = (ROOT / row['path']).resolve()
        if not path.is_relative_to(ROOT) or pin(path) != row:
            raise ValueError('Resource public input changed: ' + row['path'])
    source = sorted(path.relative_to(ROOT).as_posix() for path in (ROOT / 'src/native/wave065-resource').glob('*.[ch]'))
    if source != value['resourceSourcePaths']:
        raise ValueError('Resource source membership differs')
    return value


def unchanged(before, producer, manifest, rejected):
    if rejected:
        raise ValueError('Blocked historical-work attempts invalidate resource qualification')
    if before != contract() or producer != pin(Path(__file__).resolve()) or manifest != pin(MANIFEST):
        raise ValueError('Resource source, producer or manifest changed')


def write(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def run(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work') or output.exists():
        raise ValueError('Resource replay requires a fresh project work output')
    before = contract()
    producer, manifest = pin(Path(__file__).resolve()), pin(MANIFEST)
    runtime_before = runtime.verify(ROOT)
    identity = runtime.identity()
    import capstone
    identity['capstone'] = dict(packageVersion=importlib.metadata.version('capstone'),
        bindingVersion=capstone.__version__, nativeVersion=list(capstone.cs_version()))
    output.mkdir(parents=True)
    reads, libraries, rejected = guard.audited(ROOT, output)
    record = dict(status='failed', sourceCreditGranted=0, exactMatchingCreditGranted=0)
    try:
        modules = {name: importlib.import_module('effect_resource065_' + name) for name in
            ('build', 'vertex_cases', 'commands_cases', 'constants', 'texture_cases', 'vertex_negative',
             'graph_build', 'graph_cases', 'graph_lifecycle', 'graph_negative', 'graph_copy', 'header_review')}
        modules['build'].build(output / 'kernel-build')
        for name, folder in [('vertex_cases', 'vertex'), ('commands_cases', 'commands'),
                             ('constants', 'constants'), ('texture_cases', 'texture')]:
            modules[name].run(output / folder, output / 'kernel-build')
        modules['vertex_negative'].run(output / 'vertex-negative')
        modules['graph_build'].build(output / 'graph-build', ROOT / 'toolscripts/effect_resource065_graph_fixture.c')
        modules['graph_cases'].run(output / 'graph-build', output / 'graph')
        modules['graph_lifecycle'].run(output / 'graph-build', output / 'lifecycle')
        modules['graph_negative'].run(output / 'graph-build', output / 'negative')
        modules['graph_copy'].run(output / 'graph-build', output / 'graph/report.json', output / 'source-only')
        reports = [output / name for name in ['kernel-build/build.json', 'vertex/report.json', 'commands/report.json',
            'constants/report.json', 'texture/report.json', 'vertex-negative/report.json', 'graph-build/build.json',
            'graph/report.json', 'lifecycle/report.json', 'negative/report.json', 'source-only/report.json']]
        write(output / 'packet.json', dict(status='bounded-resource-CPU-public-path-preflight',
            inputs=before['files'], reports=[pin(path) for path in reports], sourceCreditGranted=0))
        write(output / 'ready.json', dict(packet=pin(output / 'packet.json'), sourceCreditGranted=0))
        modules['header_review'].run(output, output / 'header-review')
        suite = unittest.defaultTestLoader.discover(str(ROOT / 'tests'), pattern='test_effect_resource065*.py')
        result = unittest.TextTestRunner(verbosity=2).run(suite)
        if result.testsRun != 15 or not result.wasSuccessful():
            raise ValueError('Resource observer/header regression tests failed or count differs')
        declared = {row['path'] for row in before['files']}
        imported = []
        for module in list(sys.modules.values()):
            filename = getattr(module, '__file__', None)
            if not filename:
                continue
            path = Path(filename).resolve()
            if path.is_relative_to(ROOT / 'toolscripts'):
                if path.relative_to(ROOT).as_posix() not in declared and path != Path(__file__).resolve():
                    raise ValueError('Undeclared authored producer import: ' + str(path))
                imported.append(pin(path))
        unchanged(before, producer, manifest, rejected)
        if runtime_before != runtime.verify(ROOT):
            raise ValueError('Resource runtime/tool/canonical-input pins changed')
        record.update(status='passed', tests=result.testsRun, inputPins=before['files'],
            importedAuthoredModules=sorted(imported, key=lambda row: row['path']), runtimePins=runtime_before,
            runtimeIdentity=identity, producer=producer, manifest=manifest, fullResourceOrGameClaimed=False)
    except Exception as error:
        record['error'] = str(error)
        raise
    finally:
        record.update(readPaths=sorted(reads), loadedLibraries=sorted(libraries), blockedWorkAccesses=rejected)
        write(output / 'public-replay.json', record)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    run(parser.parse_args().output)
