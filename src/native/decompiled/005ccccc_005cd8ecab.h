#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144834(); extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_0022f584(); extern int fn_0036c140();
extern undefined4 fn_0036c5f4(); extern int fn_00397a0c(); extern undefined4 fn_005cd3e0(); extern undefined4 fn_00689bd0(); extern undefined2 fn_006b6494();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084baec; extern undefined4 DAT_00897804; extern undefined4 DAT_00898fa8;
extern undefined4 DAT_00898fac; extern undefined4 DAT_00898fb0; extern undefined4 PTR_s_MenuMessageTournamentFirst00_00898fc0;
