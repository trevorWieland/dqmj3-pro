#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern int * fn_001588d4(); extern undefined4 fn_0022f584(); extern undefined4 fn_00231410(); extern undefined4 fn_002c37e0(); extern undefined4 fn_002c3df8();
extern undefined4 fn_0031b78c(); extern undefined4 fn_00385b88(); extern undefined4 fn_003981d4(); extern undefined4 fn_0039834c(); extern undefined4 fn_00580cb8(); extern undefined4 fn_005b73e8();
extern undefined4 fn_005b73f8(); extern undefined2 fn_0068f6a8(); extern uint fn_0068f708(); extern undefined2 fn_0068f85c(); extern undefined4 fn_006ba284(); extern undefined4 fn_006cdb0c();
extern int fn_006e8d04(); extern undefined4 fn_006e8d10();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004254dc; extern undefined4 DAT_00425be0; extern undefined4 DAT_00425d4c; extern undefined4 DAT_00425d74;
extern undefined4 DAT_0042640c; extern undefined4 DAT_0083b18c; extern undefined4 DAT_00891cc4; extern undefined4 _DAT_00891cd8;
extern undefined4 _DAT_00891cf4;
