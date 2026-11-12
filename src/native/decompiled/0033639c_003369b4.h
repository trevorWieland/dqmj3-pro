#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001088e0(); extern undefined4 fn_001603f8(); extern undefined1 * fn_002e9240(); extern undefined4 fn_00303afc(); extern undefined4 fn_003761a8(); extern undefined4 fn_0068869c();
extern undefined4 fn_00689930(); extern undefined4 fn_006899f4(); extern undefined4 * fn_0068ab5c(); extern undefined4 fn_006ad868();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00824918; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern undefined4 DAT_008c62ec;
extern undefined4 DAT_008c62f0; extern undefined4 DAT_008c62f4; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
