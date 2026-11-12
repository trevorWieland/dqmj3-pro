#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0011ddb8(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern int fn_00172c98();
extern undefined4 fn_001c9d44(); extern undefined4 fn_001caa80(); extern undefined4 fn_00245330(); extern undefined4 fn_002454a4(); extern undefined4 * fn_002b4d9c(); extern undefined4 fn_002b4fbc();
extern undefined4 fn_002c246c(); extern undefined4 fn_002ff628(); extern undefined4 fn_00305958(); extern undefined4 * fn_00348b68(); extern undefined4 fn_00430be0(); extern void fn_0043109c();
extern undefined4 fn_0066023c(); extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004313a8; extern undefined4 DAT_004313b4; extern undefined4 DAT_004313c0; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_008c7655;
