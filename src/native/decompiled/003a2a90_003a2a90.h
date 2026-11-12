#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_002043cc(); extern int fn_00247dec(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff600();
extern undefined4 fn_002ff628(); extern undefined4 fn_00303afc(); extern undefined4 fn_007902c0(); extern undefined4 * fn_007a1ca0(); extern undefined4 fn_007a56b4(); extern undefined4 fn_007b642c();
extern undefined4 fn_007b6ca0(); extern undefined4 fn_007b7574();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0065bf50(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c670c; extern undefined4 DAT_00897840; extern undefined4 DAT_008c6cfc; extern undefined4 DAT_008c6d00;
extern undefined4 DAT_008c6d04; extern undefined4 DAT_008c762c; extern undefined4 DAT_008c7670; extern undefined4 DAT_008f9fe8;
