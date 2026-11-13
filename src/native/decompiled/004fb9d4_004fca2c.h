#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 fn_004ed2e8(); extern undefined4 * fn_004eddf4(); extern undefined4 fn_004efcf4(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_004f40c0();
extern uint fn_004fb6f8(); extern uint fn_004fe87c(); extern undefined4 fn_00505a04(); extern undefined4 fn_00656e14(); extern undefined4 fn_006d897c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004fc984(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856ea4; extern undefined4 DAT_008bf49c; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4e0;
extern undefined4 DAT_008ee0bc;
