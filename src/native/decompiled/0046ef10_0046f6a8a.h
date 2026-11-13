#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001775e8(); extern undefined4 fn_0047e514(); extern undefined4 * fn_0048d330(); extern undefined4 fn_004b7748(); extern undefined4 fn_00769f74(); extern undefined4 fn_0076a024();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085318c; extern undefined4 DAT_0085319c; extern undefined4 DAT_00853740; extern undefined4 DAT_00853b98;
extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8; extern undefined4 DAT_008e9304; extern undefined4 DAT_008e9308;
extern undefined4 PTR_FUN_00853120; extern undefined4 PTR_LAB_008533fc;
