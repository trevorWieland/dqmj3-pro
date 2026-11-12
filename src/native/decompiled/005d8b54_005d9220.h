#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_002feef8();
extern undefined4 fn_002ff600(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00303afc(); extern undefined4 fn_007a5bf0(); extern undefined4 fn_007b64b4();
extern undefined4 fn_007b6ef4(); extern undefined4 fn_007b7658(); extern undefined4 * fn_007b8b4c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0065ed4c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084cee8; extern undefined4 DAT_008c6cfc; extern undefined4 DAT_008c6d00;
extern undefined4 DAT_008c6d04; extern undefined4 DAT_008c7611; extern undefined4 DAT_008c765d; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cec; extern undefined4 DAT_008f9cf0; extern undefined4 DAT_008f9cf4; extern undefined4 DAT_008f9fe8;
