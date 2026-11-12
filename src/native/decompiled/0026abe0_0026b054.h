#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00146590(); extern undefined4 fn_00174828(); extern undefined8 fn_0017821c(); extern undefined4 fn_00182988(); extern undefined4 fn_0020bbc4();
extern undefined4 fn_0025f930(); extern int fn_0026a548(); extern undefined4 fn_0026a990(); extern int * fn_0028aad0(); extern int fn_002d399c(); extern undefined4 fn_0042e938();
extern undefined4 fn_0042ec18(); extern undefined4 fn_00619fc4(); extern undefined4 fn_0061a1a4(); extern undefined4 fn_0061a8fc(); extern uint fn_006bf184(); extern undefined1 fn_006bf1d4();
extern undefined4 fn_006bf2b4(); extern int fn_006bf5ec(); extern undefined4 fn_006bfdec(); extern int fn_006c0028(); extern int fn_006c0114();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
