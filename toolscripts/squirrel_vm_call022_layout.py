import io
import json
from pathlib import Path
from elftools.elf.elffile import ELFFile
from squirrel_vm_call022_build import ROOT,SOURCE,core
from squirrel_source_wave002 import sha


def execute(output):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-vm-call022'):raise ValueError('022 layout probes stay private')
    output.mkdir(parents=True,exist_ok=True)
    fields=['sizeof(SqVmCallStorage022)','sizeof(SqVmCallFrame022)','__builtin_offsetof(SqVmCallFrame022,closure)',
      '__builtin_offsetof(SqVmCallStorage022,native_depth)','__builtin_offsetof(SqLookupVmStorage020,shared)',
      '__builtin_offsetof(SqVmCallFrame022,varargs_size)','__builtin_offsetof(SqLookupVmStorage020,error)']
    code='#include "vm_call.h"\nconst SqPrototypeU32 layout022[]={'+','.join(fields)+'};\n'
    source=output/'layout022.c';source.write_text(code,encoding='utf-8');rows=[]
    for name,target,flags,expected in(('arm','arm-none-eabi',['-mcpu=mpcore','-marm'],[148,48,8,144,140,44,64]),
       ('android','aarch64-linux-android',[],[192,72,16,184,144,64,72])):
        obj=output/(name+'.o');command=core.command([ROOT/'tools/clang-21/clang.exe','--target='+target,*flags,'-std=c11','-O3','-ffreestanding','-Wall','-Wextra','-Werror','-I',SOURCE,'-c',source,'-o',obj],output/(name+'.log'))
        elf=ELFFile(io.BytesIO(obj.read_bytes()));symbol=elf.get_section_by_name('.symtab').get_symbol_by_name('layout022')[0]
        data=elf.get_section(symbol['st_shndx']).data()[symbol['st_value']:symbol['st_value']+symbol['st_size']]
        values=[int.from_bytes(data[index:index+4],'little')for index in range(0,len(data),4)]
        if values!=expected:raise ValueError('022 measured native/target layout changed')
        rows.append({'target':target,'fields':fields,'values':values,'objectSha256':sha(obj.read_bytes()),'command':command})
    result={'schemaVersion':1,'status':'actual-compiled022-layouts-verified','headerSha256':sha((SOURCE/'vm_call.h').read_bytes()),'producerSha256':sha(Path(__file__).read_bytes()),'probes':rows,'windowsSizeObservationInMainCorpus':True,'full018CompositionQualified':False}
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    result=execute(ROOT/'work/squirrel-vm-call022/final-layout');print(result['status'])
