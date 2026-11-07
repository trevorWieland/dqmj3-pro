import argparse
import json
from pathlib import Path

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_GRP_CALL
from capstone.arm import ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC
from native_wave013_common import ROOT,record,save,sha,MODULE_SHA


ENTRIES={0x159264:'default-delegate-construction',0x158fd0:'base-library-registration',0x1688cc:'object-vector-append',
    0x17875c:'native-parameter-mask-compilation',0x158128:'push-string-api',0x1580cc:'push-integer-api',
    0x173d14:'push-root-table-api',0x173cb8:'pop-stack-api',0x166f0c:'new-slot-api',
    0x177160:'set-native-closure-name-api',0x177270:'set-native-parameter-checks-api'}


def run(folder):
    folder.mkdir(parents=True,exist_ok=True);image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('045 original module differs')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    by={row['address']:row for row in json.loads(census_path.read_text())['functions']}
    registry_path=ROOT/'evidence/lanes/squirrel-state040/registration-source-registry-snapshot.json'
    snapshot=json.loads(registry_path.read_text());accepted={row['name'] for row in snapshot['functionalFunctions']}
    accepted.update(row['symbol'] for row in snapshot['exactFunctions'])
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;rows=[]
    for entry,role in ENTRIES.items():
        owner=by[entry];ranges=[];calls=[];pools={};lines=[]
        if owner['mode']!='ARM':raise ValueError('045 candidate mode differs')
        for region in owner['ranges']:
            raw=image[region['start']-0x100000:region['endExclusive']-0x100000];decoded=list(decoder.disasm(raw,region['start']))
            if sum(ins.size for ins in decoded)!=len(raw):raise ValueError('045 complete function decode failed')
            ranges.append({**region,'sha256':sha(raw)})
            for ins in decoded:
                lines.append(f'{ins.address:08x} {ins.mnemonic} {ins.op_str}')
                if ins.group(CS_GRP_CALL):calls.append({'pc':ins.address,'target':ins.operands[0].imm if ins.operands[0].type==ARM_OP_IMM else None})
                for operand in ins.operands:
                    if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                        address=ins.address+8+operand.mem.disp;width=8 if ins.mnemonic.startswith('ldrd') else 4
                        pools[(address,width)]={'address':address,'bytes':width,'sha256':sha(image[address-0x100000:address-0x100000+width])}
        (folder/f'{entry:08x}.private.asm').write_text('\n'.join(lines)+'\n')
        rows.append({'entry':entry,'mode':'ARM','role':role,'instructionBytes':owner['textBodyBytes'],'ranges':ranges,
            'literalReadWitnesses':list(pools.values()),'calls':calls,'alreadyAdmittedInOwnedRegistrySnapshot':f'fn_{entry:08x}' in accepted,
            'knownCensusCallers':[row['address'] for row in by.values() if entry in row.get('calledFunctionAddresses',[])]})
    output=ROOT/'evidence/lanes/squirrel-state040/initialization045-claim.json'
    save(output,{'status':'pre-source-measured-initialization-support-claim','producer':record(Path(__file__)),
        'moduleSha256':MODULE_SHA,'census':record(census_path),'sourceRegistrySnapshot':record(registry_path),'functions':rows,
        'candidateInstructionBytes':sum(row['instructionBytes'] for row in rows),'sourceCreditGranted':0,
        'sourceRoot':'source/squirrel-wave045','sealedCoreDependency':record(ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json')})
    print(json.dumps([{'entry':hex(row['entry']),'bytes':row['instructionBytes'],'alreadyAdmitted':row['alreadyAdmittedInOwnedRegistrySnapshot']} for row in rows]))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/squirrel-state040/initialization045')
    run(parser.parse_args().work.resolve())
