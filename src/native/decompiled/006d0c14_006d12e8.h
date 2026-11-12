#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern uint fn_00101a50(); extern int fn_00101d80(); extern undefined4 fn_001249d0(); extern int * fn_0015e6f0(); extern undefined4 * fn_00170f54();
extern int fn_0017d82c(); extern int fn_0017fe44(); extern undefined4 fn_00455590(); extern undefined4 fn_0045c8f4(); extern undefined4 * fn_0045f2ec(); extern int fn_0045f3dc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006d0df0; extern undefined4 DAT_007dcf30; extern undefined4 DAT_00852ce0; extern undefined4 DAT_00852db4;
extern undefined4 DAT_00855a94; extern undefined4 DAT_008b6490;
