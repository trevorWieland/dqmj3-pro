import argparse
import json
from pathlib import Path

import native_effect065_build as common
import native_effect065_resource_graph_build as graph


ROOT = common.ROOT


def build(output, overrides=None):
    output = Path(output).resolve()
    previous_names, previous_exports = graph.NAMES, graph.EXPORTS
    graph.NAMES = previous_names + ['../wave065-owner/effect_registration']
    graph.EXPORTS = previous_exports + ['fn_005f0974', 'effect_owner_fixture_reset065', 'effect_owner_fixture065',
        'effect_owner_fixture_registration065', 'effect_owner_fixture_layout065', 'effect_owner_fixture_callbacks065']
    try:
        graph.build(output, ROOT / 'toolscripts/effect065_owner_fixture.c', overrides)
    finally:
        graph.NAMES, graph.EXPORTS = previous_names, previous_exports
    report = json.loads((output / 'build.json').read_text())
    closure = [ROOT / 'src/native/wave065-owner/effect_owner.h', ROOT / 'src/native/wave065-owner/effect_registration.c',
        ROOT / 'toolscripts/effect065_owner_fixture.c', ROOT / 'toolscripts/native_effect065_resource_graph_fixture.c']
    windows = report['artifacts']['windows']['linked']
    argv = next(row['argv'] for row in report['commands'] if '-flavor' in row['argv'])
    common.command([*argv, '/MAP:' + str(output / 'windows/effect_owner.map')], output / 'windows/map-link.log', report['commands'])
    actual = common.pin(ROOT / windows['path'])
    if windows != actual:
        raise ValueError('Real map-producing link changed the source binary')
    report['ownerSourceClosure'] = [common.pin(path) for path in closure]
    report['independentLinkerMap'] = common.pin(output / 'windows/effect_owner.map')
    report['mapRelinkPreservesEveryWindowsByte'] = True
    (output / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    result = build(args.output)
    print(json.dumps({'profiles': list(result['artifacts']), 'sourceCreditGranted': 0}))
