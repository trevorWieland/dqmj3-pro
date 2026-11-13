#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined8 fn_00169f1c(); extern undefined4 fn_001d5844(); extern undefined4 fn_001d58ac();
extern undefined4 fn_001d59fc(); extern undefined4 fn_001f74ec(); extern undefined4 fn_00229a50(); extern undefined4 fn_0022e4c4(); extern undefined4 fn_00289d5c(); extern undefined4 fn_002b0af8();
extern undefined4 fn_002b0d18(); extern undefined4 fn_002c32c4(); extern undefined4 fn_002c4694(); extern undefined4 fn_002c471c(); extern undefined4 fn_002ddb0c(); extern undefined4 fn_002ff628();
extern undefined4 fn_00412bbc(); extern undefined4 fn_00581208(); extern undefined4 fn_00581768(); extern int fn_005c1ab0(); extern undefined4 fn_005c21ac(); extern int fn_00660fe0();
extern undefined4 fn_00666698(); extern undefined4 fn_006899f4(); extern uint fn_006b7a80(); extern undefined4 fn_006ba284(); extern undefined4 fn_0079e460();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00838a34; extern undefined4 DAT_00893ddc; extern undefined4 DAT_00897804;
extern undefined4 DAT_008c7674;
