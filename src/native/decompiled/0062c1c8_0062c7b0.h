#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145adc(); extern int fn_00176dc0(); extern undefined4 fn_0061be08(); extern undefined4 fn_00654efc(); extern int fn_00691af0(); extern undefined4 fn_00692320();
extern int fn_006f33f0(); extern undefined4 fn_006f3f7c(); extern byte fn_006f44fc(); extern bool fn_006f4850();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f0524; extern undefined4 DAT_007f0528; extern undefined4 DAT_007f052c;
