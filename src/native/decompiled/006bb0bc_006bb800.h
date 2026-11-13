#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined * fn_00128eac(); extern undefined4 fn_00163940(); extern undefined8 fn_00169f1c(); extern undefined4 fn_003f2d04(); extern bool fn_005f6e60();
extern undefined1 fn_006cc234(); extern undefined1 fn_006f700c(); extern undefined4 fn_006f7508(); extern int fn_006f75c0(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006bb328; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
