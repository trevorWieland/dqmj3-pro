#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146594(); extern undefined4 fn_0015e590(); extern bool fn_00191f08(); extern undefined4 fn_001ae8fc(); extern undefined4 fn_001aff7c(); extern uint fn_001b00bc();
extern undefined4 fn_001b1548(); extern char fn_001b1e90(); extern undefined4 fn_001b4c18(); extern int fn_001b84b8(); extern int * fn_001bf140(); extern int fn_0044c79c();
extern int fn_0044cdd0(); extern int fn_0044ce40(); extern undefined4 fn_006f94f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007e09fc; extern undefined4 DAT_007e1848; extern undefined4 DAT_008bf50f; extern undefined4 DAT_008bf5e8;
extern undefined4 DAT_008e970c; extern undefined4 DAT_008e998c;
