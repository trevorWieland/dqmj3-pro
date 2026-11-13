#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_0017821c(); extern undefined8 fn_00301a9c(); extern undefined8 fn_004dd960(); extern undefined8 fn_004de2b4(); extern undefined8 fn_004de680();
extern undefined8 fn_004de848(); extern undefined1 fn_004de850(); extern undefined1 fn_004de888(); extern undefined1 * fn_004de8b8(); extern undefined4 fn_004e7740(); extern longlong fn_004e79ac();
extern undefined4 fn_0066eb80(); extern void fn_0067253c(); extern undefined4 fn_00673be8(); extern bool fn_00673f7c(); extern undefined1 * fn_006d565c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00124db8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ce980; extern undefined4 DAT_007ce986; extern undefined4 DAT_00898840; extern undefined4 DAT_008bf504;
