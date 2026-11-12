/* Script-facing native API: bindings that read one integer.
 *
 * Every binding here reads its Squirrel arguments through the VM helpers,
 * validates each read with the assertion the original carries, forwards the
 * values to one engine service and either returns 0 or pushes that service's
 * answer.  Locals are named by argument position; the engine service named in
 * each comment is the recovered callee, and the operation/file/line operands are
 * the original's own.
 *
 * Status: bodies transcribed from the original instruction shapes.  The build
 * measures each one against the original bytes; only exact ones remain here.
 */
#include "script_api.h"

/* The engine services the original calls, by canonical image symbol. */
extern void fn_00149880(ScriptContext *context, s32);
extern void fn_0015503c(ScriptContext *context, s32);
extern void fn_0015c1f0(ScriptContext *context, s32);
extern void fn_00164c80(ScriptContext *context, s32, s32);
extern void fn_001eb968(ScriptContext *context, s32);
extern void fn_001ec030(ScriptContext *context, s16);
extern void fn_001ec3dc(ScriptContext *context, u8);
extern void fn_001ec554(ScriptContext *context, s32);
extern void fn_001f08e4(ScriptContext *context, u8);
extern void fn_001f091c(ScriptContext *context, s32);
extern void fn_001f1248(ScriptContext *context, s32);
extern void fn_001f16c4(ScriptContext *context, s8);
extern void fn_001f1a04(ScriptContext *context, s32);
extern void fn_001f1a2c(ScriptContext *context, s32);
extern int fn_001f30d4(ScriptContext *context, s32);
extern void fn_001f311c(ScriptContext *context, s32);
extern void fn_001f3494(ScriptContext *context, s32);
extern void fn_001f38e0(ScriptContext *context, s32);
extern void fn_001f3d68(ScriptContext *context, s32);
extern void fn_001f3dc8(ScriptContext *context, s32);
extern void fn_001f417c(ScriptContext *context, s32);
extern void fn_001f448c(ScriptContext *context, s32);
extern void fn_001f5418(ScriptContext *context, s32);
extern int fn_006abc00(ScriptContext *context, u8);
extern int fn_006abec0(ScriptContext *context, s32);
extern int fn_006accd4(ScriptContext *context, s16);
extern int fn_006ad270(ScriptContext *context, s8);
extern int fn_006ad428(ScriptContext *context, s8);

/* The binding names, each one shared copy in rodata. */
extern const char kName_AddActionName_[];
extern const char kName_AddBattleEventMessage_[];
extern const char kName_AddBattleFeatMessage_[];
extern const char kName_AddBattleOtherMessage_[];
extern const char kName_AddDiscQuestValue_[];
extern const char kName_AddFieldMenu_[];
extern const char kName_AddGold_[];
extern const char kName_AddOrnament_[];
extern const char kName_AddPlayerAbility_[];
extern const char kName_AddScoutGaugeValue_[];
extern const char kName_AddSendMedalCount_[];
extern const char kName_AddSpecialDisc_[];
extern const char kName_BossNPCRegistFlowResponse_[];
extern const char kName_BossSetupSkyMapMonsterNPC_[];
extern const char kName_BossTaskGuideFlowMenu_[];
extern const char kName_ChangeBattleMonsterId_[];
extern const char kName_ChangeBattlePartyFromReactor_[];
extern const char kName_ChangeBattlePartyUseHitMap_[];
extern const char kName_ChangeBattleParty_[];
extern const char kName_ChangeDemo_[];
extern const char kName_ChangeIndexPointData_[];
extern const char kName_CheckEventDate_[];
extern const char kName_CheckFieldRideMonster_[];
extern const char kName_CheckPartyMonsterChangeColor_[];
extern const char kName_CheckPartyMonsterLimitOver_[];
extern const char kName_CheckTrophy_[];
extern const char kName_DeleteEventMine_[];
extern const char kName_DetachObject_[];
extern const char kName_EndDemoBgmFade_[];
extern const char kName_ExecuteCrackNPCPresent_[];

