#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_0016947c(); extern undefined4 fn_0016a9b0(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001a46f4(); extern undefined4 fn_001cac80();
extern undefined4 fn_001e18a8(); extern undefined4 fn_001ea890(); extern int fn_00242910(); extern undefined1 fn_00242b0c(); extern undefined1 fn_00242b6c(); extern undefined4 fn_0025988c();
extern undefined4 fn_002a55d4(); extern int fn_002aad7c(); extern undefined4 fn_00683320(); extern undefined4 fn_0069311c(); extern undefined4 fn_00698fb8(); extern uint fn_006a99b0();
extern int fn_006aa538(); extern undefined4 fn_006ab190(); extern undefined4 fn_006afea4(); extern undefined4 fn_006b4cbc(); extern undefined4 fn_006b4ef8(); extern bool fn_006ccf88();
extern undefined4 fn_006f7358(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f7984(); extern undefined4 fn_006f7a0c(); extern int fn_006f7c20();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_008977e0;
