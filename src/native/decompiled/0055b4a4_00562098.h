#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001273d0(); extern int * fn_0013c428(); extern undefined4 fn_00141804(); extern undefined4 fn_00150c1c(); extern undefined8 fn_00169f1c();
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined * fn_00172e2c(); extern undefined * fn_00172fc4(); extern int * fn_0017d948(); extern undefined4 fn_001839ac();
extern undefined4 * fn_0018c8e8(); extern undefined4 fn_00196754(); extern undefined4 fn_001a071c(); extern int fn_005558e0(); extern undefined4 fn_005582d8(); extern undefined4 fn_0055b068();
extern undefined4 fn_0055b1c4(); extern undefined4 fn_0055be4c(); extern undefined4 fn_0055befc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001273cc; extern unsigned char *DAT_008c3cc4;
