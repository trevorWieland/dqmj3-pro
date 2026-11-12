#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_0013b294(); extern undefined4 fn_0014d2ec(); extern undefined4 fn_0014d7ec(); extern undefined4 fn_0014d8d4(); extern undefined4 * fn_001587b0();
extern undefined4 fn_0017750c(); extern undefined4 * fn_00301f50(); extern int fn_0044e1f8(); extern int fn_0044e2a4(); extern int fn_0044e304(); extern undefined4 fn_006ceaf4();
extern uint fn_0077fa34(); extern int fn_0077fc60(); extern int fn_0077fe64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852444; extern undefined4 DAT_008524d8; extern undefined4 DAT_0085251c; extern undefined4 DAT_0089a670;
extern undefined4 DAT_008e33ac; extern undefined4 DAT_008e33e8; extern undefined4 DAT_d8604659;
