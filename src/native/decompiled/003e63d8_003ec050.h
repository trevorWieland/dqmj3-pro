#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_001f7424(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f7510();
extern undefined4 fn_0022eefc(); extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00321118(); extern undefined4 fn_00397618();
extern int fn_00397774(); extern undefined4 fn_003e6098(); extern undefined4 fn_003e62bc(); extern undefined4 fn_0068974c(); extern undefined4 fn_00689930(); extern undefined4 fn_00689bd0();
extern undefined4 fn_00689efc(); extern undefined1 fn_006f6a6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e6470; extern undefined4 DAT_003e6474; extern undefined4 DAT_003e6530; extern undefined4 DAT_003e7518;
extern undefined4 DAT_003e7524; extern undefined4 DAT_003ebab8; extern undefined4 DAT_003ebad8; extern undefined4 DAT_003ebaec;
extern undefined4 DAT_003ebb04; extern undefined4 DAT_007c7a34; extern undefined4 DAT_007c7a50; extern undefined4 DAT_007c7a54;
extern undefined4 DAT_00867910; extern undefined4 DAT_00867948; extern undefined4 DAT_008942dc; extern undefined4 DAT_00895c20;
extern undefined4 DAT_00896814; extern undefined4 DAT_00896818; extern undefined4 DAT_008968f8; extern undefined4 DAT_0089783c;
