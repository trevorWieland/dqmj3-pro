#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern int fn_00172c98(); extern int fn_00177c88(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001f74d8();
extern undefined4 fn_0020b99c(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern undefined4 fn_002b3d78(); extern undefined4 fn_002bf534(); extern int fn_002c11d0();
extern undefined4 fn_002e3e9c(); extern undefined4 fn_0031ee10(); extern undefined4 fn_0031ef00(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_0031f954(); extern undefined4 * fn_0031fee0();
extern undefined4 fn_0036c5f4(); extern void fn_0037feb4(); extern undefined4 fn_00380914(); extern undefined4 fn_0042fa70(); extern undefined4 fn_006890bc(); extern undefined4 * fn_00689144();
extern undefined4 fn_00689bd0(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c(); extern uint fn_006bfffc(); extern int * fn_007854f8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003800e8; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00893d64; extern undefined4 DAT_00897804;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_00829400;
