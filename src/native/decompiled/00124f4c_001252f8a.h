#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00125220(); extern undefined4 fn_00125818(); extern undefined4 fn_0013d6ec(); extern undefined4 fn_0013d6fc(); extern undefined4 fn_0013d71c(); extern int fn_0013ddc8();
extern undefined4 fn_0013dec0(); extern int fn_0013df74(); extern int fn_0013dfb8(); extern int fn_0013dfe0(); extern int fn_0013e008(); extern int fn_0013e068();
extern undefined4 * fn_001502a4(); extern undefined4 fn_0015ff34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a584; extern undefined4 DAT_0089a688; extern undefined4 DAT_008bfbdc; extern undefined4 DAT_008bfbf0;
extern undefined4 DAT_008ef56c; extern undefined4 DAT_008f34bc;
