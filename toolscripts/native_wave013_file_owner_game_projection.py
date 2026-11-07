from native_wave013_file_owner_mount_projection import Projection as Base
from native_wave013_file_owner_game_state import OWNER,OLD_OWNER,SLOT,ENV


class Projection(Base):
    def __init__(self,original,native,owner_identity=None,constants=None):
        super().__init__(original,native)
        self.owner_identity=owner_identity
        self.constants=constants or {}

    def pointer(self,value,field_name=None):
        if value==0x855dd4 and field_name and field_name.endswith('.operations'):
            return self.native['ownerOperations']
        offset=value-self.original['base']
        if offset in [OWNER,OLD_OWNER,SLOT]:return self.native['base']+offset
        for owner in [OWNER,OLD_OWNER]:
            if offset==owner+4 and field_name and (field_name.endswith('.allocation.next') or field_name.endswith('.allocation.previous') or field_name=='heap.anchor'):
                return self.native['base']+owner+self.p
        return super().pointer(value,field_name)

    def write(self,address,size,value,pc):
        offset=address-self.original['base']
        row=next((row for row in self.original_fields if row['offset']==offset and row['size']==size),None)
        if self.p==8 and row:
            target=self.native_fields[row['name']]
            translated=None
            if row['name'].endswith('.allocation.bytes') and value==65536:translated=self.native['allocationBytes']
            if row['name']=='game.requestedBytes':
                if value!=52:raise ValueError('Original factory did not request a52-byte owner')
                translated=self.native['game']['ownerBytes']
            if row['name']=='game.requestedAlignment':
                if value!=4:raise ValueError('Original factory did not request4-byte alignment')
                translated=self.native['game']['ownerAlignment']
            if translated is not None:
                self.expected[target['offset']:target['offset']+target['size']]=translated.to_bytes(target['size'],'little')
                self.translated_writes.append((target['offset'],target['size']));return
        super().write(address,size,value,pc)

    def service_expectations(self,original):
        selected={**original,'result':original['mountResults'][-1] if original['mountResults'] else original['result']}
        super().service_expectations(selected)
