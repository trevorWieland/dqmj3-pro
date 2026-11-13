#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00166824(); extern undefined4 fn_001c80ac(); extern undefined4 fn_001f74ec(); extern undefined4 fn_002c3d68();
extern undefined4 fn_0036c5f4(); extern undefined4 fn_004144c4(); extern undefined4 fn_005d9ae4(); extern undefined4 * fn_005d9bb0(); extern undefined4 fn_00601670(); extern undefined4 fn_006899f4();
extern undefined4 fn_00689bd0(); extern undefined4 fn_0068ab44(); extern bool fn_006ba220(); extern undefined4 fn_006ba250(); extern undefined4 fn_006ba284(); extern int fn_006e9c1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005b6520; extern undefined4 DAT_005b6a14; extern undefined4 DAT_008485f8; extern undefined4 DAT_00890b08;
extern undefined4 DAT_00890b20; extern undefined4 DAT_00890b2c;
