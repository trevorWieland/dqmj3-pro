#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0025bd60(); extern undefined4 fn_0025f3f4(); extern undefined4 fn_002c3e74();
extern undefined4 fn_00327a24(); extern undefined4 fn_00327a7c(); extern undefined4 * fn_00327fb4(); extern undefined4 fn_003e560c(); extern int fn_003e5678(); extern undefined4 fn_003e56e4();
extern undefined4 fn_003e5aa4(); extern undefined4 fn_003e5b40(); extern int fn_003fedc0(); extern int * fn_0068897c(); extern undefined4 fn_00688c04(); extern undefined4 fn_00689828();
extern undefined4 fn_0068ab44(); extern int fn_006b2aa0(); extern undefined4 fn_006b64b0(); extern undefined4 fn_006ba284(); extern int fn_006bed98(); extern int fn_006bff0c();
extern int fn_006c0028(); extern int fn_006c0114(); extern int fn_006c01f4(); extern int fn_006c09b4(); extern undefined4 fn_006cb910();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e5534; extern undefined4 DAT_003e553c; extern undefined4 DAT_003e5544; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00825e1c; extern undefined4 DAT_00897804;
