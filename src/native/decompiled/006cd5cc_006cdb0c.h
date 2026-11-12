#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_0016a7c4();
extern int fn_00177c88(); extern undefined4 fn_0022fa1c(); extern undefined4 fn_00236d80(); extern undefined4 fn_0024f108(); extern undefined4 fn_005890a0(); extern int fn_0068f7c4();
extern int fn_0068f7f8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
