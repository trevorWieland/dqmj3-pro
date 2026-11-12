#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_001287d4(); extern undefined4 fn_001638a0(); extern undefined4 * fn_00168984(); extern int fn_00177c88(); extern undefined4 fn_00191580();
extern undefined4 fn_001915c4(); extern undefined1 * fn_001915c8(); extern uint fn_0022f774(); extern int fn_00230b74(); extern undefined4 fn_002feca8(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern int fn_00785320();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000020; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c75f9; extern undefined4 DAT_008c7612;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
