import argparse
import bisect
import collections
import gzip
import hashlib
import io
import json
import struct
import sys
import zlib
from pathlib import Path

import capstone
from capstone.arm import ARM_CC_AL, ARM_OP_IMM
from pyctr.fileio import SubsectionIO
from pyctr.type.romfs import RomFSReader


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/inventory-wave001'
PRIVATE = ROOT / 'work/inventory-wave001'
MAX_MEMBER = 32 * 1024 * 1024
MAX_EXPANDED = 128 * 1024 * 1024


def sha(data):
    return hashlib.sha256(data).hexdigest()


def dump(name, data):
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / name).write_text(json.dumps(data, indent=2) + '\n', encoding='utf-8')


def digest_stream(stream):
    digest = hashlib.sha256()
    while block := stream.read(1024 * 1024):
        digest.update(block)
    return digest.hexdigest()


def mapped_offset(address, segments, initialized=True):
    for segment in segments:
        size = segment['initializedBytes'] if initialized else segment['pages'] * 4096
        if segment['address'] <= address < segment['address'] + size:
            return segment['codeBinOffset'] + address - segment['address']
    return None


def string_at(data, pointer, segments, maximum=128):
    offset = mapped_offset(pointer, segments)
    if offset is None:
        return None
    end = data.find(b'\0', offset, offset + maximum)
    if end <= offset:
        return None
    raw = data[offset:end]
    if any(byte < 32 or byte > 126 for byte in raw):
        return None
    return raw


def prel31(word, address):
    value = word & 0x7fffffff
    if value & 0x40000000:
        value -= 0x80000000
    return (address + value) & 0xffffffff


def unwind_runs(data, segments):
    text = segments[0]
    lower, upper = text['address'], text['address'] + text['initializedBytes']
    runs = []
    for segment in segments:
        for parity in (0, 4):
            run = []
            for off in range(segment['codeBinOffset'] + parity,
                             segment['codeBinOffset'] + segment['initializedBytes'] - 7, 8):
                address = segment['address'] + off - segment['codeBinOffset']
                first, second = struct.unpack_from('<II', data, off)
                target = prel31(first, address)
                extab = prel31(second, address + 4)
                valid = not first & 0x80000000 and lower <= (target & ~1) <= upper
                valid = valid and (second == 1 or second & 0xf0000000 == 0x80000000
                                   or (not second & 0x80000000 and mapped_offset(extab, segments) is not None))
                valid = valid and (not run or target > run[-1]['functionPointer'])
                if not valid:
                    if len(run) >= 16:
                        runs.append({'address': run[0]['entryAddress'], 'entries': run,
                                     'qualification': 'PREL31-structural-candidate-not-symbol-proof'})
                    run = []
                    continue
                run.append({'entryAddress': address, 'functionPointer': target,
                            'address': target & ~1, 'mode': 'Thumb' if target & 1 else 'ARM',
                            'unwindKind': 'cantunwind' if second == 1 else 'inline' if second & 0x80000000 else 'extab',
                            'extabAddress': extab if second != 1 and not second & 0x80000000 else None})
            if len(run) >= 16:
                runs.append({'address': run[0]['entryAddress'], 'entries': run,
                             'qualification': 'PREL31-structural-candidate-not-symbol-proof'})
    return sorted(runs, key=lambda row: -len(row['entries']))


def binding_candidates(data, segments):
    text = segments[0]
    entries = {}
    for segment in segments:
        if segment['name'] == 'text':
            continue
        for offset in range(segment['codeBinOffset'], segment['codeBinOffset'] + segment['initializedBytes'] - 15, 4):
            name, pointer, params, mask = struct.unpack_from('<IIiI', data, offset)
            name_bytes = string_at(data, name, segments)
            target = pointer & ~1
            if not name_bytes or not text['address'] <= target < text['address'] + text['initializedBytes']:
                continue
            if not -255 <= params <= 255 or (mask and string_at(data, mask, segments, 64) is None):
                continue
            address = segment['address'] + offset - segment['codeBinOffset']
            entries[address] = {'tableAddress': address, 'namePointer': name, 'nameSha256': sha(name_bytes),
                                'nameBytes': len(name_bytes), 'functionAddress': target,
                                'mode': 'Thumb' if pointer & 1 else 'ARM', 'parameterCheck': params,
                                'typeMaskPointer': mask, 'recordSha256': sha(data[offset:offset + 16])}
    tables = []
    covered = set()
    for address in sorted(entries):
        if address in covered:
            continue
        run = []
        cursor = address
        while cursor in entries:
            run.append(entries[cursor])
            cursor += 16
        if len(run) >= 3:
            covered.update(row['tableAddress'] for row in run)
            tables.append({'address': address, 'recordBytes': 16, 'entries': run,
                           'qualification': 'SQRegFunction-layout-candidate-registration-xref-unproved'})
    return tables


