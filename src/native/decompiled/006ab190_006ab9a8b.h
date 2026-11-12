#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_002fbd30(); extern uint fn_003035b0(); extern int fn_006afaf4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007be7a0; extern undefined4 DAT_00860adc; extern undefined4 DAT_008977e0; extern undefined4 PTR_s_bf_H00_00_007be7a4;
