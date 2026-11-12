#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern uint fn_00101a50(); extern undefined4 fn_00102908(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00143b48(); extern undefined1 fn_00145aac();
extern undefined4 fn_00145ac0(); extern undefined4 fn_00239ffc(); extern int fn_00257da8(); extern undefined4 fn_00257de0(); extern undefined4 fn_002afd48(); extern undefined4 fn_002afd5c();
extern int fn_002afe44(); extern undefined4 fn_002afe84(); extern undefined4 fn_003433c4(); extern void fn_00343ca8(); extern int fn_006afe90(); extern int fn_006f7770();
extern undefined4 fn_0079b3c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003433b8; extern undefined4 DAT_003433c0; extern undefined4 DAT_008977e0; extern undefined4 s_GT;
extern undefined4 s_W_;
