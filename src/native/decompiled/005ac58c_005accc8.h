#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00177c88(); extern undefined4 fn_001f74ec(); extern int fn_0022eb34(); extern undefined4 fn_0036c5f4();
extern undefined4 fn_003d4048(); extern undefined4 * fn_005ac880(); extern undefined4 fn_00604768(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern undefined4 fn_006e8654();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890b20; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
