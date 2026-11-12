#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_001da640(); extern undefined4 fn_001ea890(); extern undefined4 fn_0023dd30(); extern undefined4 fn_0023ddec(); extern undefined4 fn_0023e2ac();
extern undefined4 fn_0025988c(); extern undefined4 fn_002aac5c(); extern undefined4 fn_002cd59c(); extern undefined4 fn_006a7cb0(); extern undefined4 fn_006a7cbc(); extern int fn_006aa538();
extern undefined4 fn_006acefc(); extern undefined4 fn_006bd784(); extern undefined4 fn_006bd7f4(); extern undefined4 fn_006bd864(); extern undefined4 fn_006f7a48(); extern undefined4 fn_006f7a70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008917f0; extern undefined4 DAT_008917f4; extern undefined4 DAT_008977e0;
