#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern undefined4 fn_00174834(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0();
extern undefined4 * fn_00301f50(); extern undefined4 fn_003585b4(); extern undefined4 fn_005df93c(); extern int fn_00615ab0(); extern undefined4 fn_00619fc4(); extern undefined4 fn_0061a1a4();
extern undefined4 fn_0061a8fc(); extern int fn_00661518(); extern undefined4 fn_0068869c(); extern byte fn_006f44fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082ad40; extern undefined4 DAT_0082deb8; extern undefined4 DAT_008977e4;
extern undefined4 DAT_00897804; extern undefined4 DAT_0089780c;
