#include "apply_bindings055.h"

StateApplyGlobals055 state_apply_globals055;
StateApplyContext055 *state_apply_context055;
StateStorageProvider055 state_apply_storage_provider055;
StateWord055 state_apply_headers055[189];

StateWord055 state_context_word055(const StateApplyContext055 *context,StateWord055 offset) {
    const unsigned char *bytes = (const unsigned char *)context + offset;
    return (StateWord055)bytes[0] | (StateWord055)bytes[1]<<8 |
           (StateWord055)bytes[2]<<16 | (StateWord055)bytes[3]<<24;
}

void state_context_store055(StateApplyContext055 *context,StateWord055 offset,StateWord055 value) {
    unsigned char *bytes = (unsigned char *)context + offset;
    for (unsigned index = 0; index < 4; index++)
        bytes[index] = (unsigned char)(value >> (index*8));
}

unsigned char state_context_byte055(const StateApplyContext055 *context,StateWord055 offset) {
    return ((const unsigned char *)context)[offset];
}

void state_context_store_byte055(StateApplyContext055 *context,StateWord055 offset,unsigned char value) {
    ((unsigned char *)context)[offset] = value;
}

const StateWord055 *state_attribute_source055(const StateApplyContext055 *context,StateWord055 index) {
#if __SIZEOF_POINTER__ == 4
    const StateWord055 *pointer;
    const unsigned char *source = (const unsigned char *)context + 0x468+index*24;
    unsigned char *destination = (unsigned char *)&pointer;
    for (unsigned byte = 0; byte < sizeof(pointer); byte++)
        destination[byte] = source[byte];
    return pointer;
#else
    return context->native_attribute_words[index];
#endif
}

const StateShaderStreams055 *state_selection_shader055(const StateApplySelection055 *selection) {
#if __SIZEOF_POINTER__ == 4
    const StateShaderStreams055 *pointer;
    const unsigned char *source = (const unsigned char *)selection + 0x414;
    unsigned char *destination = (unsigned char *)&pointer;
    for (unsigned byte = 0; byte < sizeof(pointer); byte++)
        destination[byte] = source[byte];
    return pointer;
#else
    return selection->native_shader;
#endif
}

StateWord055 state_selection_cached_attribute055(const StateApplySelection055 *selection,StateWord055 position) {
#if __SIZEOF_POINTER__ == 4
    const StateWord055 *node;
    const unsigned char *source = (const unsigned char *)selection+0x870;
    unsigned char *destination = (unsigned char *)&node;
    for (unsigned byte = 0; byte < sizeof(node); byte++)
        destination[byte] = source[byte];
    for (StateWord055 index = 0; index < position; index++) {
        source = (const unsigned char *)(node+1);
        for (unsigned byte = 0; byte < sizeof(node); byte++)
            destination[byte] = source[byte];
    }
    return node[0];
#else
    const StateAttributeNode055 *node = selection->native_cached_attributes;
    for (StateWord055 index = 0; index < position; index++)
        node = node->next;
    return node->attribute;
#endif
}

void state_selection_store_attributes055(StateApplySelection055 *selection,const StateWord055 *attributes,StateWord055 count) {
    for (StateWord055 index = 0; index < count; index++) {
        selection->storage[0x7f0/4+index*2] = attributes[index];
#if __SIZEOF_POINTER__ == 4
        const StateWord055 *next = index+1 == count ? 0 : selection->storage+0x7f0/4+(index+1)*2;
        const unsigned char *source = (const unsigned char *)&next;
        unsigned char *destination = (unsigned char *)selection+0x7f4+index*8;
        for (unsigned byte = 0; byte < sizeof(next); byte++)
            destination[byte] = source[byte];
#else
        selection->native_attribute_nodes[index].attribute = attributes[index];
        selection->native_attribute_nodes[index].next = index+1 == count ? 0 : &selection->native_attribute_nodes[index+1];
#endif
    }
#if __SIZEOF_POINTER__ == 4
    const StateWord055 *first = selection->storage+0x7f0/4;
    const unsigned char *source = (const unsigned char *)&first;
    unsigned char *destination = (unsigned char *)selection+0x870;
    for (unsigned byte = 0; byte < sizeof(first); byte++)
        destination[byte] = source[byte];
#else
    selection->native_cached_attributes = selection->native_attribute_nodes;
#endif
}

