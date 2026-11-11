/* Battle script natives: the pop-marker binding.
 *
 * Battle scripts (BattleScriptFunc.cpp in the original build) run during
 * battles the way field scripts run on the map.  Their natives marshal Squirrel
 * arguments and hand them to one battle-engine service; SetPop_ is the pop
 * marker shown over a monster (the damage/status annotation).
 *
 * SetPop_ reads seven script arguments and calls the engine service at
 * 0x001755cc.  The engine entry point takes a trailing float in s0 rather than
 * on the stack, so the binding's argument words land as r2, r3, three stack
 * words and s0 - the same shape the original's "ldrd r2,r3,[sp,#0xc]" shows.
 * The first argument is narrowed to a byte at the call; the fourth is a bool.
 */
#ifndef DQMJ3_BATTLE_SCRIPT_API_H
#define DQMJ3_BATTLE_SCRIPT_API_H

#include "../wave080-script-api/script_api.h"

/* The binding's own name, shared in rodata and addressed by the original's
 * pool word rather than embedded.  The build defines it from
 * config/script-constants.json and checks the bytes at that address. */
extern const char kName_SetPop_[];

/* Battle engine: place a pop marker on the model of one type at one slot.
 * Arguments follow the engine's own signature: the context, the model type,
 * two integers, a flag selecting the placement path, two integers the engine
 * converts to float offsets, and the scale stored on the marker. */
extern void fn_001755cc(ScriptContext *context, u8 model_type, s32 slot, s32 mode,
                        int flag, s32 offset_a, s32 offset_b, f32 scale);

/* One argument check against BattleScriptFunc.cpp.  The original passes the
 * failed operation, its source file, the binding name and the source line to
 * the error formatter, exactly as the field-script SCRIPT_CHECK does; the file
 * name differs and is embedded in the function's own data tail. */
#define BATTLE_CHECK(vm, call, operation, native_name, source_line)                    \
    do {                                                                                \
        if ((call) < 0)                                                                 \
            return sq_throwerror((vm), fn_00148918((operation), "BattleScriptFunc.cpp", \
                                                   (native_name), (source_line)));      \
    } while (0)

#endif
