#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern undefined4 fn_001638a0(); extern undefined4 fn_00190d78(); extern undefined4 fn_00191580(); extern undefined4 fn_001915c4(); extern undefined1 * fn_001915c8();
extern undefined4 fn_001f7414(); extern undefined4 fn_001f749c(); extern undefined4 fn_0028c0d0(); extern undefined4 fn_0028c0e0(); extern bool fn_0028c2e8(); extern undefined4 fn_0028fad0();
extern undefined4 fn_0036c5f4(); extern undefined4 fn_0042223c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008981b0;
