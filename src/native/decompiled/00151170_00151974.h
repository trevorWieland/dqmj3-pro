#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern uint fn_00147e6c(); extern int fn_0015fa88(); extern uint * fn_00165d44(); extern undefined4 fn_00166ad8(); extern undefined4 fn_0016eb40();
extern undefined4 fn_0016fd14(); extern uint * fn_00175e10(); extern undefined1 fn_001760dc(); extern int fn_00176244(); extern undefined4 * fn_00189790();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0015d0bc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00151554; extern undefined4 DAT_0015155c; extern undefined4 DAT_00151564; extern undefined4 DAT_0015156c;
extern undefined4 DAT_00151574; extern undefined4 DAT_0015157c; extern undefined4 DAT_00151584; extern undefined4 DAT_007d8570;
extern undefined4 DAT_007d8578; extern undefined4 DAT_007d8580; extern undefined4 DAT_00857a40; extern undefined4 PTR_FUN_00857ef0;
