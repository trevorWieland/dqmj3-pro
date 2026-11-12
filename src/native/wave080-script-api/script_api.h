/* Script-facing native API: shared declarations.
 *
 * Every script in DQMJ3 Professional calls the C functions declared here through
 * Squirrel.  The binding table is config/script-natives.json (628 identifiers,
 * recovered from the registration blocks).  The bodies in this directory are the
 * most-called functions in the game; 162 of the 187 measured definitions are
 * byte-identical to the original and the rest are drafts, each one identified
 * instruction-selection difference away.  See
 * docs/script-api-native-reconstruction.md for the engine facts, the shared
 * constant access and the compiler ceiling.
 *
 * The script natives all reach the engine through one global:
 *
 *     0x00898898      a pointer to the script context
 *
 * The context's first word is a pointer to a C++ vtable.  The natives call
 * virtual engine methods through that table, so the offsets below are the
 * discovered script-facing engine interface.  Slots are named for the script
 * binding that demonstrates them (SetFade_, PlaySE_, ...), and an unnamed slot
 * stays reserved rather than being given a guess.
 *
 * Argument marshalling uses the VM's own helpers.  The game's Squirrel build
 * takes an out pointer and returns a status (negative on failure), unlike the
 * public Squirrel 2.2.5 signatures:
 *
 *      fn_00157f58(vm, index, s32 *out)    sq_getinteger
 *      fn_00157fb0(vm, index, char **out)  sq_getstring
 *      fn_00157eb4(vm, index, int *out)    sq_getbool
 *      fn_00157f00(vm, index, f32 *out)    sq_getfloat
 *      fn_001580cc(vm, value)              sq_pushinteger
 *      fn_00158004(vm, value)              sq_pushbool
 *      fn_00158128(vm, text, len)          sq_pushstring
 *      fn_001581d0(vm, message)            sq_throwerror
 *      fn_001638b0(vm)                     sq_suspendvm
 *
 * Index -1 is the top of the Squirrel stack, -2 one below it.  A native returns
 * the number of values it pushed, which is why the setters return 0 and the
 * getters return 1.
 */
#ifndef DQMJ3_SCRIPT_API_H
#define DQMJ3_SCRIPT_API_H

typedef signed int s32;
typedef unsigned int u32;
typedef signed short s16;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned char u8;
typedef float f32;

typedef struct SqVM SqVM;
typedef struct ScriptContext ScriptContext;
typedef struct ScriptHostVtable ScriptHostVtable;

/* Offsets are byte offsets in the original image, not struct offsets that this
 * build controls; the layout is stated as words so a change is visible. */
struct ScriptHostVtable {
    void *reserved_000[2];                                        /* 0x00 */
    void (*set_shadow)(ScriptContext *self, int enable);          /* 0x08 SetShadowEnable_ */
    int (*play_se)(ScriptContext *self, const char *se_name);     /* 0x0c PlaySE_ */
    void (*stop_se)(ScriptContext *self, const char *se_name);    /* 0x10 StopSE_ */
    void *reserved_014[1];                                        /* 0x14 */
    void (*play_me)(ScriptContext *self, const char *me_name);    /* 0x18 PlayMe_ */
    void (*wait_me)(ScriptContext *self);                         /* 0x1c WaitMe_ */
    void (*play_bgm)(ScriptContext *self, const char *bgm_name);  /* 0x20 PlayBgm_ */
    void *reserved_024[7];                                        /* 0x24 */
    int (*load_effect)(ScriptContext *self, const char *name);    /* 0x40 LoadEffect_ */
    void *reserved_044[4];                                        /* 0x44 */
    void (*set_effect_scale)(ScriptContext *self, s32 id, f32 s); /* 0x54 SetEffectScale_ */
    void *reserved_058[1];                                        /* 0x58 */
    void (*delete_effect)(ScriptContext *self, s32 id);           /* 0x5c DeleteEffect_ */
    void (*delete_effect_emitter)(ScriptContext *self, s32 id);   /* 0x60 DeleteEffectEmitter_ */
    void *reserved_064[3];                                        /* 0x64 */
    s32 (*is_busy)(ScriptContext *self);                          /* 0x70 IsWaitEnd_ */
};

/* The script context.  Only the two fields the natives touch are named. */
struct ScriptContext {
    ScriptHostVtable *host;   /* +0x00: the engine interface above */
    void *unknown_004[4];     /* +0x04 */
    s32 wait_frames;          /* +0x14: Wait_ countdown, 0 means not waiting */
    void *unknown_018[20];    /* +0x18 */
    u8 unknown_068;           /* +0x68 */
    u8 fade_wait_armed;       /* +0x69: WaitFade_ latch */
};

