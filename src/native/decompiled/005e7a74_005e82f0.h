#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001a0b88(); extern undefined4 * fn_001a0ba8(); extern undefined4 fn_002feef8();
extern undefined4 fn_005434c8(); extern undefined4 fn_005df880(); extern undefined4 fn_005e6c08(); extern undefined4 fn_005e7788(); extern undefined4 * fn_005e77a4(); extern int * fn_005e780c();
extern undefined4 fn_005e7a58(); extern undefined4 * fn_005e7ab0(); extern int * fn_005e7b00(); extern undefined4 fn_005e8584(); extern undefined4 * fn_005e85a0(); extern int * fn_005e860c();
extern undefined4 fn_005e8bb0(); extern undefined4 fn_005e8e18(); extern int * fn_005e8e90(); extern int * fn_005e8ee0(); extern undefined4 fn_005e8f10(); extern undefined4 * fn_005e8f2c();
extern int * fn_005e8f88(); extern int fn_005ea33c(); extern undefined4 fn_005ea5ec(); extern int fn_00757e04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00858c24; extern undefined4 DAT_00858c4c; extern undefined4 DAT_00858ca4;
extern undefined4 PTR_FUN_00858ae8;
