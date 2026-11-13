#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303afc(); extern undefined4 fn_00579518(); extern bool fn_005795e0(); extern undefined4 fn_00579630(); extern undefined4 fn_00579668(); extern undefined4 fn_0057979c();
extern undefined4 fn_005797d8(); extern bool fn_00579814(); extern bool fn_00579864(); extern undefined4 fn_005798b4(); extern undefined4 fn_005a789c(); extern bool fn_00608ea8();
extern undefined4 fn_00608f1c(); extern undefined4 fn_00608f3c(); extern undefined1 fn_006e8314(); extern undefined4 fn_006ef0e8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
