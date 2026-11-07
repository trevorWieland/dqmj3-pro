from native_wave013_file_owner_state import Projection as Base,OWNER
from native_wave013_file_owner_provider_model import ENV


class Projection(Base):
    def __init__(self,original,native):
        super().__init__(original,native)
        self.platform_work_writes=[]

    def write(self,address,size,value,pc):
        offset=address-self.original['base']
        if offset in [self.original['resourceWork'],self.original['resourceWork']+32]:
            if size!=4 or value!=0 or pc!=0x15e660:raise ValueError('Original SDK working-cache initialization differs')
            self.platform_work_writes.append({'offset':offset,'bytes':size,'value':value,'pc':pc})
            return
        if self.p==8 and offset==OWNER+16 and self.original['specification'].get('operation')=='initialize':
            if size!=4 or value!=65536:raise ValueError('Original page-rounded owner allocation budget differs')
            target=self.native_fields['owner.allocation.bytes']
            raw=self.native['allocationBytes'].to_bytes(4,'little')
            self.expected[target['offset']:target['offset']+4]=raw
            self.translated_writes.append((target['offset'],4));return
        super().write(address,size,value,pc)

    def service_expectations(self,original):
        super().service_expectations(original)
        requests=original['mountRequests'];required=original['mountWorkRequired']
        if not requests:
            if required:raise ValueError('Original work query occurred without mount request')
            return
        if required!=[56] or len(requests)!=1:raise ValueError('Original cache-slot work request differs')
        row=requests[0];abi=self.native['abi'];base=ENV
        if row['directorySlots']!=1 or row['fileSlots']!=1 or row['workBytes']!=2048:
            raise ValueError('Original mount logical/raw budgets differ')
        values=[('mountCalls',1,4),('archive',row['title'],8),('work',self.pointer(row['work'],'backend.work'),self.p),
            ('workBytes',row['workBytes'],4)]
        for key,value,size in values:
            at=base+abi[key];self.expected[at:at+size]=value.to_bytes(size,'little')
        if not original['result']&0x80000000:
            at=base+abi['registered'];self.expected[at:at+4]=(1).to_bytes(4,'little')
