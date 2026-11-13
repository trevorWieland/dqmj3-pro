#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_002b325c(); extern undefined4 fn_002b427c(); extern undefined4 fn_002b4348();
extern undefined4 * fn_002b44c0(); extern undefined4 fn_002e3c08(); extern undefined4 fn_002e3f6c(); extern undefined4 fn_002e40d8(); extern undefined4 * fn_00301f50(); extern void fn_0042b888();
extern undefined4 fn_0066e4a4(); extern undefined4 fn_0066e5d0(); extern undefined4 fn_0066e640(); extern undefined4 fn_0066e660(); extern undefined4 * fn_007464d8(); extern undefined4 fn_0078cb6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0042b80c(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0042b844(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083ba44; extern undefined4 DAT_0083ba7c; extern undefined4 DAT_00893138;
