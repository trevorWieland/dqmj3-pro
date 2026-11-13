#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_001694e4(); extern undefined4 fn_0017d8f8(); extern undefined4 fn_0018a33c(); extern undefined1 * fn_0018b794(); extern undefined4 * fn_00194db0();
extern undefined4 fn_00194ee4(); extern undefined4 fn_00195080(); extern undefined4 * fn_0019533c(); extern undefined4 fn_001960ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00807ce8; extern undefined4 DAT_00812868; extern undefined4 PTR_FUN_00857d6c;
