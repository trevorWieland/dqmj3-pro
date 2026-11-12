#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00178f9c();
extern undefined4 fn_00190d50(); extern undefined4 fn_00229fec(); extern undefined4 fn_002ff628(); extern undefined4 fn_0036cecc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0036cd70; extern undefined4 DAT_0036cd78; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008648e0;
extern undefined4 DAT_008942e8; extern undefined4 DAT_008c7662;
