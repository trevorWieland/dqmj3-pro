import argparse
import json
from pathlib import Path

import squirrel_compose057_build as build
import squirrel_compose057_layout as layout
import squirrel_compose057_reuse as reuse
import squirrel_compose057_controls as controls
import squirrel_compose057_packet as packet
from squirrel_compose057_verify import verify_tree

ROOT=Path(__file__).resolve().parents[1]


def run(output):
    output=(ROOT/output).resolve()if not output.is_absolute()else output.resolve()
    if not output.is_relative_to(ROOT/'work'):
        raise ValueError('Independent replay output must stay under this checkout work directory')
    if (output/'packet.json').exists():raise ValueError('Replay packet already exists; preserve it')
    for profile in ['arm','a64','windows','android']:build.build(profile)
    for profile in ['arm','a64','windows']:layout.run(profile)
    reuse.main()
    for control in build.CONTROLS:
        profiles=['a64','windows']if control=='polluted-legacy-carrier'else \
                 ['arm','a64']if control=='premature-retired-frame-read'else['arm','a64','windows']
        for profile in profiles:build.build(profile,control)
    controls.main()
    packet.OUTPUT=output
    packet.main()
    result=json.loads((output/'packet.json').read_text())
    checks=verify_tree(ROOT,result)
    print(json.dumps({'status':'fresh-public-composition-replay-completed',
                      'packet':build.pin(output/'packet.json'),'identityChecks':checks,
                      'fullPostGraphEqualityClaimed':False,'sourceCreditGranted':0}))


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,required=True)
    run(parser.parse_args().output)
