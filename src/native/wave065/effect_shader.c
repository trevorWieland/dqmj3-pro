#include "effect_shader.h"

static const EffectShaderPool065 *active_effect_shader_pool065;

int effect_bind_shader_pool065(const EffectShaderPool065 *pool)
{
    active_effect_shader_pool065 = pool;
    return pool != 0;
}

EffectShaderBinding065 *fn_0053a688(EffectShaderBinding065 *binding)
{
    binding->unknown_00 = 0;
    binding->commands = 0;
    binding->command_word_count = 0;
    binding->commands_borrowed = 0;
    return binding;
}

void fn_0053e2c4(EffectShaderBinding065 *binding)
{
    unsigned int kind = binding->keys[0] & 255;
    unsigned int secondary = (binding->keys[0] >> 8) & 255;
    unsigned int orientation = (binding->keys[0] >> 16) & 255;
    unsigned int flags = binding->keys[1];
    unsigned int index = 0;

    if (kind == 5 || kind == 6) {
        if (orientation < 3)
            index = 24 + orientation * 2 + (flags & 1);
    } else if (kind < 5 || kind == 8) {
        unsigned int rank = kind == 8 ? 5 : kind;
        index = ((flags >> 1) & 1) * 12 + rank * 2 + (secondary != 0);
    }

    binding->commands = active_effect_shader_pool065->programs[index].commands;
    binding->command_word_count = active_effect_shader_pool065->programs[index].command_word_count;
    binding->commands_borrowed = 1;
}

void fn_0017db84(EffectShaderBinding065 *binding, EffectAllocator065 *allocator)
{
    if (binding->commands != 0 && binding->command_word_count != 0 && !binding->commands_borrowed)
        allocator->operations->release(allocator, (void *)binding->commands);
}
