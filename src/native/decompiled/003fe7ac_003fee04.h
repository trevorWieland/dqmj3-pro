#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int fn_00101a1c();
extern int * fn_001588d4(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001828f0(); extern undefined4 fn_0018a618(); extern undefined4 fn_001c9d44();
extern undefined4 fn_001c9d80(); extern int fn_002298d8(); extern undefined4 fn_0023097c(); extern undefined4 fn_0025bd60(); extern undefined4 fn_002b20a4(); extern undefined4 fn_002c29a0();
extern undefined4 fn_002c330c(); extern undefined4 fn_002c8d7c(); extern undefined4 fn_002c8f50(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c();
extern undefined4 fn_0031b3c4(); extern undefined4 fn_0031b474(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_003e5550(); extern undefined4 fn_003e5ab8();
extern undefined4 fn_003e5b40(); extern undefined4 fn_003e5bc0(); extern undefined4 fn_0059d948(); extern undefined4 fn_0059e040(); extern undefined4 fn_0059e074(); extern undefined4 fn_0059e280();
extern undefined4 * fn_0059e2ac(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern undefined4 fn_006b64b0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0cc(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003febbc; extern undefined4 DAT_003fecf4; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008c7653; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_00836d18;
