#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00178f9c(); extern int * fn_001827b0(); extern undefined4 fn_00190d50();
extern undefined4 fn_0022f584(); extern void fn_00308390(); extern void fn_003083fc(); extern undefined4 * fn_003085d0(); extern undefined4 fn_0037fba4(); extern undefined4 fn_0037fc58();
extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ab5c(); extern undefined4 fn_0069e7cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0030853c; extern undefined4 DAT_007c6d14; extern undefined4 DAT_007c6d1c; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00821abc; extern undefined4 DAT_00821aec; extern undefined4 DAT_00864254; extern undefined4 DAT_00864264;
