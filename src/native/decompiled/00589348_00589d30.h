#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001c7228(); extern undefined4 fn_001c72c0(); extern undefined4 fn_00214640(); extern undefined4 fn_00214c4c();
extern undefined4 fn_00215d9c(); extern undefined4 fn_00215e38(); extern undefined4 fn_0021718c(); extern undefined4 fn_002fdeac(); extern undefined4 fn_002fe164(); extern undefined4 fn_002fe2c0();
extern void fn_00589348(); extern undefined4 fn_00589654(); extern int fn_006b0d10(); extern undefined4 fn_006bb518(); extern undefined4 fn_006bb538(); extern undefined4 fn_006bd414();
extern undefined4 fn_006bd500();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00589af0;