const StateWord055 *state_selection_cached_constants055(const StateApplySelection055 *selection) {
#if __SIZEOF_POINTER__ == 4
    const StateWord055 *pointer;
    const unsigned char *source = (const unsigned char *)selection + 0x934;
    unsigned char *destination = (unsigned char *)&pointer;
    for (unsigned byte = 0; byte < sizeof(pointer); byte++)
        destination[byte] = source[byte];
    return pointer;
#else
    return selection->native_cached_constants;
#endif
}

int state_signed_word055(StateWord055 value) {
    return value < 0x80000000u ? (int)value : -1-(int)~value;
}

void state_apply_pair055(StateWord055 value,StateWord055 header) {
    StateWord055 *output = state_pair055.cursor;
    if ((StateAddress055)output < (StateAddress055)state_pair055.limit) {
        output[0] = value;
        output[1] = header;
        state_pair055.cursor = output+2;
    }
}

StateWord055 state_apply_mask055(const StateWord055 *mask) {
    const unsigned char *bytes = (const unsigned char *)mask;
    return (StateWord055)bytes[0] | (StateWord055)bytes[1]<<8 |
           (StateWord055)bytes[2]<<16 | (StateWord055)bytes[3]<<24;
}

StateWord055 state_selection_record055(const StateApplySelection055 *selection,StateWord055 geometry) {
    return selection->storage[(geometry ? 0x41c : 0x418)/4];
}

unsigned char state_selection_mode055(const StateApplySelection055 *selection) {
    return ((const unsigned char *)selection)[0x424];
}

void state_apply_reset_defaults055(void) {
    static const StateWord055 values[] = {0,6,7,8,14,15,16,17,18,19,20,21,22,25,26,27,28,29,30,31,32,38,40};
    static const StateWord055 auxiliary[] = {9,10,11,12,13};
    static const StateWord055 primary[] = {1,2,3,4,5};
    state_apply_globals055.stage_mode = 0xffffffffu;
    for (StateWord055 index = 0; index < 23; index++)
        state_apply_globals055.list_values[index] = values[index];
    state_apply_globals055.list_values[23] = 189;
    for (StateWord055 index = 0; index < 5; index++) {
        state_apply_globals055.list_auxiliary[index] = auxiliary[index];
        state_apply_globals055.list_primary[index] = primary[index];
    }
    state_apply_globals055.list_auxiliary[5] = 189;
    state_apply_globals055.list_primary[5] = 189;
    StateWord055 next = 0;
    for (StateWord055 value = 0; value < 189; value++) {
        if (value == 80)
            state_apply_globals055.list_remaining[next++] = 84;
        if (value == 84)
            continue;
        StateWord055 excluded = 0;
        for (StateWord055 index = 0; index < 23; index++)
            excluded |= values[index] == value;
        for (StateWord055 index = 0; index < 5; index++)
            excluded |= auxiliary[index] == value || primary[index] == value;
        if (!excluded)
            state_apply_globals055.list_remaining[next++] = value;
    }
    state_apply_globals055.list_remaining[next] = 189;
}

const StateWord055 *state_selection_uniforms055(const StateApplySelection055 *selection,StateWord055 geometry) {
#if __SIZEOF_POINTER__ == 4
    const StateWord055 *pointer;
    const unsigned char *source = (const unsigned char *)selection + (geometry ? 0x1c0 : 0x2c);
    unsigned char *destination = (unsigned char *)&pointer;
    for (unsigned byte = 0; byte < sizeof(pointer); byte++)
        destination[byte] = source[byte];
    return pointer;
#else
    return selection->native_uniform_words[geometry != 0];
#endif
}
