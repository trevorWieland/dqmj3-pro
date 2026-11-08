import hashlib
import json
from pathlib import Path
import re
import subprocess

FIELDS = ['deviceBytes', 'embeddedBytes', 'deviceEmbeddedOffset', 'streamPoolBytes', 'devicePoolBytes',
    'devicePoolFreeOffset', 'devicePoolLiveOffset', 'devicePoolMutexOffset', 'streamPoolFreeOffset',
    'streamPoolLiveOffset', 'streamPoolMutexOffset', 'deviceOperationsBytes', 'deviceDestroySlotOffset']
EXPRESSION = [
    'sizeof(EffectFileDevice068)', 'sizeof(EffectFileEmbedded069)', '__builtin_offsetof(EffectFileDevice068, embedded)',
    'sizeof(EffectFileStreamPool069)', 'sizeof(EffectFileDevicePool068)', '__builtin_offsetof(EffectFileDevicePool068, free_devices)',
    '__builtin_offsetof(EffectFileDevicePool068, live_count)', '__builtin_offsetof(EffectFileDevicePool068, mutex)',
    '__builtin_offsetof(EffectFileStreamPool069, free_streams)', '__builtin_offsetof(EffectFileStreamPool069, live_count)',
    '__builtin_offsetof(EffectFileStreamPool069, mutex)', 'sizeof(EffectFileDeviceOperations068)',
    '__builtin_offsetof(EffectFileDeviceOperations068, destroy)']


def run(root, target, output, manifest):
    output.mkdir()
    seed = json.loads((target / 'metadata/combined/build-seed.json').read_text())
    prior = json.loads((target / 'metadata/prior070/sdk/build-seed.json').read_text())
    commands, layouts, fences, objects = [], {}, [], []
    def command(argv, log, expected):
        with log.open('wb') as stream:
            result = subprocess.run([str(value) for value in argv], stdout=stream, stderr=subprocess.STDOUT, cwd=root)
        commands.append({'argv': [str(value) for value in argv], 'exitCode': result.returncode, 'log': str(log)})
        if (result.returncode == 0) != expected: raise ValueError('Versioned header compile/fence status differs')
    affected = ['device_destroy069', 'embedded069', 'ipc069', 'stream_destroy069', 'device_pool']
    for profile in ['arm', 'windows', 'a64']:
        original = next(row['argv'] for row in seed['commands'] if any('/' + profile + '/' in value.replace('\\', '/') for value in row['argv']) and '-c' in row['argv'])
        flags = original[1:original.index('-c')]
        include = flags.index('-I')
        flags = flags[:include] + flags[include + 2:]
        compiler = root / 'tools/clang-21/clang.exe'
        layouts[profile] = {}
        for model, directory in [('legacy069', root / 'src/native/wave068-teardown'), ('typed072', target / 'source/src/native/wave068-teardown')]:
            source = output / (profile + '-' + model + '.c')
            source.write_text('#include "device_pool.h"\nconst unsigned int file_abi_layout[] = {' + ','.join(EXPRESSION) + '};\n')
            ir = output / (profile + '-' + model + '.ll')
            command([compiler, *flags, '-I', directory, '-S', '-emit-llvm', source, '-o', ir], output / (profile + '-' + model + '.log'), True)
            line = next(line for line in ir.read_text().splitlines() if '@file_abi_layout =' in line)
            values = [int(value) for value in re.findall(r'i32 ([0-9]+)', line)]
            assert len(values) == len(FIELDS)
            layouts[profile][model] = dict(zip(FIELDS, values, strict=True))
        old, new = layouts[profile]['legacy069'], layouts[profile]['typed072']
        if profile == 'arm': assert old['deviceBytes'] == new['deviceBytes'] == 304 and old['embeddedBytes'] == new['embeddedBytes'] == 60
        else: assert [old['deviceBytes'], new['deviceBytes'], old['embeddedBytes'], new['embeddedBytes']] == [392, 504, 88, 96]
        for order in ['legacy-first', 'typed-first']:
            legacy = (root / 'src/native/wave069-device/device069.h').as_posix()
            typed = (target / 'source/src/native/wave072-construction/device_types072.h').as_posix()
            includes = [legacy, typed] if order == 'legacy-first' else [typed, legacy]
            source = output / (profile + '-' + order + '.c')
            source.write_text(''.join('#include "' + value + '"\n' for value in includes))
            command([compiler, *flags, '-fsyntax-only', source], output / (profile + '-' + order + '.log'), False)
            fences.append({'profile': profile, 'includeOrder': order, 'compilerRejected': True})
        for name in affected:
            old_row = next(row for row in prior['artifacts'][profile]['objects'] if Path(row['path']).stem == name)
            new_row = next(row for row in seed['artifacts'][profile]['objects'] if Path(row['path']).stem == name)
            same = all(old_row[key] == new_row[key] for key in ['bytes', 'sha256'])
            logical = 'src/native/wave068-teardown/device_pool.c' if name == 'device_pool' else 'src/native/wave069-device/' + name + '.c'
            raw = (root / logical).read_bytes()
            assert raw == (target / 'source' / logical).read_bytes()
            for model, source_root, expected in [('legacy069', root, old_row), ('typed072', target / 'source', new_row)]:
                extension = '.obj' if profile == 'windows' else '.o'
                destination = output / (profile + '-' + model + '-' + name + extension)
                command([compiler, *flags, '-c', source_root / logical, '-o', destination], output / (profile + '-' + model + '-' + name + '.log'), True)
                data = destination.read_bytes()
                if len(data) != expected['bytes'] or hashlib.sha256(data).hexdigest() != expected['sha256']:
                    raise ValueError('Legacy/typed dependent C object differs from its isolated seed')
            objects.append({'profile': profile, 'translationUnit': name, 'legacy': {key: old_row[key] for key in ['bytes', 'sha256']},
                'typed': {key: new_row[key] for key in ['bytes', 'sha256']}, 'sameObjectBytes': same, 'sourceSHA256': hashlib.sha256(raw).hexdigest(), 'bothModelsRecompiledExactly': True})
    return {'status': 'versioned-header-ABI-analysis-passed', 'layouts': layouts, 'mixedModelFences': fences,
        'allFiveExistingDependentTranslationUnits': objects, 'commands': commands, 'canonicalHeaderFilesEdited': False,
        'legacyProofsRemainBoundToLegacyHeaders': True, 'newTargetRequiresConsistentRebuildOfAllFiveDependencies': True,
        'sourceCreditGranted': 0}
