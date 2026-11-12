#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001076bc(); extern undefined4 fn_0015e590(); extern undefined4 fn_00163988(); extern undefined4 fn_001c43dc(); extern undefined4 fn_005f3aac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ce538; extern undefined4 DAT_007ce544; extern undefined4 DAT_007ce548; extern unsigned char *DAT_00897808;
extern unsigned char *DAT_00897894; extern undefined4 DAT_00897898; extern undefined4 DAT_00897a2e; extern undefined4 DAT_00897a30;
