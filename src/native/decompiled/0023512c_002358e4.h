#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined8 fn_0017821c(); extern undefined4 fn_0020bbc4();
extern undefined4 fn_00230ce8(); extern void fn_00235500(); extern undefined4 fn_00236200(); extern undefined1 * fn_00236ab8(); extern int * fn_0028aad0(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined2 fn_006b6458(); extern int fn_006bfda8(); extern int fn_006c0010();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
