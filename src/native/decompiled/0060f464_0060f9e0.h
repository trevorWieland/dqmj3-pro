#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined4 fn_001d9bc8(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern int fn_0033cc74(); extern undefined4 fn_0033cd34(); extern undefined2 fn_0068f6a8(); extern undefined4 fn_0068f818(); extern undefined4 fn_006f72e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00898eac; extern undefined4 DAT_008c7674;
