#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern int fn_00101d80(); extern undefined4 fn_0013ae4c(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00159d14(); extern undefined4 fn_001638a0();
extern undefined4 fn_00165d3c(); extern undefined4 fn_0017481c(); extern undefined4 fn_0017484c(); extern undefined4 fn_00174864(); extern undefined4 fn_00175d88(); extern undefined4 fn_00175dcc();
extern undefined4 fn_00182e2c(); extern undefined4 fn_001854ac(); extern undefined4 fn_00190d50(); extern undefined4 fn_001c2f50(); extern undefined4 fn_00204158(); extern undefined4 fn_002041b0();
extern undefined4 fn_002050ac(); extern undefined4 fn_0022e468(); extern undefined4 fn_0022f4ec(); extern undefined4 fn_0022f750(); extern undefined4 fn_002305a4(); extern undefined4 fn_00231ca0();
extern undefined4 fn_00231cb8(); extern undefined4 fn_00243550(); extern undefined4 fn_00253c9c(); extern undefined4 fn_002a26d8(); extern undefined4 fn_002b1598(); extern undefined4 fn_002b5424();
extern undefined1 fn_002b5b34(); extern undefined4 fn_002b7c3c(); extern undefined4 fn_002b7e1c(); extern undefined4 fn_002b7eb0(); extern undefined4 fn_002b8090(); extern int fn_0030551c();
extern int fn_0038d58c(); extern undefined4 fn_003a5bbc(); extern undefined4 fn_003a7548(); extern undefined4 fn_003a7cf0(); extern undefined4 fn_003a7e9c(); extern undefined4 fn_003a9994();
extern undefined4 fn_0054c514(); extern undefined4 fn_00588d8c(); extern undefined4 fn_006ba11c(); extern undefined4 fn_006ba178(); extern undefined4 fn_006ba250();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002aa2b8; extern undefined4 DAT_002aa2c0; extern undefined4 DAT_007c6dfc; extern undefined4 DAT_0085e1e8;
extern undefined4 DAT_008977e4; extern undefined4 DAT_008c7ebc; extern undefined4 DAT_008c7ec8; extern undefined4 PTR_s_Player_tusin_win_kaishi_0089098c;
