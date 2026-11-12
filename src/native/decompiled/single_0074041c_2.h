#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined8 fn_001b8438(); extern undefined4 fn_00481eb0(); extern undefined4 * fn_00482070(); extern undefined4 fn_0048cc04(); extern undefined4 fn_004b8d90();
extern int fn_006d3b8c(); extern undefined4 fn_007407d4(); extern int fn_00741220();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern unsigned char *DAT_007d5eef; extern unsigned char *DAT_00899ea8; extern unsigned char *DAT_00899eac; extern unsigned char *DAT_00899eb0;
extern unsigned char *DAT_008d188c;
