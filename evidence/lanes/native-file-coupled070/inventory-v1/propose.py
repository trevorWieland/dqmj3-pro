import argparse
import hashlib
import json
from pathlib import Path
import sys

parser = argparse.ArgumentParser()
parser.add_argument('--root', type=Path, default=Path.cwd())
parser.add_argument('--observations', type=Path, required=True)
parser.add_argument('--output', type=Path, required=True)
args = parser.parse_args()
ROOT = args.root.resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_heap_inventory as inventory
from native_sdk_inventory import decode, word


def require(value, reason):
    if not value:
        raise ValueError(reason)


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest(path))


def main():
    image_path = ROOT / 'generated/update-content0/code.bin'
    image = image_path.read_bytes()
    origin = 0x100000
    base_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base = json.loads(base_path.read_bytes())
    require(digest(image_path) == base['codeSha256'], 'Teardown reference contract differs at check 1')
    composed, _ = inventory.compose(ROOT, base)
    current = {r['address']: r for r in composed['functions']}
    original_owner = current[0x10555c]
    require(original_owner['mode'] == 'ARM' and original_owner['textBodyBytes'] == 128, 'Teardown reference contract differs at check 2')
    require(original_owner['ranges'] == [dict(start=0x10555c, endExclusive=0x10558c, bytes=48), dict(start=0x10c4f4, endExclusive=0x10c544, bytes=80)], 'Teardown reference contract differs at check 3')
    require(set(original_owner['calledFunctionAddresses']) == {0x16e9e0, 0x30233c}, 'Teardown reference contract differs at check 4')
    require(original_owner.get('acceptedSourceBytes', 0) == 0, 'Teardown reference contract differs at check 5')
    observations = []
    pcs = set()
    for path in sorted(args.observations.resolve().glob('actual-original-*.json')):
        value = json.loads(path.read_bytes())
        require(value['originalGlobalsManuallySeeded'] is False and value['sourceCreditGranted'] == 0, 'Teardown reference contract differs at check 6')
        observations.append(dict(pin(path), path=path.name))
        pcs.update(value['instructionPositions'])
    require(len(observations) == 4, 'Teardown reference contract differs at check 7')

    def span(lo, hi):
        return dict(start=lo, endExclusive=hi, bytes=hi-lo, sha256=hashlib.sha256(image[lo-origin:hi-origin]).hexdigest())

    targets = {0x10c4f4, 0x44dfac, 0x44e000}
    incoming = {address: [] for address in targets}
    for row in current.values():
        if row['mode'] != 'ARM':
            continue
        for part in row['ranges']:
            for address in range((part['start']+3)&~3, part['endExclusive'], 4):
                op = word(image, origin, address)
                if op >> 28 == 15 or op & 0x0e000000 != 0x0a000000:
                    continue
                offset = op & 0xffffff
                if offset & 0x800000:
                    offset -= 0x1000000
                target = (address+8+4*offset)&0xffffffff
                if target in targets:
                    incoming[target].append(dict(owner=row['address'], address=address, kind='BL' if op&0x1000000 else 'B', condition=op>>28, instructionSha256=span(address,address+4)['sha256']))
    entries = []
    for lo, hi, end in [(0x10c4f4,0x10c544,0x10c550),(0x44dfac,0x44dffc,0x44e000),(0x44e000,0x44e07c,0x44e084)]:
        require(lo not in current and set(range(lo,hi,4)) <= pcs, 'Teardown reference contract differs at check 8')
        body = decode(image,origin,lo,hi-lo)
        require(body[0].mnemonic == 'push' and body[-1].mnemonic in ['pop','b'], 'Teardown reference contract differs at check 9')
        readers = []
        calls = []
        for ins in body:
            if ins.mnemonic in ['bl','b'] and ins.op_str.startswith('#') and not lo<=ins.operands[0].imm<hi:
                calls.append(dict(address=ins.address, target=ins.operands[0].imm, kind=ins.mnemonic.upper(), instructionSha256=span(ins.address,ins.address+4)['sha256']))
            if ins.mnemonic == 'ldr' and '[pc,' in ins.op_str:
                literal = ins.address+8+ins.operands[1].mem.disp
                require(hi<=literal<end, 'Teardown reference contract differs at check 10')
                readers.append(dict(reader=ins.address, literalAddress=literal, value=word(image,origin,literal), readerSha256=span(ins.address,ins.address+4)['sha256']))
        for other in current.values():
            if other['address'] == 0x10555c:
                continue
            require(not any(part['start']<end and part['endExclusive']>lo for part in other['ranges']), 'Teardown reference contract differs at check 11')
        entries.append(dict(address=lo, mode='ARM', instructionRange=span(lo,hi), literalPoolRange=span(hi,end), observedInstructionPcs=list(range(lo,hi,4)), literalReaders=readers, directOrTailCalls=calls, knownOwnedArmIncomingEdges=incoming[lo], sourceCreditGranted=0))
    tail = decode(image,origin,0x105584,8)
    require(tail[0].mnemonic == 'pop' and tail[0].op_str == '{r4, r5, r6, lr}' and tail[1].mnemonic == 'b' and tail[1].operands[0].imm == 0x10c4f4, 'Teardown reference contract differs at check 12')
    virtual = []
    for address, target in [(0x852590,0x44dfac),(0x852594,0x44e000)]:
        require(word(image,origin,address) == target, 'Teardown reference contract differs at check 13')
        virtual.append(dict(table=0x852560, slot=(address-0x852560)//4, slotAddress=address, target=target, slotSha256=span(address,address+4)['sha256']))
    result = dict(schemaVersion=1,status='proposed-teardown-entry-repair-with-actual-original-witnesses',programId='0004000e001acb00',moduleSha256=digest(image_path),baseCensus=pin(base_path),beforeDiscoveredEntries=composed['functionCount'],originalOwner=original_owner,retainedOwner=dict(address=0x10555c,mode='ARM',range=span(0x10555c,0x10558c),pool=span(0x10558c,0x105590),restoredFrameTail=span(0x105584,0x10558c),tailTarget=0x10c4f4),newEntries=entries,virtualTableSlots=virtual,actualOriginalObservations=observations,byteAccounting=dict(oldOwnerBytes=128,retainedOwnerBytes=48,detachedShutdownBytes=80,additionalPreviouslyUnclassifiedInstructionBytes=204,literalPoolBytes=28,resultingDiscoveredEntries=26663,grossInitializedTextBytes=7051280,grossDenominatorChange=0,sourceCreditGranted=0),historicalFunctionCompletenessClaim=False,approvedForFunctionInventory=False,sourceCreditGranted=0)
    folder=args.output.resolve()
    require(folder.is_relative_to(ROOT/'work') and folder != ROOT/'work', 'Reference output must remain under its owned work root')
    folder.mkdir(exist_ok=False)
    (folder/'proposal.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(status=result['status'],entries=len(entries),incomingEdges={hex(a):len(rows) for a,rows in incoming.items()},poolBytes=28,sourceCreditGranted=0)))


if __name__ == '__main__':
    main()
