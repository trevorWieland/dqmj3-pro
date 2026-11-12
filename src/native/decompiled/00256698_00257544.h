#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined8 fn_0017821c(); extern undefined4 fn_001c7f50(); extern int fn_001c801c(); extern undefined4 fn_0020bbc4();
extern bool fn_0020ccc8(); extern int fn_002429d0(); extern int fn_002429f0(); extern int * fn_0028aad0(); extern undefined4 fn_002feef8(); extern longlong fn_00300f74();
extern undefined4 * fn_00301f48(); extern undefined4 fn_006a82e0(); extern undefined4 fn_006a82f4(); extern int fn_006bfda8(); extern int fn_006c0010(); extern undefined4 fn_0078a498();
extern undefined4 fn_0078a708();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081d7b0; extern undefined4 DAT_00897804;
