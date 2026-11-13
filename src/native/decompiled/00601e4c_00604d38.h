#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern int * fn_00147974();
extern int * fn_001588d4(); extern undefined4 fn_0015b0f8(); extern undefined4 * fn_00168a24(); extern int fn_00177c88(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74ec();
extern undefined4 fn_0022f750(); extern undefined4 fn_002f6fa8(); extern undefined4 fn_002f70cc(); extern undefined1 fn_002f8914(); extern undefined4 fn_002fdf94(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern int fn_00397774(); extern undefined * fn_0057dd9c(); extern undefined4 fn_005d45b8(); extern undefined4 fn_005d46a0();
extern undefined4 fn_005d4710(); extern int fn_006cd734(); extern undefined4 fn_007b9478();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f4c78; extern undefined4 DAT_00601f50; extern undefined4 DAT_00601f54; extern undefined4 DAT_006027d4;
extern undefined4 DAT_006027d8; extern undefined4 DAT_006027e8; extern undefined4 DAT_00602a74; extern undefined4 DAT_00602a88;
extern undefined4 DAT_00602a90; extern undefined4 DAT_00602df4; extern undefined4 DAT_00602df8; extern undefined4 DAT_00602e0c;
extern undefined4 DAT_0084f3a8; extern undefined4 DAT_00892ee4; extern undefined4 DAT_008c6666; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_s_racetime_007c60e4;
