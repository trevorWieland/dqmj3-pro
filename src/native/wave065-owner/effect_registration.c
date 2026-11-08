#include "effect_owner.h"

unsigned int fn_005f0974(EffectRegistrationView065 *registration, unsigned char *image, unsigned char kind)
{
    EffectRegistrationBankView065 *bank = registration->bank;
    unsigned int identifier = 0xffffffffu;
    for (EffectResourceSlot065 *slot = bank->begin; slot != bank->end; ++slot) {
        if (slot->used == 0) {
            slot->kind = kind;
            slot->used = 1;
            identifier = slot->identifier;
            break;
        }
    }
    fn_0053ea1c(bank->system, bank->allocator, image, identifier, 0);
    return identifier;
}
