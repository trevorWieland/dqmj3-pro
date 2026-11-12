#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int * fn_001588d4();
extern undefined4 fn_0016a9b0(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0022f584(); extern undefined4 fn_0023dd30();
extern int fn_00242a30(); extern undefined1 fn_00242b6c(); extern undefined4 fn_002cd59c(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b78c();
extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined * fn_0058417c(); extern undefined4 fn_00689930(); extern int fn_006be0f4(); extern int fn_006bfda8();
extern undefined4 fn_006bfe90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003c6e44; extern undefined4 DAT_003c6e6c; extern undefined4 DAT_007c89e4; extern undefined4 DAT_00893b10;
extern undefined4 DAT_00896748; extern undefined4 DAT_0089674c; extern undefined4 DAT_008969e0; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
