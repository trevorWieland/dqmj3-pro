#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_0025e7cc(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined4 fn_0036bfcc();
extern undefined4 fn_0038d4c4(); extern undefined4 fn_0038dad0(); extern undefined4 fn_003cfa24(); extern undefined4 fn_003cfaac(); extern undefined4 * fn_003d0048(); extern undefined4 fn_003d0478();
extern undefined4 fn_003d0ae8(); extern undefined4 fn_003d0b80(); extern undefined4 fn_004042bc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00404244(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008378c4; extern undefined4 DAT_008c765f;
