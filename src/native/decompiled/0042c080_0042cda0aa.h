#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern char * fn_001f84ac(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern undefined4 fn_002b427c(); extern undefined4 fn_002b4348();
extern undefined4 fn_002e4118(); extern undefined4 * fn_002e42dc(); extern uint fn_006bf184(); extern bool fn_006bf34c(); extern int fn_006bfda8(); extern undefined4 fn_006bfe90();
extern undefined4 fn_0078cb6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_0083ba94;
