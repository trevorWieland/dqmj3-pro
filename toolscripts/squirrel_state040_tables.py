import argparse
import hashlib
import json
from pathlib import Path

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC,ARM_REG_R1
from native_wave013_common import ROOT,record,save


MODULE='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def registry_snapshot():
    target=ROOT/'evidence/lanes/squirrel-state040/registration-source-registry-snapshot.json'
    if target.exists():return target,json.loads(target.read_text())
    def read(path):
        raw=path.read_bytes()
        return {'path':path.relative_to(ROOT).as_posix(),'bytes':len(raw),'sha256':hashlib.sha256(raw).hexdigest()},json.loads(raw)
    functional_pin,functional=read(ROOT/'config/functional-functions.json')
    recovery_pin,recovery=read(ROOT/'recovery.json');exact={};cohorts=[]
    for pin in recovery['acceptedCohorts']:
        actual,cohort=read(ROOT/pin['path'])
        if actual['sha256']!=pin['sha256']:raise ValueError('040 exact acceptance snapshot pin changed')
        cohorts.append(actual)
        for row in cohort['functions']:exact[row['address']]=row
    snapshot={'status':'owned-source-registry-cross-check-snapshot-not-live-registry-guard','producer':record(Path(__file__)),
        'functionalRegistryAtCapture':functional_pin,'recoveryRegistryAtCapture':recovery_pin,'exactCohortsAtCapture':cohorts,
        'functionalFunctions':functional['functions'],'exactFunctions':list(exact.values()),
        'snapshotGrantsNewAdmission':False,'subsequentUnrelatedRegistryChangesInvalidate040Behavior':False}
    save(target,snapshot)
    return target,snapshot


def run(folder):
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest()!=MODULE:raise ValueError('040 registration image changed')
    word=lambda address:int.from_bytes(image[address-0x100000:address-0x100000+4],'little')
    def string(address):
        if not address:return None
        offset=address-0x100000;end=image.find(b'\0',offset,offset+2048)
        if offset<0 or end<offset:raise ValueError('040 registration string is not bounded')
        raw=image[offset:end+1];text=raw[:-1].decode('ascii')
        return {'address':address,'bytes':len(raw),'sha256':hashlib.sha256(raw).hexdigest(),'text':text}
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text());by={row['address']:row for row in census['functions']}
    snapshot_path,snapshot=registry_snapshot()
    registry={row['name']:row for row in snapshot['functionalFunctions']}
    exact={row['address']:row for row in snapshot['exactFunctions']}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;instructions=[]
    for span in by[0x14a6a0]['ranges']:
        instructions.extend(decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start']))
    requests=[]
    for index,ins in enumerate(instructions):
        if ins.mnemonic=='bl' and ins.operands[0].type==ARM_OP_IMM and ins.operands[0].imm==0x159264:
            prior=instructions[index-3]
            if prior.mnemonic!='ldr' or prior.operands[0].reg!=ARM_REG_R1 or prior.operands[1].type!=ARM_OP_MEM or prior.operands[1].mem.base!=ARM_REG_PC:
                raise ValueError('040 delegate table request no longer has measured literal setup')
            literal=prior.address+8+prior.operands[1].mem.disp
            requests.append({'role':'default-delegate-'+str(len(requests)),'requestCallsite':ins.address,
                'tableLoadSite':prior.address,'literalAddress':literal,'tableAddress':word(literal)})
    if len(requests)!=10:raise ValueError('040 complete shared delegate count differs')
    base_table=word(0x159118)
    requests.append({'role':'base-library','requestCallsite':0x158fdc,'tableLoadSite':0x158fe0,
        'literalAddress':0x159118,'tableAddress':base_table})
    tables=[];callbacks={}
    for request in requests:
        address=request['tableAddress'];entries=[]
        for index in range(1024):
            slot=address+index*16;name=word(slot)
            if not name:break
            target=word(slot+4);canonical=target&~1;mode='Thumb' if target&1 else 'ARM';symbol=f'fn_{canonical:08x}'
            owner=by.get(canonical)
            if owner is None or owner['mode']!=mode:raise ValueError('040 registration callback lacks consistent canonical census owner')
            mask=word(slot+12);params=word(slot+8);params=params-(1<<32) if params&0x80000000 else params
            entry={'ordinal':index,'slot':slot,'name':string(name),'callbackAddress':canonical,'callbackMode':mode,
                'callbackSymbol':symbol,'parameterCheck':params,'typeMask':string(mask)}
            entries.append(entry);callback=callbacks.setdefault(canonical,{'address':canonical,'mode':mode,'symbol':symbol,
                'instructionBytes':owner['textBodyBytes'],'registrationRoles':[],'functionalRegistryEntry':registry.get(symbol),
                'exactAcceptanceEntry':exact.get(canonical),'handlerImplementationInvokedByThisMeasurement':False})
            callback['registrationRoles'].append({'tableRole':request['role'],'ordinal':index,'name':entry['name']['text']})
        else:raise ValueError('040 registration table has no bounded null-name sentinel')
        raw=image[address-0x100000:slot-0x100000+16]
        tables.append({**request,'entryCount':len(entries),'bytesIncludingSentinel':len(raw),
            'tableSha256':hashlib.sha256(raw).hexdigest(),'entries':entries,'sentinelAddress':slot,
            'sentinelRemainingWords':[word(slot+4),word(slot+8),word(slot+12)]})
    report={'status':'complete-measured-initialization-registration-tables-not-handler-admission',
        'producer':record(Path(__file__)),'moduleSha256':MODULE,'census':record(census_path),
        'sourceRegistrySnapshot':record(snapshot_path),
        'functionalRegistryAtCapture':snapshot['functionalRegistryAtCapture'],
        'recoveryRegistryAtCapture':snapshot['recoveryRegistryAtCapture'],'exactCohortsAtCapture':snapshot['exactCohortsAtCapture'],
        'tables':tables,'callbacks':list(callbacks.values()),'registeredEntryCount':sum(row['entryCount'] for row in tables),
        'uniqueCallbackCount':len(callbacks),'functionalCallbackCount':sum(row['functionalRegistryEntry'] is not None for row in callbacks.values()),
        'exactCallbackCount':sum(row['exactAcceptanceEntry'] is not None for row in callbacks.values()),
        'sourceCreditGranted':0,'handlerCreditGranted':0,'originalExecutablePayloadPublished':False}
    save(ROOT/'evidence/lanes/squirrel-state040/registration-tables.json',report)
    folder.mkdir(parents=True,exist_ok=True)
    save(folder/'registration-tables.private.json',report)
    print(json.dumps({key:report[key] for key in ['registeredEntryCount','uniqueCallbackCount','functionalCallbackCount','exactCallbackCount']}))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/squirrel-state040/registration')
    run(parser.parse_args().work.resolve())
