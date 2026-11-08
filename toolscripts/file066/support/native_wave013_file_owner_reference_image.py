import bisect
import json

import capstone
import unicorn
from unicorn.arm_const import UC_ARM_REG_CPSR

import inventory
import native_census_overlay
from native_wave013_common import ROOT,MODULE_SHA,record,sha


class ReferenceImage:
    def __init__(self):
        self.image=(ROOT/'generated/update-content0/code.bin').read_bytes()
        self.exheader=(ROOT/'generated/update-content0/exheader.bin').read_bytes()
        if sha(self.image)!=MODULE_SHA:
            raise ValueError('Owner reference image identity differs')
        scope_path=ROOT/'evidence/lanes/executable-scope/scope.json'
        scope=json.loads(scope_path.read_text())
        measured=next(row['mainImage'] for row in scope['versions'] if row['version']=='update-content0')
        if sha(self.exheader)!=measured['exheaderSha256']:
            raise ValueError('Owner ExHeader identity differs')
        self.layout=inventory.code_layout(self.exheader)
        if self.layout['segments']!=measured['segments']:
            raise ValueError('Owner loaded segment mapping differs')
        census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
        census=json.loads(census_path.read_text())
        if census['codeSha256']!=MODULE_SHA:raise ValueError('Owner census identity differs')
        combined,overlays=native_census_overlay.compose(ROOT,census)
        self.functions={row['address']:row for row in combined['functions']}
        proposal_path=ROOT/'evidence/lanes/wave013-native/file/owner/reference-entry-proposal.json'
        proposal=json.loads(proposal_path.read_text())
        if proposal['moduleSha256']!=MODULE_SHA or proposal['approvedForFunctionInventory'] or proposal['sourceCreditGranted']:
            raise ValueError('Reference entry proposal identity/credit contract differs')
        self.reference_entries=set()
        for row in proposal['functions']:
            if row['address'] in self.functions:raise ValueError('Reference proposal duplicates a frozen entry')
            for part in row['ranges']:
                raw=self.image[part['start']-0x100000:part['endExclusive']-0x100000]
                if sha(raw)!=part['sha256']:raise ValueError('Reference proposal span differs')
                if any(max(part['start'],known['start'])<min(part['endExclusive'],known['endExclusive'])
                       for item in combined['functions'] for known in item['ranges']):
                    raise ValueError('Reference proposal overlaps frozen instruction ownership')
            self.functions[row['address']]=row
            self.reference_entries.add(row['address'])
        combined['functions']+=proposal['functions']
        self.ranges=sorted((part['start'],part['endExclusive'],row['address']) for row in combined['functions'] for part in row['ranges'])
        self.starts=[row[0] for row in self.ranges]
        self.decoded={}
        self.pins={'scope':record(scope_path),'census':record(census_path),'overlays':overlays,
            'referenceEntryProposal':record(proposal_path),'inventoryReader':record(ROOT/'toolscripts/inventory.py'),'overlayReader':record(ROOT/'toolscripts/native_census_overlay.py')}
        data=next(row for row in self.layout['segments'] if row['name']=='data')
        self.writable=(data['address'],data['address']+data['initializedBytes']+self.layout['bssBytes'])

    def map(self,cpu):
        pages=set()
        for row in self.layout['segments']:
            for page in range(row['address'],row['address']+row['pages']*4096,4096):
                if page not in pages:
                    cpu.mem_map(page,4096,unicorn.UC_PROT_ALL)
                    pages.add(page)
            raw=self.image[row['codeBinOffset']:row['codeBinOffset']+row['initializedBytes']]
            cpu.mem_write(row['address'],raw)
        for page in range(self.writable[0]&~4095,(self.writable[1]+4095)&~4095,4096):
            if page not in pages:
                cpu.mem_map(page,4096,unicorn.UC_PROT_ALL)
                pages.add(page)
        for page in pages:
            permissions=unicorn.UC_PROT_READ
            if self.writable[0]<=page<self.writable[1]:permissions|=unicorn.UC_PROT_WRITE
            elif page<self.layout['segments'][1]['address']:permissions|=unicorn.UC_PROT_EXEC
            cpu.mem_protect(page,4096,permissions)
        return {'mappedPages':len(pages),'writableProgramRange':self.writable,'layout':self.layout,'moduleSha256':MODULE_SHA}

    def instruction(self,cpu,address,size):
        at=bisect.bisect_right(self.starts,address)-1
        if at<0 or not self.ranges[at][0]<=address<address+size<=self.ranges[at][1]:
            raise RuntimeError('Reference executed outside frozen known instruction ownership at '+hex(address))
        owner=self.ranges[at][2]
        row=self.functions[owner]
        if owner not in self.decoded:
            decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_THUMB if row['mode']=='Thumb' else capstone.CS_MODE_ARM)
            values={}
            for part in row['ranges']:
                raw=self.image[part['start']-0x100000:part['endExclusive']-0x100000]
                instructions=list(decoder.disasm(raw,part['start']))
                if sum(item.size for item in instructions)!=len(raw):
                    raise RuntimeError('Observed reference dependency has undecoded bytes')
                for instruction in instructions:
                    values[instruction.address]={'size':instruction.size,'mnemonic':instruction.mnemonic,'operands':instruction.op_str}
            self.decoded[owner]=values
        instruction=self.decoded[owner].get(address)
        if instruction is None or instruction['size']!=size:
            raise RuntimeError('Reference did not enter a complete known instruction')
        if bool(cpu.reg_read(UC_ARM_REG_CPSR)&0x20)!=(row['mode']=='Thumb'):
            raise RuntimeError('Reference instruction mode differs from owned function mode')
        return owner,instruction

    def dependency(self,address):
        row=self.functions[address]
        return {'address':address,'mode':row['mode'],'instructionRanges':[
            {**part,'sha256':sha(self.image[part['start']-0x100000:part['endExclusive']-0x100000])} for part in row['ranges']],
            'inventoryOwnership':'reference-only-proposal' if address in self.reference_entries else 'frozen-composed-census',
            'recoveredSourceCreditFromReferenceExecution':0}
