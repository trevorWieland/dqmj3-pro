#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00190d50(); extern int fn_00192cb4(); extern int fn_0024222c(); extern undefined4 fn_002b0af8(); extern undefined4 fn_002c3808();
extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f954(); extern undefined4 fn_00411cb8(); extern int * fn_0068897c(); extern undefined4 fn_00688c04(); extern undefined4 fn_00689210();
extern undefined4 fn_0068ab44(); extern int fn_006b4f84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005c1bb8; extern undefined4 DAT_005c1bc0; extern undefined4 DAT_005c1d70; extern undefined4 DAT_00893eb0;
extern undefined4 DAT_00893eb4; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
