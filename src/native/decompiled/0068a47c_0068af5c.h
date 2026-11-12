#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_00148348(); extern undefined4 fn_0016a43c();
extern undefined4 fn_001f751c(); extern undefined4 fn_001f76b8(); extern undefined4 fn_001f7bfc(); extern undefined4 * fn_00245590(); extern undefined4 fn_0028f978(); extern undefined4 * fn_0028fb58();
extern undefined4 fn_006896e0(); extern undefined4 fn_00689d6c(); extern undefined4 fn_00689f44(); extern undefined4 fn_0068a0a4(); extern undefined4 fn_0068a204(); extern undefined4 * fn_0068ab5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00851024; extern undefined4 DAT_008593f0; extern undefined4 DAT_008942d0;
extern undefined4 DAT_008942dc;
