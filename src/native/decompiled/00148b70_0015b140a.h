#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00101a1c(); extern undefined4 fn_0012d73c(); extern undefined4 * fn_0012ea60(); extern undefined4 fn_0014d7c0(); extern longlong fn_0015cfa4();
extern undefined1 fn_0015f1b0(); extern int fn_0015f1e0(); extern int fn_00162618(); extern int fn_00162694(); extern int * fn_001676b0(); extern undefined4 * fn_001711b4();
extern undefined4 fn_00172d60(); extern undefined4 fn_0017d90c(); extern undefined4 fn_002feef8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00167720(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081d370; extern undefined4 DAT_00852a84; extern undefined4 DAT_008558c4; extern undefined4 DAT_00857fe8;
extern undefined4 DAT_008ef56c; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
