#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00();
extern int * fn_001588d4(); extern undefined4 fn_0022f750(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00397618();
extern int fn_00397774(); extern void fn_005970a8(); extern undefined4 fn_0059790c(); extern int fn_006c5b04();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00597798; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00845698; extern undefined4 DAT_00892e74;
extern undefined4 DAT_00892e78; extern undefined4 DAT_00897840; extern undefined4 DAT_008c7611; extern undefined4 DAT_008c765d;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cec; extern undefined4 DAT_008f9cf0; extern undefined4 DAT_008f9cf4;
