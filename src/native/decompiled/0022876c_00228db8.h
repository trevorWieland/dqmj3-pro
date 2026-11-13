#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 * fn_00158f40(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_0024e8c4(); extern int fn_002febd8();
extern undefined4 fn_002feef8(); extern int fn_0044bc3c(); extern undefined1 * fn_0044bd80(); extern undefined4 fn_0044bf2c(); extern undefined4 * fn_00682b74(); extern undefined4 fn_0077f194();
extern undefined4 fn_007a53b4(); extern undefined4 fn_007af2a4(); extern undefined4 fn_007b8f40();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00600280(void) { }
