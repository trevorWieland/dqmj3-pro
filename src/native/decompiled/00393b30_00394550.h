#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_002305a4(); extern undefined4 fn_002b1f0c();
extern undefined4 fn_002b1fa0(); extern undefined4 fn_002e3c08(); extern undefined4 fn_002e3d70(); extern undefined4 fn_002e3f6c(); extern undefined4 fn_002e4004(); extern undefined4 fn_002e40d8();
extern undefined4 fn_002e4118(); extern undefined4 * fn_002e42dc(); extern undefined4 * fn_002e4388(); extern undefined4 fn_002feef8(); extern undefined4 * fn_0037e2ac(); extern void fn_00393e88();
extern int * fn_005517dc(); extern undefined4 fn_0069e710(); extern undefined4 fn_0069e7cc(); extern undefined4 fn_0078cb6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003941f0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00394178; extern undefined4 DAT_0039418c; extern undefined4 DAT_00394500; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0082b5bc; extern undefined4 DAT_008634b8; extern undefined4 DAT_008634c4; extern undefined4 DAT_008634d0;
extern undefined4 DAT_008634dc; extern undefined4 DAT_0089341c; extern undefined4 DAT_00893420; extern undefined4 DAT_00893424;
extern undefined4 DAT_00893428; extern undefined4 DAT_0089a930; extern undefined4 PTR_FUN_0082b588;
