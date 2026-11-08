import struct
from controller5_measure import ROOT
from controller5_fixture import ARENA,CONTEXT,SELECTED,SLOT,WORDS,target_input

META=ARENA+0x18000
VERTEX=ARENA+0x28000
GEOMETRY=ARENA+0x2a000
INPUT=WORDS


def fixture(case):
    prepared=target_input(dict(selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=0,flags=0,mask=0))
    def word(address,value):prepared.mem_write(address,struct.pack('<I',value&0xffffffff))
    word(SELECTED+0x1c,META)
    word(SELECTED+0x2c,VERTEX);word(SELECTED+0x1c0,GEOMETRY)
    word(SELECTED+0x1b0,96);word(SELECTED+0x344,96)
    for index in range(96):word(SELECTED+0x30+index*4,index);word(SELECTED+0x1c4+index*4,index)
    descriptor=(case['location']&0x3ffff)>>7
    word(META+descriptor*12+8,case.get('packing',0))
    for index,value in enumerate(case.get('input_words',[0x3f800000,0x40000000,0x40400000,0x40800000]*16)):
        word(INPUT+index*4,value)
    for key,base in [('selection_words',SELECTED),('context_words',CONTEXT),('cache_words',SLOT)]:
        for offset,value in case.get(key,{}).items():word(base+int(offset),value)
    return prepared
