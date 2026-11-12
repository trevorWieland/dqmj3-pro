#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_002ff628(); extern uint fn_00578c58(); extern undefined4 fn_00578cc8();
extern undefined4 fn_00578d34(); extern undefined4 fn_005797d8(); extern undefined4 fn_005a789c(); extern undefined4 fn_005a7abc(); extern void fn_005a7b94(); extern void fn_005a80dc();
extern void fn_005a830c(); extern void fn_005a83b0(); extern void fn_005a83f0(); extern undefined4 fn_00608ecc(); extern undefined4 fn_00608f3c(); extern undefined4 fn_00608fe0();
extern undefined4 fn_006090e8(); extern int fn_0060917c(); extern undefined1 fn_006e8314(); extern undefined4 fn_006ef104();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005a8288(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005a77f8; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c7669;
