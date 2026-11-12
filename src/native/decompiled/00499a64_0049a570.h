#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_002ff628();
extern undefined4 fn_0045f7f0(); extern undefined4 fn_0046e0a4(); extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern undefined4 fn_0049b30c(); extern undefined4 * fn_004b73b0();
extern undefined4 fn_004b7520(); extern int * fn_004b8fd4(); extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4(); extern bool fn_004bab34(); extern bool fn_006d3ef4();
extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528(); extern undefined4 fn_0074a598(); extern undefined4 fn_0074a5fc(); extern undefined4 fn_0074af34(); extern undefined4 fn_0074b7d8();
extern undefined4 fn_0074cf38(); extern undefined4 fn_00793a18();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0048e160(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0048e1b4(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_007552f0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00499e30; extern undefined4 DAT_00855170; extern undefined4 DAT_00855770; extern undefined4 DAT_008e66f0;
