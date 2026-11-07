def apply_remaining(case,data,base,pair,write,reserve,tables,uploaded):
    if not case['flags']&64:return
    get=tables.word;put=tables.store
    context=lambda offset:get(0x1000+offset)
    selected=lambda offset:get(0x5000+offset)
    store=lambda offset,value:put(0x1000+offset,value)
    scratch=[0]*513
    def scratch_write(header,count,start):
        temporary=0x32000
        import struct
        original=bytes(data[temporary:temporary+(count+1)*4])
        for index in range(count+1):struct.pack_into('<I',data,temporary+index*4,scratch[start+index])
        write(header,count,temporary)
        data[temporary:temporary+(count+1)*4]=original
    def cache(identity_offset,count_offset,first_offset,index,location,slot,flag,fog=False):
        nonlocal uploaded
        identity=context(0x74+index*4)
        resource=tables.resource(index)
        pending=context(count_offset)
        if context(identity_offset)==identity:
            if pending:
                first=context(first_offset)
                pair(location|first,0xf00e6 if fog else 0xf00af)
                write(0xe8 if fog else 0xb0,pending,tables.pointer(resource+0x808+slot*8)-base+first*4)
                store(count_offset,0)
        else:
            if pending:store(count_offset,0)
            store(identity_offset,identity)
            output=tables.pack_pair(resource,slot,flag,fog)
            pair(location,0xf00e6 if fog else 0xf00af)
            write(0xe8 if fog else 0xb0,128,output)
            uploaded=True
    if selected(0xe0c)and case['mask']&0x4020:
        cache(0x164,0x1e8,0x26c,selected(0xdf0),0x200,3,8)
        if selected(0x594)&0x4000:cache(0x168,0x1ec,0x270,selected(0xdf4),0x300,3,8)
        if selected(0x594)&0x8000:cache(0x16c,0x1f0,0x274,selected(0xdf8),0,4,16)
        changed=any(context(0x170+i*4)!=context(0x74+selected(0xdfc+i*4)*4)for i in range(4))
        first,last,pending=512,0,False
        if changed:first,last,pending=0,511,True
        else:
            for i in range(4):
                count=context(0x1f4+i*4)
                if not count:continue
                pending=True;start=context(0x278+i*4)
                first=min(first,start);last=max(last,start+count-1)
                store(0x1f4+i*4,0)
        if pending:
            for component in range(4):
                resource=tables.resource(selected(0xdfc+component*4))
                if changed:
                    store(0x1f4+component*4,0)
                    output=tables.pack_bytes(resource)
                else:output=tables.pointer(resource+0x830)-base
                for index in range(first,last+1):
                    shift=component*8
                    scratch[index]=(scratch[index]&~(255<<shift))|(data[output+index]<<shift)
            if first<256 and last>=256:
                pair(first|0x400,0xf00af);scratch_write(0xb0,256-first,first)
                pair(0x500,0xf00af);scratch_write(0xb0,last-255,256)
            else:
                pair((first|0x400)if first<256 else((first-256)|0x500),0xf00af)
                scratch_write(0xb0,last-first+1,first)
            if changed:
                uploaded=True
                for i in range(4):store(0x170+i*4,context(0x74+selected(0xdfc+i*4)*4))
    if selected(0x624)&7 and case['mask']&0x4010:
        cache(0x180,0x204,0x288,selected(0xe64),0,1,2,True)
    if selected(0x624)&7==7 and case['mask']&0x2004000:
        changed=any(context(0x184+i*4)!=context(0x74+selected(0xe78+i*4)*4)for i in range(3))
        if changed:
            scratch[2:18]=[0]*16
            for component in range(3):
                output=tables.pack_components(tables.resource(selected(0xe78+component*4)))
                for i in range(8):
                    scratch[i+2]|=get(output+32+i*4)<<(component*8)
                    scratch[i+10]|=get(output+i*4)<<(component*8)
            if not uploaded:reserve(0xc0,45)
            pair(0,0xf0123);scratch_write(0x124,16,2);pair(0,0x100)
            for i in range(3):store(0x184+i*4,context(0x74+selected(0xe78+i*4)*4))
