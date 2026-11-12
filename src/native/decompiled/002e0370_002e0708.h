#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_00216128(); extern undefined4 fn_002df134(); extern undefined4 fn_002df5c0(); extern undefined4 fn_002df7a8();
extern undefined4 fn_002e3128(); extern undefined4 * fn_00305244(); extern undefined4 fn_00344470(); extern undefined4 * fn_00344b3c(); extern undefined4 fn_00369238(); extern undefined4 fn_0036955c();
extern int fn_003b237c(); extern undefined4 fn_006c38d8(); extern undefined4 fn_006c39f4(); extern undefined4 fn_006f7508();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0;
