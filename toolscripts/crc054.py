import argparse
import hashlib
import importlib.metadata
import json
import sys
import zlib
from pathlib import Path

import capstone
import unicorn

from crc054_build import ROOT, SOURCE, SYMBOLS, build, pin, save
from crc054_cases import cases, expected, arguments, metadata
from crc054_controls import SPECS, mutated
from crc054_measure import FUNCTIONS, measure
from crc054_oracle import Machine, Windows


def digest(value):
    return hashlib.sha256(json.dumps(value, sort_keys=True, separators=(',', ':')).encode()).hexdigest()


def inputs():
    paths = set((ROOT / 'toolscripts').glob('crc054*.py'))
    paths.update((ROOT / 'src/native/wave054').glob('*'))
    paths.update([ROOT / 'toolscripts/digest024_build.py', ROOT / 'toolscripts/digest024_oracle.py',
                  ROOT / 'toolscripts/digest024_measure.py', ROOT / 'tools/clang-21/clang.exe',
                  ROOT / 'tools/clang-21/ld.lld.exe', ROOT / 'docs/crc054.md',
                  ROOT / 'evidence/lanes/crc054/primary-references.json'])
    for path in (Path(sys.executable), Path(unicorn.unicorn_py3.unicorn.uclib._name), Path(capstone._cs._name)):
        if path.resolve().is_relative_to(ROOT):
            paths.add(path.resolve())
    test = ROOT / 'tests/test_crc054.py'
    if test.exists():
        paths.add(test)
    return sorted((pin(path) for path in paths if path.is_file()), key=lambda item: item['path'])


