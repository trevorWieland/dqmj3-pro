import hashlib
import json
from pathlib import Path
from native_state055_measure import WORK, pin, original_image


def prove():
    image = original_image()
    reference = json.loads((WORK/'reference.json').read_text())
    missing = list(range(0x6f961c, 0x6f9638, 4))
    assert reference['unvisitedPcs'] == missing
    rows = []
    for block in range(129):
        quotient = block >> 1
        total = quotient + 0x80000001
        carry, zero = total >= 0x100000000, (total & 0xffffffff) == 0
        assert not carry and not zero
        rows.append(dict(block=block, quotient=quotient, carry=carry, zero=zero, blsTaken=not carry or zero))
    result = dict(schemaVersion=1, status='finite-block-bound-carry-proof', admittedCountMaximum=4096,
                  mathematicalInputs=rows, unvisitedInstructionAddresses=missing,
                  reasoning='Unsigned remaining count is clamped to128; its right shift is0..64. CMN adds0x80000001 without carry or zero; BLS therefore takes6f9638. The seven fallback-copy PCs cannot execute under that finite bound.',
                  instructionWitnesses=[dict(start=start, endExclusive=end, sha256=hashlib.sha256(image[start-0x100000:end-0x100000]).hexdigest())
                                        for start, end in [(0x6f95e4, 0x6f95f4), (0x6f95f8, 0x6f95fc), (0x6f9610, 0x6f961c)]],
                  reference=pin(WORK/'reference.json'), producer=pin(Path(__file__).resolve()),
                  nonboundedCountOrPointerOverflowQualified=False, sourceCreditGranted=0)
    path = WORK/'invariant.json'
    path.write_text(json.dumps(result, indent=2)+'\n')
    return pin(path)


if __name__ == '__main__':
    print(json.dumps(prove()))
