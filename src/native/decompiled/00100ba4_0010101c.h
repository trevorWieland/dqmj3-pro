#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_002fea88(); extern undefined4 * fn_002ff0c8(); extern uint fn_002ff284(); extern undefined8 fn_002ff2f8(); extern undefined4 fn_002ff59c(); extern int fn_002ff5e0();
extern undefined4 fn_002ff600(); extern undefined4 fn_002ff628(); extern uint * fn_002ff78a();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008f7e6c; extern undefined4 DAT_008f7f44; extern unsigned char *DAT_008f7f48; extern unsigned char *DAT_008f7f4c;
