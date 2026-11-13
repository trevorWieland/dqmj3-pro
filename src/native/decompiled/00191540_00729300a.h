#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00120f74(); extern undefined4 fn_00121084(); extern undefined4 fn_001210e8(); extern undefined4 fn_00129004(); extern undefined4 fn_001603f8(); extern int * fn_002ceeb8();
extern undefined4 fn_002feef8(); extern undefined4 fn_0030f990(); extern undefined4 fn_0034f07c(); extern undefined4 fn_0068869c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern unsigned char *DAT_00897808; extern unsigned char *DAT_0089780c; extern undefined4 DAT_0089a520; extern undefined4 DAT_0089a524;
