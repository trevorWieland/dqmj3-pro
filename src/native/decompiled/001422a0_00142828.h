#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00141a04(); extern undefined4 fn_00141a68(); extern int * fn_00142448(); extern undefined4 fn_00143ac8();
extern undefined1 fn_0014524c(); extern undefined4 fn_0014ff08(); extern undefined4 fn_001528e8(); extern undefined4 fn_0015d0e0(); extern undefined4 fn_0015d21c(); extern int fn_0015d34c();
extern int fn_0015fa88(); extern undefined4 fn_0016fd44(); extern undefined4 fn_001718c4(); extern int fn_002febd8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c();
extern undefined4 * fn_00301f50();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0015d210(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0015d258(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00142808; extern undefined4 DAT_00142814; extern undefined4 DAT_0014281c; extern undefined4 DAT_00858888;
extern undefined4 DAT_00859470; extern undefined4 DAT_008c7615; extern undefined4 DAT_008f9cf8; extern undefined4 DAT_008f9d04;
