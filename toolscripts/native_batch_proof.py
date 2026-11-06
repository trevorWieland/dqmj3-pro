import hashlib
import json

import capstone
from capstone.arm import ARM_INS_B

from ci_native_build import native_path
from module_link import digest
from native_bundle import catalogue_boundary, verify_common
from native_bundle002 import direct_witness


def selection(root, packet):
    rows = []
    for row in packet['functions']:
        if row['exactObjectSpan'] and row['exactLinkedSpan']:
            identity = row['canonicalIdentity']
            source = native_path(root, row['source']['path']).relative_to(root).as_posix()
            rows.append({'address': identity['address'], 'mode': identity['mode'], 'symbol': row['symbol'],
                         'instructionBytes': row['instructionBytes'], 'sourcePath': source,
                         'sourceSha256': row['source']['sha256'], 'originalSpanSha256': row['originalSpanSha256']})
    return sorted(rows, key=lambda row: row['address'])


def selection_hash(rows):
    return hashlib.sha256(json.dumps(rows, sort_keys=True, separators=(',', ':')).encode()).hexdigest()


def require_flags(value, keys):
    if any(value.get(key) is not True for key in keys):
        raise ValueError('Missing positive proof: ' + ', '.join(keys))


def behavior(lane, packet, row):
    proof = row['behavior']
    if not isinstance(proof['cases'], int) or isinstance(proof['cases'], bool) or proof['cases'] < 24:
        raise ValueError('Insufficient bounded actual-return fixtures')
    require_flags(proof, ['allPassed'])
    if lane == 'wave007-native':
        require_flags(proof, ['allOwnedInstructionsCovered', 'allOwnedConditionsTrueAndFalse',
                             'bothReturnModesTested', 'fullMemorySnapshotsCompared',
                             'exactDeclaredReadFootprint', 'noWrites'])
        controls = [item for item in packet['negativeControls']
                    if item['address'] == row['canonicalIdentity']['address']]
        if len(controls) != 2 or {item['kind'] for item in controls} != {'wrong-predicate', 'wrong-field'}:
            raise ValueError('Missing independent predicate and layout mutations')
        for item in controls:
            require_flags(item, ['detected', 'returnedToSentinel', 'allMemorySnapshotsMatched'])
            if item['actualReturnU32'] == item['expectedReturnU32']:
                raise ValueError('Negative control did not differ after returning')
    elif lane == 'wave008-native':
        require_flags(proof, ['semanticModelAgreed', 'wholeArenaEffectModelAgreed',
                             'declaredFieldReadWriteSetsEnforced',
                             'allOwnedOriginalAndCompiledInstructionsObserved',
                             'allSixteenInitialNZCVCombinations', 'wrongSourceRejectedAfterActualReturn'])
        if proof['originalActualReturns'] != proof['cases'] or proof['sourceActualReturns'] != proof['cases']:
            raise ValueError('Source/original actual returns do not cover the fixture family')
        for side in proof['conditionalInstructionPredicates'].values():
            if any(set(outcomes) != {False, True} for outcomes in side.values()):
                raise ValueError('Conditional predicate outcome is missing')
        control = row['negativeControl']['observation']
        require_flags(control, ['returnedToSentinel', 'calleeSavedAndSpPreserved', 'returnAddressHonored'])
        if control['semanticModelAgreed'] is not False:
            raise ValueError('Wrong source unexpectedly agreed')
        if (control['actualReturn'] == control['expectedReturn']
                and control['memorySha256'] == control['expectedMemorySha256']):
            raise ValueError('Wrong source lacks an observable return or memory discrepancy')
    else:
        raise ValueError('Lane has no coordinator-reviewed behavioral admission contract')


def boundary(root, lane, packet, row, image, catalogue):
    address, size = verify_common(row, image)
    catalogue_boundary(catalogue, address, size)
    if lane == 'wave007-native':
        path = root / 'evidence/lanes/wave007-native/boundary.json'
        value = json.loads(path.read_text())
        candidates = [item for item in value['functions'] if item['address'] == address]
        if len(candidates) != 1:
            raise ValueError('Missing unique predicate boundary')
        proof = candidates[0]
        require_flags(proof, ['callerReferenceConfirmed'])
        if (proof['bodyMin'], proof['bodyMax'], proof['bodyBytes']) != (address, address + size - 1, size):
            raise ValueError('Predicate boundary extent differs')
        if proof['originalSpanSha256'] != row['originalSpanSha256'] or proof['mode'] != row['canonicalIdentity']['mode']:
            raise ValueError('Predicate boundary identity differs')
        callers = proof['directCallWitnesses']
        for caller in callers:
            direct_witness(image, caller['instructionAddress'], address, caller['mode'],
                           expected_hash=caller['instructionSha256'])
        record = {'path': path.relative_to(root).as_posix(), 'sha256': digest(path)}
    elif lane == 'wave008-native':
        proof = row['boundary']
        require_flags(proof, ['leafClosure'])
        if proof['poolBytes'] or proof['directDependencies']:
            raise ValueError('Flag body exceeds the closed-leaf contract')
        if proof['ghidraRanges'] != [{'start': address, 'endExclusive': address + size, 'bytes': size}]:
            raise ValueError('Flag boundary extent differs')
        callers = proof['qualifiedActualCallers']
        for caller in callers:
            site = caller['callsite']
            decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
            instructions = list(decoder.disasm(image[site - 0x100000:site - 0x100000 + 4], site))
            if len(instructions) != 1:
                raise ValueError('Incoming transfer is not one complete ARM instruction')
            direct_witness(image, site, address, tail=instructions[0].id == ARM_INS_B,
                           expected_hash=caller['callsiteSha256'])
        record = None
    else:
        raise ValueError('Lane has no coordinator-reviewed boundary contract')
    if not callers:
        raise ValueError('No original direct caller independently decoded')
    behavior(lane, packet, row)
    return address, size, record
