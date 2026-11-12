#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102cc8(); extern undefined4 fn_00146590(); extern char fn_0015a394(); extern bool fn_0016678c(); extern undefined4 fn_0018550c(); extern undefined4 fn_001912b0();
extern undefined4 fn_0019ba68(); extern uint * fn_0019e864(); extern longlong fn_001a531c(); extern int fn_001a5350(); extern undefined4 fn_001a7368(); extern undefined4 fn_001a7410();
extern undefined4 fn_001a759c(); extern undefined4 * fn_001a8b1c(); extern undefined4 fn_001a931c(); extern undefined4 fn_001a93d4(); extern uint fn_001a9c90(); extern undefined4 fn_001ac0f8();
extern int fn_001ac354();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001854dc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00179350; extern undefined4 DAT_0017935c; extern undefined4 DAT_00179364; extern undefined4 DAT_0017936c;
extern undefined4 DAT_0089814c; extern undefined4 DAT_00898150; extern undefined4 DAT_008cfddc; extern undefined4 DAT_008f9d08;
