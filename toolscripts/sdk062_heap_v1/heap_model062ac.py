import struct

class Model:
 def __init__(self,base,layout,size=0x18000,flags=0,storage_offset=0x200,storage_bytes=0x10000,heap_offset=0):
  self.base=base;self.heap=base+heap_offset;self.layout=layout;self.p=layout[0];self.header=layout[2];self.align=layout[3];self.bytes=bytearray(b'\xa7'*size);self.used=[];self.free=[]
  self.begin=(base+storage_offset+self.align-1)&-self.align;self.end=(base+storage_offset+storage_bytes)&-self.align;self.flags=flags&255;self.group=0;self.policy=0;self.split=0xa7
  self.put(self.heap+layout[4],0x45585048,4)
  for index in [5,6]:self.put(self.heap+layout[index],0,self.p)
  children=self.heap+layout[7]
  self.put(children,0,self.p);self.put(children+self.p,0,self.p);self.put(children+2*self.p,0,2);self.put(children+2*self.p+2,layout[5],2)
  self.put(self.heap+layout[8],self.begin,self.p);self.put(self.heap+layout[9],self.end,self.p);self.put(self.heap+layout[10],self.flags,4)
  self.put(self.heap+layout[15],0,2);self.put(self.heap+layout[16],0,2)
  self.free=[(self.begin,self.end)];self.render()
 def put(self,address,value,count):self.bytes[address-self.base:address-self.base+count]=int(value).to_bytes(count,'little')
 def controls(self,group,policy,split):
  self.group=group;self.policy=policy;self.split=split
  for index,value,count in [(15,group,2),(16,policy,2),(17,split,1)]:self.put(self.heap+self.layout[index],value,count)
 def render(self):
  free_addresses=[a for a,b in self.free];used_addresses=[row['payload']-self.header for row in self.used]
  for positions,magic,kind in [(free_addresses,0x4652,'free'),(used_addresses,0x5544,'used')]:
   for i,address in enumerate(positions):
    if kind=='free':
     start,end=self.free[i];flags=0;length=end-start-self.header
    else:
     row=self.used[i];flags=row['tag'];length=row['end']-(row['payload']-self.header)-self.header
    self.put(address,magic,2);self.put(address+2,flags,2);self.put(address+4,length,4);self.put(address+8,positions[i-1]if i else 0,self.p);self.put(address+8+self.p,positions[i+1]if i+1<len(positions)else 0,self.p)
  for index,value in [(11,free_addresses[0]if free_addresses else 0),(12,free_addresses[-1]if free_addresses else 0),(13,used_addresses[0]if used_addresses else 0),(14,used_addresses[-1]if used_addresses else 0)]:self.put(self.heap+self.layout[index],value,self.p)
 def allocate(self,amount,alignment):
  count=((amount or 1)+self.align-1)&-self.align;magnitude=max(abs(alignment),self.align);reverse=alignment<0;candidates=[]
  ordered=list(reversed(self.free))if reverse else list(self.free)
  for start,end in ordered:
   payload=(end-count)&-magnitude if reverse else (start+self.header+magnitude-1)&-magnitude
   if payload<start+self.header or payload+count>end:continue
   candidates.append((end-start-self.header,start,end,payload))
   if not self.policy&1:break
  if not candidates:return 0
  length,start,end,payload=min(candidates,key=lambda x:x[0]);self.free.remove((start,end));allocation_start=payload-self.header;allocation_end=payload+count
  if allocation_start-start>=self.header+self.align and(reverse or self.split):self.free.append((start,allocation_start))
  else:allocation_start=start
  if end-allocation_end>=self.header+self.align and(not reverse or self.split):self.free.append((allocation_end,end))
  else:allocation_end=end
  if self.flags&1:self.bytes[allocation_start-self.base:allocation_end-self.base]=b'\0'*(allocation_end-allocation_start)
  tag=(int(reverse)<<15)|(((payload-self.header-allocation_start)&127)<<8)|(self.group&255)
  self.used.append(dict(payload=payload,start=allocation_start,end=allocation_end,tag=tag));self.free.sort();self.render();return payload
 def dispose(self,payload):
  row=next(x for x in self.used if x['payload']==payload);self.used.remove(row);spans=sorted(self.free+[(row['start'],row['end'])]);merged=[]
  for start,end in spans:
   if merged and merged[-1][1]==start:merged[-1]=(merged[-1][0],end)
   else:merged.append((start,end))
  self.free=merged;self.render()
 def write_payload(self,payload,amount,value):self.bytes[payload-self.base:payload-self.base+amount]=bytes([value])*amount
 def projection(self):
  return dict(freeSpans=[[a-self.base,b-self.base]for a,b in self.free],liveAllocations=[dict(payloadOffset=r['payload']-self.base,startOffset=r['start']-self.base,endOffset=r['end']-self.base,tag=r['tag'])for r in self.used],group=self.group,policy=self.policy,split=self.split)
 def validate(self,actual):
  if actual!=self.bytes:
   mismatch=[i for i,(a,b)in enumerate(zip(actual,self.bytes))if a!=b]
   raise ValueError(('independent full arena mismatch',mismatch[:40]))
  spans=sorted(self.free+[(r['start'],r['end'])for r in self.used]);cursor=self.begin
  for start,end in spans:
   if start!=cursor or end<=start or start%self.align or end%self.align:raise ValueError('invalid full ownership partition')
   cursor=end
  if cursor!=self.end:raise ValueError('ownership partition omitted storage')
  for row in self.used:
   if row['payload']%self.align or row['payload']-row['start']-self.header>127:raise ValueError('invalid allocation header ownership')
  return True
