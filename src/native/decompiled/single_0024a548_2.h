#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00183718(); extern undefined4 fn_0024ad8c(); extern undefined4 fn_0024ae30(); extern int fn_003711a8();
extern undefined4 fn_00371254(); extern undefined4 fn_00692e98(); extern undefined4 fn_0079c770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern unsigned char *DAT_0024a9c8; extern unsigned char *DAT_008cd540; extern unsigned char *DAT_008cd544; extern unsigned char *DAT_008cd548;
extern unsigned char *DAT_008cd54c; extern unsigned char *DAT_008cd550; extern unsigned char *DAT_008cd554; extern unsigned char *DAT_008cd570;
