#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74d8(); extern int fn_0028a588(); extern undefined4 fn_0028a66c(); extern int * fn_0028aad0(); extern undefined4 fn_0028acf4(); extern undefined4 fn_0028ad18();
extern undefined4 fn_0028b674(); extern int fn_0028b7ac(); extern undefined4 fn_002c37e0(); extern undefined4 fn_002c3e78(); extern undefined4 fn_0031b78c(); extern undefined4 fn_003979f0();
extern undefined4 fn_006899f4(); extern bool fn_006ba220(); extern undefined4 fn_006e69b8(); extern undefined4 fn_006e69c4(); extern undefined4 fn_006e6e4c(); extern undefined4 fn_006e6e58();
extern char fn_006e6e6c(); extern undefined4 fn_006e6ea8(); extern char fn_006e6ebc(); extern undefined4 fn_006e6ef8(); extern int fn_006e70bc(); extern char fn_006e70cc();
extern undefined4 fn_006e73f8(); extern undefined4 fn_006f6a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_00898ce0; extern undefined4 DAT_00898eac; extern undefined4 _DAT_00898d70;
