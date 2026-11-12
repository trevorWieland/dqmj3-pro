#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_0016a7c4(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0();
extern undefined4 fn_002caccc(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00305a6c(); extern undefined4 fn_0037ce70();
extern undefined4 fn_0037ce88(); extern undefined4 fn_0037cee4(); extern uint fn_0068f708(); extern int fn_0068f7f8(); extern int fn_006b8478(); extern undefined4 fn_006b85d0();
extern int fn_006bf5ec(); extern int fn_006c02d4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0033b5dc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7611; extern undefined4 DAT_008c7672;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
