#include "bootstrap.h"

void effect_file_filesystem_initialize068(EffectFileBootstrap068 *state, unsigned int enable_patch)
{
    const EffectFileBootstrapServices068 *services = state->services;
    services->initialize(services->context);
    state->rom.size = services->requirements(services->context, EFFECT_FILE_ROM068, 256, 16, 1);
    state->rom.memory = services->allocate(services->context, EFFECT_FILE_ROM068, &state->rom.size);
    services->mount(services->context, EFFECT_FILE_ROM068, "rom:", 256, 16, &state->rom, 1);
    if (enable_patch != 0) {
        state->patch.size = services->requirements(services->context, EFFECT_FILE_PATCH068, 128, 8, 1);
        state->patch.memory = services->allocate(services->context, EFFECT_FILE_PATCH068, &state->patch.size);
        services->mount(services->context, EFFECT_FILE_PATCH068, "patch:", 128, 8, &state->patch, 1);
    } else {
        services->alias(services->context, "patch:", "rom:");
    }
}

void effect_file_filesystem_shutdown068(EffectFileBootstrap068 *state)
{
    const EffectFileBootstrapServices068 *services = state->services;
    services->unmount(services->context, "patch:");
    if (state->patch.memory != 0) {
        services->release(services->context, EFFECT_FILE_PATCH068, &state->patch);
        state->patch.memory = 0;
    }
    if (state->rom.memory != 0) {
        services->unmount(services->context, "rom:");
        services->release(services->context, EFFECT_FILE_ROM068, &state->rom);
        state->rom.memory = 0;
    }
}
