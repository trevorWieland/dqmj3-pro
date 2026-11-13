#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 * fn_001233c4(); extern int fn_0014d9b8(); extern undefined4 fn_0015e590(); extern undefined4 fn_0044c74c(); extern undefined4 fn_0044d810(); extern int fn_0044e3a0();
extern int fn_0044e3f8(); extern int fn_0044e430(); extern uint fn_00525d68(); extern undefined4 fn_00730a94(); extern undefined4 fn_00731cf0(); extern undefined4 fn_00731dd0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0044c72c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044c71c; extern undefined4 DAT_0044c728; extern undefined4 DAT_0089a658; extern undefined4 DAT_0089a670;
