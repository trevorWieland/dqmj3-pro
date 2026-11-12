#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_0022f584(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_00327a7c(); extern undefined4 fn_00327f98(); extern undefined4 fn_003981d4();
extern undefined4 fn_004254e4(); extern undefined4 fn_00425c04(); extern undefined4 fn_00426430(); extern undefined4 fn_00426894(); extern undefined4 fn_00426ed0(); extern undefined4 fn_00580cb8();
extern undefined4 fn_0059e074(); extern undefined4 fn_00689828(); extern undefined4 fn_0068ab44(); extern uint fn_0068f654(); extern undefined2 fn_0068f6a8(); extern uint fn_0068f708();
extern undefined2 fn_0068f85c(); extern int fn_006e8d04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00425454; extern undefined4 DAT_004254dc; extern undefined4 DAT_004254e0; extern undefined4 DAT_00425be0;
extern undefined4 DAT_0042688c; extern undefined4 _DAT_00891cd8; extern undefined4 _DAT_00891cf4;
