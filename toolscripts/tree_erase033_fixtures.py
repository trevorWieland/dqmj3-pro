import random
import struct

NAMES = ["nodeBytes", "black", "parent", "left", "right", "treeBytes", "recycled", "head", "count", "iteratorBytes", "iteratorNode"]
ARM_LAYOUT = dict(zip(NAMES, [16,0,4,8,12,24,4,16,20,4,0]))
NATIVE_LAYOUT = dict(zip(NAMES, [32,0,8,16,24,40,8,24,32,8,0]))
HEAD, TREE, INPUT, OUTPUT, NODES, STRIDE = 0x100,0x80,0x20,0x30,0x200,64

def node_offset(key):
    return HEAD if key == "head" else NODES + key * STRIDE

def cases(count=2048):
    rng = random.Random(20261107)
    for index in range(count):
        size = rng.randrange(49)
        order = list(range(size)); rng.shuffle(order)
        nodes, root = {}, None
        for key in order:
            if root is None:
                root = key; nodes[key] = ["head",None,None]; continue
            parent = root
            side = 1 if key < parent else 2
            while nodes[parent][side] is not None:
                parent = nodes[parent][side]; side = 1 if key < parent else 2
            nodes[parent][side] = key; nodes[key] = [parent,None,None]
        yield {"id":index,"nodes":nodes,"root":root,"target":"head" if not size or index%10 == 0 else rng.choice(order),
            "colors":{key:rng.randrange(2) for key in nodes},"alias":bool(index%2),"recycledCount":index%3,"seed":index%32}

def validate(case):
    nodes=case["nodes"];size=len(nodes)
    if not 0 <= size <= 48 or set(nodes) != set(range(size)):
        raise ValueError("Tree fixture exceeds the measured node arena")
    if case["target"] != "head" and case["target"] not in nodes:
        raise ValueError("Iterator does not identify an owned node")
    if set(case["colors"]) != set(nodes) or case["recycledCount"] not in [0,1,2] or any(value not in [0,1] for value in case["colors"].values()):
        raise ValueError("Tree fixture has an unsupported color or free-list bound")
    visited=[]
    def descend(key,parent,low,high):
        if key is None:return
        if key in visited or key not in nodes or not low < key < high or nodes[key][0] != parent:
            raise ValueError("Tree parent/child links are inconsistent or cyclic")
        visited.append(key)
        descend(nodes[key][1],key,low,key);descend(nodes[key][2],key,key,high)
    descend(case["root"],"head",-1,size)
    if set(visited) != set(nodes):raise ValueError("Tree nodes are not all reachable")

def make(case, layout, base):
    validate(case)
    width = layout["iteratorBytes"]
    memory = bytearray((i*17+case["seed"]*31)&255 for i in range(4096))
    def pointer(offset, value):
        memory[offset:offset+width] = (0 if value is None else base+node_offset(value)).to_bytes(width,"little")
    nodes = dict(case["nodes"])
    size = len(nodes)
    for index in range(case["recycledCount"]):
        key = size+index
        nodes[key] = [None,None,key+1 if index+1 < case["recycledCount"] else None]
    pointer(TREE+layout["recycled"], size if case["recycledCount"] else None)
    pointer(TREE+layout["head"], "head")
    struct.pack_into("<I",memory,TREE+layout["count"],size)
    pointer(INPUT,case["target"])
    output = INPUT if case["alias"] else OUTPUT
    pointer(HEAD+layout["parent"],case["root"])
    pointer(HEAD+layout["left"],0 if size else "head")
    pointer(HEAD+layout["right"],size-1 if size else "head")
    memory[HEAD+layout["black"]] = 0
    for key,(parent,left,right) in nodes.items():
        offset = node_offset(key)
        memory[offset+layout["black"]] = case["colors"].get(key,key%2)
        for field,value in [("parent",parent),("left",left),("right",right)]:
            pointer(offset+layout[field],value)
        struct.pack_into("<I",memory,offset+48,key)
    readable,mutable = set(),set()
    def region(target,offset,length): target.update(range(offset,offset+length))
    region(readable,INPUT,width);region(mutable,output,width)
    for field,length in [("recycled",width),("head",width),("count",4)]:
        region(readable,TREE+layout[field],length)
        if field != "head": region(mutable,TREE+layout[field],length)
    for offset in [HEAD,*[node_offset(key) for key in nodes]]:
        for field,length in [("black",1),("parent",width),("left",width),("right",width)]:
            region(readable,offset+layout[field],length);region(mutable,offset+layout[field],length)
    return memory,readable,mutable,output,list(nodes)

def observe(before, after, layout, base, output, keys):
    width=layout["iteratorBytes"]
    def pointer(offset):
        value=int.from_bytes(after[offset:offset+width],"little")
        if not value:return None
        relative=value-base
        assert relative in [HEAD,*[node_offset(key) for key in keys]], ("foreign pointer",hex(value))
        return relative
    return {"output":pointer(output),"input":pointer(INPUT),"head":pointer(TREE+layout["head"]),
        "recycled":pointer(TREE+layout["recycled"]),"count":struct.unpack_from("<I",after,TREE+layout["count"])[0],
        "nodes":[{"offset":offset,"black":after[offset+layout["black"]],**{field:pointer(offset+layout[field]) for field in ["parent","left","right"]}}
            for offset in [HEAD,*[node_offset(key) for key in sorted(keys)]]]}
