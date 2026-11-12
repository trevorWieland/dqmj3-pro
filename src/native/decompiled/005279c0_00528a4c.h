#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0044f450(); extern undefined4 fn_00527570();
extern int fn_00529008(); extern undefined4 fn_00529b0c(); extern int fn_0052a300(); extern undefined4 fn_0052a79c(); extern int fn_0052a7d0(); extern int fn_0052a900();
extern undefined4 fn_00756208();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c035c; extern undefined4 DAT_008c0360; extern undefined4 DAT_008c0364;
