#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f40(); extern undefined4 * fn_00158f6c(); extern undefined8 fn_001694e4(); extern int * fn_00171944(); extern int * fn_0017d948(); extern longlong fn_00300f74();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bfba8; extern undefined4 DAT_008bfbde; extern undefined4 DAT_008bfbf8; extern undefined4 DAT_008c3cd8;
extern undefined4 DAT_008c3cdc; extern undefined4 DAT_008f7520;
