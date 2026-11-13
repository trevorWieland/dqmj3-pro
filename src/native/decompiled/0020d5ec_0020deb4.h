#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00154ac8(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0020bbc4();
extern bool fn_0020ccdc(); extern undefined4 fn_0020e260(); extern int * fn_0028aad0(); extern int fn_0028b074(); extern undefined4 * fn_00301f50(); extern undefined4 fn_005fcc2c();
extern undefined4 fn_005fccf4(); extern undefined4 fn_005fdbd0(); extern undefined4 fn_005fdf34(); extern undefined4 fn_005fdff8(); extern bool fn_006aedec(); extern bool fn_006b7b34();
extern int fn_006b8478(); extern int fn_006bf0fc(); extern uint fn_006bf184(); extern undefined4 fn_0078742c(); extern int * fn_007874ac(); extern int * fn_0078757c();
extern int * fn_007b5814(); extern undefined4 fn_007b5fa4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0020cd8c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000020; extern undefined4 DAT_00897804;
