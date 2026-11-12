#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102908(); extern undefined4 * fn_0013d4ec(); extern undefined4 fn_00145b00(); extern undefined4 fn_001828f0(); extern undefined4 fn_0018cbc4(); extern uint fn_001911c4();
extern undefined4 fn_00192f64(); extern undefined4 fn_0019ba04(); extern undefined4 fn_0028e264(); extern void fn_005a715c(); extern undefined4 fn_005cdeb8(); extern int * fn_00688920();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084720c; extern undefined4 DAT_0084721c; extern undefined4 DAT_0088fefc;
extern undefined4 DAT_0088ff04; extern undefined4 PTR_s_appeal_plus_02d__02d_0088ff0c;
