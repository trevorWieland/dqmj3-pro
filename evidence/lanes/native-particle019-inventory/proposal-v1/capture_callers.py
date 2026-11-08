import argparse
import hashlib
import json
from pathlib import Path

ROOT=Path.cwd();WORK=ROOT/'work/particle019-inventory-proposal-v1';PARENT=ROOT/'work/shader018-normal-emitter-v1'


def main(custom):
    ownership=json.loads((WORK/'ownership-inspection-v1.json').read_bytes());targets=[row['entry']for row in ownership['entries']if row['genuinelyObservedEntry']]
    source=PARENT/'route_probe18.py';text=source.read_text();assert hashlib.sha256(source.read_bytes()).hexdigest()=='016ab06a892aa5521a186288a11f8b8133d812a10639bd5fe31925e98f341737'
    text=text.replace('work/shader018-normal-emitter-v1/route-v21/profile','work/particle019-inventory-proposal-v1/normal-callers-v1/profile')
    text=text.replace('route_visited=set()','route_visited=set();inventory_transfers=[];inventory_entries=[];inventory_pending={};inventory_previous=[None]')
    observer="""        candidate_targets=set(TARGETS)
        if address in candidate_targets:
            transfer=inventory_pending.get(address)
            exact_transfer=transfer if transfer and transfer['pc']==inventory_previous[0]else None
            inventory_entries.append(dict(entry=address,previousPc=inventory_previous[0],caller=machine.reg_read(arm.UC_ARM_REG_LR),entrySp=machine.reg_read(arm.UC_ARM_REG_SP),args=[machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(4)],stepBits=machine.reg_read(arm.UC_ARM_REG_S0),actualTransfer=exact_transfer))
        if 0x100000<=address<0x8fb000 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32:
            instruction=bytes(machine.mem_read(address,4));word=int.from_bytes(instruction,'little');target=None;kind=None;register=None
            if word&0x0e000000==0x0a000000:
                displacement=(word&0xffffff)<<2
                if displacement&0x02000000:displacement-=0x04000000
                target=(address+8+displacement)&0xffffffff;kind='BL-immediate'if word&0x01000000 else'B-immediate'
            elif word&0x0ffffff0 in [0x012fff10,0x012fff30]:
                register=word&15;target=machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(register)))&~1;kind='BLX-register'if word&0x20 else'BX-register'
            if target in candidate_targets:
                transfer=dict(pc=address,target=target,kind=kind,register=register,mode='ARM',bytes=4,sha256=hashlib.sha256(instruction).hexdigest(),argsBefore=[machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(4)],spBefore=machine.reg_read(arm.UC_ARM_REG_SP),lrBefore=machine.reg_read(arm.UC_ARM_REG_LR))
                inventory_transfers.append(transfer);inventory_pending[target]=transfer
        inventory_previous[0]=address
""".replace('TARGETS',repr(targets))
    needle='        if address==0x171ca8:';assert text.count(needle)==1;text=text.replace(needle,observer+needle).replace('route_observation=dict(','route_observation=dict(inventoryEntries=inventory_entries,inventoryTransfers=inventory_transfers,')
    namespace=dict(__name__='particle019_inventory_original_caller_probe',__file__=str(source));exec(compile(text,str(source),'exec'),namespace);namespace['main'](custom,0,42,1,0,0)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--custom',type=int,choices=[1,5],required=True);main(parser.parse_args().custom)
