#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145adc(); extern bool fn_001667e0(); extern undefined4 fn_00174828(); extern undefined4 fn_00174858(); extern undefined4 fn_00182988(); extern undefined4 fn_001c2380();
extern int fn_002a19c4(); extern undefined4 fn_003ef9f0(); extern bool fn_006b6268();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
