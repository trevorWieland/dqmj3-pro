#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 * fn_00168a24(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0028ec90();
extern undefined8 fn_00301a9c(); extern undefined4 fn_00307d64(); extern undefined4 fn_0043d3a0(); extern undefined4 fn_0043d884(); extern undefined4 fn_006896fc(); extern undefined4 fn_00689c1c();
extern undefined4 fn_006f6a5c(); extern undefined4 fn_0074879c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004445a0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00444544; extern undefined4 DAT_00859420; extern undefined4 DAT_00893064; extern undefined4 DAT_008930f4;
extern undefined4 DAT_00893c88; extern undefined4 DAT_00893d28; extern undefined4 DAT_00894d28; extern undefined4 DAT_008963ac;
extern undefined4 DAT_008964f4; extern undefined4 DAT_00898214; extern undefined4 PTR_LAB_0083e11c;
