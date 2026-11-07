import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-weak-reference014'
FUNCTIONS = [('weak-lazy-creation',0x233b7c,0x233bd4,4),('weak-final-release',0x6a7780,0x6a77c0,0),('weak-destructor',0x6a77c0,0x6a77ec,8)]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure():
    image = original_image()
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    entries = {row['address']: row for row in json.loads(census_path.read_text())['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for role, start, end, pool in FUNCTIONS:
        body = image[start - 0x100000:end - 0x100000]
        decoded = list(decoder.disasm(body, start))
        if len(decoded) * 4 != len(body): raise ValueError('Incomplete weak-family decode')
        literals, calls = [], []
        for instruction in decoded:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    if not end <= address < address + 4 <= end + pool: raise ValueError('Weak literal escapes pool')
                    literals.append({'instruction':instruction.address,'address':address,'sha256':sha(image[address-0x100000:address-0x100000+4])})
            if instruction.mnemonic in ['bl','b'] and instruction.operands[0].type == ARM_OP_IMM:
                target=instruction.operands[0].imm
                if not start <= target < end: calls.append(target)
        if start in entries and entries[start]['ranges'] != [{'start':start,'endExclusive':end,'bytes':end-start}]:
            raise ValueError('Canonical weak extent differs')
        if start not in entries and any(span['start'] < end and span['endExclusive'] > start for entry in entries.values() for span in entry['ranges']):
            raise ValueError('Weak family overlaps canonical body')
        if decoded[-1].mnemonic not in ['bx','pop','b']: raise ValueError('Missing terminal return/tail call')
        rows.append({'role':role,'entry':start,'endExclusive':end,'mode':'ARM','instructionBytes':len(body),
            'instructionSha256':sha(body),'poolBytes':pool,'poolSha256':sha(image[end-0x100000:end-0x100000+pool]),
            'literalReferences':literals,'directCalleesOrTailCalls':sorted(set(calls)),
            'frozenCensusEntryPresent':start in entries,'requiresCoordinatorCensusReview':start not in entries})
    if struct.unpack_from('<3I',image,0x8516ec-0x100000)!=(0x6a77c0,0,0x6a7780):raise ValueError('Actual weak vtable differs')
    if struct.unpack_from('<I',image,0x233bd4-0x100000)[0]!=0x8516ec:raise ValueError('Lazy constructor literal differs')
    if struct.unpack_from('<2I',image,0x6a77ec-0x100000)!=(0x81d020,0x01000001):raise ValueError('Weak base/reset pool differs')
    if struct.unpack_from('<I',image,0x851708-0x100000)[0]!=0x6a77f4:raise ValueError('Following function table witness differs')
    callsites=[]
    for index,(word,) in enumerate(struct.iter_unpack('<I',image[:7051280])):
        if word&0x0f000000!=0x0b000000:continue
        immediate=word&0xffffff
        if immediate&0x800000:immediate-=1<<24
        if 0x100000+index*4+8+immediate*4==0x233b7c:callsites.append(0x100000+index*4)
    if callsites!=[0x741904,0x743810]:raise ValueError('Measured direct lazy callers differ')
    record={'schemaVersion':1,'status':'measured-before-weak-reference-source-implementation',
        'program':'dqmj3pro','version':'update-content0','module':'main','imageBase':0x100000,
        'moduleSha256':sha(image),'censusSha256':sha(census_path.read_bytes()),'functions':rows,
        'completeMeasuredInstructionBytes':196,'scalarPointerPoolBytes':12,
        'weakVtable':{'address':0x8516ec,'bytes':12,'sha256':sha(image[0x8516ec-0x100000:0x8516f8-0x100000])},
        'boundaryWitnesses':{'precedingClosureDestructor':0x6a769c,'precedingPoolEnd':0x6a7780,
            'releaseSlot':0x8516f4,'destructorSlot':0x8516ec,'followingEntry':0x6a77f4,
            'followingEntryTableWitness':0x851708,'nextSeededEntry':0x6a7914},
        'callerWitnesses':[{'canonicalOwner':0x741850,'callSite':0x741904},
            {'canonicalOwner':0x7437c8,'callSite':0x743810,'referenceFlagGuard':0x743800}],
        'targetAbi':{'prefixBytes':12,'weakBytes':20,'ownedTargetTagOffset':12,'nonowningTargetPointerOffset':16,
            'ownerWeakCacheOffset':8,'opaqueVtableSlots':3,'getterArguments':['actual named prefix pointer','U32 type'],
            'destructorReturnsThis':True},
        'readOrderContract':['Return cached weak unchanged without allocation or retain',
            'Allocate20 only on empty owner cache; allocator observes prepublication state',
            'Publish returned block then initialize count/weak/vtable and tagged nonowning target',
            'Final weak release clears target backlink only for reference-tagged target before virtual destructor',
            'Destructor installs base identity and invalidates its own attached weak target before disposal'],
        'allocationMustSucceed':True,'observedAllocationNullBehavior':'Original stores NULL owner cache then attempts target-tag write at address12',
        'reusedPhysicalIntervals':[{'entry':0x233bd8,'newCredit':0,'canonicalOwner':0x1cdcc4}],
        'externalServices':[{'originalEntry':0x2fece8,'service':'explicit aligned nonNULL weak allocation'},
            {'originalEntry':0x19d680,'service':'typed retained-storage disposal'}],
        'sourceCodeWrittenAtMeasurement':False,'requestedExactBytes':0,'acceptedSourceCreditGranted':0,
        'coordinatorAdmissionRequired':True,'gcOrWholeVmOrDeviceClaimed':False,'originalPayloadsPublished':False}
    OUT.mkdir(parents=True,exist_ok=True)
    if (ROOT/'source/squirrel-wave014/weak_reference.c').exists():
        previous=json.loads((OUT/'claim.json').read_text())
        if previous['functions']!=rows:raise ValueError('Historical weak claim changed')
        print(json.dumps({'status':'historical-weak-claim-revalidated'}));return
    (OUT/'claim.json').write_text(json.dumps(record,indent=2)+'\n')
    print(json.dumps({'status':record['status'],'completeInstructionBytes':196}))


if __name__=='__main__':measure()
