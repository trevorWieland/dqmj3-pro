#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern int fn_001010c8(); extern undefined4 fn_001c78a8(); extern undefined4 fn_001cab7c(); extern undefined4 fn_001da640(); extern int fn_00214c94();
extern undefined4 fn_00215b58(); extern undefined4 fn_00216530(); extern int fn_002173e0(); extern undefined4 fn_0021761c(); extern undefined4 fn_002177ac(); extern undefined4 fn_002181ec();
extern undefined1 fn_00242b6c(); extern undefined4 fn_002e0230(); extern undefined4 fn_00341260(); extern undefined4 fn_005ef16c(); extern undefined4 fn_00683320(); extern bool fn_006b0108();
extern undefined4 fn_006b0a1c(); extern undefined4 fn_006b1130(); extern undefined4 fn_006c392c(); extern int fn_006c3994(); extern int fn_006c39d8(); extern undefined4 fn_006f7508();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
