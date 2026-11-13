#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ecfd0(); extern int fn_0050afe0(); extern undefined4 fn_0050b7b8(); extern undefined4 fn_0050bc40(); extern undefined4 * fn_0050cf00(); extern undefined4 fn_0050ffac();
extern undefined4 fn_0051332c(); extern undefined4 fn_00518bc8(); extern undefined4 fn_00519230(); extern undefined4 fn_00519904(); extern undefined4 fn_0051ba98(); extern undefined4 fn_0051c494();
extern undefined4 fn_0051e00c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857348; extern unsigned char *DAT_008bf4d4;
