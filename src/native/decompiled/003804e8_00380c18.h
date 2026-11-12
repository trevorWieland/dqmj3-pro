#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern undefined4 fn_002b20a4(); extern int fn_002c11d0();
extern undefined4 fn_002c1d14(); extern undefined4 fn_002c1f84(); extern undefined4 fn_002feef8(); extern undefined4 fn_0031ef00(); extern undefined4 fn_0037feb4(); extern undefined4 fn_003804e8();
extern undefined4 fn_00414d6c(); extern undefined4 fn_004309e8(); extern undefined4 fn_00430b08(); extern undefined4 fn_0068ab44(); extern undefined1 fn_006b51cc(); extern uint fn_006bf184();
extern bool fn_006bf34c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008f9cf4;
