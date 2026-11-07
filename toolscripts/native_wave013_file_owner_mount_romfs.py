import struct


def align(value,unit=4):return (value+unit-1)//unit*unit


def build(files):
    names=sorted(files)
    directory=struct.pack('<6I',0,0xffffffff,0xffffffff,0 if names else 0xffffffff,0xffffffff,0)
    metadata=bytearray();payload=bytearray();locations=[]
    for name in names:
        encoded=name.encode('utf-16-le')
        if not encoded or '/' in name or len(encoded)>128:raise ValueError('Archive fixture basename exceeds finite contract')
        locations.append(len(metadata));metadata.extend(bytes(align(32+len(encoded))))
    rows=[]
    for index,name in enumerate(names):
        data=bytes(files[name]);offset=align(len(payload),16);payload.extend(bytes(offset-len(payload)));payload.extend(data)
        encoded=name.encode('utf-16-le');following=locations[index+1] if index+1<len(names) else 0xffffffff
        at=locations[index];metadata[at:at+32]=struct.pack('<IIQQII',0,following,offset,len(data),following,len(encoded))
        metadata[at+32:at+32+len(encoded)]=encoded
        rows.append({'name':name,'metadataOffset':at,'dataOffset':offset,'bytes':len(data)})
    directory_hash=struct.pack('<I',0);file_hash=struct.pack('<I',0 if names else 0xffffffff)
    parts=[directory_hash,directory,file_hash,bytes(metadata)]
    offsets=[];at=40
    for part in parts:offsets.extend([at,len(part)]);at+=len(part)
    data_start=align(at,16);header=struct.pack('<10I',40,*offsets,data_start)
    result=header+b''.join(parts)+bytes(data_start-at)+payload
    if len(result)>0x100000:raise ValueError('Archive fixture exceeds bounded one-megabyte provider')
    return {'image':bytes(result),'files':rows,'dataStart':data_start,'headerWords':list(struct.unpack('<10I',header))}
