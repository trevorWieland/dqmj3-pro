#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0022cdf0(); extern undefined4 fn_003083fc(); extern undefined4 fn_00308790(); extern undefined4 fn_00308f34();
extern undefined4 fn_0037f918(); extern undefined4 * fn_0037fcf4(); extern int * fn_0068897c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00308614; extern undefined4 DAT_0030861c; extern undefined4 DAT_00308a00; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00821bfc; extern undefined4 DAT_00860454; extern undefined4 DAT_00867164; extern undefined4 DAT_00895ad8;
extern undefined4 DAT_00895adc; extern undefined4 DAT_00895ae0; extern undefined4 DAT_00895ae4;
