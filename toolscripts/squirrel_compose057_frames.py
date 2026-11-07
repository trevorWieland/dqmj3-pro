import json
import sys
from pathlib import Path

import unicorn
from unicorn import arm_const as arm
from unicorn import arm64_const as a64

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_compose057_reference import Original
from squirrel_compose057_source import Source
from squirrel_compose057_observe import observe


class Frames:
    def __init__(self,session,profile):
        self.session=session
        self.cpu=session.cpu
        self.profile=profile
        self.probes=json.loads((WORK/'layout-probes'/profile/'probes.json').read_text())
        self.core=self.probes['core']
        self.frame=self.probes['frame']
        self.pointer=self.core['pointerBytes']
        self.base=self.get(session.vm+self.core['calls'],self.pointer)
        self.capacity=self.get(session.vm+self.core['calls']+self.pointer+4)
        self.events=[]
        self.retired={}
        self.breaches=[]
        self.step='before-first-program'
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,self.write)

    def get(self,address,size=4):
        return int.from_bytes(self.cpu.mem_read(address,size),'little')

    def event(self,address,size,write,value):
        end=self.base+self.capacity*self.frame['frameBytes']
        if address+size<=self.base or address>=end:return
        if not self.base<=address<address+size<=end:
            raise ValueError('Frame observation straddled its exact allocation')
        if self.get(self.session.vm+self.core['calls'],self.pointer)!=self.base or \
           self.get(self.session.vm+self.core['calls']+self.pointer+4)!=self.capacity:
            raise ValueError('Frame observation allocation moved outside its declared fixed-capacity trace')
        low=(address-self.base)//self.frame['frameBytes']
        high=(address+size-1-self.base)//self.frame['frameBytes']
        count=self.get(self.session.vm+self.core['callCount'])
        pc=self.cpu.reg_read(a64.UC_ARM64_REG_PC if self.profile=='a64'else arm.UC_ARM_REG_PC)
        row={'step':self.step,'pc':pc,'address':address,'bytes':size,'write':write,
             'value':value if write else self.get(address,size),'activeCount':count,'firstFrame':low,'lastFrame':high}
        self.events.append(row)
        for index in range(low,high+1):
            for key in ['instruction','literals','target','root']:
                width=self.pointer if key in ['instruction','literals']else 4
                field=self.base+index*self.frame['frameBytes']+self.frame[key]
                overlap=max(field,address)<min(field+width,address+size)
                identity=(index,key)
                if not overlap or identity not in self.retired:continue
                if write:
                    for byte in range(max(field,address),min(field+width,address+size)):
                        self.retired[identity].discard(byte)
                elif any(byte in self.retired[identity]for byte in range(max(field,address),min(field+width,address+size))):
                    self.breaches.append({**row,'field':key,'frame':index,
                        'unwrittenRetiredBytes':sorted(self.retired[identity])})

    def read(self,cpu,access,address,size,value,unused):
        self.event(address,size,False,value)

    def write(self,cpu,access,address,size,value,unused):
        self.event(address,size,True,value)

    def retire(self):
        if self.get(self.session.vm+self.core['callCount'])or \
           self.get(self.session.vm+self.core['current'],self.pointer):
            raise ValueError('Cannot mark live frames retired')
        for index in range(self.capacity):
            for key in ['instruction','literals','target','root']:
                width=self.pointer if key in ['instruction','literals']else 4
                field=self.base+index*self.frame['frameBytes']+self.frame[key]
                self.retired[index,key]=set(range(field,field+width))


def main(profile):
    session=Original()if profile=='original'else Source(profile)
    session.boot()
    tracker=Frames(session,'arm'if profile=='original'else profile)
    steps=[]
    for index,(program,flags)in enumerate([(8,0),(256,1),(8,1),(257,0),(8,0),(256,0),(8,1)]):
        tracker.step=str(index)+'-program-'+str(program)+'-flags-'+str(flags)
        result=session.execute(program,3,flags,1)
        graph=observe(session,'arm'if profile=='original'else profile)
        steps.append({'program':program,'flags':flags,'result':result,'graph':graph})
        tracker.retire()
    folder=WORK/'frame-lifetime'
    folder.mkdir(exist_ok=True)
    path=folder/(profile+'.json')
    path.write_text(json.dumps({'profile':profile,'steps':steps,'events':tracker.events,
                               'readsBeforeReinitialization':tracker.breaches},indent=2)+'\n')
    print(json.dumps({'profile':profile,'steps':len(steps),'frameEvents':len(tracker.events),
                      'readsBeforeReinitialization':len(tracker.breaches),'receipt':str(path)}))


if __name__=='__main__':main(sys.argv[1])
