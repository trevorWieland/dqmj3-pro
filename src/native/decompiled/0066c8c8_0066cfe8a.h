#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00147b74(); extern undefined4 fn_00147be0(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0028b908();
extern undefined4 * fn_00301f50(); extern undefined4 * fn_004b93c4(); extern int * fn_004b93dc(); extern int fn_004bb560(); extern bool fn_0066bd38(); extern char * fn_0066ceec();
extern undefined4 fn_0066eb80(); extern undefined4 fn_0066ec18(); extern undefined4 fn_00673be8(); extern undefined4 fn_007401e4(); extern undefined4 fn_007402d4(); extern undefined4 fn_0074040c();
extern undefined4 fn_0074041c(); extern uint fn_00741410();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0067c0c4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0066ce9c; extern undefined4 DAT_00859a38; extern undefined4 DAT_00859b90; extern undefined4 DAT_00859e58;
extern undefined4 DAT_00897804; extern undefined4 DAT_00898840; extern undefined4 DAT_008cff54; extern undefined4 PTR_FUN_00854c0c;
