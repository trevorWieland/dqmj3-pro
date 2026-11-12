#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00113c58(); extern undefined4 fn_00145b00(); extern undefined4 fn_0025fb7c(); extern undefined4 * fn_0025fb98(); extern undefined4 fn_0028e264();
extern bool fn_002e8098(); extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0068ab44(); extern bool fn_00747fd0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003dcc78(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00831be4; extern undefined4 DAT_00831d84; extern undefined4 DAT_00852304;
extern undefined4 DAT_00893d54;