/* The one global the script natives dereference.  The address is an original
 * image address, so it is a constant, never a relocation.  It is a plain
 * pointer, not a volatile one: the original's argument setup reorders this load
 * freely against the other arguments (SetEventFlg_ loads the name and the value
 * before the context), which a volatile qualifier would forbid. */
#define SCRIPT_CONTEXT() (*(ScriptContext **)(__UINTPTR_TYPE__)0x00898898u)

/* A script binding's own name, as the original data tail refers to it.
 *
 * The engine stores each binding name exactly once in the initialized rodata pool and
 * the binding passes that one address to the error formatter, so the compiler loads a
 * four-byte address from its literal pool instead of embedding the characters. These
 * are extern arrays, not integer constants: the original refers to a relocatable
 * symbol, which is why armcc reloads the pool word at every use instead of hoisting
 * one copy into a callee-saved register. The build defines each symbol at its original
 * image address from config/script-constants.json and checks the bytes there before
 * linking; the characters stay in the retained rodata gap until that table is
 * reconstructed. */
extern const char kName_ArrangePointGimmick_[];
extern const char kName_BossTaskGuideFlowMenu_[];
extern const char kName_CheckEventDate_[];
extern const char kName_CheckFieldRideMonster_[];
extern const char kName_CheckPartyMonsterChangeColor_[];
extern const char kName_CheckPartyMonsterLimitOver_[];
extern const char kName_CheckTrophy_[];
extern const char kName_GetAccessoryNum_[];
extern const char kName_GetActionCategory_[];
extern const char kName_GetActionEfficacy_[];
extern const char kName_GetActionNo_[];
extern const char kName_GetActive_[];
extern const char kName_GetActorIndex_[];
extern const char kName_GetAllyIndex_[];
extern const char kName_GetAlpha_[];
extern const char kName_GetDir_[];
extern const char kName_GetEnemyIndex_[];
extern const char kName_GetEventFlg_[];
extern const char kName_GetFbxPointPos_[];
extern const char kName_GetFbxPos_[];
extern const char kName_GetFieldRideTypeNum_[];
extern const char kName_GetFlagID_[];
extern const char kName_GetHighRankEffectSize_[];
extern const char kName_GetInitExistType_[];
extern const char kName_GetItemFoundRecord_[];
extern const char kName_GetItemNum_[];
extern const char kName_GetMasterKind_[];
extern const char kName_GetMonsterHp_[];
extern const char kName_GetMonsterLinage_[];
extern const char kName_GetMonsterSize_[];
extern const char kName_GetMotion_[];
extern const char kName_GetNakamaMonsterRankNum_[];
extern const char kName_GetNakamaRecord_[];
extern const char kName_GetNumFlg_[];
extern const char kName_GetOwnerMonsterKind_[];
extern const char kName_GetPartnerKind_[];
extern const char kName_GetPartyMonsterNum_[];
extern const char kName_GetPitch_[];
extern const char kName_GetRandomDonMoguraEvent_[];
extern const char kName_GetRandomDonMoguraHole_[];
extern const char kName_GetTargetNum_[];
extern const char kName_GetTargetType_[];
extern const char kName_GetUseMp_[];
extern const char kName_GotoMenuOpen_[];
extern const char kName_IsAlly_[];
extern const char kName_IsDanWinNum_[];
extern const char kName_IsFreezeWave_[];
extern const char kName_IsHaveSpecialDisc_[];
extern const char kName_IsHighRankSpell_[];
extern const char kName_IsHolyRailDemoTreated_[];
extern const char kName_IsLightWave_[];
extern const char kName_IsMasterFall_[];
extern const char kName_IsMaster_[];
extern const char kName_IsMonster_[];
extern const char kName_IsMotionEnd_[];
extern const char kName_IsOpenNaviMapRideFilter_[];
extern const char kName_IsPalpnte_[];
extern const char kName_IsPartnerFall_[];
extern const char kName_IsPartnerRide_[];
extern const char kName_IsPartner_[];
extern const char kName_IsPartyMonsterHpMax_[];
extern const char kName_IsPartyMonsterMpMax_[];
extern const char kName_IsPasser_[];
extern const char kName_IsPassingWinNum_[];
extern const char kName_IsRankingBattleEntryNum_[];
extern const char kName_IsReactorMarkerTypeHide_[];
extern const char kName_IsRideTypeMonster_[];
extern const char kName_IsRide_[];
extern const char kName_IsStatusChangeVisible_[];
extern const char kName_IsTargetSingle_[];
extern const char kName_IsTeraAttack_[];
extern const char kName_IsTokugi_[];
extern const char kName_IsUsedCoinOverNum_[];
extern const char kName_PlayerForcePause_[];
extern const char kName_ReadGimmick_[];
extern const char kName_ReadMotion_[];
extern const char kName_ReadNpc_[];
extern const char kName_SetDamageMotion_ScoutAttack_[];
extern const char kName_SetEventFlg_[];
extern const char kName_SetHolyRailLayoutAnim_[];
extern const char kName_SetMotionSpeed_[];
extern const char kName_SetMotion_[];
extern const char kName_SetNumFlg_[];
extern const char kName_SetPartnerNaviMapActive_[];
extern const char kName_SetPointBoxEncountMine_[];
extern const char kName_SetPointBoxEventMineNoFallWait_[];
extern const char kName_SetPointPos_[];
extern const char kName_SetReactorMsg_[];
extern const char kName_SetShadowEnable_[];
extern const char kName_SetTalkName_[];
extern const char kName_ShowMsg_[];
extern const char kName_Task_EncountEffect_[];
extern const char kName_Task_PartnerFormChange_[];

