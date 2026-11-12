#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001ad038(); extern undefined4 fn_001ad428(); extern undefined4 fn_0052534c(); extern float * fn_0056181c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_008577e0; extern undefined4 DAT_00857804; extern undefined4 DAT_008c0444; extern undefined4 DAT_008c0448;
extern undefined4 DAT_008ecaec; extern undefined4 DAT_008ecaf0; extern undefined4 DAT_008ecaf4; extern undefined4 DAT_008ecaf8;
extern undefined4 DAT_008ecafc; extern undefined4 DAT_008ecb00;
