#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined4 fn_00163940(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0();
extern longlong fn_00300f74(); extern int fn_006b42e0(); extern int fn_006b4634(); extern int fn_006b48ec(); extern undefined4 fn_006bc7fc(); extern undefined4 fn_006bfdec();
extern undefined4 fn_006f7358(); extern undefined4 fn_007989d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
