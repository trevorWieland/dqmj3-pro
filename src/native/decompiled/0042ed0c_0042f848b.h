#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00121838(); extern undefined4 fn_001218d4(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00178f9c();
extern int * fn_0017dd54(); extern undefined4 fn_001923e0(); extern int fn_0034514c(); extern int * fn_0068897c(); extern undefined4 fn_00688c04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0042f5ac; extern undefined4 DAT_0042f5b4; extern undefined4 DAT_00893f70; extern undefined4 DAT_00893f74;
extern undefined4 DAT_00893f88; extern undefined4 DAT_00897800; extern undefined4 DAT_0089878c;
