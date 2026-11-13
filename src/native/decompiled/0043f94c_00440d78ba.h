#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f7510(); extern undefined4 fn_0022f584(); extern bool fn_00295fa4(); extern int fn_0036c13c(); extern undefined4 fn_0036c658();
extern undefined4 * fn_00440b78(); extern undefined4 fn_004b9b40(); extern undefined4 fn_00689bd0(); extern undefined4 * fn_0068ab5c(); extern bool fn_006d3e6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00440740; extern undefined4 DAT_00440768; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083d7f0;
extern undefined4 DAT_008942d0; extern undefined4 DAT_0089783c;