/* AddActionName_(s32 value) - 0x00131dec, 88 bytes: forwards s32 to fn_0015503c. */
int fn_00131dec(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddActionName_, 0x0413);
    fn_0015503c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddScoutGaugeValue_(s32 value) - 0x0013506c, 88 bytes: forwards s32 to fn_0015c1f0. */
int fn_0013506c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddScoutGaugeValue_, 0x081b);
    fn_0015c1f0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddBattleFeatMessage_(s32 value) - 0x00135e38, 92 bytes: forwards s32 to fn_00164c80. */
int fn_00135e38(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddBattleFeatMessage_, 0x0427);
    fn_00164c80(SCRIPT_CONTEXT(), value, 1);
    return 0;
}

/* ChangeIndexPointData_(s32 value) - 0x00135ed0, 88 bytes: forwards s32 to fn_00149880. */
int fn_00135ed0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_ChangeIndexPointData_, 0x028f);
    fn_00149880(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddBattleEventMessage_(s32 value) - 0x00136948, 92 bytes: forwards s32 to fn_00164c80. */
int fn_00136948(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddBattleEventMessage_, 0x041d);
    fn_00164c80(SCRIPT_CONTEXT(), value, 0);
    return 0;
}

/* AddBattleOtherMessage_(s32 value) - 0x001369e0, 92 bytes: forwards s32 to fn_00164c80. */
int fn_001369e0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddBattleOtherMessage_, 0x0431);
    fn_00164c80(SCRIPT_CONTEXT(), value, 2);
    return 0;
}

/* ChangeDemo_(s32 value) - 0x0027ab9c, 88 bytes: forwards s32 to fn_001eb968. */
int fn_0027ab9c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeDemo_, 0x07e3);
    fn_001eb968(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddOrnament_(s32 value) - 0x0027b360, 92 bytes: forwards s32 to fn_001ec030. */
int fn_0027b360(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddOrnament_, 0x0d9d);
    fn_001ec030(SCRIPT_CONTEXT(), value);
    return 0;
}

/* CheckTrophy_(s32 value) - 0x0027b410, 104 bytes: forwards s32 to fn_006abc00. */
int fn_0027b410(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckTrophy_, 0x0ee8);
    sq_pushbool(vm, fn_006abc00(SCRIPT_CONTEXT(), (u8)(value & 0xff)));
    return 1;
}

/* AddFieldMenu_(s32 value) - 0x0027c090, 92 bytes: forwards s32 to fn_001ec3dc. */
int fn_0027c090(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddFieldMenu_, 0x0b09);
    fn_001ec3dc(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* DetachObject_(s32 value) - 0x0027c278, 88 bytes: forwards s32 to fn_001ec554. */
int fn_0027c278(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_DetachObject_, 0x03d9);
    fn_001ec554(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddSpecialDisc_(s32 value) - 0x0027d560, 92 bytes: forwards s32 to fn_001f08e4. */
int fn_0027d560(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddSpecialDisc_, 0x0ebb);
    fn_001f08e4(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* CheckEventDate_(s32 value) - 0x0027d738, 100 bytes: forwards s32 to fn_006abec0. */
int fn_0027d738(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckEventDate_, 0x0ede);
    sq_pushbool(vm, fn_006abec0(SCRIPT_CONTEXT(), value));
    return 1;
}

/* EndDemoBgmFade_(s32 value) - 0x0027d7d4, 88 bytes: forwards s32 to fn_001f091c. */
int fn_0027d7d4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_EndDemoBgmFade_, 0x002e);
    fn_001f091c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* DeleteEventMine_(s32 value) - 0x0027eb28, 88 bytes: forwards s32 to fn_001f1248. */
int fn_0027eb28(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_DeleteEventMine_, 0x0705);
    fn_001f1248(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddPlayerAbility_(s32 value) - 0x0027f734, 92 bytes: forwards s32 to fn_001f16c4. */
int fn_0027f734(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddPlayerAbility_, 0x0b12);
    fn_001f16c4(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddDiscQuestValue_(s32 value) - 0x0028045c, 88 bytes: forwards s32 to fn_001f1a04. */
int fn_0028045c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddDiscQuestValue_, 0x0a78);
    fn_001f1a04(SCRIPT_CONTEXT(), value);
    return 0;
}

/* AddSendMedalCount_(s32 value) - 0x002804ec, 88 bytes: forwards s32 to fn_001f1a2c. */
int fn_002804ec(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddSendMedalCount_, 0x0d47);
    fn_001f1a2c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* ChangeBattleParty_(s32 value) - 0x0028067c, 88 bytes: forwards s32 to fn_001f38e0. */
int fn_0028067c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeBattleParty_, 0x0769);
    fn_001f38e0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* BossTaskGuideFlowMenu_(s32 value) - 0x002837c0, 100 bytes: forwards s32 to fn_001f30d4. */
