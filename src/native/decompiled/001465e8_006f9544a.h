#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001076bc(); extern undefined4 fn_00163988(); extern undefined4 fn_00174858(); extern undefined4 fn_002287d0(); extern undefined4 fn_00237730(); extern undefined4 fn_002d3fc8();
extern undefined4 fn_005f3c30(); extern bool fn_00681c7c(); extern undefined4 fn_00682a8c(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689bd0();
extern undefined4 fn_00689bdc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00867230; extern undefined4 DAT_00895df4; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897808;
extern unsigned char *DAT_0089780c; extern unsigned char *DAT_00897894; extern code *DAT_0089a520; extern undefined4 DAT_0089a524;
extern undefined4 DAT_008e318c; extern undefined4 DAT_008e3190;
