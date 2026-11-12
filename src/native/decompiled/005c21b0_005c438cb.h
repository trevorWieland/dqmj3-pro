#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144834(); extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern int fn_0016ba34(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c3d68();
extern undefined4 fn_002c4304(); extern undefined4 fn_00321118(); extern int fn_0036c140(); extern undefined4 fn_0036c648(); extern int fn_00397a0c(); extern undefined4 fn_005c44cc();
extern undefined4 fn_006083b8(); extern undefined4 fn_00689824(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689b18(); extern undefined4 fn_00689bd0();
extern undefined4 fn_00689d04(); extern int fn_006b2aa0(); extern bool fn_006ba220(); extern undefined4 fn_006ba250();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005c3d80; extern undefined4 DAT_005c3db0; extern undefined4 DAT_005c3e1c; extern undefined4 DAT_005c3e48;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084a4b8; extern undefined4 DAT_008591b0; extern undefined4 DAT_00897800;
extern undefined4 DAT_00897804; extern undefined4 DAT_00898230; extern undefined4 DAT_00898f2c; extern undefined4 DAT_00898f38;
