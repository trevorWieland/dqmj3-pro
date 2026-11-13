#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00159d14(); extern undefined4 fn_00163988(); extern undefined4 fn_0016ac3c(); extern undefined4 fn_0016ac8c(); extern undefined4 fn_0016b414();
extern undefined4 fn_0016e824(); extern undefined4 fn_0016e8ec(); extern undefined4 fn_00174708(); extern undefined4 fn_00174864(); extern undefined4 fn_00176d68();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0016ffe4; extern undefined4 DAT_00183a2c; extern undefined4 DAT_00183a30; extern undefined4 DAT_008977e4;
extern undefined4 DAT_0089780c;
