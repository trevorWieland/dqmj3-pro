#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00103624(); extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined4 fn_003035a0();
extern undefined4 fn_003040d8(); extern undefined4 fn_003040f4(); extern undefined4 fn_0030488c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104280_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082189c; extern undefined4 DAT_00897804; extern undefined4 DAT_008c3dbc;
extern undefined4 DAT_008f7d44; extern undefined4 DAT_008f7d98; extern undefined4 DAT_008f7dec; extern undefined4 s_possix__C_get_mode_not_supported_008c6cd8;
