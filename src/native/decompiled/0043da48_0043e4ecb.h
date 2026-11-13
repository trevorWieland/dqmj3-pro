#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0022f584(); extern undefined4 fn_00292f20(); extern undefined4 fn_0036e354(); extern void fn_0043e434();
extern undefined4 fn_0068974c(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0043e594; extern undefined4 DAT_0043e5b8; extern undefined4 DAT_0043e614; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0083d36c;
