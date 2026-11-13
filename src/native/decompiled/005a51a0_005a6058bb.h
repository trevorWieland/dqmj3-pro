#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0028bed4(); extern undefined4 fn_0028bf3c();
extern undefined4 fn_0028bf74(); extern undefined4 fn_002f6534(); extern undefined4 fn_002feef8(); extern undefined4 fn_00688ad4(); extern undefined4 fn_00688cc4(); extern undefined4 fn_00689210();
extern int * fn_00689220(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005a5764(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005a5760; extern undefined4 DAT_005a5884; extern undefined4 DAT_005a5890; extern undefined4 DAT_005a589c;
extern undefined4 DAT_005a5fdc; extern undefined4 DAT_005a5fec; extern undefined4 DAT_005a6000; extern undefined4 DAT_005a6014;
extern undefined4 DAT_00812c8c; extern undefined4 PTR_LAB_00846e88;
