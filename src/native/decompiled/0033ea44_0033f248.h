#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001d9fcc(); extern undefined4 fn_001da490(); extern undefined4 fn_001db0c4(); extern undefined4 * fn_001dbf48(); extern undefined4 fn_0023b804(); extern undefined4 fn_0033e918();
extern undefined4 * fn_00341920(); extern undefined4 fn_005ef16c(); extern undefined4 fn_006a9800(); extern undefined4 fn_006f7388(); extern undefined4 fn_006f751c(); extern undefined4 fn_006f7a5c();
extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00824e48; extern undefined4 DAT_008977e0;
