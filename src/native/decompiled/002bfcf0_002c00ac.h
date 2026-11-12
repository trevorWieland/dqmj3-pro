#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00102908(); extern undefined4 fn_00145b00(); extern int fn_00172c98();
extern undefined4 fn_001cab7c(); extern char * fn_001f84ac(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern int * fn_0028b0a0(); extern undefined4 fn_002b427c();
extern undefined4 fn_002b4348(); extern int fn_002c11d0(); extern undefined4 fn_002e3ef4(); extern undefined4 fn_002e3ff4(); extern undefined4 fn_002e40c8(); extern undefined4 fn_003455b0();
extern undefined4 fn_00345ccc(); extern undefined4 fn_0036ee94(); extern undefined4 fn_0036fb74(); extern undefined4 fn_0068b14c(); extern uint fn_006bf184(); extern bool fn_006bf34c();
extern undefined4 fn_006bf5e0(); extern int fn_006bfda8(); extern undefined4 fn_006bfe90(); extern int * fn_0079e0cc(); extern uint * fn_0079e188();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00893b2c; extern undefined4 DAT_00897804;
