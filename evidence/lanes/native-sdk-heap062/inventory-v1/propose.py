import bisect
import hashlib
import json
from pathlib import Path
import struct
import sys

W = Path(__file__).resolve().parent
R = next(p for p in W.parents if (p / 'AGENTS.md').is_file())
sys.path.insert(0, str(R / 'toolscripts'))
from sdk062_original_v1 import Original
from unicorn import arm_const as arm


def sha(data):
    return hashlib.sha256(data).hexdigest()


def execute(entry, skew, size):
    original = Original()
    base = 0x2020000
    original.cpu.mem_write(base, b'\xa7' * 0x20000)
    original.cpu.mem_write(0x89a508, b'\1')
    original.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3, base + 0x1f000)
    answer = original.call(entry, [base + skew, size]) & 0xffffffff
    if answer != 0x8e36a0:
        raise ValueError('constructor did not return its real SDK proxy')
    arena = bytes(original.cpu.mem_read(base, 0x20000))
    globals_image = bytes(original.cpu.mem_read(0x888000, 471024))
    return answer, arena, globals_image, original.coverage


def main():
    code = (R / 'generated/update-content0/code.bin').read_bytes()
    census_path = R / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census_bytes = census_path.read_bytes()
    functions = json.loads(census_bytes)['functions']
    owner = next(f for f in functions if f['address'] == 0x105408)
    retained = [p for p in owner['ranges'] if p['start'] != 0x10b980]
    detached = [p for p in owner['ranges'] if p['start'] == 0x10b980]
    if detached != [dict(start=0x10b980, endExclusive=0x10ba20, bytes=160)]:
        raise ValueError('historical ownership changed')
    if owner['textBodyBytes'] != 364 or sum(p['bytes'] for p in retained) != 204:
        raise ValueError('candidate byte partition changed')
    ranges = sorted((p['start'], p['endExclusive'], f['address'], f['mode'])
                    for f in functions for p in f['ranges'])
    starts = [p[0] for p in ranges]
    edges = []
    for pc in range(0x100000, 0x100000 + 7051280 - 3, 4):
        word = struct.unpack_from('<I', code, pc - 0x100000)[0]
        if word >> 25 & 7 != 5 or word >> 28 == 15:
            continue
        displacement = word & 0xffffff
        if displacement & 0x800000:
            displacement -= 0x1000000
        if (pc + 8 + 4 * displacement) & 0xffffffff != 0x10b980:
            continue
        index = bisect.bisect_right(starts, pc) - 1
        if index >= 0 and ranges[index][0] <= pc < ranges[index][1] and ranges[index][3] == 'ARM':
            edges.append(dict(address=hex(pc), target='0x10b980',
                              kind='BL' if word & (1 << 24) else 'B',
                              condition=word >> 28, currentOwner=hex(ranges[index][2]),
                              instructionSha256=sha(code[pc - 0x100000:pc - 0x100000 + 4])))
    if [(x['address'], x['kind'], x['condition']) for x in edges] != [('0x106bc4', 'B', 14)]:
        raise ValueError('direct caller frontier changed')
    observations = []
    coverage = set()
    for skew in [0, 1, 2, 3, 4, 7, 15, 31]:
        for size in [0x10000, 0x11000]:
            direct = execute(0x10b980, skew, size)
            tail = execute(0x106bc4, skew, size)
            if direct[:3] != tail[:3]:
                raise ValueError('real tail branch/direct-entry arenas differ')
            coverage.update(direct[3])
            if 0x106bc4 not in tail[3] or 0x10b980 not in tail[3] or 0x10ba1c not in tail[3]:
                raise ValueError('real branch, new entry or terminal return was not executed')
            observations.append(dict(skew=skew, size=size, answer=hex(direct[0]),
                                     fullArenaBytes=0x20000, fullGlobalsBytes=471024,
                                     arenaSha256=sha(direct[1]), globalsSha256=sha(direct[2]),
                                     directAndActualTailInstructionIdentical=True,
                                     calleeSavedRegistersStackAndFpscrChecked=True))
    def span(start, end):
        return dict(start=hex(start), endExclusive=hex(end), bytes=end - start,
                    sha256=sha(code[start - 0x100000:end - 0x100000]))
    pool = []
    for reader, literal in [(0x10b9e0, 0x10ba20), (0x10b9f8, 0x10ba24),
                            (0x10b9fc, 0x10ba28), (0x10ba00, 0x10ba2c)]:
        pool.append(dict(reader=hex(reader), literalAddress=hex(literal),
                         value=hex(struct.unpack_from('<I', code, literal - 0x100000)[0]),
                         readerSha256=sha(code[reader - 0x100000:reader - 0x100000 + 4])))
    proposal = dict(status='frozen-metadata-only-inventory-repair-proposal',
        moduleSha256=sha(code), historicalCensusSha256=sha(census_bytes),
        currentOwner=dict(address='0x105408', mode='ARM', instructionBytes=364,
                          ranges=owner['ranges'], calledFunctionAddresses=owner['calledFunctionAddresses']),
        retainedOwner=dict(address='0x105408', mode='ARM', instructionBytes=204, ranges=retained,
                           removeAttributedCallees=['0x114128', '0x13c500'],
                           addTailCallDependency='0x10b980'),
        newEntry=dict(address='0x10b980', mode='ARM', instructionBytes=160,
                      range=span(0x10b980, 0x10ba20),
                      sourceFunction='heap_default_initialize062ac',
                      sourcePath='src/native/wave062-heap/heap_default062ac.c',
                      callees=['0x114128', '0x13c500']),
        literalPool=span(0x10ba20, 0x10ba30), literalReaders=pool,
        boundaryWitnesses=[span(0x10b978, 0x10b980), span(0x10b980, 0x10b988),
                           span(0x10ba1c, 0x10ba34)],
        realTailCall=dict(retainedCallerRange=span(0x106ba0, 0x106bc8),
                          frameRestoration=span(0x106bc0, 0x106bc4), edges=edges,
                          ancestryTailBranch=span(0x1054a4, 0x1054ac)),
        rationale=['the retained helper restores its own r4/lr before its unconditional B to10b980',
                   '10b980 consumes r0/r1 and creates its own frame, saving r4/r5/r6/lr before nested calls',
                   '10ba1c returns through the saved original caller LR; it does not jump back into105408',
                   'four PC-relative literal readers reference the following16-byte data pool',
                   'all other204 historical candidate bytes remain attributed to105408 with an explicit tail dependency'],
        byteAccounting=dict(before=364, retained=204, newEntry=160, after=364,
                            grossInitializedTextBytes=7051280, grossDenominatorChange=0,
                            overlappingInstructionBytes=0, sourceCreditGranted=0),
        limitations=['the full105408 or106ba0 startup caller was not executed by this probe',
                     'runtime tail proof begins at the actual106bc4 B instruction with normal ABI arguments',
                     'valid storage, enabled89a508 and supplied nonzero TLS identity are explicit input preconditions',
                     'no SDK kernel, whole startup or additional working-C admission is implied',
                     'the original frozen22-function packet remains unchanged; policy170b94 already has prior credit'],
        observations=observations, newEntryPcsObserved=sorted(p for p in coverage if 0x10b980 <= p < 0x10ba20))
    (W / 'proposal-v1.json').write_text(json.dumps(proposal, indent=2) + '\n')
    pins = []
    for path in [W / 'propose.py', W / 'proposal-v1.json']:
        data = path.read_bytes()
        pins.append(dict(path=path.name, bytes=len(data), sha256=sha(data)))
    (W / 'ready-v1.json').write_text(json.dumps(dict(status='frozen', pins=pins), indent=2) + '\n')
    print('repair passed', len(observations), 'direct/actual-tail comparisons; frozen',
          sha((W / 'ready-v1.json').read_bytes()))


if __name__ == '__main__':
    main()
