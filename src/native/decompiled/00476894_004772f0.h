#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00124be8(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_0014f510(); extern undefined4 fn_0015e294(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00169c08();
extern undefined8 fn_00169f1c(); extern undefined4 fn_001777e0(); extern undefined4 fn_004b9b4c(); extern undefined4 fn_0074a6d0(); extern undefined4 fn_0074a8dc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008527fc; extern undefined4 DAT_008528bc; extern undefined4 DAT_00852d4c; extern undefined4 DAT_0085345c;
extern undefined4 DAT_008535a4; extern undefined4 DAT_008540c0; extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8;
extern undefined4 DAT_008b64f8;
