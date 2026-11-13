#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int * fn_0013c428(); extern undefined4 fn_00140e98(); extern undefined * fn_00141104(); extern undefined4 fn_001411b8(); extern uint fn_00145604();
extern undefined4 * fn_00158f6c(); extern int * fn_00195964(); extern undefined4 fn_00558e28(); extern undefined4 fn_00558f74(); extern undefined4 fn_00558fec(); extern undefined4 fn_00559ed8();
extern undefined4 fn_0055df30(); extern int fn_0055f20c(); extern int fn_006e2b3c(); extern undefined4 fn_006e2cf0(); extern undefined4 fn_006e3974();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00172f3c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00807cc0; extern undefined4 DAT_00807cd0; extern undefined4 DAT_00807cd6; extern undefined4 DAT_00807cdc;
extern undefined4 DAT_0089a938;
