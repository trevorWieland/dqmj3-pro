#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0022f584(); extern undefined4 fn_002317d8(); extern int fn_002ea524(); extern undefined4 fn_002feef8();
extern undefined4 fn_0036c5f4(); extern int fn_00397a0c(); extern undefined4 fn_00397a78(); extern undefined4 fn_00689bd0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e7158; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_LAB_00833360;
