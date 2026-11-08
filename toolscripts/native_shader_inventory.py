import json
from pathlib import Path

import native_file_inventory as predecessor
from native_sdk_inventory import decode, span, word

legacy = predecessor.legacy
CONFIG = 'config/native-shader-overlays.json'


def require(value, reason):
    if not value:
        raise ValueError(reason)


def validate(base, composed, witness, image):
    from capstone import CS_GRP_JUMP
    from capstone.arm_const import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
    require(legacy.sha(image) == base['codeSha256'] == witness['moduleSha256']
            and witness['sourceCreditGranted'] == 0 and witness['inventoryAdmissionGranted'] is False
            and witness['nativeTextDenominatorChanged'] is False,
            'Shader callable image identity or credit scope differs')
    origin = base['initializedTextStart']
    low, high, following = 0x17199c, 0x171a0c, 0x171a14
    current = {row['address']: row for row in composed['functions']}
    require(witness['entry'] == low and witness['mode'] == 'ARM'
            and witness['followingCanonical'] == following and low not in current
            and following in current and current[0x101a1c]['mode'] == 'Thumb',
            'Shader callable entry, mode, following owner or array constructor differs')
    require(witness['predecessorDiscoveredFunctions'] == len(current), 'Shader predecessor count differs')
    parts, pools = witness['instructionRanges'], witness['excludedPools']
    require(len(parts) == 1 and len(pools) == 1
            and tuple(parts[0][k] for k in ('start', 'endExclusive', 'bytes')) == (low, high, 112)
            and tuple(pools[0][k] for k in ('start', 'endExclusive', 'bytes')) == (high, following, 8),
            'Shader callback instruction/pool partition differs')
    owners = [(part['start'], part['endExclusive']) for row in current.values() for part in row['ranges']]
    require(origin <= low < following <= origin + base['initializedTextGrossBytes']
            and not legacy.overlap(owners, low, following), 'Shader callback leaves text or overlaps ownership')
    for part in parts + pools:
        span(image, origin, part)
    code = decode(image, origin, low, 112)
    require(len(code) == 28 and all(ins.size == 4 for ins in code)
            and code[-1].address == high - 4 and code[-1].mnemonic == 'bx' and code[-1].op_str == 'lr'
            and not any(ins.mnemonic in ('bl', 'blx') for ins in code),
            'Shader callback complete ARM body or leaf return differs')
    jumps = [ins for ins in code[:-1] if CS_GRP_JUMP in ins.groups]
    require(len(jumps) == 1 and jumps[0].address == 0x171a00 and jumps[0].mnemonic == 'blo'
            and jumps[0].operands[0].type == ARM_OP_IMM and jumps[0].operands[0].imm == 0x1719e0,
            'Shader callback internal loop backedge differs or leaves instruction ownership')
    literals = []
    for ins in code:
        for operand in ins.operands:
            if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                address = ins.address + 8 + operand.mem.disp
                require(ins.mnemonic == 'vldr' and high <= address < following,
                        'Shader callback literal load leaves excluded pool')
                literals.append(address)
    require(set(literals) == {high, high + 4}, 'Shader VFP literal readers differ')
    trace = witness['instructionsObserved']
    require(len(trace) == 28 and {row['pc'] for row in trace} == set(range(low, high, 4)),
            'Shader original execution trace omits instruction positions')
    for row in trace:
        require(row['mode'] == 'ARM' and row['bytes'] == 4 and row['canonicalOwner'] is None,
                'Shader execution trace mode, width or prior ownership differs')
        span(image, origin, dict(start=row['pc'], endExclusive=row['pc'] + 4,
                                bytes=4, sha256=row['sha256']))
    call = witness['actualArrayCall']
    require(call['entry'] == 0x101a1c and call['mode'] == 'Thumb'
            and len(call['args']) == 4 and call['args'][0] != 0
            and call['args'][1:] == [low, 0x28c, 1] and call['lr'] == 0x160644,
            'Actual shader array-constructor callback argument or return differs')
    caller = witness['staticCaller']
    require(tuple(caller[k] for k in ('start', 'endExclusive', 'bytes')) == (0x160628, 0x160644, 28),
            'Shader callback caller span differs')
    span(image, origin, caller)
    require(any(a <= caller['start'] < caller['endExclusive'] <= b for a, b in
                [(part['start'], part['endExclusive']) for part in current[0x1604d0]['ranges']]),
            'Shader callback load/call has no canonical constructor owner')
    ins = {row.address: row for row in decode(image, origin, caller['start'], caller['bytes'])}
    require(ins[0x160628].op_str == 'r3, [r4, #0x18]'
            and ins[0x160638].mnemonic == 'ldr' and ins[0x160638].op_str == 'r1, [pc, #0x5bc]'
            and ins[0x16063c].mnemonic == 'mov' and ins[0x16063c].operands[1].imm == 0x28c
            and ins[0x160640].mnemonic == 'blx' and ins[0x160640].operands[0].imm == 0x101a1c,
            'Shader static callback pointer, count field, stride or Thumb transfer differs')
    span(image, origin, witness['callbackLiteral'])
    require(witness['callbackLiteral']['start'] == 0x160bfc
            and witness['callbackLiteral']['bytes'] == 4 and word(image, origin, 0x160bfc) == low,
            'Shader selected callback literal differs')
    result = dict(composed)
    row = dict(address=low, mode='ARM', ranges=[{k: parts[0][k] for k in ('start', 'endExclusive', 'bytes')}],
        textBodyBytes=112, bodyBytesOutsideInitializedText=0, entryInstructionDefined=True, isThunk=False,
        calledFunctionAddresses=[], acceptedSourceBytes=0,
        boundaryStatus='reviewed-original-shader-array-callback-with-complete-execution-and-pool-witness')
    result['functions'] = sorted([*composed['functions'], row], key=lambda value: value['address'])
    result['functionCount'] = len(result['functions'])
    return result


def compose(root, base):
    root = Path(root)
    result, references = predecessor.compose(root, base)
    path = root / CONFIG
    if not path.exists():
        return result, references
    config = json.loads(path.read_bytes())
    require(config['schemaVersion'] == 1 and config['moduleSha256'] == base['codeSha256']
            and legacy.checked(root, config['baseCensus']) == base and len(config['overlays']) == 1,
            'Shader callable registry differs')
    entry = config['overlays'][0]
    witness = legacy.checked(root, entry['packet'])
    review = legacy.checked(root, entry['coordinatorReview'])
    require(entry['approvedForFunctionInventory'] is True and entry['sourceCreditGranted'] == 0
            and review['overlay'] == entry['packet'] and review['sourceCreditGranted'] == 0
            and review['moduleSha256'] == base['codeSha256'] and review['addedDiscoveredEntries'] == 1
            and review['resultingDiscoveredEntries'] == result['functionCount'] + 1,
            'Shader callable coordinator inventory approval differs')
    for value in [witness['producer'], review['producer'], review['validator']]:
        legacy.checked_file(root, value)
    result = validate(base, result, witness, (root / 'generated/update-content0/code.bin').read_bytes())
    result['supplementalInventory'] = [*references, entry['packet']]
    result['historicalFunctionCompletenessClaim'] = False
    return result, result['supplementalInventory']
