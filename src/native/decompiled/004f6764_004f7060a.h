#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001694d4(); extern undefined4 fn_004ed514(); extern int fn_004eea84(); extern undefined4 fn_004f15b4(); extern undefined1 * fn_0050a490(); extern int fn_0050b080();
extern undefined4 fn_0050fca4(); extern undefined1 * fn_00517cf0(); extern bool fn_006db038(); extern bool fn_006dbad0(); extern uint fn_006dbaec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4a0; extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4e0; extern undefined4 DAT_008c0678;