int fn_002837c0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_BossTaskGuideFlowMenu_, 0x09d0);
    sq_pushinteger(vm, fn_001f30d4(SCRIPT_CONTEXT(), value));
    return 1;
}

/* ChangeBattleMonsterId_(s32 value) - 0x00283858, 88 bytes: forwards s32 to fn_001f311c. */
int fn_00283858(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeBattleMonsterId_, 0x0761);
    fn_001f311c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* CheckFieldRideMonster_(s32 value) - 0x002839f8, 104 bytes: forwards s32 to fn_006accd4. */
int fn_002839f8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckFieldRideMonster_, 0x0045);
    sq_pushbool(vm, fn_006accd4(SCRIPT_CONTEXT(), value));
    return 1;
}

/* ExecuteCrackNPCPresent_(s32 value) - 0x00284594, 88 bytes: forwards s32 to fn_001f3494. */
int fn_00284594(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ExecuteCrackNPCPresent_, 0x07bc);
    fn_001f3494(SCRIPT_CONTEXT(), value);
    return 0;
}

/* BossNPCRegistFlowResponse_(s32 value) - 0x00286128, 88 bytes: forwards s32 to fn_001f3d68. */
int fn_00286128(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_BossNPCRegistFlowResponse_, 0x096f);
    fn_001f3d68(SCRIPT_CONTEXT(), value);
    return 0;
}

/* BossSetupSkyMapMonsterNPC_(s32 value) - 0x002861b8, 88 bytes: forwards s32 to fn_001f3dc8. */
int fn_002861b8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_BossSetupSkyMapMonsterNPC_, 0x09e8);
    fn_001f3dc8(SCRIPT_CONTEXT(), value);
    return 0;
}

/* ChangeBattlePartyUseHitMap_(s32 value) - 0x00286bc0, 88 bytes: forwards s32 to fn_001f417c. */
int fn_00286bc0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeBattlePartyUseHitMap_, 0x0772);
    fn_001f417c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* CheckPartyMonsterLimitOver_(s32 value) - 0x00286c50, 104 bytes: forwards s32 to fn_006ad270. */
int fn_00286c50(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckPartyMonsterLimitOver_, 0x0ca2);
    sq_pushbool(vm, fn_006ad270(SCRIPT_CONTEXT(), value));
    return 1;
}

/* ChangeBattlePartyFromReactor_(s32 value) - 0x002871b4, 88 bytes: forwards s32 to fn_001f448c. */
int fn_002871b4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeBattlePartyFromReactor_, 0x077b);
    fn_001f448c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* CheckPartyMonsterChangeColor_(s32 value) - 0x00287244, 104 bytes: forwards s32 to fn_006ad428. */
int fn_00287244(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckPartyMonsterChangeColor_, 0x0c98);
    sq_pushbool(vm, fn_006ad428(SCRIPT_CONTEXT(), value));
    return 1;
}

/* AddGold_(s32 value) - 0x00288324, 88 bytes: forwards s32 to fn_001f5418. */
int fn_00288324(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddGold_, 0x0d21);
    fn_001f5418(SCRIPT_CONTEXT(), value);
    return 0;
}
