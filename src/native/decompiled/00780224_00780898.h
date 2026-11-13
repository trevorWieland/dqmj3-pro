#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015e294(); extern undefined4 fn_00169c08(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_00456160(); extern undefined4 fn_006d0c60();
extern undefined4 fn_006df72c(); extern uint fn_0077fa34(); extern int fn_0077fc60(); extern char * fn_00785c48(); extern int * fn_00786a18(); extern undefined4 fn_007b0d00();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_c8804471;
