#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00156f48(); extern undefined4 fn_00157f58(); extern undefined4 fn_001581d0(); extern undefined4 fn_00158318(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00148920; extern unsigned char *DAT_00898898; extern code *DAT_0089a520; extern code *DAT_0089a524;
extern undefined4 DAT_0089a52c; extern undefined4 DAT_008bfab0; extern unsigned char *DAT_008bfad8; extern undefined4 DAT_008e310c;
