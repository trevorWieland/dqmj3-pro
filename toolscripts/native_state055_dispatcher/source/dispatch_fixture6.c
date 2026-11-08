#include "dispatch_types6.h"

STATE_API055 StateWord055 state_dispatch_host_fp6(void) {
#if defined(_WIN32)
    return __builtin_ia32_stmxcsr();
#else
    return 0;
#endif
}

STATE_API055 const StateWord055 *state_dispatch_layout6(void) {
    static const StateWord055 layout[] = {
        sizeof(StateDispatchSelection6),sizeof(StateApplySelection055),sizeof(StateApplyContext055),
        sizeof(StateSelectionCache055),sizeof(StateApplyGlobals055),
        __builtin_offsetof(StateDispatchSelection6,scalar_tail),
#if __SIZEOF_POINTER__ > 4
        __builtin_offsetof(StateDispatchSelection6,native_metadata),
        __builtin_offsetof(StateDispatchSelection6,mutable_uniforms),
        __builtin_offsetof(StateApplySelection055,native_uniform_words),
#else
        0x1c,0x2c,0x2c,
#endif
        __builtin_offsetof(StateSelectionCache055,values)
    };
    return layout;
}
