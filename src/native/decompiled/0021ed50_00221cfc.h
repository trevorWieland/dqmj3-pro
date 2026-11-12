#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00179bfc(); extern undefined4 fn_0017fde4(); extern undefined4 fn_0018a69c(); extern undefined4 fn_001c86f4();
extern undefined4 fn_001c8a8c(); extern undefined4 fn_0021de78(); extern undefined4 fn_0054ca94(); extern int fn_005532f8(); extern int fn_006892dc(); extern undefined1 fn_006b51cc();
extern undefined4 fn_00798eb0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0021f0e0; extern undefined4 DAT_0021f0e8; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897804;