def entry_graph(data, segments, max_instructions=4000):
    text = segments[0]
    start, end = text['address'], text['address'] + text['initializedBytes']
    engines = {mode: capstone.Cs(capstone.CS_ARCH_ARM, flag)
               for mode, flag in [('ARM', capstone.CS_MODE_ARM), ('Thumb', capstone.CS_MODE_THUMB)]}
    for engine in engines.values():
        engine.detail = True
    queue = collections.deque([(start, 'ARM')])
    visited = set()
    calls = []
    blocks = []
    unresolved = []
    listings = []
    while queue and len(visited) < max_instructions:
        address, mode = queue.popleft()
        block_start = address
        count = 0
        while start <= address < end and (address, mode) not in visited and len(visited) < max_instructions:
            visited.add((address, mode))
            offset = mapped_offset(address, segments)
            insn = next(engines[mode].disasm(data[offset:offset + 4], address, count=1), None)
            if insn is None:
                unresolved.append({'address': address, 'mode': mode, 'reason': 'decode-failed'})
                break
            listings.append(f'{address:08x} {mode} {insn.mnemonic} {insn.op_str}')
            count += 1
            following = address + insn.size
            direct = bool(insn.operands) and insn.operands[0].type == ARM_OP_IMM
            if insn.mnemonic in ('bl', 'blx') and direct:
                target = insn.operands[0].imm & ~1
                target_mode = ('Thumb' if mode == 'ARM' else 'ARM') if insn.mnemonic == 'blx' else mode
                calls.append({'callerAddress': address, 'callerMode': mode, 'targetAddress': target,
                              'targetMode': target_mode})
            if insn.group(capstone.CS_GRP_JUMP) and insn.mnemonic not in ('bl', 'blx'):
                if direct:
                    queue.append((insn.operands[0].imm & ~1, mode))
                else:
                    unresolved.append({'address': address, 'mode': mode, 'reason': 'indirect-transfer-or-return'})
                if insn.cc not in (ARM_CC_AL, 0):
                    queue.append((following, mode))
                address = following
                break
            if insn.group(capstone.CS_GRP_RET) or (insn.mnemonic.startswith('pop') and 'pc' in insn.op_str):
                address = following
                break
            address = following
        blocks.append({'start': block_start, 'endExclusive': address, 'mode': mode, 'instructions': count})
    PRIVATE.mkdir(parents=True, exist_ok=True)
    (PRIVATE / 'entry-disassembly.private.txt').write_text('\n'.join(listings), encoding='utf-8')
    return {'blocks': blocks, 'directCalls': calls, 'unresolvedTransfers': unresolved,
            'visitedInstructions': len(visited), 'budget': max_instructions,
            'budgetExhausted': bool(queue), 'scope': 'Entry intra-procedural CFG; callees listed, not traversed'}


