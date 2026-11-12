#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_00124be8(); extern int fn_0013ce04(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00455e10(); extern undefined4 fn_00455e8c();
extern undefined4 fn_0045c8f4(); extern undefined4 fn_0047ef88(); extern int * fn_004b4658(); extern undefined4 fn_0077eb2c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44; extern undefined4 DAT_00853710; extern undefined4 DAT_00853720; extern undefined4 DAT_00853740;
extern undefined4 DAT_0085435c;
