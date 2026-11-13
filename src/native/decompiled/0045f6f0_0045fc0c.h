#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_00101144(); extern short * fn_0010313a(); extern undefined4 fn_0014f1bc(); extern undefined4 fn_00156284(); extern int * fn_0015e6f0(); extern undefined4 * fn_0015ece0();
extern undefined4 fn_0015ef4c(); extern undefined4 * fn_00170f54(); extern int fn_00170fa4(); extern int fn_0017d82c(); extern int fn_0017fe44(); extern undefined4 * fn_00301f50();
extern bool fn_00454b8c(); extern undefined4 fn_00479d74(); extern undefined4 fn_00479da4(); extern undefined4 * fn_00479e68(); extern int * fn_00479ea0(); extern undefined4 fn_004b62bc();
extern int fn_004b63a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_00852db4; extern undefined4 DAT_00855a94; extern undefined4 DAT_008b63bc;
extern undefined4 DAT_008e7784;
