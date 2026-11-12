#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145adc(); extern undefined1 fn_001639e4(); extern undefined1 fn_00163a00(); extern undefined1 fn_00163c80(); extern undefined4 fn_001746c0(); extern int fn_00176dc0();
extern longlong fn_00300f74(); extern undefined4 fn_00620630(); extern int fn_00637fd8(); extern int fn_0063a510(); extern int fn_0063a54c(); extern int fn_00691af0();
extern undefined4 fn_006f4044(); extern byte fn_006f44fc(); extern int fn_006f4520(); extern bool fn_006f4850();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f0614; extern undefined4 DAT_007f0618; extern undefined4 DAT_007f061c; extern undefined4 DAT_007f071c;
extern undefined4 DAT_007f08fc; extern undefined4 DAT_007f0900; extern undefined4 DAT_007f0904;
