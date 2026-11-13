#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102cc8(); extern int fn_0018388c(); extern undefined4 fn_0019d970(); extern undefined4 fn_001a2b54(); extern int fn_001a5350(); extern undefined4 fn_001a5c18();
extern undefined4 fn_001a6fac(); extern int fn_001a72b0(); extern undefined4 fn_001a759c(); extern undefined4 fn_001a7908(); extern undefined4 fn_001a7968(); extern undefined4 fn_001a8854();
extern int * fn_001a9170(); extern int fn_001a9704(); extern undefined4 fn_001a9808(); extern uint fn_001a9c90();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001a3150; extern undefined4 DAT_001a3510; extern undefined4 DAT_007edbcc; extern undefined4 DAT_008f9d08;
