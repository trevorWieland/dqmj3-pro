#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00154ae0(); extern undefined4 fn_00159e5c(); extern undefined4 fn_00159ec8(); extern undefined4 fn_00163890(); extern int fn_00164198();
extern undefined4 fn_00164a34(); extern undefined4 fn_00164f84(); extern int fn_0016533c(); extern int fn_0016595c(); extern undefined4 fn_00165bb4(); extern byte fn_001667b8();
extern bool fn_001667e0(); extern int fn_0016ba34(); extern undefined4 fn_00174828(); extern undefined4 fn_0017484c(); extern undefined4 fn_001759f8(); extern undefined4 fn_00175a90();
extern int fn_00175ab8(); extern int fn_00175bd0(); extern char * fn_00175be4(); extern undefined4 fn_0017fe34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00164f64; extern undefined4 DAT_00872764; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897800;
extern undefined4 DAT_0089820c;
