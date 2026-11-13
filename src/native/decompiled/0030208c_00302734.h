#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_002fea64(); extern undefined4 fn_002ff628(); extern undefined * fn_002ff798(); extern void fn_00302644();
extern undefined8 fn_00302658(); extern undefined4 fn_003026a4(); extern undefined4 fn_00302bb8(); extern undefined4 fn_0040150c(); extern undefined4 fn_00401510();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008917a4; extern undefined4 DAT_008c7645; extern undefined4 DAT_008c765c;
