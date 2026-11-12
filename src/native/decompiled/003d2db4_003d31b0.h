#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001828f0(); extern undefined4 fn_0020bbc4(); extern int fn_002429d0(); extern int * fn_0028aad0();
extern undefined4 fn_002ff628(); extern undefined4 fn_00423200(); extern undefined4 fn_00423218(); extern undefined4 fn_004233e8(); extern undefined4 fn_006a82f4(); extern int fn_006bfda8();
extern int fn_006c0010();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00831328; extern undefined4 DAT_0083af1c; extern undefined4 DAT_00897804; extern undefined4 DAT_008c761a;
