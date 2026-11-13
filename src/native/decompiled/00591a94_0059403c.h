#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int * fn_00147974(); extern undefined4 fn_00190d50(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022eed8(); extern undefined4 fn_0022f750();
extern undefined4 fn_002b157c(); extern undefined4 fn_002c29a0(); extern undefined4 fn_002c330c(); extern undefined4 fn_002e6978(); extern bool fn_002f5cf0(); extern undefined4 fn_002f70cc();
extern undefined1 fn_002f8914(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00321118(); extern undefined4 fn_00591f78(); extern undefined4 fn_00593a80(); extern undefined4 fn_005db570();
extern undefined * fn_005db5ac(); extern undefined * fn_005db5e0(); extern undefined * fn_005db614(); extern int * fn_0068897c(); extern undefined4 fn_00689210(); extern undefined4 fn_00689930();
extern undefined4 fn_00689bd0(); extern bool fn_006e9d7c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005920bc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00591d30; extern undefined4 DAT_0059423c; extern undefined4 DAT_00594250; extern undefined4 DAT_00893b10;
extern undefined4 DAT_008959f4; extern undefined4 DAT_008959fc; extern undefined4 DAT_00896ad4; extern undefined4 DAT_00896b98;
extern undefined4 DAT_00896b9c; extern undefined4 DAT_00896bc0; extern undefined4 DAT_00896bc4; extern undefined4 DAT_00896bc8;
extern undefined4 DAT_00896bcc; extern undefined4 DAT_00896bd0; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
extern undefined4 PTR_PTR_007ca034;
