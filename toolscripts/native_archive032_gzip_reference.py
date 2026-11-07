import capstone
import unicorn
from unicorn.arm_const import UC_ARM_REG_CPSR

from native_wave013_common import sha
from native_wave013_file_owner_reference_image import ReferenceImage as Base


class ReferenceImage(Base):
    def __init__(self):
        super().__init__()
        self.sdk_discovery={}

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

    def instruction(self,cpu,address,size):
        try:return super().instruction(cpu,address,size)
        except RuntimeError:
            if not 0x730000<=address<address+size<=0x735000:raise
            mode='Thumb' if cpu.reg_read(UC_ARM_REG_CPSR)&0x20 else 'ARM'
            raw=self.image[address-0x100000:address-0x100000+size]
            decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_THUMB if mode=='Thumb' else capstone.CS_MODE_ARM)
            values=list(decoder.disasm(raw,address,count=1))
            if len(values)!=1 or values[0].size!=size or mode=='ARM' and (size!=4 or address&3):
                raise RuntimeError('Gzip reference discovery did not execute a complete instruction')
            row={'address':address,'bytes':size,'mode':mode,'sha256':sha(raw),
                'referenceOnlyDynamicDiscovery':True,'sdkSourceOrInventoryCredit':0}
            if address in self.sdk_discovery and self.sdk_discovery[address]!=row:
                raise RuntimeError('Gzip SDK dynamic instruction witness changed')
            self.sdk_discovery[address]=row
            return 'reference-only-sdk-dynamic-instruction',{'size':size,'mnemonic':values[0].mnemonic,'operands':values[0].op_str}
