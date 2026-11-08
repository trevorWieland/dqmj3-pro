#include "bootstrap.h"

void effect_file_bootstrap_initialize068(EffectFileBootstrap068 *state)
{
    effect_file_filesystem_initialize068(state, 1);
    EffectQueueManager067 *manager = effect_queue_allocate067(EFFECT_QUEUE_MANAGER067, 8, sizeof(*manager));
    if (manager != 0)
        effect_queue_manager_construct067(manager);
    if (state->manager != manager) {
        if (state->manager != 0)
            state->manager->operations->destroy(state->manager);
        state->manager = manager;
    }
}

void effect_file_bootstrap_shutdown068(EffectFileBootstrap068 *state)
{
    if (state->manager != 0) {
        state->manager->operations->destroy(state->manager);
        state->manager = 0;
    }
    effect_file_filesystem_shutdown068(state);
}
