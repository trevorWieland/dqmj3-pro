#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001088e0(); extern bool fn_00154a6c(); extern undefined4 fn_001638a0(); extern undefined4 fn_0018367c(); extern undefined4 fn_001c93c8(); extern undefined4 fn_001d962c();
extern undefined4 fn_001d96a0(); extern bool fn_001d99a0(); extern undefined4 fn_001d9fcc(); extern bool fn_00211f10(); extern bool fn_00279bbc(); extern undefined4 fn_002a6ee8();
extern int fn_002a726c(); extern undefined4 fn_002feef8(); extern undefined4 fn_0035abdc(); extern undefined4 fn_0035b638(); extern undefined4 fn_006ec21c(); extern undefined4 fn_006ec29c();
extern undefined4 fn_006f733c(); extern undefined4 fn_006f7a48(); extern undefined4 fn_006f7a5c(); extern undefined4 fn_006f7a84(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bf890; extern undefined4 DAT_007bf89c; extern undefined4 DAT_008977e0;
