#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0020e260(); extern undefined1 fn_0025be70(); extern int fn_0026cda4(); extern int fn_0026cdd0();
extern undefined4 fn_0026cdec(); extern int fn_0028b074(); extern undefined4 * fn_00301f50(); extern undefined1 fn_00378afc(); extern int fn_00378ba8(); extern int fn_00378bbc();
extern int fn_00378bf0(); extern undefined4 fn_005fdbd0(); extern byte fn_00660a7c(); extern undefined1 fn_00661094(); extern int fn_006b8478(); extern undefined4 fn_00770880();
extern int * fn_007874ac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
