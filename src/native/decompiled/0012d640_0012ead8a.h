#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00113e88(); extern undefined4 fn_00113f40(); extern undefined4 fn_0011c09c(); extern undefined4 fn_0011c0a8(); extern undefined4 fn_00123768(); extern undefined4 fn_00145b00();
extern int * fn_00147974(); extern bool fn_00148c80(); extern undefined4 fn_00148ca4(); extern undefined4 fn_00148d1c(); extern undefined4 fn_00157fb0(); extern undefined4 fn_00158004();
extern undefined4 fn_001581d0(); extern undefined4 * fn_001615f0(); extern int fn_00167500(); extern int * fn_0017d948();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00148920; extern undefined4 DAT_00812c8c; extern unsigned char *DAT_00898898; extern undefined4 DAT_008f9cf4;
