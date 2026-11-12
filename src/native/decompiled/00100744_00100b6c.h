#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_002febd8(); extern undefined4 fn_002fecb6(); extern undefined4 fn_002fecdc(); extern undefined4 fn_002feef8(); extern undefined8 fn_002ff19c();
extern undefined4 fn_002ff1b4(); extern uint fn_002ff284();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0010118c_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008f9d04;
