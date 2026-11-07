from tree_erase033_fixtures import HEAD,TREE,INPUT,OUTPUT,NODES,STRIDE,NATIVE_LAYOUT


def pointer_offsets(case):
    layout=NATIVE_LAYOUT;size=len(case["nodes"])
    offsets={INPUT,INPUT if case["alias"] else OUTPUT,TREE+layout["head"],TREE+layout["recycled"]}
    for offset in [HEAD,*[NODES+key*STRIDE for key in range(size+case["recycledCount"])]]:
        offsets.update(offset+layout[field] for field in ["parent","left","right"])
    return sorted(offsets)


def observed_base(memory):
    if len(memory)!=4096:raise ValueError("Native tree observation must contain its complete caller arena")
    return int.from_bytes(memory[TREE+NATIVE_LAYOUT["head"]:TREE+NATIVE_LAYOUT["head"]+8],"little")-HEAD


def relative_pointer_copy(memory,case,base):
    if len(memory)!=4096 or base<=0xffffffff:raise ValueError("Native tree observation has an invalid size or pointer base")
    if observed_base(memory)!=base:raise ValueError("Immutable sentinel pointer differs from the actual native arena")
    result=bytearray(memory)
    allowed={HEAD,*[NODES+key*STRIDE for key in range(len(case["nodes"])+case["recycledCount"]) ]}
    for offset in pointer_offsets(case):
        value=int.from_bytes(memory[offset:offset+8],"little")
        if value:
            relative=value-base
            if relative not in allowed:raise ValueError("Typed native tree field contains an unowned pointer")
            result[offset:offset+8]=relative.to_bytes(8,"little")
    return bytes(result)


def compare_native_arenas(first,second,case,first_base,second_base):
    if relative_pointer_copy(first,case,first_base)!=relative_pointer_copy(second,case,second_base):
        raise ValueError("Native tree replay differs beyond verified typed pointer relocation")
