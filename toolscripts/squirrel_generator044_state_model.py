import copy
import struct
from squirrel_generator044_model import decode as decode_lifetime


def decode(words):
 old_count=words[0];base=decode_lifetime(words[1:old_count+1]);at=old_count+1
 def take(count):
  nonlocal at
  row=words[at:at+count];at+=count
  if len(row)!=count:raise ValueError('046 truncated observation')
  return row
 header=take(12)
 if header[0]!=0x046046 or header[7]:raise ValueError('046 fixture fault')
 error=take(3)
 def vector():
  identity,size,capacity=take(3);return dict(identity=identity,size=size,capacity=capacity,values=[take(3)for _ in range(size)])
 stack,varargs=vector(),vector();count,capacity=take(2);frames=[take(14)for _ in range(count)]
 saved=take(14)if take(1)[0]else None
 def traps():
  identity,size,capacity=take(3);return dict(identity=identity,size=size,capacity=capacity,values=[take(4)for _ in range(size)])
 vm_traps,generator_traps=traps(),traps();roots=take(8)
 reallocations=[take(4)for _ in range(take(1)[0])];observations=[take(12)for _ in range(take(1)[0])]
 if at!=len(words):raise ValueError('046 trailing observation')
 return dict(lifetime=base,header=header,error=error,stack=stack,varargs=varargs,frames=frames,frameCapacity=capacity,
  saved=saved,vmTraps=vm_traps,generatorTraps=generator_traps,roots=roots,reallocations=reallocations,observations=observations)


def roles(record):
 labels={};pending=[]
 for role,identities in [('value',record['roots'][:4]),('frame',record['roots'][4:5]),('trap',record['roots'][5:7]),('byte',record['roots'][7:])]:
  pending.extend((identity,role)for identity in identities if identity)
 edges={new:old for old,new,previous,next_bytes in record['reallocations']}
 while pending:
  identity,role=pending.pop()
  if identity in labels:
   if labels[identity]!=role:raise ValueError('046 allocation has incompatible typed owners')
   continue
  labels[identity]=role
  if edges.get(identity):pending.append((edges[identity],role))
 return labels


def normalize(record):
 result=copy.deepcopy(record);ptr=result['lifetime']['header'][1];labels=roles(record);sizes={}
 for row in result['lifetime']['blocks']:
  kind=row['kind'];size=row['bytes'];fixed={1:(96,184),2:(64,112),3:(72,128),5:(20,40),6:(120,192)}
  if kind in fixed:
   pair=fixed[kind]
   if size!=pair[ptr==8]:raise ValueError('046 typed object allocation mismatch')
   target=pair[0]
  elif kind==4:
   if size!=(32 if ptr==4 else 56)+row['fields'][1]:raise ValueError('046 string allocation mismatch')
   target=32+row['fields'][1]
  elif kind in[7,8,12,14]:
   role=labels.get(row['id'])
   if role is None:raise ValueError('046 allocation missing an actual typed root '+str(row))
   scale={'value':(8,16),'frame':(48,72),'trap':(16,24),'byte':(1,1)}[role]
   if size%scale[ptr==8]:raise ValueError('046 allocation has nonintegral element budget')
   target=size//scale[ptr==8]*scale[0]
  elif kind==10:
   if size%ptr:raise ValueError('046 intern bucket alignment mismatch')
   target=size//ptr*4
  else:raise ValueError('046 unknown allocation kind')
  row['bytes']=target;sizes[row['id']]=target
 for event in result['lifetime']['events']:event[1]=sizes[event[0]]
 for row in result['reallocations']:row[2]=sizes[row[0]]if row[0]else 0;row[3]=sizes[row[1]]
 result['lifetime']['header']=result['lifetime']['header'][7:];result['header']=result['header'][3:]
 return result


