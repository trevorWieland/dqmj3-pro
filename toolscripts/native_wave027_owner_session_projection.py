from native_wave013_file_owner_game_projection import Projection as Base
from native_wave013_file_owner_game_state import ENV


SDK_WORK_WRITES={0x15e660,0x44d644,0x44d664,0x44d66c,0x44d670,0x44d674,0x44d67c,0x44d2e4,0x44d33c}


class Projection(Base):
    def __init__(self,original,native,owner_identity=None,constants=None):
        super().__init__(original,native,owner_identity,constants)
        self.sdk_private_writes=[]

    def write(self,address,size,value,pc):
        offset=address-self.original['base'];work=self.original['resourceWork']
        if work<=offset<offset+size<=work+56:
            if pc not in SDK_WORK_WRITES or size!=4 or (offset-work)%4:
                raise ValueError('Original SDK cache write lacks a qualified role')
            self.sdk_private_writes.append({'offset':offset-work,'bytes':size,'pc':pc});return
        super().write(address,size,value,pc)

    def service_expectations(self,original):
        abi=self.native['abi'];base=ENV
        for key,value in [('regionCalls',original['cfgRegionCalls']),('languageCalls',original['cfgLanguageCalls']),
            ('cfgQueryCount',len(original['cfgQueries']))]:
            at=base+abi[key];self.expected[at:at+4]=value.to_bytes(4,'little')
        for index,row in enumerate(original['cfgQueries']):
            at=base+abi['cfgQueryKind']+4*index;self.expected[at:at+4]=row['kind'].to_bytes(4,'little')
            at=base+abi['cfgQueryFlags']+64*index
            raw=b''.join(flag.to_bytes(4,'little') for flag in row['flags']);self.expected[at:at+len(raw)]=raw
        at=0x5200+self.p;self.expected[at:at+4]=original['heapThreadQueries'].to_bytes(4,'little')
