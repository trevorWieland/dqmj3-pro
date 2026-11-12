#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_00163890(); extern bool fn_001667f0(); extern bool fn_00166804(); extern undefined4 fn_00174828();
extern undefined4 fn_00174834(); extern undefined4 fn_0017484c(); extern undefined4 fn_00174858(); extern undefined4 fn_00174864(); extern undefined8 fn_0017821c(); extern undefined4 fn_00182988();
extern undefined4 fn_00182e2c(); extern undefined4 fn_00190cdc(); extern undefined4 fn_001c3330(); extern undefined4 fn_001c35e4(); extern void fn_001c3de8(); extern undefined4 fn_001c400c();
extern int fn_0026a548(); extern int fn_0026a574(); extern undefined4 * fn_00301f50(); extern undefined4 fn_00309aa4(); extern undefined4 fn_00313b70(); extern undefined4 fn_00688aa0();
extern undefined4 fn_006a7b78(); extern undefined4 fn_006ebfa0(); extern undefined4 fn_00788f48();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002d3f0c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
