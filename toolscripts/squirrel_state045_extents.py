import json

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_GRP_CALL
from capstone.arm import ARM_OP_IMM
from native_wave013_common import ROOT,record,save,sha,MODULE_SHA


PHYSICAL_ENDS={0x14a6a0:0x14c4c8,0x159264:0x1594e4,0x1688cc:0x168948,0x17875c:0x17894c}


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('045 extent image differs')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text());by={row['address']:row for row in census['functions']}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;rows=[]
    for entry,end in PHYSICAL_ENDS.items():
        original=by[entry];instructions=original['ranges'];cursor=entry;data=[];decoded=[]
        for span in instructions:
            if span['start']<cursor or span['endExclusive']>end:raise ValueError('045 owned instruction ranges exceed measured physical span')
            if cursor<span['start']:data.append({'start':cursor,'endExclusive':span['start']})
            cursor=span['endExclusive'];decoded.extend(decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start']))
        if cursor<end:data.append({'start':cursor,'endExclusive':end})
        for span in data:
            span['bytes']=span['endExclusive']-span['start'];span['sha256']=sha(image[span['start']-0x100000:span['endExclusive']-0x100000])
        if entry==0x14a6a0 and end not in by:raise ValueError('045 shared initializer boundary lacks the actual following constructor')
        if entry in [0x159264,0x1688cc,0x17875c] and end not in by:
            raise ValueError('045 support boundary lacks the next canonical entry')
        calls=[{'pc':ins.address,'target':ins.operands[0].imm if ins.operands[0].type==ARM_OP_IMM else None}
            for ins in decoded if ins.group(CS_GRP_CALL)]
        callers=[]
        for function in census['functions']:
            if entry not in function.get('calledFunctionAddresses',[]) or function['mode']!='ARM':continue
            for span in function['ranges']:
                for ins in decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start']):
                    if ins.group(CS_GRP_CALL) and ins.operands[0].type==ARM_OP_IMM and ins.operands[0].imm==entry:
                        callers.append({'caller':function['address'],'pc':ins.address,'target':entry,'mode':'ARM','bytes':ins.size,'sha256':sha(bytes(ins.bytes))})
        rows.append({'entry':entry,'mode':'ARM','instructionRanges':instructions,'instructionBytes':original['textBodyBytes'],
            'physicalSpan':{'start':entry,'endExclusive':end,'bytes':end-entry,'sha256':sha(image[entry-0x100000:end-0x100000])},
            'noninstructionDataRanges':data,'noninstructionDataBytes':sum(span['bytes'] for span in data),
            'dataClassification':'PC-relative literals and inline strings; parser gap is separately measured switch data.',
            'calls':calls,'callerWitnesses':callers,'instructionAndDataOwnershipDisjoint':True,'inventoryOrDataCreditGranted':0})
    path=ROOT/'evidence/lanes/squirrel-state040/initialization045-complete-extents.json'
    save(path,{'status':'complete-canonical-instruction-and-physical-pool-extents-not-admission','producer':record(__import__('pathlib').Path(__file__)),
        'moduleSha256':MODULE_SHA,'census':record(census_path),'functions':rows,'sourceCreditGranted':0,'dataCreditGranted':0})
    print(json.dumps([{'entry':hex(row['entry']),'instructions':row['instructionBytes'],'data':row['noninstructionDataBytes']} for row in rows]))
    return path,rows


if __name__=='__main__':measure()
