#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00128744(); extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined4 fn_00163988(); extern uint fn_001759d0(); extern undefined4 fn_0017d96c();
extern bool fn_001d9a94(); extern undefined4 fn_001d9f6c(); extern undefined4 fn_001da39c(); extern undefined4 fn_001daac0(); extern undefined4 fn_001db0c0(); extern undefined4 fn_001f74d8();
extern undefined4 fn_0023dca4(); extern undefined4 fn_0023e2ac(); extern undefined4 fn_002525fc(); extern undefined4 fn_0038fee8(); extern undefined4 fn_0038ff40(); extern undefined4 fn_003a2a90();
extern undefined4 fn_003a4080(); extern undefined4 fn_003c1f64(); extern undefined4 fn_0044180c(); extern undefined4 fn_00561f24(); extern undefined4 fn_00566b20(); extern undefined4 fn_00566c40();
extern undefined4 fn_00689930(); extern undefined4 fn_00689c1c(); extern undefined4 fn_006945fc(); extern undefined4 fn_006f72e0(); extern undefined4 fn_006f75ac(); extern undefined4 fn_006f7a48();
extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00566d70; extern undefined4 DAT_005672f0; extern undefined4 DAT_007d8884; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00857c64; extern undefined4 DAT_00892df0; extern undefined4 DAT_008964f4; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern undefined4 DAT_00897810; extern undefined4 DAT_00897840;
extern unsigned char *DAT_0089a918;
