#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 * fn_001129d0(); extern undefined4 fn_0012d73c(); extern undefined4 fn_0012f208(); extern undefined4 fn_00145b00();
extern undefined4 fn_001638a0(); extern undefined4 fn_001f8424(); extern int fn_00242950(); extern int fn_00264f50(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0068c6ac();
extern int fn_006adb24(); extern int fn_006adb48(); extern undefined4 fn_00785f5c(); extern undefined4 fn_00785fc4(); extern int * fn_007860fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081df60; extern undefined4 DAT_0081df70; extern undefined4 DAT_008977e8;
