#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_0011c184();
extern undefined4 fn_0012d6b0(); extern undefined4 fn_0012d73c(); extern undefined4 * fn_0012ebb4(); extern undefined4 * fn_0012f110(); extern undefined4 fn_0013ae4c(); extern int * fn_0013aee8();
extern undefined4 fn_001482f4(); extern undefined4 fn_00148e1c(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00147d74(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858878; extern undefined4 DAT_00896cc0; extern undefined4 DAT_008987bc; extern undefined4 DAT_008987c0;
extern undefined4 DAT_008c7611; extern undefined4 DAT_008cd180; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
