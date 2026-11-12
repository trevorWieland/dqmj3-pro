#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 fn_001639e4(); extern undefined1 fn_00163a00(); extern undefined4 fn_001746c0(); extern undefined4 fn_00618b44(); extern undefined4 fn_0061be08(); extern int fn_006228ac();
extern undefined4 fn_0062454c(); extern int fn_0062a40c(); extern undefined4 fn_00654c08(); extern undefined4 fn_00654e54(); extern undefined4 fn_006558e4(); extern undefined4 fn_00655a88();
extern uint fn_00691dcc(); extern byte fn_006f44fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf6b4;
