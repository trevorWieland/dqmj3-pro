#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern int * fn_0015e6f0(); extern undefined4 * fn_0015ece0(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0030233c(); extern undefined4 * fn_0047adcc();
extern int fn_0047ae88(); extern undefined4 fn_004b6230(); extern ushort * fn_004bead4(); extern undefined4 fn_0074a528(); extern undefined4 fn_0077700c(); extern undefined4 fn_00778438();
extern undefined4 fn_00778bd0(); extern undefined4 fn_0077ba40();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_00853a50; extern undefined4 DAT_00855a94;
