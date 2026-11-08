import json
from pathlib import Path

import native_heap_inventory as predecessor
from native_sdk_inventory import decode, span, word

legacy = predecessor.legacy
CONFIG = 'config/native-teardown-overlays.json'
ENTRIES = [(0x10c4f4, 0x10c544, 0x10c550), (0x44dfac, 0x44dffc, 0x44e000), (0x44e000, 0x44e07c, 0x44e084)]
READERS = {0x10c4f4: [(0x10c4f8, 0x10c544), (0x10c500, 0x10c548), (0x10c528, 0x10c54c)],
    0x44dfac: [(0x44dfc4, 0x44dffc)], 0x44e000: [(0x44e008, 0x44e07c), (0x44e048, 0x44e080)]}


def require(value, reason):
    if not value:
        raise ValueError(reason)


def bounds(low, high):
    return dict(start=low, endExclusive=high, bytes=high-low)


def validate(base, composed, witness, image):
    from capstone.arm_const import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
    origin = 0x100000
    require(legacy.sha(image) == base['codeSha256'] == witness['moduleSha256']
        and witness['programId'] == '0004000e001acb00', 'Teardown module identity differs')
    current = {r['address']: r for r in composed['functions']}
    require(len(current) == len(composed['functions']) and all(a not in current for a,b,c in ENTRIES),
        'Teardown entries already present or canonical identities duplicated')
    owner = current[0x10555c]
    require(owner == witness['originalOwner'] and owner['mode'] == 'ARM'
        and owner['textBodyBytes'] == 128 and owner.get('acceptedSourceBytes', 0) == 0
        and owner['ranges'] == [bounds(0x10555c, 0x10558c), bounds(0x10c4f4, 0x10c544)]
        and set(owner['calledFunctionAddresses']) == {0x16e9e0, 0x30233c}, 'Teardown historical owner differs')
    require(witness['beforeDiscoveredEntries'] == composed['functionCount']
        and witness['approvedForFunctionInventory'] is False and witness['sourceCreditGranted'] == 0
        and witness['historicalFunctionCompletenessClaim'] is False, 'Teardown proposal claims differ')
    retained = witness['retainedOwner']
    require(retained['address'] == 0x10555c and retained['mode'] == 'ARM'
        and {k:retained['range'][k] for k in bounds(0x10555c,0x10558c)} == bounds(0x10555c,0x10558c)
        and {k:retained['pool'][k] for k in bounds(0x10558c,0x105590)} == bounds(0x10558c,0x105590)
        and retained['tailTarget'] == 0x10c4f4, 'Teardown retained range differs')
    for r in [retained['range'], retained['pool'], retained['restoredFrameTail']]:
        span(image, origin, r)
    require({k:retained['restoredFrameTail'][k] for k in bounds(0x105584,0x10558c)} == bounds(0x105584,0x10558c),
        'Teardown caller frame extent differs')
    tail = decode(image, origin, 0x105584, 8)
    require(tail[0].mnemonic == 'pop' and tail[0].op_str == '{r4, r5, r6, lr}'
        and tail[1].mnemonic == 'b' and tail[1].operands[0].type == ARM_OP_IMM
        and tail[1].operands[0].imm == 0x10c4f4, 'Teardown caller does not restore frame before tail call')
    rows = witness['newEntries']
    require([r['address'] for r in rows] == [a for a,b,c in ENTRIES], 'Teardown entry roster differs')
    added = []
    incoming = {a:[] for a,b,c in ENTRIES}
    for row in current.values():
        if row['mode'] != 'ARM':
            continue
        for part in row['ranges']:
            for address in range((part['start']+3)&~3, part['endExclusive'], 4):
                op = word(image, origin, address)
                if op >> 28 == 15 or op & 0x0e000000 != 0x0a000000:
                    continue
                delta = op & 0xffffff
                if delta & 0x800000:
                    delta -= 0x1000000
                target = (address+8+4*delta)&0xffffffff
                if target in incoming:
                    incoming[target].append(dict(owner=row['address'], address=address, kind='BL' if op&0x1000000 else 'B',
                        condition=op>>28, instructionSha256=legacy.sha(image[address-origin:address-origin+4])))
    for row, (low, high, end) in zip(rows, ENTRIES):
        require(low not in current and row['mode'] == 'ARM' and row['sourceCreditGranted'] == 0,
            'Teardown entry already owned, credited or wrong instruction state')
        for key, expected in [('instructionRange',bounds(low,high)), ('literalPoolRange',bounds(high,end))]:
            require({k:row[key][k] for k in expected} == expected, 'Teardown body or pool extent differs')
            span(image, origin, row[key])
        require(row['observedInstructionPcs'] == list(range(low,high,4))
            and row['knownOwnedArmIncomingEdges'] == incoming[low], 'Teardown observed or incoming instruction roster differs')
        if low == 0x10c4f4:
            require([(r['address'],r['kind'],r['condition']) for r in incoming[low]] == [(0x105588,'B',14)],
                'Teardown original incoming restored-frame tail differs')
        for other in current.values():
            if other['address'] != 0x10555c:
                require(not any(p['start']<end and p['endExclusive']>low for p in other['ranges']),
                    'Teardown new body or pool overlaps existing owner')
        body = decode(image, origin, low, high-low)
        require(body[0].mnemonic == 'push' and body[-1].mnemonic in ['pop','b'], 'Teardown entry or return shape differs')
        readers = row['literalReaders']
        require([(r['reader'],r['literalAddress']) for r in readers] == READERS[low], 'Teardown pool-reader roster differs')
        for r in readers:
            ins = next(i for i in body if i.address == r['reader'])
            require(ins.mnemonic == 'ldr' and ins.operands[1].type == ARM_OP_MEM and ins.operands[1].mem.base == ARM_REG_PC
                and ins.address+8+ins.operands[1].mem.disp == r['literalAddress']
                and word(image,origin,r['literalAddress']) == r['value']
                and legacy.sha(image[ins.address-origin:ins.address-origin+4]) == r['readerSha256'], 'Teardown actual literal reader differs')
        calls = [dict(address=i.address,target=i.operands[0].imm,kind=i.mnemonic.upper(),
            instructionSha256=legacy.sha(image[i.address-origin:i.address-origin+4])) for i in body
            if i.mnemonic in ['bl','b'] and i.operands[0].type == ARM_OP_IMM and not low<=i.operands[0].imm<high]
        require(calls == row['directOrTailCalls'], 'Teardown direct callee partition differs')
        added.append(dict(address=low,mode='ARM',ranges=[bounds(low,high)],textBodyBytes=high-low,
            bodyBytesOutsideInitializedText=0,entryInstructionDefined=True,isThunk=False,
            calledFunctionAddresses=sorted({r['target'] for r in calls}),acceptedSourceBytes=0,
            boundaryStatus='reviewed-coupled-filesystem-teardown-entry-with-literal-pools-excluded'))
    virtual = witness['virtualTableSlots']
    require([(r['table'],r['slotAddress'],r['slot'],r['target']) for r in virtual]
        == [(0x852560,0x852590,12,0x44dfac),(0x852560,0x852594,13,0x44e000)], 'Teardown original virtual slots differ')
    for r in virtual:
        require(word(image,origin,r['slotAddress']) == r['target']
            and legacy.sha(image[r['slotAddress']-origin:r['slotAddress']-origin+4]) == r['slotSha256'], 'Teardown virtual slot bytes differ')
    require(len(witness['actualOriginalObservations']) == 4 and len({r['path'] for r in witness['actualOriginalObservations']}) == 4,
        'Teardown actual-original observation roster incomplete')
    require(witness['byteAccounting'] == dict(oldOwnerBytes=128,retainedOwnerBytes=48,detachedShutdownBytes=80,
        additionalPreviouslyUnclassifiedInstructionBytes=204,literalPoolBytes=28,resultingDiscoveredEntries=composed['functionCount']+3,
        grossInitializedTextBytes=7051280,grossDenominatorChange=0,sourceCreditGranted=0), 'Teardown byte/source accounting differs')
    updated = dict(owner,ranges=[bounds(0x10555c,0x10558c)],textBodyBytes=48,calledFunctionAddresses=[0x10c4f4],
        boundaryStatus='reviewed-application-shutdown-with-separate-restored-frame-filesystem-tail')
    result = dict(composed)
    result['functions'] = sorted([updated if r['address']==0x10555c else r for r in composed['functions']]+added,key=lambda r:r['address'])
    result['functionCount'] = len(result['functions'])
    require(sum(r['textBodyBytes'] for r in result['functions']) == sum(r['textBodyBytes'] for r in composed['functions'])+204,
        'Teardown classified instruction byte delta differs')
    return result


