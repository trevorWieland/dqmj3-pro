#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_00303564(); extern undefined4 fn_00303810(); extern undefined4 fn_00303b90(); extern void fn_00303ba0(); extern undefined4 fn_0030488c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085aa84; extern undefined4 DAT_0085aa98; extern undefined4 DAT_008c3d9c;
