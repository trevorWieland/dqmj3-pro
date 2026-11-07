import struct


def decode(words):
 if words[0]!=0x044044 or words[1]not in[4,8]or words[10]:raise ValueError('044 malformed observation')
 at=12;blocks=[]
 def take(count):
  nonlocal at
  out=words[at:at+count];at+=count
  if len(out)!=count:raise ValueError('044 short observation')
  return out
 for i in range(words[11]):
  kind,size,frees=take(3);row=dict(id=100+i,kind=kind,bytes=size,frees=frees)
  if kind==6:
   row['fields']=take(12);row['vectors']=[]
   for _ in range(2):
    count,capacity=take(2);row['vectors'].append(dict(size=count,capacity=capacity,values=[take(3)for _ in range(count)]))
   row['traps']=take(2)
  elif kind in[1,3]:row['fields']=take(1)
  elif kind in[2,5]:row['fields']=take(3)
  elif kind==4:
   row['fields']=take(3);row['text']=take(row['fields'][1])
  blocks.append(row)
 count=take(1)[0];events=[take(6)for _ in range(count)];tail=take(2)
 if at!=len(words):raise ValueError('044 trailing observation words')
 return dict(header=words[:12],blocks=blocks,events=events,tail=tail)


def normalized(record):
 ptr=record['header'][1];ratio=ptr//4;blocks=[];sizes={}
 for row in record['blocks']:
  kind=row['kind'];size=row['bytes'];target=size
  fixed={1:(96,184),2:(64,112),3:(72,128),5:(20,40),6:(120,192)}
  if kind in fixed:
   pair=fixed[kind]
   if size!=pair[ptr==8]:raise ValueError('044 allocation size mismatch '+str(row))
   target=pair[0]
  elif kind==4:
   if size!=(32 if ptr==4 else 56)+row['fields'][1]:raise ValueError('044 string allocation mismatch')
   target=32+row['fields'][1]
  elif kind in[7,10]:
   if size%ratio:raise ValueError('044 vector allocation mismatch')
   target=size//ratio
  elif kind==8:
   if size!=(32 if ptr==4 else 48):raise ValueError('044 trap allocation mismatch')
   target=32
  else:raise ValueError('044 unknown allocation kind '+str(kind))
  logical=dict(row,bytes=target);blocks.append(logical);sizes[row['id']]=target
  if kind==6 and(row['fields'][4]!=0 or row['fields'][5]!=255):raise ValueError('044 constructor state/undefined-frame contract changed')
 events=[row[:1]+[sizes[row[0]]]+row[2:]for row in record['events']]
 return dict(header=record['header'][7:],blocks=blocks,events=events,tail=record['tail'])


def validate_native(observation,target):
 record=decode(observation['words']);logical=normalized(record)
 if logical!=normalized(decode(target['words'])):raise ValueError('044 native logical ownership model mismatch')
 header=record['header'];base=header[5]|header[6]<<32
 if header[1]!=8 or base<=0xffffffff or header[2:5]!=[192,72,24]:raise ValueError('044 native width/layout contract changed')
 arena=observation['arena'];addresses={0:0,1:base+0x1000};bump=0x10000
 for row in record['blocks']:
  bump=(bump+255)&-256;addresses[row['id']]=base+bump;bump+=row['bytes']
 def read(address,fmt):return struct.unpack_from('<'+fmt,arena,address-base)[0]
 def identity(pointer):
  for identity,address in addresses.items():
   if pointer==address:return identity
  raise ValueError('044 native pointer escaped declared objects '+hex(pointer))
 for row in record['blocks']:
  address=addresses[row['id']];kind=row['kind']
  if kind in[1,2,3,4,5,6]:
   index={1:1,2:2,3:3,4:5,5:4,6:0}[kind]
   vtable=read(address,'Q')
   if vtable not in[observation['vtables'][index],observation['vtables'][6]]:raise ValueError('044 wrong actual typed native vtable')
   if read(address+8,'I')!=row['fields'][0]:raise ValueError('044 native prefix count mismatch')
  if kind==6:
   fields=row['fields']
   for offset,wanted in[(24,fields[2]),(32,fields[3]),(40,fields[1])]:
    if identity(read(address+offset,'Q'))!=wanted:raise ValueError('044 native generator pointer topology mismatch')
   for offset,triple in[(112,fields[6:9]),(48,fields[9:12])]:
    if read(address+offset,'I')!=triple[0]or identity(read(address+offset+8,'Q'))!=triple[1]:raise ValueError('044 native closure owner mismatch')
   if read(address+184,'B')!=0:raise ValueError('044 native state mismatch')
  if kind==5:
   if read(address+24,'I')!=row['fields'][1]or identity(read(address+32,'Q'))!=row['fields'][2]:raise ValueError('044 native weak target topology mismatch')
 if identity(read(base+0x1000+72,'Q'))!=record['tail'][0]:raise ValueError('044 native shared-chain mismatch')
 return dict(validated=True,base=base,objectCount=len(record['blocks']),logical=logical)
