#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00100fc6(); extern uint fn_0010288c(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50();
extern char * fn_001f84ac(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern undefined4 fn_0028fe14(); extern undefined4 * fn_0028fec0(); extern undefined4 fn_002b20c0();
extern undefined4 fn_002b325c(); extern undefined4 fn_002b427c(); extern undefined4 fn_002b4348(); extern undefined4 * fn_002b44c0(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined1 * fn_0037dcb8(); extern undefined4 fn_00688ff8(); extern undefined4 fn_0069e710(); extern undefined4 fn_0069e7cc(); extern undefined4 fn_0069e808();
extern uint fn_006bf184(); extern bool fn_006bf34c(); extern int fn_006bfda8(); extern undefined4 fn_006bfe90(); extern uint fn_006bfffc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0037d8d4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0037d490; extern undefined4 DAT_0037d8d0; extern undefined4 DAT_0037dad8; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_008291c0; extern undefined4 DAT_008291f0; extern undefined4 DAT_00893620; extern undefined4 DAT_00897804;
extern undefined4 DAT_0089a928; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
