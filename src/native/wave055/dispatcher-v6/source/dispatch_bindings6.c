#include "dispatch_types6.h"

StateWord055 state_dispatch_word6(const StateDispatchSelection6 *selection,StateWord055 offset) {
    return offset < 0xe84 ? selection->common.storage[offset/4] : selection->scalar_tail[(offset-0xe84)/4];
}

void state_dispatch_store6(StateDispatchSelection6 *selection,StateWord055 offset,StateWord055 value) {
    if (offset < 0xe84)
        selection->common.storage[offset/4] = value;
    else
        selection->scalar_tail[(offset-0xe84)/4] = value;
}

const StateUniformInfo6 *state_dispatch_metadata6(const StateDispatchSelection6 *selection) {
#if __SIZEOF_POINTER__ == 4
    const StateUniformInfo6 *pointer;
    const unsigned char *source = (const unsigned char *)selection+0x1c;
    unsigned char *destination = (unsigned char *)&pointer;
    for (unsigned index = 0; index < sizeof(pointer); index++)
        destination[index] = source[index];
    return pointer;
#else
    return selection->native_metadata;
#endif
}

StateWord055 *state_dispatch_uniform_words6(StateDispatchSelection6 *selection,StateWord055 geometry) {
#if __SIZEOF_POINTER__ == 4
    StateWord055 *pointer;
    const unsigned char *source = (const unsigned char *)selection+(geometry ? 0x1c0 : 0x2c);
    unsigned char *destination = (unsigned char *)&pointer;
    for (unsigned index = 0; index < sizeof(pointer); index++)
        destination[index] = source[index];
    return pointer;
#else
    return selection->mutable_uniforms[geometry != 0];
#endif
}

StateWord055 state_dispatch_input6(const void *input,StateWord055 index) {
    const unsigned char *bytes = (const unsigned char *)input+index*4;
    return (StateWord055)bytes[0] | (StateWord055)bytes[1]<<8 |
           (StateWord055)bytes[2]<<16 | (StateWord055)bytes[3]<<24;
}
