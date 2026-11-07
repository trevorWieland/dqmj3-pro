import hashlib
import json
from pathlib import Path
import sys
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm_const import ARM_OP_MEM, ARM_REG_PC

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'toolscripts'))
from native_wave014_oracle import original_image

WORK = ROOT/'work/native-state055-caller-public/v1'
SOURCE = ROOT/'src/native/wave055'
EVIDENCE = ROOT/'evidence/lanes/native-state055/caller-public-v1'
CENSUS = ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
ENTRIES = [0x7440bc, 0x166b28, 0x15fa8c, 0x19e94c, 0x170868, 0x170880,
           0x1708cc, 0x1708e4, 0x15e284, 0x15e218, 0x17ca70, 0x17ca60]


def pin(path):
    data = Path(path).read_bytes()
    return dict(path=Path(path).relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def span(image, start, end):
    data = image[start-0x100000:end-0x100000]
    assert len(data) == end-start
    return dict(start=start, endExclusive=end, bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def measure():
    image = original_image()
    functions = {row['address']: row for row in json.loads(CENSUS.read_text(encoding='utf-8'))['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for entry in ENTRIES:
        function = functions[entry]
        regions, literals, calls, branches = [], {}, [], []
        for part in function['ranges']:
            regions.append(span(image, part['start'], part['endExclusive']))
            instructions = list(decoder.disasm(image[part['start']-0x100000:part['endExclusive']-0x100000], part['start']))
            assert sum(instruction.size for instruction in instructions) == part['bytes']
            for instruction in instructions:
                if instruction.mnemonic.startswith('b') and instruction.op_str.startswith('#'):
                    edge = dict(pc=instruction.address, target=int(instruction.op_str[1:], 16), kind=instruction.mnemonic)
                    branches.append(edge)
                    if instruction.mnemonic in ['bl', 'blx']:
                        calls.append(edge)
                if instruction.mnemonic.startswith(('ldr', 'vldr')):
                    for operand in instruction.operands:
                        if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC and not operand.mem.index:
                            address = instruction.address+8+operand.mem.disp
                            literals[address] = span(image, address, address+4)
        rows.append(dict(entry=entry, mode='ARM', instructionBytes=function['textBodyBytes'],
                         ranges=regions, literalReads=list(literals.values()), directCalls=calls,
                         branchEdges=branches, census=pin(CENSUS)))
    sdk = [row for row in rows if row['entry'] != 0x7440bc]
    allowed = set(ENTRIES)
    assert all(edge['target'] in allowed for row in sdk for edge in row['directCalls'])
    assert rows[0]['instructionBytes'] == 3944 and sum(row['instructionBytes'] for row in sdk) == 436
    result = dict(schemaVersion=1, status='original-caller055-and-address-helper-identity',
                  moduleSha256=hashlib.sha256(image).hexdigest(), version='update-content0', module='main',
                  functions=rows, sdkInstructionBytes=436, callerInstructionBytes=3944,
                  callerExcludedPools=[span(image, 0x744424, 0x744454), span(image, 0x745054, 0x745064)],
                  callerDirectTargets=[0x166b28, 0x6f95a4], frozenWriterEntry=0x6f95a4,
                  globals=[dict(address=0x8c0324, shape='two U32 base/length words'),
                           dict(address=0x8c33a0, shape='two U32 conversion-offset words'),
                           dict(address=0x8c33a8, shape='two U32 base/length words'),
                           dict(address=0x8c33b8, shape='target pointer to object with U32 length at+8; computed target token object+128')],
                  pointerContract='Native region object pointers and explicit U32 target address tokens are distinct; no truncation of native pointers.',
                  productionGlobalInitializationQualified=False, callerSourceAuthored=True,
                  addressHelperSourceAuthored=True, rendererOrGameplaySemanticsClaimed=False,
                  sourceCreditGranted=0, producer=pin(Path(__file__).resolve()))
    WORK.mkdir(parents=True, exist_ok=True)
    target = WORK/'claim.json'
    target.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(pin(target)))
    return result


if __name__ == '__main__':
    measure()
