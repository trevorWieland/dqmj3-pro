#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00174828(); extern undefined4 fn_0018cb08();
extern undefined4 fn_002ff628(); extern undefined4 fn_005888f8(); extern undefined4 fn_005a77fc(); extern undefined4 fn_005a8448(); extern void fn_005a928c(); extern undefined4 fn_007997c0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005a8e64(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00847230; extern undefined4 DAT_008977e4; extern undefined4 DAT_008c7659;
