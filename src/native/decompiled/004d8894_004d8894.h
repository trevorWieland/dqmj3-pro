#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined8 fn_00169f1c(); extern undefined1 * fn_004d670c(); extern int fn_004d7bc8(); extern undefined4 fn_004d989c(); extern undefined4 fn_006d4504();
extern longlong fn_006d45f0(); extern undefined1 * fn_006d49a0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008ee0c6; extern undefined4 DAT_008ee0c7; extern undefined4 DAT_008ee0cc; extern undefined4 DAT_008ee0d0;
extern undefined4 DAT_008ee0d4; extern undefined4 DAT_e0a14827;
