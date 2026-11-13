#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00163988(); extern undefined4 fn_00174828(); extern undefined4 fn_00174834(); extern undefined4 fn_00182988();
extern bool fn_001c2588(); extern undefined4 fn_001c2cac(); extern undefined4 fn_001c41d0(); extern undefined4 fn_0023c1d0(); extern void fn_002d3828(); extern undefined4 fn_005df93c();
extern undefined4 fn_006a7b78();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00826a3c; extern undefined4 DAT_0082ad40; extern undefined4 DAT_0083aeac;
extern undefined4 DAT_0083db78; extern undefined4 DAT_0083db8c; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897808;
extern undefined4 DAT_0089780c;
