#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 * fn_00118290(); extern int fn_0011c134(); extern undefined4 fn_0011c184(); extern undefined4 fn_0012a26c();
extern undefined4 fn_00145ac0(); extern uint fn_00147e6c(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_002feef8(); extern undefined4 fn_00522550();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0037124c; extern undefined4 DAT_008282e4; extern undefined4 DAT_00828314; extern undefined4 DAT_00828324;
extern undefined4 DAT_008592c0; extern undefined4 DAT_00896ccc; extern undefined4 DAT_00896cd0;
