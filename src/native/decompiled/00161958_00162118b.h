#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00156328(); extern undefined4 fn_00156794(); extern undefined4 fn_00158690(); extern undefined4 fn_0015e218(); extern undefined4 fn_0015e284(); extern undefined4 fn_00161958();
extern int fn_00161ecc(); extern void fn_001620c8(); extern int * fn_00162118(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_00172d60();
extern int fn_00172edc(); extern undefined4 fn_0017348c(); extern undefined4 fn_00176ac0(); extern undefined4 fn_00176af0(); extern int fn_0018360c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008580b4;
