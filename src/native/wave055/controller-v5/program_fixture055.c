#include "apply_quantize055.h"
#include "apply_attributes055.h"
#include "storage_fixture055.h"

STATE_API055 const StateWord055 *state_program_layout055(void) {
    static const StateWord055 layout[] = {
        sizeof(StateApplyContext055),sizeof(StateApplySelection055),
        sizeof(StateSelectionCache055),sizeof(StateShaderStreams055),sizeof(StateShaderRecord055),
        sizeof(StateApplyGlobals055),
        __builtin_offsetof(StateSelectionCache055,values),
        __builtin_offsetof(StateShaderStreams055,program_words),
        __builtin_offsetof(StateShaderStreams055,program_count),
        __builtin_offsetof(StateShaderStreams055,operand_words),
        __builtin_offsetof(StateShaderStreams055,operand_count),
        __builtin_offsetof(StateShaderStreams055,records),
        __builtin_offsetof(StateShaderRecord055,constants),
        __builtin_offsetof(StateShaderRecord055,constant_count),
        __builtin_offsetof(StateApplyGlobals055,selection),
        __builtin_offsetof(StateApplyGlobals055,stage_mode)
    };
    return layout;
}

STATE_API055 StateWord055 state_program_float_mode055(void) {
#if defined(_WIN32)
    return __builtin_ia32_stmxcsr();
#else
    return 0;
#endif
}

STATE_API055 void state_program_install_storage055(void) {
    state_apply_storage_provider055 = state_storage_fixture055;
}

STATE_API055 StateWord055 state_program_prepare_float055(void) {
#if defined(_WIN32)
    StateWord055 saved = __builtin_ia32_stmxcsr();
    __builtin_ia32_ldmxcsr(saved & ~63u);
    return saved;
#else
    return 0;
#endif
}

STATE_API055 void state_program_restore_float055(StateWord055 saved) {
#if defined(_WIN32)
    __builtin_ia32_ldmxcsr(saved);
#else
    (void)saved;
#endif
}
