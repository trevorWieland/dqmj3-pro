#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern int fn_0013cd7c(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined4 * fn_0015ecdc();
extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef4c(); extern bool fn_00454cbc(); extern int fn_00454d74(); extern undefined4 fn_00454da8(); extern undefined4 fn_0045c8f4();
extern undefined4 fn_0045f6f0(); extern undefined4 fn_0046d5f8(); extern undefined4 * fn_0046e6d0(); extern undefined4 fn_0047f194(); extern undefined4 fn_0047fba4(); extern undefined4 fn_004aa248();
extern int * fn_004b4ca4(); extern undefined4 fn_004b4d24(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528(); extern undefined4 fn_0074cd60();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008530ac; extern undefined4 DAT_00853b88; extern undefined4 DAT_008555c0;
