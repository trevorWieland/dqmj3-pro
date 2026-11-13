#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_0017d96c(); extern char * fn_001f84ac(); extern undefined4 fn_0020bbc4();
extern int fn_00243834(); extern int fn_00259f5c(); extern undefined4 * fn_0025e920(); extern int * fn_0028aad0(); extern undefined4 fn_002b325c(); extern undefined4 fn_002b427c();
extern undefined4 fn_002b4348(); extern undefined4 * fn_002b44c0(); extern undefined4 fn_002e4414(); extern undefined1 * fn_003061f4(); extern undefined4 fn_00307cc4(); extern undefined4 * fn_0037cf68();
extern undefined4 fn_0069e710(); extern undefined4 fn_0069e748(); extern undefined4 fn_0069e7cc(); extern uint fn_006bf184(); extern bool fn_006bf34c(); extern int fn_006bfda8();
extern undefined4 fn_006bfe90(); extern uint fn_006bfffc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad80c(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00305fc4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00305fa0; extern undefined4 DAT_00305fb8; extern undefined4 DAT_00305fc4; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_008219d4; extern undefined4 DAT_00821a04; extern undefined4 DAT_00897804; extern undefined4 DAT_0089a928;
extern undefined4 PTR_s_MonIcon_00_00893638;