def execute(folder, source=SOURCE, controls=True):
    folder = folder.resolve()
    if not folder.is_relative_to(ROOT / 'work/crc054'):
        raise ValueError('CRC054 build/proof output must stay private in its own workspace')
    folder.mkdir(parents=True, exist_ok=True)
    before = inputs()
    measurement = measure()
    if not all(row['allEntriesMatchGeneratedTables'] for row in measurement['tableDependencies']):
        raise ValueError('CRC054 polynomial/table identification failed')
    artifacts = {target: build(folder / target, target, source) for target in ('arm', 'windows', 'a64')}
    backends = [Machine(), Machine('arm', artifacts['arm'][0]), Windows(artifacts['windows'][0]),
                Machine('a64', artifacts['a64'][0])]
    rows = []
    for symbol in SYMBOLS:
        for case in cases():
            reference = expected(case)
            results = [backend.execute(symbol, **arguments(case)) for backend in backends]
            if any(row['result'] != reference for row in results):
                raise ValueError('CRC054 original/source/model mismatch: ' + symbol + ' ' + str(metadata(case)))
            if any(row['inputBytesRead'] != (0 if case['null'] else len(case['payload']))
                   for row in (results[0], results[1], results[3])):
                raise ValueError('CRC054 did not consume exactly the declared input bytes')
            rows.append(dict(symbol=symbol, case=metadata(case), expected=reference,
                             originalArm=results[0], sourceArm=results[1],
                             windows=results[2], highAddressA64=results[3]))
        print('CRC054 corpus passed', symbol, len(rows), flush=True)
    streaming = []
    for backend_index, backend in enumerate(backends):
        payload = bytes(range(256)) * 5
        for split in (0, 1, 3, 4, 31, 32, 33, 511, len(payload)):
            seed = 0x80000001
            prefix = backend.execute(SYMBOLS[0], seed, payload[:split], 3)['result']
            final = backend.execute(SYMBOLS[1], prefix, payload[split:], 1)['result']
            if final != zlib.crc32(payload, seed):
                raise ValueError('CRC054 cross-entry incremental update failed')
            streaming.append(dict(backend=backend_index, split=split, final=final))
    negative = []
    if controls:
        for name, (unused, unused2, parameters) in SPECS.items():
            directory = folder / 'controls' / name
            directory.mkdir(parents=True, exist_ok=True)
            wrong_source = directory / 'crc.c'
            wrong_source.write_text(mutated(source.read_text(), name), encoding='utf-8')
            (directory / 'crc.h').write_bytes(source.with_name('crc.h').read_bytes())
            wrong = {target: build(directory / target, target, wrong_source)
                     for target in ('arm', 'windows', 'a64')}
            targets = [Machine('arm', wrong['arm'][0]), Windows(wrong['windows'][0]),
                       Machine('a64', wrong['a64'][0])]
            expected_result = 0 if parameters.get('null', False) else zlib.crc32(parameters['payload'], parameters['seed'])
            failures = []
            for symbol in SYMBOLS:
                results = [backend.execute(symbol, **parameters) for backend in targets]
                if any(row['result'] == expected_result for row in results):
                    raise ValueError('CRC054 normally returning wrong source escaped model: ' + name)
                failures.append(dict(symbol=symbol, expected=expected_result, results=results))
            negative.append(dict(name=name, allSixCallsActuallyReturned=True,
                                 allSixRejectedByIndependentModel=True, observations=failures,
                                 artifacts={key: value[1] for key, value in wrong.items()}))
            print('CRC054 returning control rejected', name, flush=True)
    original = backends[0]
    coverage = []
    for entry, ranges in FUNCTIONS.items():
        visited = original.coverage & {pc for start, end in ranges for pc in range(start, end, 4)}
        lower = set(range(ranges[0][0], ranges[0][1], 4))
        if visited & lower or original.endian_reads != {1}:
            raise ValueError('CRC054 little-endian control-domain proof changed')
        proof = next(row for row in measurement['functions'] if row['address'] == entry)
        unreachable = {pc for row in proof['unreachableRanges']
                       for pc in range(row['start'], row['endExclusive'], 4)}
        expected_pcs = {pc for start, end in ranges for pc in range(start, end, 4)} - unreachable
        if visited != expected_pcs:
            raise ValueError('CRC054 reachable instruction coverage is incomplete')
        coverage.append(dict(entry=entry, measuredInstructionPcs=sum((b-a)//4 for a,b in ranges),
                             visitedInstructionPcs=len(visited), visited=sorted(visited),
                             lowerAlternateVisited=False, endianProbeObservedBytes=[1],
                             unreachableLowerPcs=len(lower),
                             staticallyClassifiedUnreachablePcs=len(unreachable),
                             all277ReachableInstructionPcsVisited=True,
                             domain='canonical little-endian module; entry writes32-bit1 then loads its first byte'))
    if inputs() != before:
        raise ValueError('CRC054 source/tool input changed during qualification')
    result = dict(schemaVersion=1, status='crc054-bounded-four-target-qualified' if controls else 'positive-only-diagnostic',
                  sets=len(rows), observations=4*len(rows), cases=rows, streaming=streaming,
                  negativeControls=negative, orderedSemanticDigest=digest([
                      [row['symbol'], row['case'], row['expected']] for row in rows]),
                  measurement=measurement, coverage=coverage, inputs=before,
                  artifacts={key: value[1] for key, value in artifacts.items()},
                  effectiveTools=dict(python=sys.version, zlibCompile=zlib.ZLIB_VERSION,
                                      zlibRuntime=zlib.ZLIB_RUNTIME_VERSION,
                                      unicornPackage=importlib.metadata.version('unicorn'),
                                      unicornModule=unicorn.__version__, unicornNative=unicorn.uc_version(),
                                      unicornNativeSha256=hashlib.sha256(Path(unicorn.unicorn_py3.unicorn.uclib._name).read_bytes()).hexdigest(),
                                      capstonePackage=importlib.metadata.version('capstone'),
                                      capstoneModule=capstone.__version__,
                                      capstoneNative=capstone.cs_version(),
                                      capstoneNativeSha256=hashlib.sha256(Path(capstone._cs._name).read_bytes()).hexdigest(),
                                      pythonExecutableSha256=hashlib.sha256(Path(sys.executable).read_bytes()).hexdigest()),
                  sourceCreditGranted=0, exactCreditGranted=0,
                  completeSdkOrGzipClaim=False, physicalAndroidExecution=False,
                  originalPayloadPublished=False, coordinatorIndependentReviewRequired=True)
    save(folder / 'report.json', result)
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--source', type=Path, default=SOURCE)
    parser.add_argument('--skip-controls', action='store_true')
    args = parser.parse_args()
    result = execute(args.output, args.source.resolve(), not args.skip_controls)
    print(json.dumps({key: result[key] for key in ('status', 'sets', 'observations', 'orderedSemanticDigest')}))
