import struct
from pathlib import Path
from elftools.elf.elffile import ELFFile


def extract(path, name):
    path=Path(path)
    data=path.read_bytes()
    if data[:4]==b"\x7fELF":
        with path.open("rb") as handle:
            elf=ELFFile(handle)
            matches=[s for s in elf.get_section_by_name(".symtab").iter_symbols()if s.name==name]
            if len(matches)!=1:raise ValueError("compiled layout symbol not unique")
            symbol=matches[0];section=elf.get_section(symbol["st_shndx"])
            offset=symbol["st_value"]-section["sh_addr"]
            payload=section.data()[offset:offset+32]
    else:
        machine,sections,unused,symbol_offset,symbol_count,optional,flags=struct.unpack_from("<HHIIIHH",data)
        if machine!=0x8664 or optional:raise ValueError("unexpected layout COFF object")
        strings=symbol_offset+symbol_count*18
        i=0;matches=[]
        while i<symbol_count:
            offset=symbol_offset+i*18;raw=data[offset:offset+8]
            if raw[:4]==bytes(4):
                start=strings+struct.unpack_from("<I",raw,4)[0];end=data.index(0,start)
                symbol_name=data[start:end].decode("ascii")
            else:symbol_name=raw.rstrip(b"\0").decode("ascii")
            value,section,kind,storage,aux=struct.unpack_from("<IhHBB",data,offset+8)
            if symbol_name==name:
                if not 1<=section<=sections:raise ValueError("invalid layout section")
                header=20+(section-1)*40
                raw_size,raw_offset=struct.unpack_from("<II",data,header+16)
                if value+32>raw_size:raise ValueError("layout outside COFF data")
                matches.append(data[raw_offset+value:raw_offset+value+32])
            i+=1+aux
        if len(matches)!=1:raise ValueError("compiled COFF layout not unique")
        payload=matches[0]
    if len(payload)!=32:raise ValueError("incomplete compiled layout")
    values=list(struct.unpack("<8I",payload))
    if values[1]not in [4,8]or values[7]!=values[1]:raise ValueError("invalid compiled pointer layout")
    return values
