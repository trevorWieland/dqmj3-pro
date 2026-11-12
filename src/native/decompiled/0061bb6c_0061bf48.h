#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001cab7c(); extern int fn_0025fd54(); extern int fn_0025fd9c(); extern int fn_002697b4(); extern undefined4 fn_006196d8(); extern int fn_00654ee8();
extern undefined4 fn_006924f4(); extern bool fn_0069ccac(); extern bool fn_006f4850();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0017c334; extern undefined4 PTR_LAB_008bf678;
