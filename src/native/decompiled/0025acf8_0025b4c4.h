#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_0010b2b4(); extern undefined4 fn_0010fa20(); extern int fn_00114150(); extern undefined4 fn_00114248(); extern undefined4 fn_00117668();
extern undefined4 fn_00117984(); extern undefined4 * fn_00118290(); extern undefined4 fn_0011a314(); extern undefined4 fn_0011a36c(); extern undefined4 fn_0011a3c4(); extern undefined4 fn_0011c184();
extern undefined4 fn_00123d00(); extern undefined4 * fn_001287b4(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00145b00(); extern int fn_00173a34(); extern undefined8 fn_0017821c();
extern undefined4 fn_00185320(); extern undefined4 fn_001a0b50(); extern undefined4 fn_002feef8(); extern undefined4 fn_00304018(); extern undefined4 fn_00304084(); extern undefined4 fn_0030417c();
extern undefined4 fn_003042bc(); extern undefined4 fn_00304540(); extern undefined4 fn_005e9800(); extern undefined4 fn_005e9894(); extern undefined4 * fn_005e9d6c(); extern undefined4 fn_005eec08();
extern undefined8 fn_00691514();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0025b128(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ce624; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081d830;
