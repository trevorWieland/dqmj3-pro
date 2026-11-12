#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern int fn_001775e8(); extern undefined4 fn_00477090(); extern undefined4 fn_004bc730();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008b637e; extern undefined4 DAT_008b638b; extern undefined4 DAT_008b63d8; extern unsigned char *DAT_008e76e4;
extern undefined4 DAT_008e778c;
