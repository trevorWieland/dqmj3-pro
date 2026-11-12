#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00101160(); extern int fn_00101d80(); extern undefined4 fn_0015e740(); extern undefined4 fn_0015e9d8(); extern undefined4 fn_0015ea80();
extern undefined4 fn_0015eb44(); extern undefined4 fn_0015ef58(); extern undefined4 fn_00160094(); extern undefined4 fn_001600c4(); extern undefined4 fn_00160190(); extern undefined4 fn_00165ea0();
extern undefined4 fn_00167740(); extern undefined1 * fn_00167edc(); extern undefined4 fn_00168014(); extern undefined1 * fn_00168794(); extern undefined4 fn_00170bb4(); extern undefined4 fn_0030233c();
extern undefined4 fn_00303afc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0014ec58; extern undefined4 DAT_0014ec60; extern undefined4 DAT_007dbc38; extern undefined4 DAT_0085291c;
extern undefined4 DAT_0085748c; extern undefined4 DAT_008b6381; extern undefined4 DAT_008b64e8; extern undefined4 DAT_008b6518;
extern undefined4 DAT_008b651c; extern undefined4 DAT_008b6540; extern undefined4 DAT_008b6544;
