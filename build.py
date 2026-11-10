"""Build the reconstructed game from public source and your own original image.

    python build.py --image "C:/path/to/DQMJ3P_Update.cia"

You supply the original update CIA. Nothing is downloaded and nothing derived
from the original is written back into the repository: the code image and
ExHeader land in ``generated/`` and the objects, linked image and report in
``build/``, both gitignored.

The build then does what the project measures:

  1. check the supplied image against the pinned identity, and stop if it is
     not the measured update image of DQMJ3 Professional;
  2. extract the code image and the ExHeader, which declares the initialized
     text, rodata, data and BSS extents;
  3. read ``config/symbols.txt`` and carve each original function out of the
     code image;
  4. compile ``src/native`` with the pinned compiler profile;
  5. link the complete image at the original addresses, taking compiled bytes
     wherever source implements a function and original bytes everywhere else;
  6. report, per function, whether the compiled bytes equal the original, and
     whether the whole linked image is byte-identical.

The end state is zero retained bytes and a byte-identical image. Anything else
is an unfinished reconstruction, and the report says exactly how unfinished.

Exit status: 0 when the report was produced, 1 when the build could not run, and
2 when the image is complete. ``--strict`` turns incompleteness into failure.
"""

import argparse
import json
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parent
VERSION = 'update-content0'
OBJDIFF = 'tools/objdiff-3.8.3/objdiff-cli.exe'


def number(value):
    return format(value, ',')


def describe_inputs(acquired):
    layout = acquired['layout']
    text = [row for row in layout['segments'] if row['name'] == 'text'][0]
    data = [row for row in layout['segments'] if row['name'] == 'data'][0]
    rodata = [row for row in layout['segments'] if row['name'] == 'rodata'][0]
    return ['original:  %s' % acquired['cia'],
            '           sha256 %s' % acquired['ciaSha256'],
            'code:      %s bytes, sha256 %s' % (number(acquired['codeBytes']), acquired['codeSha256']),
            'text:      %s bytes at 0x%08x' % (number(text['initializedBytes']), text['address']),
            'rodata:    %s bytes   data: %s bytes   bss: %s bytes'
            % (number(rodata['initializedBytes']), number(data['initializedBytes']),
               number(layout['bssBytes']))]


def describe_objects(mapping):
    return ['split:     %s functions (%s primary bytes, %s extra-range bytes)'
            % (number(mapping['split']['functionCount']), number(mapping['split']['primaryBytes']),
               number(mapping['split']['extraBytes'])),
            'source:    %s files compiled, %s units define a split function, %s measured functions'
            % (number(mapping['sourceFiles']), number(len(mapping['units']) - 1),
               number(mapping['measuredFunctions'])),
            'unmeasured: %s source functions have no split entry' % number(len(mapping['unmeasuredSourceFunctions']))]


def describe_report(report):
    measures = report['measures']
    return ['report:    total_code=%s matched_code=%s matched_functions=%s units=%s'
            % (measures['total_code'], measures['matched_code'], measures['matched_functions'],
               measures['total_units'])]


def describe_link(result):
    lines = ['compiled:  %s functions from source (%s bytes), %s byte-identical'
             % (number(result['sourceFunctions']), number(result['sourceBytes']),
                number(result['matchingFunctions'])),
             'retained:  %s functions, %s text bytes, %s data and bss bytes'
             % (number(result['retainedFunctions']), number(result['retainedTextBytes']),
                number(result['retainedDataBytes'] + result['retainedBssBytes'])),
             'image:     %s' % ('BYTE-IDENTICAL to the original'
                                if result['imageIdentical'] else
                                'differs from the original in %s functions'
                                % number(len(result['differingFunctions']))),
             'complete:  %s' % ('YES' if result['complete'] else
                                'NO, %s bytes are still retained from the original'
                                % number(result['retainedBytes']))]
    if result['unplaceableSourceFunctions']:
        reasons = {}
        for row in result['unplaceableSourceFunctions']:
            reasons[row['reason']] = reasons.get(row['reason'], 0) + 1
        for reason, count in sorted(reasons.items()):
            lines.append('blocked:   %s source functions, %s' % (number(count), reason))
    if not result['complete']:
        lines.append('work queue, largest retained functions first:')
        for row in result['retainedQueue']:
            lines.append('           0x%08x %8s bytes  %s' % (row['address'], number(row['size']), row['name']))
        lines.append('           full list: ' + result['queuePath'])
    return lines


def main():
    parser = argparse.ArgumentParser(description='Build DQMJ3 Professional from source and your own image.')
    parser.add_argument('--image', help='your own decrypted update CIA')
    parser.add_argument('--private-inputs', help='owner-controlled directory of pinned input parts')
    parser.add_argument('--output', default='build/' + VERSION)
    parser.add_argument('--strict', action='store_true', help='fail unless the image is complete')
    args = parser.parse_args()

    sys.path.insert(0, str(ROOT / 'toolscripts'))
    import finalize_objdiff_report as finalize
    import image_link
    import inputs
    import objdiff_objects

    output = ROOT / args.output
    objdiff = ROOT / OBJDIFF
    if not objdiff.is_file():
        print('Missing pinned report tools; run: python setup_tools.py', file=sys.stderr)
        return 1
    try:
        acquired = inputs.acquire(ROOT, image=args.image, private=args.private_inputs)
        mapping = objdiff_objects.build(ROOT, output / 'objects', ROOT / 'objdiff.json',
                                        ROOT / 'config/symbols.txt')
        object_map = output / 'objects' / 'object-map.json'
        object_map.write_text(json.dumps(mapping, indent=2) + '\n', encoding='utf-8')
        raw = output / 'report.raw.json'
        objdiff_objects.run([objdiff, 'report', 'generate', '-p', ROOT, '-o', raw],
                            output / 'objdiff.log')
        units, matched, matched_bytes = finalize.verify(ROOT, mapping)
        report = finalize.normalize(finalize.read(raw), units, matched, matched_bytes)
        (output / 'report.json').write_text(json.dumps(report, separators=(',', ':')) + '\n',
                                            encoding='utf-8')
        link = image_link.link(ROOT, mapping, output)
        (output / 'link.json').write_text(json.dumps(link, indent=2) + '\n', encoding='utf-8')
    except (OSError, ValueError, KeyError) as error:
        print('Build failed: ' + str(error), file=sys.stderr)
        return 1

    print('\n'.join(['DQMJ3 Professional - ' + VERSION]
                    + describe_inputs(acquired) + describe_objects(mapping)
                    + [''] + describe_report(report) + [''] + describe_link(link)
                    + ['', 'report:    ' + (output / 'report.json').relative_to(ROOT).as_posix()]))
    if args.strict and not link['complete']:
        return 1
    return 2 if link['complete'] else 0


if __name__ == '__main__':
    raise SystemExit(main())
