#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00119b40(); extern undefined4 fn_00119b60(); extern undefined4 fn_00129688(); extern undefined4 * fn_0013d4ec();
extern undefined4 fn_00145b00(); extern undefined4 fn_002fec40(); extern undefined4 fn_0066de74(); extern undefined4 fn_0066ec18(); extern void fn_00673ce8(); extern undefined4 fn_006d9250();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00859b90; extern undefined4 DAT_00859be4; extern undefined4 DAT_0085a400;
extern undefined4 DAT_00898860; extern undefined4 DAT_008bf4e0; extern undefined4 DAT_008cfee8; extern undefined4 DAT_008cfeec;
extern undefined4 s_NetworkCommandFriendSearch_008c6ff6;
