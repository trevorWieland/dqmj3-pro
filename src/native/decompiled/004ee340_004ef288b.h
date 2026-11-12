#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ecfe0(); extern int fn_004ed5a0(); extern int fn_004ed5b0(); extern undefined4 * fn_004f1628();
extern int fn_007321e0(); extern undefined4 fn_00733d64();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004eee24(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004eefa4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004eef80; extern undefined4 DAT_00856d14; extern undefined4 DAT_008bf4a0; extern undefined4 DAT_008c0634;
extern undefined4 DAT_d8a1482e; extern undefined4 DAT_e0a14821; extern undefined4 DAT_e0a14827; extern undefined4 DAT_e0a1482b;
