#include "apply_tables055.h"

static StateWord055 state_table_float_bits055(float value) {
    const unsigned char *bytes = (const unsigned char *)&value;
    return (StateWord055)bytes[0] | (StateWord055)bytes[1]<<8 |
           (StateWord055)bytes[2]<<16 | (StateWord055)bytes[3]<<24;
}

void state_table_pack12_055(StateResource055 *resource) {
    if (!(resource->flags & 1))
        return;
    if (!resource->storage_1024)
        resource->storage_1024 = state_apply_storage_provider055 ? state_apply_storage_provider055(0x10000,0x100,0,0x400) : 0;
    for (unsigned index = 0; index < 256; index++) {
        float sample = resource->values[index];
        StateWord055 value = 0;
        if (sample > 0.0f && (state_table_float_bits055(sample) & 0x7f800000u) != 0x7f800000u) {
            float scaled = sample*4096.0f;
            value = scaled < 4096.0f ? (StateWord055)scaled : 4095;
        }
        resource->storage_1024[index] = value;
        float delta = resource->deltas[index];
        StateWord055 encoded_delta = 0;
        if (delta != 0.0f && (state_table_float_bits055(delta) & 0x7f800000u) != 0x7f800000u) {
            float scaled = delta*2048.0f;
            if (scaled < 0.0f) {
                scaled = -scaled;
                encoded_delta = 0x800;
            }
            if (scaled >= 2048.0f)
                scaled = 2047.0f;
            encoded_delta |= (StateWord055)scaled;
        }
        resource->storage_1024[index] = value | encoded_delta<<12;
    }
    resource->flags &= ~1u;
}
