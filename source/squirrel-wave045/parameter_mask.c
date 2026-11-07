#include "initialization.h"

static void append_mask(SqPrefixPodVector012 *vector,SqPrototypeU32 mask)
{
    if (vector->capacity<=vector->size) {
        SqPrototypeU32 capacity=vector->size?vector->size*2:4;
        vector->values=sq_startup_resize045(vector->values,vector->capacity*sizeof(SqPrototypeU32),
            capacity*sizeof(SqPrototypeU32),_Alignof(SqPrototypeU32));
        vector->capacity=capacity;
    }
    SqPrototypeU32 *values=vector->values;
    SqPrototypeU32 index=vector->size++;
    if (values)
        values[index]=mask;
}

_Bool fn_0017875c(SqPrefixPodVector012 *vector,const SqStringByte015 *input)
{
    SqPrototypeU32 index=0,mask=0;
    while (input[index]) {
        switch (input[index]) {
        case 'o':mask|=0x00001u;break;
        case 'i':mask|=0x00002u;break;
        case 'f':mask|=0x00004u;break;
        case 'n':mask|=0x00006u;break;
        case 'b':mask|=0x00008u;break;
        case 's':mask|=0x00010u;break;
        case 't':mask|=0x00020u;break;
        case 'a':mask|=0x00040u;break;
        case 'u':mask|=0x00080u;break;
        case 'c':mask|=0x00300u;break;
        case 'g':mask|=0x00400u;break;
        case 'p':mask|=0x00800u;break;
        case 'v':mask|=0x01000u;break;
        case 'y':mask|=0x04000u;break;
        case 'x':mask|=0x08000u;break;
        case 'r':mask|=0x10000u;break;
        case ' ':index++;continue;
        case '.':append_mask(vector,0xffffffffu);index++;mask=0;continue;
        default:return 0;
        }
        index++;
        if (input[index]=='|') {
            index++;
            if (!input[index])
                return 0;
            continue;
        }
        append_mask(vector,mask);
        mask=0;
    }
    return 1;
}
