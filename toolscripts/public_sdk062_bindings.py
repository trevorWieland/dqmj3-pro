import importlib
import sys
import types
from pathlib import Path

import public_sdk062_inputs as inputs

BASELINES = dict(context='build', arbiter='build', object='final-attempt-v4/build',
                 startup='final-stage-v1/build')


def bind(root, output, stage, selected):
    folders = [output / name for name in ('context', 'object', 'startup', 'arbiter', 'legacy')]
    paths = [str(path) for path in folders] + [str(root / 'toolscripts')]
    sys.path[:0] = paths
    import sdk062_original_v1 as oracle
    alias = types.ModuleType('native_stream058_original')
    alias.__file__, alias.Original = oracle.__file__, oracle.Original
    alias.RAM, alias.SIZE, alias.STACK, alias.STOP = oracle.RAM, 0x100000, oracle.STACK, oracle.STOP
    sys.modules[alias.__name__] = alias
    for name in ('runtime062', 'runtime062c', 'runtime062s', 'kernel062s'):
        module = importlib.import_module(name)
        if not Path(module.__file__).resolve().is_relative_to(output):
            raise ValueError('SDK runtime resolved outside its public snapshot: ' + name)
    import digest024_build as compiler
    old_command = compiler.command
    allowed = [path / 'source' for path in folders]
    allowed += [root / ('work/' + name + '/source') for name in
        ('native-asset062-sdk', 'native-asset062-sdk-object', 'native-asset062-sdk-startup',
         'native-asset062-sdk-arbiter')]
    headers = root / selected['sources']['includeDirectory']

    def command(argv, *args, **kwargs):
        return old_command(inputs.remap_includes(argv, allowed, headers), *args, **kwargs)

    compiler.command = command
    sources = inputs.selection(root, selected)
    builders = {}
    for name in ('build062s', 'build062t', 'build062u', 'build062a'):
        module = importlib.import_module(name)
        if not Path(module.__file__).resolve().is_relative_to(output):
            raise ValueError('SDK builder resolved outside its public snapshot: ' + name)
        if name == 'build062a':
            module.SDK = output / 'context'
        original = module.build

        def build(folder, target, overrides=None, original=original):
            return original(folder, target, inputs.merged_overrides(sources, overrides, output))

        module.build = build
        builders[name] = module
        sys.path[:0] = paths
    baseline = output / stage / BASELINES[stage]
    oracle.install(baseline)
    chosen = dict(context='build062s', arbiter='build062a', object='build062t', startup='build062u')[stage]
    return builders[chosen], baseline
