#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int * fn_00147974(); extern undefined4 fn_00178f9c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001f7510(); extern undefined4 fn_0023097c();
extern undefined4 fn_002c29a0(); extern undefined4 fn_002c330c(); extern undefined4 fn_002c374c(); extern undefined4 fn_002c4304(); extern undefined4 fn_002c4694(); extern undefined4 fn_0031b78c();
extern undefined4 fn_0036bcc8(); extern int * fn_0068897c(); extern undefined4 fn_00688c04();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003965cc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00396134; extern undefined4 DAT_00396140; extern undefined4 DAT_008939cc; extern undefined4 DAT_00893a18;
extern undefined4 DAT_00893a1c; extern undefined4 DAT_008942d0; extern undefined4 DAT_008942dc; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_0082b9e0;