def validate_native(observation,reference):
 record=decode(observation['words']);expected=decode(reference['words'])
 if normalize(record)!=normalize(expected):raise ValueError('046 native ownership/state/typed-budget model differs')
 h=record['lifetime']['header'];base=h[5]|h[6]<<32
 if h[1]!=8 or base<=0xffffffff or record['header'][2]!=264:raise ValueError('046 native full VM width mismatch')
 arena=observation['arena'];addresses={0:0,1:base+0x1000};bump=0x10000
 for row in record['lifetime']['blocks']:
  bump=(bump+255)&-256;addresses[row['id']]=base+bump;bump+=row['bytes']
 def read(address,kind):return struct.unpack_from('<'+kind,arena,address-base)[0]
 def identity(pointer):
  for identity,address in addresses.items():
   if address==pointer:return identity
  raise ValueError('046 native pointer escaped declared owners '+hex(pointer))
 def obj(address,wanted):
  tag=read(address,'I');bits=identity(read(address+8,'Q'))if tag&0x08000000 else read(address+8,'I')
  if[tag,bits]!=wanted[:2]:raise ValueError('046 native tagged value layout differs')
  if tag&0x08000000 and read(read(address+8,'Q')+8,'I')!=wanted[2]:raise ValueError('046 native actual owner count differs')
 def vector(address,wanted):
  pointer=read(address,'Q')
  if[identity(pointer),read(address+8,'I'),read(address+12,'I')]!=[wanted['identity'],wanted['size'],wanted['capacity']]:raise ValueError('046 native actual vector topology differs')
  for index,value in enumerate(wanted['values']):obj(pointer+index*16,value)
 def frame(address,wanted):
  instruction=read(address,'Q');offset=instruction-base if instruction else 0xffffffff
  if offset!=wanted[0]or identity(read(address+8,'Q'))!=wanted[1]:raise ValueError('046 native frame pointers differ')
  obj(address+16,wanted[2:5])
  if identity(read(address+32,'Q'))!=wanted[5]:raise ValueError('046 native generator frame owner differs')
  values=[read(address+offset,'I')for offset in range(40,64,4)]+[read(address+64,'H'),read(address+66,'H')]
  if values!=wanted[6:]:raise ValueError('046 native frame scalar layout differs')
 def traps(address,wanted):
  pointer=read(address,'Q')
  if[identity(pointer),read(address+8,'I'),read(address+12,'I')]!=[wanted['identity'],wanted['size'],wanted['capacity']]:raise ValueError('046 native trap vector topology differs')
  for index,value in enumerate(wanted['values']):
   trap=pointer+index*24;instruction=read(trap+8,'Q');offset=instruction-base if instruction else 0xffffffff
   if[read(trap,'I'),read(trap+4,'I'),offset,read(trap+16,'I')]!=value:raise ValueError('046 native trap scalar layout differs')
 vm=base+0x6000
 if[read(vm+80,'I'),read(vm+84,'I'),read(vm+176,'I'),read(vm+180,'I')]!=record['header'][8:12]:raise ValueError('046 native VM state fields differ')
 if read(vm+232,'Q')!=base+0x1000:raise ValueError('046 native VM shared pointer was truncated or rebound')
 vector(vm+48,record['stack']);vector(vm+64,record['varargs']);obj(vm+104,record['error'])
 frame_pointer=read(vm+184,'Q')
 if identity(frame_pointer)!=record['roots'][4]or read(vm+168,'Q')!=frame_pointer:raise ValueError('046 native calls pointer aliases differ')
 if read(vm+216,'Q')!=frame_pointer+(record['header'][10]-1)*72:raise ValueError('046 native current frame pointer differs')
 if[read(vm+192,'I'),read(vm+196,'I')]!=[len(record['frames']),record['frameCapacity']]:raise ValueError('046 native call vector budget differs')
 for index,value in enumerate(record['frames']):frame(frame_pointer+index*72,value)
 traps(vm+200,record['vmTraps'])
 for row in record['lifetime']['blocks']:
  if row['kind']not in[1,2,3,4,5,6]:continue
  address=addresses[row['id']];index={1:1,2:2,3:3,4:5,5:4,6:0}[row['kind']]
  if read(address,'Q')not in[observation['vtables'][index],observation['vtables'][6]]:raise ValueError('046 native actual typed vtable differs')
  if read(address+8,'I')!=row['fields'][0]:raise ValueError('046 native actual prefix count differs')
  if row['kind']==6:
   if read(address+184,'B')!=row['fields'][4]:raise ValueError('046 native generator state offset differs')
   for offset,wanted in[(24,row['fields'][2]),(32,row['fields'][3]),(40,row['fields'][1])]:
    if identity(read(address+offset,'Q'))!=wanted:raise ValueError('046 native collectable/shared topology differs')
   obj(address+48,row['fields'][9:12]);obj(address+112,row['fields'][6:9])
   vector(address+64,dict(row['vectors'][1],identity=record['roots'][2]))
   vector(address+80,dict(row['vectors'][0],identity=record['roots'][3]))
   if record['saved']is not None:frame(address+96,record['saved'])
   traps(address+168,record['generatorTraps'])
 return dict(validated=True,base=base,objectCount=len(record['lifetime']['blocks']),typedAllocationRoles=roles(record))
