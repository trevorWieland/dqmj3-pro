#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00158004(); extern undefined4 fn_001580cc(); extern undefined8 fn_0017821c(); extern undefined4 fn_0021f144(); extern bool fn_00227398();
extern undefined4 fn_002277d8(); extern undefined4 fn_00227ba0(); extern undefined4 fn_00269b38(); extern undefined4 fn_00279ae4(); extern int * fn_0028b0a0(); extern undefined4 fn_002c4694();
extern undefined4 fn_002d6900(); extern uint fn_002e2c10(); extern undefined4 fn_002e2d98(); extern undefined4 fn_002e2e20(); extern undefined4 fn_002e2ea4(); extern byte fn_002e31e4();
extern uint fn_002e3204(); extern undefined4 * fn_00301f50(); extern bool fn_00341930(); extern bool fn_00341bf0(); extern undefined4 fn_00682a8c(); extern undefined4 fn_006ad6cc();
extern undefined1 fn_006b51cc(); extern bool fn_006b7b34(); extern int fn_006b83e4(); extern int fn_006b8574(); extern int fn_006b8668(); extern uint fn_006bc5dc();
extern undefined4 fn_006f72b4(); extern undefined4 fn_006f751c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0081d450[]; extern unsigned char DAT_0081e02c[]; extern unsigned char DAT_0081e258[]; extern undefined4 DAT_008924bc;
extern undefined4 DAT_00892824; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 DAT_00897818; extern undefined4 DAT_00897820;
extern unsigned char *DAT_00897894; extern undefined4 DAT_00898898;
