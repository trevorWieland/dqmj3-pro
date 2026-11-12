#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00154ac8(); extern undefined4 fn_001638a0(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001cac64(); extern undefined4 fn_001d6b00(); extern undefined4 fn_001d9bb4();
extern undefined4 fn_001ea890(); extern undefined4 fn_001eab44(); extern undefined1 fn_00242b0c(); extern int fn_00242b4c(); extern undefined4 fn_0025988c(); extern undefined4 fn_0025a2ac();
extern undefined4 fn_002cd6b0(); extern undefined4 fn_00683320(); extern int fn_006aa538(); extern int fn_006b4240(); extern undefined4 fn_006baaf4(); extern undefined1 fn_006bab38();
extern bool fn_006bab48(); extern undefined4 fn_006f7388(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
