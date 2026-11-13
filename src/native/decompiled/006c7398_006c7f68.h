#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern undefined4 fn_001028d4(); extern undefined1 fn_00145aac(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0015b0f8();
extern int fn_0016ba34(); extern undefined4 fn_0022f584(); extern bool fn_00291ac0(); extern undefined4 fn_00292f20(); extern undefined4 fn_0065fd34(); extern uint fn_006a9938();
extern undefined4 fn_006b64b0(); extern undefined4 fn_006be0cc(); extern int fn_006be0f4(); extern int fn_006c2578();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006c75a0; extern undefined4 DAT_006c75b4; extern undefined4 DAT_006c7d2c; extern undefined4 DAT_006c7d4c;
extern undefined4 DAT_006c7d70; extern undefined4 DAT_007c0d1c; extern undefined4 DAT_008610d4; extern undefined4 DAT_00891a4c;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804; extern undefined4 DAT_00897834; extern undefined4 DAT_00898788;
extern undefined4 DAT_008c8e7c;
