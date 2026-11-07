import json

from native_wave013_file_owner_mount_reference import ReferenceImage as Base
from native_wave013_common import OUT,MODULE_SHA,record,sha


class ReferenceImage(Base):
    def __init__(self):
        super().__init__()
        path=OUT/'file/owner/game/reference-entry-proposal.json'
        proposal=json.loads(path.read_text())
        if proposal['moduleSha256']!=MODULE_SHA or proposal['approvedForFunctionInventory'] or proposal['sourceCreditGranted']:
            raise RuntimeError('Game reference proposal changes identity/admission')
        for row in proposal['functions']:
            address=row['address']
            if address in self.functions:raise RuntimeError('Game reference proposal duplicates a canonical entry')
            for part in row['ranges']:
                low,high=part['start'],part['endExclusive']
                raw=self.image[low-0x100000:high-0x100000]
                if sha(raw)!=part['sha256']:raise RuntimeError('Game reference instruction span differs')
                if any(max(low,a)<min(high,b) for a,b,owner in self.ranges):
                    raise RuntimeError('Game reference proposal overlaps frozen instruction ownership')
                self.ranges.append((low,high,address))
            for part in row['literalPoolRanges']:
                if sha(self.image[part['start']-0x100000:part['endExclusive']-0x100000])!=part['sha256']:
                    raise RuntimeError('Game reference pool span differs')
            self.functions[address]=row;self.reference_entries.add(address)
        self.ranges.sort();self.starts=[row[0] for row in self.ranges]
        self.pins['gameReferenceEntryProposal']=record(path)
