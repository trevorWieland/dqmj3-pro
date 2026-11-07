#ifndef DQMJ3_APPLY_TYPES055_H
#define DQMJ3_APPLY_TYPES055_H
#include "selector055.h"
#include "resource_view055.h"

typedef struct StateShaderRecord055 {
    StateWord055 prefix[12];
    const StateWord055 *constants;
    StateWord055 constant_count;
    StateWord055 suffix[44];
} StateShaderRecord055;

typedef struct StateShaderStreams055 {
    const StateWord055 *program_words;
    StateWord055 program_count;
    const StateWord055 *operand_words;
    StateWord055 operand_count;
    const StateShaderRecord055 *records;
} StateShaderStreams055;

typedef struct StateAttributeNode055 {
    StateWord055 attribute;
    struct StateAttributeNode055 *next;
} StateAttributeNode055;

typedef struct StateApplySelection055 {
    StateWord055 storage[0xe84/4];
#if __SIZEOF_POINTER__ > 4
    const StateShaderStreams055 *native_shader;
    const StateAttributeNode055 *native_cached_attributes;
    const StateWord055 *native_cached_constants;
    const StateWord055 *native_uniform_words[2];
    StateAttributeNode055 native_attribute_nodes[16];
#endif
} StateApplySelection055;

typedef struct StateApplyContext055 {
    StateContextSelector055 common;
    StateWord055 extension[(0x868-0x7f0)/4];
#if __SIZEOF_POINTER__ > 4
    const StateWord055 *native_attribute_words[16];
#endif
} StateApplyContext055;

typedef struct StateSelectionCache055 {
    StateApplySelection055 *active;
    StateApplySelection055 *attribute_active;
    StateWord055 opaque[(0x100c-8)/4];
    StateWord055 values[189];
} StateSelectionCache055;

typedef struct StateApplyGlobals055 {
    StateWord055 opaque[2];
    StateSelectionCache055 *selection;
    StateWord055 stage_mode;
    StateWord055 list_values[24];
    StateWord055 list_auxiliary[6];
    StateWord055 list_primary[6];
    StateWord055 list_remaining[157];
} StateApplyGlobals055;

extern STATE_API055 StateApplyGlobals055 state_apply_globals055;
extern STATE_API055 StateApplyContext055 *state_apply_context055;
extern STATE_API055 StateStorageProvider055 state_apply_storage_provider055;
extern STATE_API055 StateWord055 state_apply_headers055[189];

_Static_assert(__builtin_offsetof(StateApplyContext055,common)==0,"genuine selector prefix");
_Static_assert(__builtin_offsetof(StateShaderRecord055,constants)==0x30,"actual constants pointer");
_Static_assert(sizeof(StateShaderRecord055)==(__SIZEOF_POINTER__==4?232:240),"declared record stride");
_Static_assert(__builtin_offsetof(StateApplyGlobals055,selection)==8,"actual selected cache field");
_Static_assert(__builtin_offsetof(StateSelectionCache055,values)==(__SIZEOF_POINTER__==4?0x100c:0x1014),"pointer-aware cache");
#if __SIZEOF_POINTER__ == 4
_Static_assert(sizeof(StateApplyContext055)==0x868,"bounded target context backing");
_Static_assert(sizeof(StateApplyGlobals055)==0x314,"actual four-list interval");
_Static_assert(__builtin_offsetof(StateApplyGlobals055,list_values)==0x10,"first list");
_Static_assert(__builtin_offsetof(StateApplyGlobals055,list_auxiliary)==0x70,"second list");
_Static_assert(__builtin_offsetof(StateApplyGlobals055,list_primary)==0x88,"third list");
_Static_assert(__builtin_offsetof(StateApplyGlobals055,list_remaining)==0xa0,"fourth list");
#endif

#endif
