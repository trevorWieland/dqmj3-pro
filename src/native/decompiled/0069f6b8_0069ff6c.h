#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0017fe34(); extern undefined4 fn_0018d060(); extern float fn_001a4a80(); extern undefined4 fn_00303afc();
extern undefined4 fn_00525bd0(); extern undefined4 fn_0068cafc(); extern undefined4 fn_006a2388(); extern undefined4 fn_006a2584(); extern int fn_006a2620(); extern undefined4 fn_006a3744();
extern undefined4 fn_006a69c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34;
