#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern uint fn_0010288c(); extern undefined8 fn_0017821c(); extern undefined4 fn_0019bc50(); extern undefined4 fn_001a46f4(); extern int fn_001c801c();
extern undefined4 fn_0020bbc4(); extern int fn_0020c298(); extern int fn_0020c2c4(); extern undefined4 fn_0020c2e0(); extern bool fn_0020ccdc(); extern undefined4 fn_002101cc();
extern int fn_002429d0(); extern undefined4 fn_0024ef64(); extern int * fn_0028aad0(); extern undefined4 * fn_00301f50(); extern undefined4 fn_005fcc2c(); extern undefined4 fn_005fccf4();
extern undefined1 * fn_005fd484(); extern undefined4 fn_005fdff8(); extern undefined4 fn_0066128c(); extern int fn_006617a8(); extern undefined4 fn_006a82e0(); extern undefined4 fn_006a82f4();
extern bool fn_006aedec(); extern int fn_006bfda8(); extern undefined4 fn_006bfe90(); extern int fn_006c0010();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0020cd8c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0020e25c; extern undefined4 DAT_00897804; extern undefined4 UNK_007c4282;
