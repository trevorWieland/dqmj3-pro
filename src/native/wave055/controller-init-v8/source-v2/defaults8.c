#include "cache8.h"

static void default_property8(StateFullCache8 *cache,StateWord055 index,StateWord055 value,unsigned char mask) {
    cache->default_values[index]=value;
    cache->default_formats[index]=mask;
}

void state_cache_defaults8(StateFullCache8 *cache) {
    default_property8(cache,41,0x1000,2);
    for (StateWord055 id=42;id<=49;id++)
        default_property8(cache,id,0,15);
    default_property8(cache,44,9,15);
    default_property8(cache,48,0x1c00301,15);
    default_property8(cache,49,0xe0c08000,15);
    default_property8(cache,91,0x3c00,15);
    for (StateWord055 id=23;id<=37;id++)
        default_property8(cache,id,(id>=26 && id<=32)?0x1f1f1f1f:0,15);
    default_property8(cache,23,0xbf0000,15);
    default_property8(cache,39,1,15);
    for (StateWord055 light=0;light<8;light++) {
        for (StateWord055 component=0;component<11;component++) {
            StateWord055 value=0;
            if (component==5)
                value=0x3c00;
            else if (component==7)
                value=0x800;
            else if (component==8)
                value=1;
            else if (component==10)
                value=0x3f000;
            default_property8(cache,92+light*11+component,value,15);
        }
    }
    default_property8(cache,94,0xcc330cc,15);
    default_property8(cache,180,0xa0280a,15);
    default_property8(cache,181,0,15);
    default_property8(cache,182,0x88000400,15);
    default_property8(cache,183,0xffffffffu,15);
    default_property8(cache,184,1,15);
    default_property8(cache,185,0x2222222,15);
    for (StateWord055 id=186;id<=188;id++)
        default_property8(cache,id,0,15);
    for (StateWord055 id=80;id<=90;id++)
        default_property8(cache,id,0,15);
    default_property8(cache,82,0x3c00,15);
    default_property8(cache,83,0x3c00,15);
    default_property8(cache,87,0x100,15);
    default_property8(cache,88,0xa00,7);
    default_property8(cache,89,0xe40100,13);
    default_property8(cache,90,0x10,15);
    for (StateWord055 stage=0;stage<6;stage++) {
        for (StateWord055 component=0;component<5;component++) {
            StateWord055 value=component==0 ? (stage==0 ? 0xeee0eee : 0xfff0fff) : 0;
            default_property8(cache,50+stage*5+component,value,15);
        }
    }
}
