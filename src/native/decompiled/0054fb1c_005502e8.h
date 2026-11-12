#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0054df04(); extern undefined4 fn_0054e2f0(); extern undefined4 fn_0054ec64(); extern undefined4 fn_0054f158(); extern undefined4 fn_005506e0();
extern undefined4 fn_005507c4(); extern undefined4 fn_00560974(); extern undefined4 fn_006e1ee8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0054d22c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085ae90; extern undefined4 DAT_0085aea8; extern undefined4 DAT_0085aeb8; extern undefined4 DAT_0085aed0;
