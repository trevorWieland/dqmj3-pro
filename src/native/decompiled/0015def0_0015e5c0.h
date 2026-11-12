#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00123ad0(); extern undefined4 fn_0013c920(); extern undefined4 fn_00146594(); extern undefined4 fn_00147e54(); extern undefined4 fn_0014ddec(); extern undefined4 fn_0014e3e4();
extern undefined4 fn_0015e1b0(); extern void fn_0015e294(); extern int fn_001708fc(); extern int fn_00170934(); extern int fn_0017099c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00170040; extern undefined4 DAT_0089a79c; extern undefined4 DAT_008bfbb4; extern undefined4 DAT_008c0328;
extern undefined4 DAT_008c0334; extern undefined4 DAT_008ef530; extern undefined4 DAT_1ff80014;
