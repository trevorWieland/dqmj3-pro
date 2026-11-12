#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern undefined4 fn_00146594(); extern int fn_0015e680(); extern undefined4 fn_0015e6d8(); extern int * fn_0015e6f0(); extern undefined4 fn_0015ebe4();
extern int fn_00173bf4(); extern int fn_0017cbdc(); extern int fn_0017d80c(); extern int fn_0017d82c(); extern undefined4 fn_0017d8a4(); extern int fn_0017fe44();
extern undefined4 fn_0030233c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001000c0; extern undefined4 DAT_00855a94; extern undefined4 DAT_008b638a; extern undefined4 DAT_008f3140;
extern undefined4 PTR_LAB_0010414a_1_008526fc;