def native(label):
    path = ROOT / f'evidence/inventory/{label}-content0.json'
    inventory = json.loads(path.read_text(encoding='utf-8'))
    data = (ROOT / f'generated/{label}-content0/code.bin').read_bytes()
    if sha(data) != inventory['codeSha256']:
        raise ValueError('Executable differs from inventory')
    segments = inventory['layout']['segments']
    raw_runs = unwind_runs(data, segments)
    runs = [run for run in raw_runs if any(row['unwindKind'] != 'extab' for row in run['entries'])
            or any(row['address'] < row['entryAddress'] for row in run['entries'])]
    bindings = binding_candidates(data, segments)
    graph = entry_graph(data, segments)
    seeds = {(segments[0]['address'], 'ARM'): {'entry'}}
    for call in graph['directCalls']:
        seeds.setdefault((call['targetAddress'], call['targetMode']), set()).add('entry-direct-call')
    for table in runs:
        for row in table['entries']:
            seeds.setdefault((row['address'], row['mode']), set()).add('EHABI-structural-candidate')
    for table in bindings:
        for row in table['entries']:
            seeds.setdefault((row['functionAddress'], row['mode']), set()).add('SQRegFunction-table-candidate')
    seed_rows = [{'address': address, 'mode': mode, 'sources': sorted(sources),
                  'acceptedSourceBytes': 0, 'requiresBoundaryReview': True}
                 for (address, mode), sources in sorted(seeds.items())]
    result = {'label': label, 'codeSha256': sha(data), 'inventorySha256': sha(path.read_bytes()),
              'segments': [dict(row, endExclusive=row['address'] + row['initializedBytes'],
                                pagePaddingBytes=row['pages'] * 4096 - row['initializedBytes']) for row in segments],
              'initializedTextGrossBytes': segments[0]['initializedBytes'],
              'initializedMappedGrossBytes': sum(row['initializedBytes'] for row in segments),
              'bssBytes': inventory['layout']['bssBytes'], 'entryGraph': graph,
              'unwindTableCandidates': runs, 'nativeBindingTableCandidates': bindings,
              'unwindSearchUnqualifiedRuns': [run for run in raw_runs if run not in runs],
              'unwindSearchLimits': 'Structural runs only; forward-target/all-extab patterns excluded from seeds as uncorroborated collisions',
              'functionSeeds': seed_rows, 'denominatorComplete': False, 'acceptedSourceBytes': 0}
    dump(f'{label}-native.json', result)
    return result


def bounded_inflate(data, maximum):
    inflater = zlib.decompressobj(16 + zlib.MAX_WBITS)
    output = inflater.decompress(data, maximum + 1)
    if len(output) > maximum or inflater.unconsumed_tail or not inflater.eof:
        raise ValueError('Compressed stream exceeds bound or is incomplete')
    if inflater.unused_data:
        raise ValueError('Multiple/trailing compressed streams need separate qualification')
    return output


def nested_ranges(data):
    size = len(data)
    ranges = []
    if data[:4] == b'SARC' and size >= 32:
        if struct.unpack_from('<HH', data, 4) != (20, 0xfeff):
            raise ValueError('Unqualified SARC byte order')
        count = struct.unpack_from('<H', data, 26)[0]
        start = struct.unpack_from('<I', data, 12)[0]
        if 40 + count * 16 > size or struct.unpack_from('<I', data, 8)[0] != size:
            raise ValueError('Invalid SARC table extent')
        for index in range(count):
            begin, end = struct.unpack_from('<II', data, 40 + index * 16)
            ranges.append((start + begin, end - begin))
    elif data[:4] == b'XBB\x01' and size >= 32:
        count = struct.unpack_from('<I', data, 4)[0]
        if count > 100000 or 32 + count * 16 > size:
            raise ValueError('Invalid XBB table extent')
        ranges = [struct.unpack_from('<II', data, 32 + index * 16) for index in range(count)]
    for offset, length in ranges:
        if offset < 0 or length < 0 or offset + length > size:
            raise ValueError('Member extent outside container; possible external-index variant')
    return ranges


def recursive_scan(data, identity, depth, state):
    if depth > 5:
        state['unresolved'].append({'identity': identity, 'reason': 'depth-limit'})
        return
    digest = sha(data)
    if digest in state['seen']:
        state['aliases'] += 1
        return
    state['seen'].add(digest)
    state['payloads'] += 1
    markers = [marker.decode('ascii') for marker in (b'CRO0', b'CRR0', b'CRS0', b'FIXD', b'\x7fELF', b'DVLB', b'NCCH', b'FIRM')
               if marker in data[:512]]
    if markers:
        state['candidates'].append({'identity': identity, 'sha256': digest, 'size': len(data),
                                    'markers': markers, 'qualification': 'header-marker-candidate'})
    if data[:2] == b'\x1f\x8b':
        try:
            maximum = min(MAX_MEMBER, MAX_EXPANDED - state['expanded'])
            expanded = bounded_inflate(data, maximum)
            state['expanded'] += len(expanded)
            recursive_scan(expanded, identity + '/gzip', depth + 1, state)
        except ValueError as error:
            state['unresolved'].append({'identity': identity, 'reason': str(error)})
    if data[:4] not in (b'SARC', b'XBB\x01'):
        return
    try:
        ranges = nested_ranges(data)
        for index, (start, length) in enumerate(ranges):
            if length > MAX_MEMBER:
                state['unresolved'].append({'identity': identity + f'/member{index}', 'reason': 'member-size-limit'})
            else:
                recursive_scan(data[start:start + length], identity + f'/member{index}', depth + 1, state)
    except (ValueError, struct.error) as error:
        state['unresolved'].append({'identity': identity, 'reason': str(error)})


