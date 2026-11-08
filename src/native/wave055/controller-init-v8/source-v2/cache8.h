#ifndef STATE_SELECTION_CACHE_INITIALIZATION8_H
#define STATE_SELECTION_CACHE_INITIALIZATION8_H
#include "../../controller-v5/source/apply_types055.h"

typedef struct StateParameter8 {
    StateWord055 count,type;
    const char *name;
} StateParameter8;

typedef struct StateCatalogue8 {
    StateParameter8 parameters[297];
    char names[297][80];
} StateCatalogue8;

typedef struct StateFullCache8 {
    StateSelectionCache055 common;
    StateWord055 default_values[189];
    unsigned char formats[189];
    unsigned char default_formats[189];
    unsigned char tail[6];
} StateFullCache8;

extern StateCatalogue8 state_catalogue8;
extern StateWord055 state_cache_masks8[3][6];
void state_builtin_catalogue8(StateCatalogue8 *catalogue);
void state_register_numbers8(StateWord055 registers[189]);
void state_cache_default_groups8(StateApplyGlobals055 *globals);
void state_cache_defaults8(StateFullCache8 *cache);
STATE_API055 int state_cache_construct8(StateFullCache8 *cache);

_Static_assert(sizeof(StateParameter8)==(__SIZEOF_POINTER__==4?12:16),"actual name pointer width");
_Static_assert(__builtin_offsetof(StateFullCache8,common)==0,"genuine frozen cache first member");
_Static_assert(__builtin_offsetof(StateFullCache8,default_values)==(__SIZEOF_POINTER__==4?0x1300:0x1308),"complete defaults suffix");
_Static_assert(__builtin_offsetof(StateFullCache8,formats)==(__SIZEOF_POINTER__==4?0x15f4:0x15fc),"current byte formats");
_Static_assert(__builtin_offsetof(StateFullCache8,default_formats)==(__SIZEOF_POINTER__==4?0x16b1:0x16b9),"default byte formats");
_Static_assert(sizeof(StateFullCache8)==(__SIZEOF_POINTER__==4?0x1774:0x1780),"full measured target and declared native owner");
#endif
