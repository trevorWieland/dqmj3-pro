#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_00112e64(); extern int * fn_00147974(); extern int * fn_001588d4(); extern int fn_00192cb4(); extern undefined4 fn_001f74ec();
extern undefined4 fn_00229a50(); extern undefined4 fn_0022f750(); extern int * fn_00241f00(); extern int * fn_00242324(); extern undefined4 fn_002a829c(); extern undefined4 fn_0031b78c();
extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined1 fn_00660ec0(); extern undefined4 fn_006626ac();
extern undefined4 fn_00662950(); extern uint fn_00682bb4(); extern undefined4 fn_00689878(); extern undefined4 fn_0068ab44(); extern bool fn_006b4ed4(); extern bool fn_006b4ee4();
extern bool fn_006b6268(); extern undefined4 fn_006f5bec();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00590fa0; extern undefined4 DAT_005924ec; extern undefined4 DAT_00592500; extern undefined4 DAT_00592504;
extern undefined4 DAT_00592508; extern undefined4 DAT_007c7648; extern undefined4 DAT_007c7650; extern undefined4 DAT_00866ea8;
extern undefined4 DAT_00866f68; extern undefined4 DAT_00866f7c; extern undefined4 DAT_00891a14; extern undefined4 DAT_00895964;
extern undefined4 DAT_008959f4; extern undefined4 DAT_00895df0; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
