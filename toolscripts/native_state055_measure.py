import hashlib
import json
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from native_wave014_oracle import original_image

ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT/'work/native-state055-public/leaf-v1'
SOURCE = ROOT/'src/native/wave055/state055.c'
HEADER = SOURCE.with_suffix('.h')
EVIDENCE = ROOT/'evidence/lanes/native-state055/leaf-v1'
MODULE_SHA256 = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS = ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
PRIVATE_READY = dict(path='work/native-state055/ready-leaf.json', bytes=6132,
                     sha256='f787267d44c447998f80859550a63c426eab8bbc7de6f392004274d3e044a603')


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def span(image, start, end):
    data = image[start-0x100000:end-0x100000]
    assert len(data) == end-start
    return dict(start=start, endExclusive=end, bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def measure():
    image = original_image()
    assert hashlib.sha256(image).hexdigest() == MODULE_SHA256
    census = json.loads(CENSUS.read_text(encoding='utf-8'))
    functions = {row['address']: row for row in census['functions']}
    entry, end = 0x6f95a4, 0x6f9684
    row = functions[entry]
    assert row['mode'] == 'ARM' and row['textBodyBytes'] == 224 and not row['calledFunctionAddresses']
    assert row['ranges'] == [dict(start=entry, endExclusive=end, bytes=224)]
    assert 0x6f9688 in functions
    assert int.from_bytes(image[end-0x100000:end+4-0x100000], 'little') == 0x8bf790
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoded = list(decoder.disasm(image[entry-0x100000:end-0x100000], entry))
    assert len(decoded) == 56 and all(instruction.size == 4 for instruction in decoded)
    callers = []
    for caller in [0x6fb25c, 0x7440bc, 0x745064]:
        for part in functions[caller]['ranges']:
            for instruction in decoder.disasm(image[part['start']-0x100000:part['endExclusive']-0x100000], part['start']):
                if instruction.mnemonic == 'bl' and instruction.op_str == '#0x6f95a4':
                    callers.append(dict(caller=caller, pc=instruction.address, **span(image, instruction.address, instruction.address+4)))
    assert {value['caller'] for value in callers} == {0x6fb25c, 0x7440bc, 0x745064}
    result = dict(schemaVersion=1, status='original-state055-leaf-identity-and-boundary',
                  version='update-content0', module='main', moduleSha256=MODULE_SHA256,
                  census=pin(CENSUS), entry=entry, mode='ARM', instructionRanges=[span(image, entry, end)],
                  excludedLiteralPool=[span(image, end, end+4)], followingCanonicalEntry=end+4,
                  instructionWitnesses=[span(image, item.address, item.address+4) for item in decoded],
                  directCalls=[], originalCallers=callers, targetGlobalPair=0x8bf790,
                  registerContract=dict(r0='unsigned word/header base, preserved on return', r1='unsigned word count',
                                        r2='physically backed U32 array pointer'),
                  privateFrozenPredecessor=PRIVATE_READY, source=pin(SOURCE), header=pin(HEADER),
                  productionGlobalInitializationQualified=False, sourceCreditGranted=0,
                  originalPayloadsPublished=False, producer=pin(Path(__file__).resolve()))
    WORK.mkdir(parents=True, exist_ok=True)
    path = WORK/'claim.json'
    path.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__ == '__main__':
    measure()
