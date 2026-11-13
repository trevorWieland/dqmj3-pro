#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00128744(); extern undefined4 fn_00162d44(); extern undefined4 * fn_00171634(); extern undefined4 fn_001747e8(); extern undefined4 fn_0017fc3c(); extern undefined4 fn_0017fde4();
extern undefined4 fn_001da640(); extern undefined4 fn_001da65c(); extern undefined4 fn_001dd414(); extern undefined4 fn_001e21b0(); extern undefined4 fn_001e2804(); extern undefined4 fn_001ea890();
extern int fn_0023e194(); extern undefined4 fn_0023e640(); extern undefined4 fn_0023f454(); extern undefined4 fn_002a4c38(); extern undefined4 fn_00698fb8(); extern uint fn_006a9938();
extern uint fn_006a99b0(); extern undefined4 fn_006b4cbc(); extern undefined4 fn_006f7358(); extern undefined4 fn_006f7a48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
