#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_001010c8(); extern bool fn_00156834(); extern int fn_00158844(); extern undefined4 * fn_0015ece0(); extern int fn_0015fa88();
extern undefined4 fn_00164a34(); extern int fn_00165020(); extern int fn_0016533c(); extern undefined4 fn_00165bb4(); extern undefined4 fn_00166518(); extern bool fn_0016658c();
extern bool fn_001667e0(); extern int fn_00173bf4(); extern undefined4 fn_0017484c(); extern undefined4 fn_00183718(); extern int fn_00183840(); extern int fn_0018385c();
extern int fn_002febd8(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
