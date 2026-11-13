#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00178f90(); extern undefined4 fn_0022f128(); extern undefined1 fn_00246ec4(); extern int fn_002f5b28(); extern int fn_002f6298();
extern int fn_002f7124(); extern undefined4 fn_005a58ac(); extern undefined4 fn_005a5a04(); extern undefined4 fn_005a5bf8(); extern undefined4 fn_005a5f50(); extern void fn_0060228c();
extern undefined4 fn_00602ad4(); extern undefined4 fn_00688cc4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0060224c; extern undefined4 DAT_00602390; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00896fe8;
