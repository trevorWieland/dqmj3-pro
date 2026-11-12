#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144810(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54(); extern undefined4 fn_001638a0(); extern undefined4 fn_0017fd40(); extern undefined4 fn_0017fde4();
extern undefined4 fn_0018367c(); extern undefined4 fn_001cc250(); extern int fn_0023e194(); extern undefined4 fn_00260014(); extern undefined4 fn_00260690(); extern undefined4 fn_00260750();
extern undefined4 fn_002feef8(); extern undefined4 fn_0030fce4(); extern undefined4 fn_0068b6e4(); extern undefined4 fn_0068c694(); extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068e960();
extern int fn_006a8858(); extern bool fn_006be434(); extern bool fn_006eb3a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081de94; extern undefined4 DAT_008977e8;
