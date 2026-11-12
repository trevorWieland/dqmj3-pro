#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00176dc0(); extern int fn_00176e70(); extern int fn_00182924(); extern int fn_0025fd78(); extern int fn_0025fde4(); extern undefined4 fn_0025fe24();
extern int fn_0025fe48(); extern int fn_0025fe88(); extern int fn_0025fed0(); extern int fn_002697b4(); extern longlong fn_00300f74(); extern undefined4 fn_006196d8();
extern undefined4 fn_0061c62c(); extern undefined4 fn_0061cc70(); extern int fn_0063a54c(); extern int fn_00654ee8(); extern bool fn_00655430();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 PTR_LAB_008bf678;
