import json
from pathlib import Path

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC,ARM_REG_R0,ARM_REG_R1,ARM_REG_R4
from native_wave013_common import ROOT,record,save,sha,MODULE_SHA


def run():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('045 field witness image differs')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    function=next(row for row in json.loads(census_path.read_text())['functions'] if row['address']==0x14a6a0)
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;instructions=[]
    for span in function['ranges']:
        instructions.extend(decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start']))
    intern=None;appends=[];name=None
    for index,ins in enumerate(instructions):
        if ins.mnemonic!='bl' or ins.operands[0].type!=ARM_OP_IMM:continue
        if ins.operands[0].imm==0x19ba68:
            setup=next(row for row in reversed(instructions[max(0,index-9):index])
                if row.operands and row.operands[0].type!=ARM_OP_MEM and row.operands[0].reg==ARM_REG_R1 and row.mnemonic in ['add','ldr'])
            if setup.mnemonic=='add' and setup.operands[1].reg==ARM_REG_PC:address=setup.address+8+setup.operands[2].imm
            elif setup.mnemonic=='ldr' and setup.operands[1].mem.base==ARM_REG_PC:
                literal=setup.address+8+setup.operands[1].mem.disp
                address=int.from_bytes(image[literal-0x100000:literal-0x100000+4],'little')
            else:raise ValueError('045 string setup is outside measured PC-relative forms')
            at=address-0x100000;end=image.index(0,at);raw=image[at:end+1]
            name=raw[:-1].decode('ascii');intern={'callsite':ins.address,'stringAddress':address,'stringBytes':len(raw),'stringSha256':sha(raw),'logicalName':name}
        elif ins.operands[0].imm==0x1688cc:
            setup=instructions[index-2]
            if setup.mnemonic!='ldr' or setup.operands[0].reg!=ARM_REG_R0 or setup.operands[1].mem.base!=ARM_REG_R4:
                raise ValueError('045 append lacks exact shared-owner field load')
            offset=setup.operands[1].mem.disp;low=setup.address;high=ins.address+4
            appends.append({'destinationTargetFieldOffset':offset,'fieldLoadSite':low,'appendCallsite':ins.address,
                'callSetupBytes':high-low,'callSetupSha256':sha(image[low-0x100000:high-0x100000]),'intern':intern})
    if [row['destinationTargetFieldOffset'] for row in appends]!=[12]*15+[0]*18:
        raise ValueError('045 complete append destination/order differs')
    handoff=ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/handoff.json'
    probes_path=ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/compiled-layout-probes.json'
    probes=json.loads(probes_path.read_text());native=probes['nativeWindows'];target=probes['target']
    bindings=[{'measuredRole':'metamethod-name-vector','sealedStorageLabel':'system_strings','probeKey':'systemStrings',
        'targetOffset':0,'nativeOffset':304,'appendCount':18,'accessor':'sq_startup_metamethod_names045'},
        {'measuredRole':'type-name-vector','sealedStorageLabel':'meta_methods','probeKey':'metaMethods',
        'targetOffset':12,'nativeOffset':312,'appendCount':15,'accessor':'sq_startup_type_names045'},
        {'measuredRole':'allocated-empty-auxiliary-vector-unqualified-further-semantics','sealedStorageLabel':'type_names','probeKey':'typeNames',
        'targetOffset':16,'nativeOffset':320,'appendCount':0,'accessor':'sq_startup_auxiliary_vector045'}]
    for row in bindings:
        if target[row['probeKey']]!=row['targetOffset'] or native[row['probeKey']]!=row['nativeOffset']:
            raise ValueError('045 semantic alias contradicts sealed compiled storage')
    output=ROOT/'evidence/lanes/squirrel-state040/initialization045-shared-field-correction.json'
    save(output,{'status':'explicit-measured-semantic-alias-correction-sealed040-bytes-preserved','producer':record(Path(__file__)),
        'moduleSha256':MODULE_SHA,'census':record(census_path),'sealedCoreHandoff':record(handoff),'compiledProbes':record(probes_path),
        'bindings':bindings,'completeOriginalAppendWitnesses':appends,'constructorNameIntern':intern,
        'sourceAccessors':record(ROOT/'source/squirrel-wave045/shared_views.c'),
        'sealed040HeaderChanged':False,'sealed040ConstructorEvidenceChanged':False,
        'provisional040FieldNamesProveSemantics':False,'sourceCreditGranted':0})
    print(json.dumps(record(output)))


if __name__=='__main__':run()
