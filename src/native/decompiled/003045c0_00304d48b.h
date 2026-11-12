#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00117984(); extern undefined4 fn_001283fc(); extern undefined4 fn_00145b00(); extern undefined4 fn_002feef8(); extern undefined4 fn_00304a00(); extern undefined4 fn_005e1b70();
extern undefined4 fn_005e2a6c(); extern undefined4 fn_005e5e5c(); extern undefined4 fn_005e5f50(); extern undefined4 fn_005e6088(); extern undefined4 fn_005e6268(); extern undefined4 fn_005e6fa0();
extern undefined4 fn_005ea270(); extern undefined4 fn_005ea2ac(); extern undefined4 fn_005ea348(); extern undefined4 fn_005efee0(); extern int fn_006eb278(); extern undefined4 fn_006eb610();
extern int fn_006ec6e8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
