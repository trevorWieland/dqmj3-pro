#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001237bc(); extern undefined4 fn_0013c674(); extern undefined4 fn_00158ef8(); extern undefined4 fn_0015e294(); extern undefined4 fn_0015ebe4(); extern undefined4 * fn_0015ece0();
extern undefined8 fn_00169f1c(); extern int fn_001775e8(); extern uint fn_00453e70(); extern undefined4 fn_00479c98(); extern undefined4 fn_0048e3cc(); extern undefined4 fn_0048e548();
extern undefined4 fn_0048ec8c(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_0052c888(); extern undefined4 fn_0052d284();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0048e3c0; extern undefined4 DAT_00853500; extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8;
extern undefined4 DAT_008e6a9c; extern undefined4 DAT_008e6aa0; extern undefined4 PTR_FUN_00853bd8;