def large_stream_scan(stream, size, identity, depth, state):
    if depth > 5:
        state['unresolved'].append({'identity': identity, 'reason': 'large-container-depth-limit'})
        return
    stream.seek(0)
    header = stream.read(32)
    if header[:4] != b'XBB\x01' or len(header) < 32:
        state['unresolved'].append({'identity': identity, 'reason': 'large-non-XBB-layout-unqualified'})
        return
    count = struct.unpack_from('<I', header, 4)[0]
    if count > 100000 or 32 + count * 16 > size:
        state['unresolved'].append({'identity': identity, 'reason': 'invalid-large-XBB-table'})
        return
    table = stream.read(count * 16)
    state.setdefault('largeContainers', []).append({'identity': identity, 'size': size, 'members': count})
    for index in range(count):
        start, length = struct.unpack_from('<II', table, index * 16)
        child = identity + f'/member{index}'
        if start + length > size:
            state['unresolved'].append({'identity': child, 'reason': 'large-XBB-member-outside-container'})
            continue
        if length > MAX_MEMBER:
            large_stream_scan(SubsectionIO(stream, start, length), length, child, depth + 1, state)
        else:
            stream.seek(start)
            raw = stream.read(length)
            if len(raw) != length:
                raise ValueError('Truncated large XBB member')
            recursive_scan(raw, child, depth + 1, state)


def archive_scan(label):
    report = ROOT / f'evidence/inventory/{label}.json'
    inventory = json.loads(report.read_text(encoding='utf-8'))
    state = {'seen': set(), 'aliases': 0, 'payloads': 0, 'expanded': 0, 'candidates': [], 'unresolved': []}
    with Path(inventory['path']).open('rb') as original:
        if digest_stream(original) != inventory['sha256']:
            raise ValueError('CIA differs from pinned inventory')
        for content in inventory['contents']:
            original.seek(content['offset'])
            header = original.read(512)
            start, pages = struct.unpack_from('<II', header, 0x1b0)
            if not pages:
                continue
            reader = RomFSReader(SubsectionIO(original, content['offset'] + start * 512, pages * 512),
                                 case_insensitive=False, closefd=False)
            for row in content['ncch']['romfsFiles']:
                if row['size'] > MAX_MEMBER:
                    with reader.open(row['path']) as stream:
                        if digest_stream(stream) != row['sha256']:
                            raise ValueError('Large member differs from inventory')
                        large_stream_scan(stream, row['size'], f'content{content["index"]}' + row['path'], 0, state)
                    continue
                with reader.open(row['path']) as stream:
                    data = stream.read()
                if sha(data) != row['sha256'] or len(data) != row['size']:
                    raise ValueError('RomFS file differs from inventory')
                recursive_scan(data, f'content{content["index"]}' + row['path'], 0, state)
        original.seek(0)
        if digest_stream(original) != inventory['sha256']:
            raise ValueError('CIA changed during scan')
    state['uniquePayloads'] = len(state.pop('seen'))
    state.update({'label': label, 'ciaSha256': inventory['sha256'], 'complete': False,
                  'limits': {'depth': 5, 'memberBytes': MAX_MEMBER, 'expandedGzipBytes': MAX_EXPANDED},
                  'unknowns': ['Custom compression and unrecognized payload formats',
                               'Header-marker absence does not exclude raw native code',
                               'GPU code embedded in BCH and other unknown layouts remains unclassified']})
    dump(f'{label}-nested.json', state)
    return state


