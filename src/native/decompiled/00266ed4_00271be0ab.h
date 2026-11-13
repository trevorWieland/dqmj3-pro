#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001088e0(); extern undefined4 fn_001480d0(); extern int fn_0016ba34(); extern undefined4 fn_00178f9c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001c804c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00271200; extern undefined4 DAT_00271208; extern undefined4 DAT_00271218; extern undefined4 DAT_0027122c;
extern undefined4 DAT_00861c94; extern undefined4 DAT_00861cd0; extern undefined4 DAT_0089212c; extern undefined4 DAT_00892130;
extern undefined4 DAT_00897800; extern undefined4 DAT_008987a0;
