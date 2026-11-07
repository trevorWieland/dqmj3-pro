import json
import unicorn

from native_wave013_common import ROOT,sha,record
from native_wave013_file_owner_reference_image import ReferenceImage as Base


class ReferenceImage(Base):
    def __init__(self):
        super().__init__()
        path=ROOT/'evidence/lanes/native-archive032/initial-claim.json';claim=json.loads(path.read_text())
        row=claim['supplementalCandidate'];address=row['address']
        if address in self.functions or row['inventoryAdmissionGranted'] or row['sourceCreditGranted']:
            raise ValueError('Supplemental archive candidate changes inventory/credit')
        for part in row['instructionRanges']:
            low,high=part['start'],part['endExclusive']
            if sha(self.image[low-0x100000:high-0x100000])!=part['sha256']:
                raise ValueError('Archive destructor candidate bytes differ')
            if any(max(low,start)<min(high,end) for start,end,owner in self.ranges):
                raise ValueError('Archive destructor candidate overlaps an existing owner')
            self.ranges.append((low,high,address))
        self.functions[address]={'address':address,'mode':'ARM','ranges':row['instructionRanges']}
        self.reference_entries.add(address);self.ranges.sort();self.starts=[part[0] for part in self.ranges]
        self.pins['archiveCandidate']=record(path)

    def map(self,cpu):
        mapped=[]
        for segment in self.layout['segments']:
            start=segment['address'];size=segment['pages']*4096
            if segment['name']=='data':size=max(size,((self.writable[1]-start+4095)//4096)*4096)
            cpu.mem_map(start,size,unicorn.UC_PROT_ALL)
            raw=self.image[segment['codeBinOffset']:segment['codeBinOffset']+segment['initializedBytes']]
            cpu.mem_write(start,raw)
            permissions=unicorn.UC_PROT_READ
            if segment['name']=='text':permissions|=unicorn.UC_PROT_EXEC
            if segment['name']=='data':permissions|=unicorn.UC_PROT_WRITE
            cpu.mem_protect(start,size,permissions)
            mapped.append({'address':start,'bytes':size,'initializedSha256':sha(raw),'permissions':permissions})
        return {'segments':mapped,'writableProgramRange':self.writable,'originalBytesPatched':False}
