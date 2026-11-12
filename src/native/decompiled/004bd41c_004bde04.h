#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 * fn_0015ecdc(); extern int fn_004a2a1c(); extern undefined4 fn_004b301c(); extern undefined4 fn_004bab94();
extern undefined4 * fn_004bac20(); extern undefined4 fn_004bc8d0(); extern undefined4 fn_004bd6e4(); extern void fn_004bdba4(); extern undefined4 fn_004bde28(); extern uint fn_006d0df8();
extern int fn_006d3fc4(); extern undefined4 fn_00754688(); extern undefined4 fn_007689d8(); extern undefined4 fn_00769038();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_008b6389;
