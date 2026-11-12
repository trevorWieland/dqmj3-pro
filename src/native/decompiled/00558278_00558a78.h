#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00126800(); extern undefined4 fn_001271e8(); extern undefined4 fn_0013c3d8(); extern undefined4 fn_00140e98(); extern undefined * fn_00141104(); extern undefined4 fn_001411b8();
extern undefined4 fn_00146594(); extern int fn_0014d9ec(); extern int fn_0014da74(); extern undefined4 fn_0015cf8c(); extern undefined4 fn_0015def0(); extern undefined4 fn_0015e590();
extern undefined8 fn_0017821c(); extern undefined4 fn_0017d90c(); extern int * fn_0017d948(); extern uint fn_0052db94(); extern undefined4 fn_005579dc(); extern undefined4 fn_00557bec();
extern undefined4 fn_00557e4c(); extern undefined4 fn_00557f84(); extern undefined4 fn_00558104(); extern undefined4 fn_0055b900(); extern undefined4 fn_0055c448();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812968;
