#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00163868(); extern undefined4 fn_00215cb4(); extern undefined4 fn_002d8370();
extern undefined4 fn_002dbc64(); extern undefined4 fn_002dbd0c(); extern undefined4 fn_002feef8(); extern undefined4 fn_003432cc(); extern undefined4 fn_00368c90(); extern undefined4 fn_003690f4();
extern int fn_003b3780(); extern void fn_003f2fd8(); extern undefined4 fn_00525bd0(); extern undefined4 fn_005f1940(); extern undefined4 fn_005f65fc(); extern bool fn_006aff38();
extern undefined4 fn_006c32a8(); extern bool fn_006c3400(); extern undefined4 fn_006f7388(); extern undefined4 fn_006f7508(); extern int fn_006f7770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f4c78; extern undefined4 DAT_00834e54; extern undefined4 DAT_00834eb4; extern undefined4 DAT_008977e0;
