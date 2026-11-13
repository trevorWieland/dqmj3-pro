#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern undefined4 fn_001028d4(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern int * fn_001588d4();
extern undefined8 fn_0017821c(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0017d96c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001cab7c(); extern undefined4 fn_001f74ec();
extern undefined4 fn_0020bbc4(); extern undefined4 fn_0022cd58(); extern undefined4 fn_0022eefc(); extern undefined4 fn_0022f750(); extern int fn_0025f9d8(); extern undefined4 fn_00290ba4();
extern undefined4 * fn_002b44c0(); extern undefined4 fn_002c29a0(); extern undefined4 fn_002c330c(); extern undefined4 * fn_00301f50(); extern undefined4 fn_00321118(); extern undefined4 fn_00385b60();
extern undefined4 fn_00391d98(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_003e2a68(); extern undefined4 fn_003e2cbc(); extern undefined1 * fn_003fa974();
extern undefined4 fn_004101f4(); extern undefined4 fn_00410384(); extern undefined1 fn_004103b0(); extern undefined1 fn_004103d8(); extern int * fn_0068897c(); extern int * fn_00689220();
extern undefined4 fn_00689bd0(); extern int fn_006b2aa0(); extern bool fn_006ba220(); extern undefined4 fn_006bfe90(); extern int fn_006ce908(); extern int fn_006ce918();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003f9b2c; extern undefined4 DAT_003f9b40; extern undefined4 DAT_003f9b48; extern undefined4 DAT_003f9b4c;
extern undefined4 DAT_003f9b5c; extern undefined4 DAT_003f9b70; extern undefined4 DAT_003fa924; extern undefined4 DAT_003fa934;
extern undefined4 DAT_003fa948; extern undefined4 DAT_003fa95c; extern undefined4 DAT_003fd6fc; extern undefined4 DAT_003fd70c;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00835ff8; extern undefined4 DAT_0083626c; extern undefined4 DAT_00860454;
extern undefined4 DAT_0086654c; extern undefined4 DAT_00894b34; extern undefined4 DAT_00894b9c; extern undefined4 DAT_00894ba0;
extern undefined4 DAT_008951b8; extern undefined4 DAT_00895410; extern undefined4 DAT_00895414; extern undefined4 DAT_00895418;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