def compose(root, base):
    root = Path(root)
    result, references = predecessor.compose(root, base)
    if not (root/CONFIG).exists():
        return result, references
    config = json.loads((root/CONFIG).read_bytes())
    require(config['schemaVersion'] == 1 and config['moduleSha256'] == base['codeSha256']
        and legacy.checked(root,config['baseCensus']) == base and len(config['overlays']) == 1, 'Teardown registry differs')
    entry = config['overlays'][0]
    witness, review = legacy.checked(root,entry['packet']), legacy.checked(root,entry['coordinatorReview'])
    require(entry['approvedForFunctionInventory'] is True and entry['sourceCreditGranted'] == 0
        and review['overlay'] == entry['packet'] and review['sourceCreditGranted'] == 0
        and review['moduleSha256'] == base['codeSha256'] and review['addedDiscoveredEntries'] == 3
        and review['resultingDiscoveredEntries'] == result['functionCount']+3, 'Teardown coordinator approval differs')
    for row in [entry['referenceProducer'],review['producer'],review['validator']]:
        legacy.checked_file(root,row)
    result = validate(base,result,witness,(root/'generated/update-content0/code.bin').read_bytes())
    result['supplementalInventory'] = [*references,entry['packet']]
    result['historicalFunctionCompletenessClaim'] = False
    return result,result['supplementalInventory']
