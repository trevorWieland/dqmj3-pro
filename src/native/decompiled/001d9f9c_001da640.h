#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00162d54(); extern undefined4 fn_001747e8(); extern undefined4 fn_0017fde4(); extern undefined4 fn_0018367c(); extern uint fn_00190fe0(); extern undefined4 fn_001d9610();
extern undefined4 fn_0023e574(); extern undefined4 fn_00257ef4(); extern int fn_002febd8(); extern int fn_005ea4fc(); extern undefined4 fn_006a9eb4(); extern undefined4 fn_006ebe58();
extern bool fn_006ebf84(); extern undefined4 fn_006f7388(); extern bool fn_007566dc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_008977e0;
