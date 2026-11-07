import json
import struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_INS_BL,ARM_INS_BLX,ARM_OP_IMM
from squirrel_iteration043_build import ROOT
from squirrel_source_wave002 import sha
MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
ROOTS=[(0x1a1eec,0x1a1fb4,'signed-byte-string-next'),(0x1a8604,0x1a8730,'table-next-with-raw-weak-mode'),(0x1a178c,0x1a18a4,'class-field-and-method-next')]


def region(image,start,end):
    return dict(address=start,endExclusive=end,bytes=end-start,sha256=sha(image[start-0x100000:end-0x100000]))


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('043 original identity mismatch')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text(encoding='utf-8'));entries={row['address']:row for row in census['functions']}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;functions=[]
    for entry,end,role in ROOTS:
        known=entries[entry]
        if known['textBodyBytes']!=end-entry or known['ranges']!=[dict(start=entry,endExclusive=end,bytes=end-entry)]:raise ValueError('043 canonical function extent mismatch')
        decoded=list(decoder.disasm(image[entry-0x100000:end-0x100000],entry))
        if len(decoded)*4!=end-entry:raise ValueError('043 full ARM decoding mismatch')
        calls=[dict(instruction=i.address,target=i.operands[0].imm)for i in decoded if i.id in(ARM_INS_BL,ARM_INS_BLX)and i.operands[0].type==ARM_OP_IMM]
        functions.append(dict(entry=entry,role=role,mode='ARM',instructions=[region(image,entry,end)],instructionBytes=end-entry,
          trailingLiteral=region(image,end,end+4),nextCodeEntry=end+4,directCalls=calls,censusCallers=[r['address']for r in census['functions']if entry in r['calledFunctionAddresses']],sourceFunction={0x1a1eec:'sq_string_next043',0x1a8604:'sq_table_next043',0x1a178c:'sq_class_next043'}[entry]))
    if struct.unpack_from('<I',image,0x1808e0-0x100000)[0]!=0x05000002:raise ValueError('043 descriptor tag literal changed')
    invariant=dict(status='conditional-provenance-invariant',domain='A live class whose private members map is empty at root initialization, cloned from a class in this same domain, or changed only by actual class NewSlot; no arbitrary native descriptor-map mutation.',
      induction=['Root constructor initializes an empty map.','Inherited constructor clones descriptors without changing types.','Both NewSlot insertion arms store integer descriptors, with field or method flags and an existing vector index.','Existing-field and existing-method updates change member payloads without changing descriptor types.','Admitted release callbacks replace existing member payloads only.'],
      integerTagLiteral=region(image,0x1808e0,0x1808e4),methodInsertionWitness=region(image,0x1805ec,0x18060c),fieldInsertionWitness=region(image,0x180774,0x180794),guardWitness=region(image,0x1a1864,0x1a1870),
      invariantDeadInstructionAddresses=list(range(0x1a1870,0x1a1898,4)),notAUniversalClaimAboutArbitraryNativeMutation=True,
      providers=['source/squirrel-wave030/class_initialize.c','source/squirrel-wave030/class_table_clone.c','source/squirrel-wave034/member_definition.c'])
    return dict(schemaVersion=1,version='update-content0',module='main',moduleSha256=MODULE_SHA,census=dict(path=census_path.relative_to(ROOT).as_posix(),sha256=sha(census_path.read_bytes())),
      functions=functions,classDescriptorInvariant=invariant,existingCursorReuse=dict(entry=0x1a2b2c,instructionBytes=40,duplicateCredit=0),terminalCursorBoundary=dict(originalEntry=0x146590,sourceService='sq_class_failure030',implementationQualified=False,normalReturn=False),
      candidateInstructionBytes=780,poolBytesExcludedFromInstructionCredit=12,wholeExecuteCredit=0,sourceCreditGranted=0)
