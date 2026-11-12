#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern char * fn_001f84ac(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern undefined4 fn_002b325c(); extern undefined4 fn_002b427c();
extern undefined4 fn_002b4348(); extern undefined4 fn_002e4414(); extern undefined1 * fn_0030749c(); extern void fn_00307a1c(); extern undefined4 fn_0069e710(); extern undefined4 fn_0069e748();
extern uint fn_006bf184(); extern bool fn_006bf34c(); extern int fn_006bfda8(); extern undefined4 fn_006bfe90(); extern uint fn_006bfffc(); extern bool fn_006c0334();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00821a78; extern undefined4 DAT_00893780; extern undefined4 DAT_00893784; extern undefined4 DAT_00893788;
extern undefined4 DAT_0089378c; extern undefined4 DAT_00893790; extern undefined4 DAT_00897804;
