#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 * fn_00118290(); extern undefined4 * fn_00118624(); extern int fn_0011c134();
extern undefined4 fn_0011c184(); extern undefined4 fn_0012a26c(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145ac0(); extern uint fn_00147e6c(); extern undefined4 * fn_005f5d3c();
extern int fn_006edd88(); extern undefined4 fn_006ede84(); extern undefined4 fn_006edeb4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad7ac(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00822acc; extern undefined4 DAT_00860a8c; extern undefined4 DAT_00860a94; extern undefined4 DAT_00891220;
extern undefined4 DAT_00891228; extern undefined4 DAT_0089122c; extern undefined4 PTR_LAB_00822af4;
