#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00245790(); extern undefined4 fn_0038dad0(); extern undefined4 fn_003cfaac(); extern undefined4 fn_003d0478(); extern undefined4 fn_003d0ae8();
extern undefined4 fn_003d0b80(); extern undefined4 * fn_004226c4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00422608; extern undefined4 DAT_007bad4c; extern undefined4 DAT_00812c8c;