/* The empty message every release-build script error throws.  It is the four
 * zero bytes at 0x00148920, and fn_00148918 returns its address. */
#define SCRIPT_EMPTY_MESSAGE ((const char *)(__UINTPTR_TYPE__)0x00148920u)

/* VM helpers, named as the public Squirrel API names them and spelled with the
 * canonical image symbol so a later exact reconstruction keeps its address. */
extern int fn_00157f58(SqVM *vm, int index, s32 *out);
extern int fn_00157fb0(SqVM *vm, int index, const char **out);
extern int fn_00157eb4(SqVM *vm, int index, int *out);
extern int fn_00157f00(SqVM *vm, int index, f32 *out);
extern int fn_001580cc(SqVM *vm, s32 value);
extern int fn_00158070(SqVM *vm, f32 value);
extern int fn_00158004(SqVM *vm, int value);
extern int fn_00158128(SqVM *vm, const char *text, s32 length);
extern int fn_001581d0(SqVM *vm, const char *message);
extern int fn_001638b0(SqVM *vm);

#define sq_getinteger fn_00157f58
#define sq_getstring fn_00157fb0
#define sq_getbool fn_00157eb4
#define sq_getfloat fn_00157f00
#define sq_pushinteger fn_001580cc
#define sq_pushfloat fn_00158070
#define sq_pushbool fn_00158004
#define sq_pushstring fn_00158128
#define sq_throwerror fn_001581d0
#define sq_suspendvm fn_001638b0

/* The release-build error formatter.  armcc builds the four assertion operands
 * at every call site: the failed-operation text, the source file, the binding
 * name and the line.  The instruction evidence fixes that order: r0 receives
 * "failed: sq_get..." and r1 receives "FieldScriptFunc.cpp" before the call.
 * The formatter itself returns the empty message above. */
extern const char *fn_00148918(const char *message, const char *file,
                               const char *native_name, int line);

/* Script-context operations that are not virtual methods. */
extern void fn_0014887c(ScriptContext *context, s32 frames);  /* arm the Wait_ counter */
extern int fn_00148894(ScriptContext *context);               /* wait finished? */
extern void fn_00148888(ScriptContext *context);              /* arm the fade latch */
extern int fn_001488c4(SqVM *vm, s32 *id, f32 *value);        /* id at -2, float at -1 */

/* The argument check every validation site performs.  The line numbers in the
 * bodies are the original FieldScriptFunc.cpp and BattleScriptFunc.cpp lines,
 * read from the literal the error path passes in r3.  The source file is part of
 * the check because it is one of the four operands, and the two script modules
 * this directory reconstructs come from different files. */
#define SCRIPT_CHECK_IN(vm, call, operation, source_file, native_name, source_line)    \
    do {                                                                               \
        if ((call) < 0)                                                                \
            return sq_throwerror((vm), fn_00148918((operation), (source_file),         \
                                                   (native_name), (source_line)));     \
    } while (0)

#define SCRIPT_CHECK(vm, call, operation, native_name, source_line)                    \
    SCRIPT_CHECK_IN(vm, call, operation, "FieldScriptFunc.cpp", native_name, source_line)

#endif
