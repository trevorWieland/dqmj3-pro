#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_001f7414(); extern undefined4 fn_001f748c(); extern undefined4 fn_0020309c();
extern undefined4 * fn_0025bec8(); extern undefined4 fn_0028eac0(); extern undefined4 fn_002feef8(); extern undefined4 fn_00353a48(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c();
extern int * fn_0079ecd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081d408; extern undefined4 DAT_0081d850; extern undefined4 DAT_0081d874;
extern undefined4 DAT_008519a4; extern undefined4 DAT_008519b8; extern undefined4 DAT_008519cc; extern undefined4 DAT_008519e0;
extern undefined4 DAT_008519f4; extern undefined4 DAT_00851a08; extern undefined4 DAT_00851a1c; extern undefined4 DAT_00892814;
extern undefined4 DAT_00892818; extern undefined4 PTR_FUN_0081d898;
