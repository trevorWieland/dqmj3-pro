#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_001008cc(); extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern undefined4 fn_0014e6e4(); extern undefined4 fn_00166a94(); extern undefined4 fn_0016aae0();
extern undefined4 fn_001783bc(); extern undefined1 fn_00178410(); extern undefined4 fn_00178444(); extern undefined4 fn_001785e4(); extern undefined4 fn_00178604(); extern undefined4 fn_00178fb8();
extern undefined4 fn_0017a088(); extern undefined4 fn_0017cb50(); extern undefined4 fn_0017d90c(); extern int * fn_0017d948(); extern undefined4 fn_001808e4(); extern undefined4 fn_00182750();
extern int fn_00182764(); extern int fn_00183970(); extern undefined1 fn_00184c50(); extern undefined4 fn_001851bc(); extern undefined4 fn_0019ba68(); extern undefined4 fn_0019d680();
extern uint * fn_0019e864(); extern undefined4 fn_002fedf4(); extern undefined4 fn_002feef8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001854dc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00169ed0; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008bf5f8; extern undefined4 DAT_008bf5fc;
extern undefined4 DAT_008bf600; extern unsigned char *DAT_008bf604; extern undefined4 DAT_008f9d04;
