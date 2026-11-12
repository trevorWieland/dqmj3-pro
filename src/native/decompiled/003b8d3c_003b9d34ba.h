#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001828f0(); extern undefined4 fn_002b1588(); extern int fn_002b15d4(); extern undefined4 fn_00303afc();
extern undefined4 fn_003b9cfc(); extern undefined4 fn_0069e444(); extern undefined4 fn_006cc314();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bd09c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00890aa4; extern undefined4 DAT_00890aa8;
extern undefined4 DAT_00890aac; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34;
