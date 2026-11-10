"""Compile every configured native unit with the compiler profile the build uses.

The public compile check exists to catch source that will not compile. If it uses
a different compiler from the build it can pass while the build fails, and the
number the build reports is not reproducible by anyone who runs the checked-in
workflow. This runs the build's own compile stage -- the same per-unit profiles,
preincludes and arguments -- without the original image, which that stage does
not need.

``--compiler-profile clang-21`` is the route for a contributor who declines to
fetch proprietary software; it compiles the same units with the pinned Clang.
"""

import argparse
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(
        description='Compile the native units with the compiler profile the build uses.')
    parser.add_argument('--compiler-profile', default=None,
                        help='force one declared profile; clang-21 needs no proprietary tool')
    parser.add_argument('--output', default='work/measured-compile')
    args = parser.parse_args()

    sys.path.insert(0, str(ROOT))
    sys.path.insert(0, str(ROOT / 'toolscripts'))
    import objdiff_objects

    table = objdiff_objects.profiles(ROOT)
    active = args.compiler_profile or table['default']
    if active not in table['profiles']:
        raise ValueError('Unknown --compiler-profile: ' + active)
    units = objdiff_objects.configured_sources(ROOT)
    definitions, _commands = objdiff_objects.compile_sources(
        ROOT, ROOT / args.output, args.compiler_profile)
    if not definitions:
        raise RuntimeError('the compile stage produced no functions')

    profiles = sorted({row['profile'] for row in definitions.values()})
    print('default profile: %s' % table['default'])
    print('compiled: %d functions from %d units' % (len(definitions), len(units)))
    for name in profiles:
        profile = table['profiles'][name]
        print('  %-18s %4d functions  %s  %s'
              % (name, sum(1 for row in definitions.values() if row['profile'] == name),
                 'measured original' if profile.get('measuredOriginal') else 'infrastructure',
                 profile['identity']))
    return 0


if __name__ == '__main__':
    sys.exit(main())
