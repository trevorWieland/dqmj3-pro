import struct


def apply_attributes(case,data,base,pair,write):
    if not case['flags']&0x200 or not case['mask']&0x8042:return
    read=lambda offset:struct.unpack_from('<I',data,offset)[0]
    def store(offset,value):struct.pack_into('<I',data,offset,value&0xffffffff)
    pointer=lambda offset:struct.unpack_from('<Q',data,offset)[0]
    def put_pointer(offset,value):struct.pack_into('<Q',data,offset,value)
    c=lambda offset:read(0x1000+offset)
    s=lambda offset:read(0x5000+offset)
    put=lambda offset,value:store(0x5000+offset,value)
    context=lambda offset,value:store(0x1000+offset,value)
    signed=lambda value:value if value<0x80000000 else value-0x100000000
    attribute=lambda i,offset:c(offset+i*24)
    address=lambda i:c(0x6a4+i*4)
    width=lambda i:{0x1400:1,0x1401:1,0x1402:2,0x1406:4}.get(attribute(i,0x460),0)
    format_=lambda i:((attribute(i,0x45c)*4-4)&0xffffffff)|{0x1401:1,0x1402:2,0x1406:3}.get(attribute(i,0x460),0)
    align=lambda value,size:((value+size-1)&~(size-1))&0xffffffff
    buffered=[];constant=[];maximum=0;compact=True
    for i in reversed(range(16)):
        if s(0x358+i*12)==0xffffffff:continue
        if not data[0x1000+0x46d+i*24]:constant.append(i);continue
        if not pointer(0x1000+0x868+i*8):compact=False
        else:maximum=max(maximum,address(i))
        buffered.append(i)
    buffered=sorted(buffered,key=lambda i:(signed(address(i)),i))
    n,m=len(buffered),len(constant)
    if data[0x1000+0x76c]or n+m>12 or not n:compact=False
    if n:
        low=address(buffered[0])&~15
        context(0x6e4,low)
        if compact:
            if not data[0x1000+0x19]:low=min(low,c(0x6a0));maximum=max(maximum,c(0x6a0))
            if(maximum-low)&0xffffffff>0xfffffff:compact=False
    old_ids=[]
    node=pointer(0x5000+0xe90)
    for i in range(s(0x8f4)):
        assert node
        old_ids.append(read(node-base))
        node=pointer(node-base+8)
    equal=s(0x8f4)==n and s(0x938)==m and not c(4)&0x200
    if equal:
        for position,i in enumerate(buffered):
            nibble=(s(0x944 if position<8 else 0x948)>>((position&7)*4))&15
            equal=equal and old_ids[position]==i and(address(i)-address(buffered[0]))&0xffffffff==(s(0x874+position*4)-s(0x874))&0xffffffff
            equal=equal and attribute(i,0x464)==s(0x8b4+position*4)and format_(i)&255==nibble
        equal=equal and all(s(0x8f8+p*4)==i for p,i in enumerate(constant))
    def publish():
        write(0x200,39,0x5000+0x940,True)
        pair(s(0x9dc),0xf02bb);pair(s(0x9e0),0xf02bc)
        if data[0x5000+0x424]:pair(s(0x9e4),0xf028b);pair(s(0x9e8),0xf028c)
        context(0x820,n);context(0x824,n+m)
        for position,i in enumerate(buffered+constant):context(0x828+position*4,i)
    same=pointer(0x30000+8)==base+0x5000
    put_pointer(0x30000+8,base+0x5000)
    if equal and compact:
        old=c(0x6e4);new=old
        if not data[0x1000+0x19]and signed(c(0x6a0))<signed(new):new=c(0x6a0)&~15
        delta=(address(buffered[0])-new)&0xffffffff
        changed=old!=new or data[0x5000+0x425]or delta!=s(0x94c)
        if changed:
            first=s(0x94c)
            for index in range(1,s(0x93c)):put(0x94c+index*12,s(0x94c+index*12)-first+delta)
            put(0x94c,delta)
            if old==new:data[0x5000+0x425]=0
        context(0x6e4,new);put(0x940,new>>3)
        if changed or not same:
            if same:write(0x200,s(0x93c)*3+1,0x5000+0x940,True)
            else:publish()
        else:pair(new>>3,0xf0200)
    else:
        for position,i in enumerate(buffered):
            put(0x7f0+position*8,i)
            store(0x5000+0xeb0+position*16,i)
            put_pointer(0x5000+0xeb8+position*16,base+0x5000+0xeb0+(position+1)*16 if position+1<n else 0)
            put(0x874+position*4,address(i));put(0x8b4+position*4,attribute(i,0x464))
        put_pointer(0x5000+0xe90,base+0x5000+0xeb0)
        for position,i in enumerate(constant):put(0x8f8+position*4,i)
        put(0x8f4,n);put(0x938,m)
        if not c(0x5d8)and not data[0x1000+0x19]:compact=False
        if not data[0x1000+0x19]:
            before=c(0x6e4)
            if signed(c(0x6a0))<signed(before):context(0x6e4,c(0x6a0)&~15)
            data[0x5000+0x425]=int(signed(c(0x6a0))<signed(before))
        else:data[0x5000+0x425]=0
        put(0x940,signed(c(0x6e4))>>3)
        if compact:
            put(0x93c,0)
            for index in range(38):put(0x944+index*4,0)
            output=0x94c;in_group=0;byte_count=0;alignment=1;stride=0;end=0
            def nibble(low,high,position,value):
                offset=low if position<8 else high
                put(offset,s(offset)|(value<<((position&7)*4)))
            for position,i in enumerate(buffered):
                size=width(i);components=attribute(i,0x45c);current_stride=attribute(i,0x464)
                offset=(address(i)-c(0x6e4))&0xffffffff
                nibble(0x944,0x948,position,format_(i))
                if not current_stride:
                    put(output,offset);put(output+4,s(output+4)|position);put(output+8,s(output+8)|(components*size)<<16|0x10000000)
                    output+=12;put(0x93c,s(0x93c)+1);continue
                byte_count=align(byte_count,size)+components*size;alignment=max(alignment,size)
                if not in_group:put(output,offset);stride=current_stride;end=(address(i)+current_stride)&0xffffffff
                nibble(output+4,output+8,in_group,position);in_group+=1
                finish=position+1==n
                next_offset=0
                if not finish:
                    next_i=buffered[position+1]
                    finish=address(next_i)<=address(i)or current_stride!=attribute(next_i,0x464)or end<=address(next_i)or in_group==12
                    next_offset=(address(next_i)-c(0x6e4))&0xffffffff
                if finish:next_offset=(s(output)+stride)&0xffffffff
                gap=(next_offset-offset-components*size)&0xffffffff;words=gap//4
                if 12-in_group<gap//16+int(words&3!=0):compact=False;break
                if words:
                    byte_count=align(byte_count,4)+words*4
                    if words&3:nibble(output+4,output+8,in_group,(words&3)+11);in_group+=1;words&=~3
                    while words:nibble(output+4,output+8,in_group,15);in_group+=1;words-=4
                if finish:
                    if align(byte_count,alignment)!=stride:compact=False;break
                    put(output+8,s(output+8)|(stride<<16)|(in_group<<28));output+=12;put(0x93c,s(0x93c)+1)
                    byte_count=0;alignment=1;in_group=0
            if compact:
                for position in range(m):put(0x948,s(0x948)|(0x10000<<(position+n)))
                if n:put(0x948,s(0x948)|((n+m-1)<<28))
                if not data[0x1000+0x19]and s(0x93c)==12:compact=False
        put(0x9dc,0);put(0x9e0,0);put(0x9e4,0x76543210);put(0x9e8,0xfedcba98)
        for position,i in enumerate(buffered+constant):
            offset=0x9dc if position<8 else 0x9e0
            put(offset,s(offset)|((s(0x358+i*12)&15)<<((position&7)*4)))
        publish()
    data[0x1000+0x81c]=int(compact)
    if compact and case['mask']&0x80c2:
        for position in range(c(0x820),c(0x824)):
            i=c(0x828+position*4);pair(position,0xf0232)
            for component in range(3):pair(c(0x398+i*12+component*4),0xf0233+component)
