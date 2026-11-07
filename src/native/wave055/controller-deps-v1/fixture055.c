#include "resource055.h"

struct StateResource055 {
    unsigned char opaque0[0x808];
    const StateWord055 *words;
    unsigned char opaque_after_words[12];
    const unsigned char *bytes;
    StateWord055 flags;
};

STATE_API055 StateWord055 fixture_resource_word055(StateWord055 index,StateWord055 element) {
    StateResource055 *resource = state_resource_lookup055(index);
    return resource ? resource->words[element] : 0;
}

STATE_API055 StateWord055 fixture_resource_byte055(StateWord055 index,StateWord055 element) {
    StateResource055 *resource = state_resource_lookup055(index);
    return resource ? resource->bytes[element] : 0;
}

STATE_API055 StateWord055 fixture_resource_flags055(StateWord055 index) {
    StateResource055 *resource = state_resource_lookup055(index);
    return resource ? resource->flags : 0;
}

STATE_API055 StateWord055 fixture_resource_layout055(StateWord055 field) {
    switch (field) {
        case 0: return sizeof(StateResourceIndex055);
        case 1: return __builtin_offsetof(StateResourceIndex055,entries);
        case 2: return sizeof(StateResourceEntry055);
        case 3: return sizeof(StateResource055);
        case 4: return __builtin_offsetof(StateResource055,words);
        case 5: return __builtin_offsetof(StateResource055,bytes);
        case 6: return __builtin_offsetof(StateResource055,flags);
        case 7: return sizeof(void *);
        default: return 0xffffffffu;
    }
}
