#include "context7.h"

static void context_word7(StateApplyContext055 *context,StateWord055 offset,StateWord055 value) {
    unsigned char *bytes=(unsigned char *)context;
    for (StateWord055 i=0;i<4;i++)
        bytes[offset+i]=(unsigned char)(value>>(i*8));
}

static void context_byte7(StateApplyContext055 *context,StateWord055 offset,unsigned char value) {
    ((unsigned char *)context)[offset]=value;
}

static StateWord055 context_color24_7(StateWord055 bits) {
    StateWord055 magnitude=bits&0x7fffffffu;
    int exponent=magnitude ? (int)(magnitude>>23)-64 : 0;
    StateWord055 sign=(bits>>31)<<23;
    if (exponent<0)
        return sign;
    return sign|((bits&0x7fffffu)>>7)|((StateWord055)exponent<<16);
}

int state_construct_context7(StateApplyContext055 *context) {
    state_apply_context055=context;
    unsigned char *bytes=(unsigned char *)context;
    for (StateWord055 i=0;i<sizeof(*context);i++)
        bytes[i]=0;
    context_word7(context,0x10,4);
    context_word7(context,0x14,4);
    context_byte7(context,0x1a,1);
    context_word7(context,0x34,0x901);
    context_word7(context,0x38,0x405);
    context_word7(context,0x50,0x3f800000);
    for (StateWord055 attribute=0;attribute<16;attribute++) {
        StateWord055 base=0x298+attribute*16;
        context_word7(context,base+12,0x3f800000);
    }
    for (StateWord055 attribute=0;attribute<16;attribute++) {
        StateWord055 x=context_color24_7(0),y=context_color24_7(0);
        StateWord055 z=context_color24_7(0),w=context_color24_7(0x3f800000);
        StateWord055 base=0x398+attribute*12;
        context_word7(context,base,(z>>16)|(w<<8));
        context_word7(context,base+4,(y>>8)|(z<<16));
        context_word7(context,base+8,x|(y<<24));
    }
    for (StateWord055 attribute=0;attribute<16;attribute++) {
        StateWord055 base=0x45c+attribute*24;
        context_word7(context,base,4);
        context_word7(context,base+4,0x1406);
    }
    context_word7(context,0x5f4,0x207);
    context_word7(context,0x5fc,0x207);
    context_word7(context,0x604,0xffffffffu);
    context_word7(context,0x608,0x1e00);
    context_word7(context,0x60c,0x1e00);
    context_word7(context,0x610,0x1e00);
    context_word7(context,0x614,0x207&0xffffffe1u);
    context_word7(context,0x618,1);
    context_word7(context,0x61c,1);
    context_word7(context,0x628,0x8006);
    context_word7(context,0x62c,0x8006);
    context_word7(context,0x640,0x1503);
    context_word7(context,0x644,0x6030);
    context_word7(context,0x650,0x207&0xffffffe1u);
    for (StateWord055 i=0;i<5;i++)
        context_byte7(context,0x654+i,1);
    context_word7(context,0x65c,0xffffffffu);
    context_word7(context,0x670,0x3f800000);
    context_word7(context,0x674,0xffffff);
    context_word7(context,0x67c,0xffffff);
    context_word7(context,0x680,0xffff);
    context_word7(context,0x68c,3);
    for (StateWord055 i=0;i<64;i++)
        context_byte7(context,0x828+i,0xff);
    return 0;
}
