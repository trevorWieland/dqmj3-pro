#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022f584();
extern bool fn_002940c0(); extern undefined4 fn_002feef8(); extern undefined4 fn_0039e5e0(); extern undefined4 fn_0039e7c4(); extern undefined4 fn_0039ecf0(); extern int * fn_00688920();
extern int * fn_0068897c(); extern undefined4 fn_00689210(); extern int * fn_00689280(); extern int fn_006b876c(); extern undefined4 fn_006ba214(); extern int fn_006ba274();
extern undefined4 fn_0079b030(); extern undefined4 fn_0079b33c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0039f1e4; extern undefined4 DAT_0039f208; extern undefined4 DAT_0039f228; extern undefined4 DAT_0039f298;
extern undefined4 DAT_0039f2ac; extern undefined4 DAT_0039f2b8; extern undefined4 DAT_00897804;
