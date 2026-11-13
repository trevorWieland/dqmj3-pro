#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_00176dc0(); extern undefined4 fn_002582d8(); extern undefined4 fn_00258304(); extern undefined4 * fn_00258524(); extern undefined4 fn_002feef8();
extern undefined4 fn_0035c240(); extern undefined4 fn_0035c980(); extern int * fn_0035cbb0(); extern undefined4 fn_0065fdc4(); extern uint fn_0068f708(); extern int fn_0068f7c4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00826b30;
