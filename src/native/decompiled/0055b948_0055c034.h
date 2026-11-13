#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150c1c(); extern undefined4 fn_0015def0(); extern undefined4 fn_0015dfc0(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4();
extern undefined * fn_00172e2c(); extern undefined4 fn_0017d90c(); extern undefined4 fn_0017f108(); extern uint fn_001a03e0(); extern int fn_001a2150(); extern int fn_001a2168();
extern undefined8 fn_00301a9c(); extern undefined4 fn_00559b6c(); extern undefined4 fn_00559e34(); extern void fn_0055c034(); extern undefined4 fn_0055c278(); extern undefined4 fn_006e3478();
extern bool fn_006e3e70(); extern undefined4 fn_006e3f20(); extern bool fn_006e40ac(); extern bool fn_006e40cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c3cc4; extern undefined4 DAT_008f3520;
