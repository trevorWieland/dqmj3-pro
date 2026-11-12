#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00156284(); extern undefined4 fn_0045c8f4(); extern undefined4 fn_0046b1a0(); extern undefined4 fn_00479c98(); extern undefined4 fn_0049c724(); extern undefined4 fn_0049c874();
extern undefined4 fn_0049d040(); extern undefined4 fn_0049d3e0(); extern undefined4 fn_004b4218(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b9d74(); extern int fn_006d19d4();
extern bool fn_006d3b54(); extern longlong fn_006d3b9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0049cdf0; extern undefined4 DAT_0049cef0; extern undefined4 DAT_0049d038; extern undefined4 DAT_00853500;
