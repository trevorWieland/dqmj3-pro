#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00112e58(); extern int * fn_00147974(); extern int * fn_001588d4();
extern int fn_0016ba34(); extern int fn_00192cb4(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0022da78(); extern undefined4 fn_0022f750();
extern undefined4 fn_00243550(); extern int * fn_0028aad0(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_0031f954();
extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_0068ab44(); extern bool fn_006b6398(); extern int fn_006b8478(); extern undefined4 fn_006b85d0();
extern undefined4 fn_006bfe90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00570cc8; extern undefined4 DAT_00570ce0; extern undefined4 DAT_00570ce4; extern undefined4 DAT_007c6fb0;
extern undefined4 DAT_007c7620; extern undefined4 DAT_007c7628; extern undefined4 DAT_00866ea8; extern undefined4 DAT_00866f04;
extern undefined4 DAT_00866f10; extern undefined4 DAT_008945cc; extern undefined4 DAT_00895964; extern undefined4 DAT_008959a8;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804; extern undefined4 DAT_00898228;
