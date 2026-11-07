import hashlib
import json
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm_const import ARM_REG_R10
from native_material_wave011_build import ROOT, pin, save
from native_wave014_oracle import original_image
from squirrel_lookup023_boundaries import region


def measure():
    image = original_image()
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    instructions = list(decoder.disasm(image[0x804b4:0x808d8], 0x1804b4))
    if len(instructions) != 265 or instructions[-1].mnemonic != 'pop':
        raise ValueError('023 complete class member-writer decode changed')
    if struct.unpack_from('<I', image, 0x808e0)[0] != 0x05000002:
        raise ValueError('023 member-index descriptor type is no longer integer')
    by_address = {i.address: (i.mnemonic, i.op_str) for i in instructions}
    expected = {0x18056c: ('ldr', 'sl, [pc, #0x36c]'),
        0x1805f0: ('str', 'sl, [sp, #8]'), 0x1805f4: ('add', 'r2, sp, #8'),
        0x180608: ('bl', '#0x19b728'), 0x180778: ('str', 'sl, [sp]'),
        0x18077c: ('mov', 'r2, sp'), 0x180790: ('bl', '#0x19b728')}
    if any(by_address[address] != pair for address, pair in expected.items()):
        raise ValueError('023 actual class member-writer tag/argument witness changed')
    writes = [i.address for i in instructions[:-1] if ARM_REG_R10 in i.regs_access()[1]]
    if writes != [0x18056c]:
        raise ValueError('023 member-writer callee-saved descriptor type has another explicit writer')
    report = {'schemaVersion': 1, 'status': 'bounded-real-class-member-writer-invariant-witness',
        'moduleSha256': hashlib.sha256(image).hexdigest(),
        'writer': region(image, 0x1804b4, 0x1808d8), 'pool': region(image, 0x1808d8, 0x1808e4),
        'descriptorIntegerType': 0x05000002, 'integerTypeLiteralAddress': 0x1808e0,
        'newMethodDescriptor': {'typeStore': 0x1805f0, 'payloadIndexOrFlag': 0x01000000,
            'payloadStore': 0x1805fc, 'tableNewSlotCall': 0x180608},
        'newFieldDescriptor': {'typeStore': 0x180778, 'payloadIndexOrFlag': 0x02000000,
            'payloadStore': 0x180784, 'tableNewSlotCall': 0x180790},
        'explicitDescriptorTypeRegisterWrites': writes,
        'requiresOrdinaryCalleeSavedSlAbi': True,
        'normalGeneratedDescriptorHasReferenceTag': False,
        'qualificationDomain': 'Class member tables populated by these normal index-descriptor writes and their unchanged copies; no arbitrary direct table mutation.',
        'wholeVmExclusiveWriterProof': False,
        'forcedPointerIndexOverlapFixtureUsed': False,
        'uncoveredClassDescriptorReferenceReleaseInstructions': 18,
        'coverageExclusionRequiresCoordinatorReview': True,
        'writerSourceRecoveredOrAdmissionGranted': False,
        'typeNameEntryPrefixStandaloneFunction': False,
        'producer': pin(ROOT / 'toolscripts/squirrel_lookup023_member_witness.py'),
        'originalPayloadsPublished': False}
    save(ROOT / 'evidence/lanes/squirrel-lookup023/member-descriptor-witness.json', report)
    return report


if __name__ == '__main__':
    print(json.dumps({'integerDescriptor': measure()['descriptorIntegerType']}))
