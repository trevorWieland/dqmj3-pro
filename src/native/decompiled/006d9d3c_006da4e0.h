#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00301a9c(); extern undefined4 fn_004ed504(); extern undefined4 fn_004ed514(); extern int fn_004ed810(); extern undefined4 fn_00519324(); extern longlong fn_006d6e58();
extern undefined4 fn_006d70ac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008c0630; extern undefined4 DAT_008c0674; extern undefined4 DAT_d8814829;
