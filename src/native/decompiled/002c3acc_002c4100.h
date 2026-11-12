#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined8 fn_00169f1c(); extern undefined4 fn_0016a43c(); extern int fn_00172c98();
extern undefined4 fn_001c9d44(); extern undefined4 fn_001c9d80(); extern undefined4 fn_001c9db4(); extern undefined4 fn_002454a4(); extern undefined4 fn_0025e378(); extern undefined4 fn_0025e7cc();
extern undefined4 fn_002b20a4(); extern undefined4 fn_002ff628(); extern undefined4 fn_0031b3c4(); extern undefined4 fn_0031b474(); extern undefined4 fn_0031b6ec(); extern undefined4 fn_0031b7c4();
extern undefined4 fn_0031ef00(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_0031f954(); extern undefined4 fn_0031fe38(); extern undefined4 * fn_0031fee0();
extern undefined4 fn_00688ff8(); extern undefined4 fn_0068ab44();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002c3e50(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002c3bdc; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c7653;
