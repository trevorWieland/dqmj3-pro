#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001c80ac(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c3d68(); extern undefined4 fn_002ff628(); extern undefined4 fn_0036c5f4();
extern int fn_005cea40(); extern undefined4 fn_005cefa0(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689bd0(); extern undefined4 fn_0068ab44(); extern bool fn_006ba220();
extern undefined4 fn_006ba250(); extern undefined4 fn_006ba284(); extern bool fn_006e9714();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005aad7c; extern undefined4 DAT_005aae08; extern undefined4 DAT_00890b08; extern undefined4 DAT_008c7632;
