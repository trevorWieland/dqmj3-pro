#include "apply_quantize055.h"

static _Bool state_table_finite055(float value) {
    const unsigned char *bytes = (const unsigned char *)&value;
    return (bytes[3] & 0x7f) != 0x7f || !(bytes[2] & 0x80);
}

StateWord055 state_table_truncate055(float value) {
    if (!(value >= 0.0f))
        return 0;
    if (value >= 4294967296.0f)
        return 0xffffffffu;
    return (StateWord055)value;
}

StateWord055 state_table_positive055(float value,float scale,StateWord055 maximum) {
    if (!(value > 0.0f) || !state_table_finite055(value))
        return 0;
    float scaled = value*scale;
    return scaled < (float)(maximum+1) ? state_table_truncate055(scaled) : maximum;
}

StateWord055 state_table_signed055(float value,float bias,float scale,StateWord055 center,StateWord055 maximum) {
    if (value == 0.0f || !state_table_finite055(value))
        return 0;
    float shifted = (value+bias)*scale;
    if (shifted < 0.0f)
        shifted = 0.0f;
    if (shifted >= (float)(maximum+1))
        shifted = (float)maximum;
    float encoded = shifted >= (float)center ? shifted-(float)center : shifted+(float)center;
    return state_table_truncate055(encoded);
}

void state_table_pack_pair055(StateResource055 *resource,StateWord055 **storage,StateWord055 flag,_Bool fog) {
    if (!(resource->flags & flag))
        return;
    if (!*storage)
        *storage = state_apply_storage_provider055 ? state_apply_storage_provider055(0x10000,0x100,0,512) : 0;
    for (unsigned index = 0; index < 128; index++) {
        float first = resource->values[index];
        float second = resource->values[index+128];
        StateWord055 low = fog ? state_table_signed055(second,2.0f,2048.0f,4096,8191) : state_table_positive055(first,4096.0f,4095);
        (*storage)[index] = low;
        StateWord055 high = fog ? state_table_positive055(first,2048.0f,2047) : state_table_signed055(second,1.0f,2048.0f,2048,4095);
        (*storage)[index] = low | high<<(fog ? 13 : 12);
    }
    resource->flags &= ~flag;
}

void state_table_pack_bytes055(StateResource055 *resource) {
    if (!(resource->flags & 32))
        return;
    if (!resource->storage_512_d)
        resource->storage_512_d = state_apply_storage_provider055 ? state_apply_storage_provider055(0x10000,0x100,0,512) : 0;
    unsigned char *bytes = (unsigned char *)resource->storage_512_d;
    for (unsigned index = 0; index < 256; index++) {
        float value = resource->values[index];
        const unsigned char *representation = (const unsigned char *)&value;
        if (!(representation[3] & 128) && (value > 1.0f || !state_table_finite055(value)))
            value = 1.0f;
        float scaled = value*255.0f;
        bytes[index] = (unsigned char)state_table_truncate055(scaled+0.5f);
    }
    for (unsigned index = 0; index < 255; index++)
        bytes[index+256] = (unsigned char)state_table_signed055(resource->deltas[index],1.0f,128.0f,128,255);
    bytes[511] = 0;
    resource->flags &= ~32u;
}

void state_table_pack_components055(StateResource055 *resource) {
    if (!(resource->flags & 4))
        return;
    if (!resource->storage_64)
        resource->storage_64 = state_apply_storage_provider055 ? state_apply_storage_provider055(0x10000,0x100,0,64) : 0;
    for (unsigned index = 0; index < 8; index++) {
        float value = resource->values[index]*255.0f;
        resource->storage_64[index] = state_table_positive055(value,1.0f,255);
        float delta = resource->values[index+8]*127.0f;
        float magnitude = delta < 0.0f ? -delta : delta;
        StateWord055 encoded = state_table_truncate055(magnitude)&127;
        if (resource->values[index+8] < 0.0f)
            encoded |= 128;
        resource->storage_64[index+8] = encoded;
    }
    resource->flags &= ~4u;
}
