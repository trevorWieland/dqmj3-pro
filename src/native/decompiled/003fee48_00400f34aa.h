#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_001638a0(); extern undefined4 fn_0018a618(); extern undefined4 fn_0020b914(); extern undefined4 fn_0020bbc4();
extern undefined4 fn_002297bc(); extern undefined4 fn_0022f584(); extern undefined4 fn_00231074(); extern undefined4 fn_00231d50(); extern undefined4 fn_0024e350(); extern undefined4 fn_0024f108();
extern undefined4 fn_00289ec0(); extern undefined1 * fn_002999ac(); extern undefined1 * fn_00299c10(); extern undefined4 fn_002c8f50(); extern int fn_0036c140(); extern undefined4 fn_0036c648();
extern undefined1 * fn_003ff4f8(); extern undefined4 * fn_0059e2ac(); extern int fn_00660d60(); extern undefined4 fn_00689bd0(); extern int fn_006bf5bc(); extern int fn_006bf5c8();
extern int fn_006c0028(); extern int fn_006c0114(); extern int fn_006c02d4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003ff6d4(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003fef9c; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_00836d18;
