#include "device069.h"

EffectFileEmbedded069 *effect_file_sdk_embedded_destroy069(EffectFileSdk069 *state, EffectFileEmbedded069 *embedded)
{
    embedded->type = state->embedded_base_type;
    if (embedded->required_empty_0c != 0 || embedded->head != 0) {
        state->services->fatal(state->services->context);
        __builtin_trap();
    }
    EffectFileLink069 *link = embedded->head;
    if (link != 0) {
        do {
            EffectFileLink069 *next = link->next;
            link->next = 0;
            link->previous = 0;
            link = next;
        } while (link != 0);
        embedded->head = 0;
    }
    return embedded;
}
