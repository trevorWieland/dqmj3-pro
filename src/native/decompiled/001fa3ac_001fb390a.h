#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00112f6c(); extern undefined4 fn_0011dda8(); extern undefined4 fn_0011ddb8(); extern undefined4 fn_001221d4(); extern undefined4 fn_00122320(); extern undefined4 fn_00231e10();
extern undefined4 fn_0028a284(); extern undefined4 fn_0028a68c(); extern int * fn_0028aad0(); extern undefined4 fn_002d66fc(); extern undefined4 fn_002d691c(); extern undefined4 fn_002eaabc();
extern undefined4 fn_0030cca8(); extern int fn_0051e26c(); extern bool fn_00662ae8(); extern undefined4 fn_00662bd0(); extern undefined4 fn_00662be4(); extern undefined4 fn_00663ce4();
extern int fn_006b8478(); extern undefined4 fn_006b85d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
