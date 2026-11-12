#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern int fn_002e3bbc(); extern undefined4 fn_002feef8();
extern undefined4 fn_003e6b34(); extern undefined4 fn_003e6db0(); extern undefined4 fn_003e734c(); extern undefined4 fn_0068974c(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003c3ea8; extern undefined4 DAT_003c41d0; extern undefined4 DAT_003c41f8; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00830124; extern undefined4 DAT_008522ec; extern undefined4 DAT_008522f8; extern undefined4 DAT_008968f8;
