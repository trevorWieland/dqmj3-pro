#include "storage_fixture055.h"

StateWord055 *state_storage_begin055;
StateWord055 *state_storage_end055;
StateWord055 *state_storage_cursor055;
StateResource055 *state_storage_observer055;
StateStorageObservation055 state_storage_observations055[64];
StateWord055 state_storage_calls055;
const unsigned char *state_storage_context_bytes055;
StateWord055 state_storage_context_observations055[64];

void *state_storage_fixture055(StateWord055 flags,StateWord055 alignment,StateWord055 reserved,StateWord055 bytes) {
    StateStorageObservation055 *observation = 0;
    if (state_storage_calls055 < 64) {
        observation = &state_storage_observations055[state_storage_calls055];
        observation->arguments[0] = flags;
        observation->arguments[1] = alignment;
        observation->arguments[2] = reserved;
        observation->arguments[3] = bytes;
        StateResource055 *resource = state_storage_observer055;
        observation->observed_resource = resource;
        if (resource) {
            observation->flags = resource->flags;
            observation->name = resource->name;
            const unsigned char *delta = (const unsigned char *)&resource->deltas[255];
            observation->last_delta_bits = (StateWord055)delta[0] | (StateWord055)delta[1]<<8 |
                                           (StateWord055)delta[2]<<16 | (StateWord055)delta[3]<<24;
            observation->storage[0] = resource->storage_1024;
            observation->storage[1] = resource->storage_512_a;
            observation->storage[2] = resource->storage_64;
            observation->storage[3] = resource->storage_512_b;
            observation->storage[4] = resource->storage_512_c;
            observation->storage[5] = resource->storage_512_d;
        }
        observation->returned = 0;
    }
    if (state_storage_calls055 < 64 && state_storage_context_bytes055) {
        StateWord055 fingerprint = 2166136261u;
        for (unsigned index = 0; index < 0x15c; index++)
            fingerprint = (fingerprint ^ state_storage_context_bytes055[index])*16777619u;
        state_storage_context_observations055[state_storage_calls055] = fingerprint;
    }
    state_storage_calls055++;
    if (flags != 0x10000 || alignment != 0x100 || reserved || !bytes || (bytes & 3))
        return 0;
    StateAddress055 cursor = (StateAddress055)state_storage_cursor055;
    StateAddress055 begin = (StateAddress055)state_storage_begin055;
    StateAddress055 end = (StateAddress055)state_storage_end055;
    if (cursor < begin || cursor > end || cursor > (StateAddress055)-1 - 255)
        return 0;
    StateAddress055 aligned = (cursor+255) & ~(StateAddress055)255;
    if (aligned > end || bytes > end-aligned)
        return 0;
    StateWord055 *output = state_storage_begin055 + (aligned-begin)/sizeof(StateWord055);
    state_storage_cursor055 = output + bytes/sizeof(StateWord055);
    if (observation)
        observation->returned = output;
    return output;
}

const StateWord055 *state_storage_layout055(void) {
    static const StateWord055 fields[] = {
        sizeof(StateResource055),sizeof(void*),
        __builtin_offsetof(StateResource055,values),
        __builtin_offsetof(StateResource055,deltas),
        __builtin_offsetof(StateResource055,storage_1024),
        __builtin_offsetof(StateResource055,storage_512_a),
        __builtin_offsetof(StateResource055,storage_64),
        __builtin_offsetof(StateResource055,storage_512_b),
        __builtin_offsetof(StateResource055,storage_512_c),
        __builtin_offsetof(StateResource055,storage_512_d),
        __builtin_offsetof(StateResource055,flags),
        sizeof(StateStorageObservation055),
        __builtin_offsetof(StateStorageObservation055,returned)
    };
    return fields;
}
