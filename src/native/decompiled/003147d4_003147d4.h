#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0020ae1c(); extern int fn_0020afdc(); extern undefined4 fn_0020aff8(); extern int fn_0020b058(); extern int fn_0020b108(); extern int fn_0020b20c();
extern int fn_0020b248(); extern int fn_0020b2bc(); extern int fn_0020b2d8(); extern int fn_0020b2f4(); extern undefined4 fn_00314450(); extern undefined4 fn_003152c8();
extern bool fn_003153ac(); extern undefined4 fn_00339f84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008923b4; extern undefined4 DAT_008923b8; extern undefined4 DAT_00892460;