def build_queue():
    ghidra_path = OUT / 'ghidra-functions.json'
    scripts_path = OUT / 'script-interfaces.json'
    if not ghidra_path.is_file() or not scripts_path.is_file():
        return None
    ghidra = json.loads(ghidra_path.read_text(encoding='utf-8'))
    scripts = json.loads(scripts_path.read_text(encoding='utf-8'))
    if ghidra['codeSha256'] != scripts.get('nativeIdentifierStrings', {}).get('update', {}).get('codeSha256', ghidra['codeSha256']):
        raise ValueError('Ghidra/script native input identities disagree')
    functions = {row['address']: row for row in ghidra['functions']}
    graph = {address: set(row['calledFunctionAddresses']) & functions.keys() for address, row in functions.items()}
    reverse = collections.defaultdict(set)
    for address, calls in graph.items():
        for target in calls:
            reverse[target].add(address)
    visited, order = set(), []
    for start in graph:
        stack = [(start, False)]
        while stack:
            node, expanded = stack.pop()
            if expanded:
                order.append(node)
            elif node not in visited:
                visited.add(node)
                stack.append((node, True))
                stack.extend((child, False) for child in graph[node] if child not in visited)
    assigned, components = set(), []
    for start in reversed(order):
        if start in assigned:
            continue
        group, stack = [], [start]
        while stack:
            node = stack.pop()
            if node in assigned:
                continue
            assigned.add(node)
            group.append(node)
            stack.extend(reverse[node] - assigned)
        components.append({'addresses': sorted(group), 'grossBodyBytes': sum(functions[x]['textBodyBytes'] for x in group),
                           'cyclic': len(group) > 1 or start in graph[start]})
    ranges = sorted((part['start'], part['endExclusive'], row['address']) for row in functions.values() for part in row['ranges'])
    starts = [row[0] for row in ranges]
    interfaces = collections.defaultdict(list)
    for row in scripts['unresolvedCallIdentifierQueue']:
        for ref in row['nativePointerWordReferences']:
            if ref['segment'] != 'text':
                continue
            address = ref['pointerWordAddress']
            index = bisect.bisect_right(starts, address) - 1
            if index < 0:
                continue
            begin, end, function = ranges[index]
            if begin <= address < end or 0 <= address - end < 128:
                interfaces[function].append({'identifierSha256': row['identifierSha256'], 'scriptCallSites': row['callSites'],
                                             'pointerWordAddress': address, 'distanceAfterBody': max(0, address - end),
                                             'qualification': 'literal-pool-nearest-body-candidate-not-binding-proof'})
    queue = []
    for address, row in functions.items():
        queue.append({'address': address, 'mode': row['mode'], 'grossBodyBytes': row['textBodyBytes'],
                      'calledFunctionAddresses': sorted(graph[address]), 'incomingFunctionCount': len(reverse[address]),
                      'scriptInterfaceReferences': interfaces.get(address, []), 'ranges': row['ranges'],
                      'status': 'unclaimed-boundary-review-candidate', 'acceptedSourceBytes': 0})
    queue.sort(key=lambda row: (-bool(row['scriptInterfaceReferences']), len(row['calledFunctionAddresses']),
                                -row['incomingFunctionCount'], row['grossBodyBytes'], row['address']))
    report = {'codeSha256': ghidra['codeSha256'], 'ghidraReportSha256': sha(ghidra_path.read_bytes()),
              'scriptReportSha256': sha(scripts_path.read_bytes()), 'candidateFunctions': len(functions),
              'candidateSCCs': components, 'prioritizedFunctions': queue[:300],
              'scriptInterfaceCandidateFunctions': len(interfaces), 'denominatorComplete': False,
              'limits': ['Candidate Ghidra bodies and inferred callgraph are not accepted source',
                         'Nearest literal-pool association needs manual caller/ABI verification',
                         'Indirect call closure and unclassified ranges remain open']}
    dump('reconstruction-queue.json', report)
    return {'functionCandidates': len(functions), 'SCCs': len(components), 'scriptInterfaceCandidateFunctions': len(interfaces)}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--native-only', action='store_true')
    args = parser.parse_args()
    native_reports = [native(label) for label in ('base', 'update')]
    nested = [] if args.native_only else [archive_scan(label) for label in ('base', 'update')]
    summary = {'producerSha256': sha(Path(__file__).read_bytes()), 'reproductionArgv': sys.argv,
               'native': [{'label': row['label'], 'textGrossBytes': row['initializedTextGrossBytes'],
                           'mappedGrossBytes': row['initializedMappedGrossBytes'],
                           'unwindCandidates': len(row['unwindTableCandidates']),
                           'bindingTables': len(row['nativeBindingTableCandidates']),
                           'functionSeeds': len(row['functionSeeds'])} for row in native_reports],
               'nested': [{'label': row['label'], 'uniquePayloads': row['uniquePayloads'],
                           'candidates': len(row['candidates']), 'unresolved': len(row['unresolved'])} for row in nested],
               'denominatorComplete': False, 'acceptedRecoveredSourceBytes': 0}
    summary['reconstructionQueue'] = build_queue()
    dump('executable-summary.json', summary)
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
