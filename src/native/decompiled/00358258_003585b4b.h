#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00176dc0(); extern int fn_00176e70(); extern undefined4 fn_0035826c(); extern undefined4 fn_00358834(); extern undefined4 fn_00654c74(); extern undefined4 fn_00654cc4();
extern undefined1 fn_00661094(); extern uint fn_006aed20(); extern int fn_006b8478(); extern int fn_006b854c(); extern int fn_006bed98(); extern undefined1 fn_006bf0f0();
extern undefined1 fn_006bf1d4(); extern undefined4 fn_006bf24c(); extern int fn_006bf5bc(); extern int fn_006bf5c8(); extern int fn_006bf5ec(); extern int fn_006bfda8();
extern undefined4 fn_006bfdb4(); extern undefined4 fn_006bfe90(); extern int fn_006bff0c(); extern int fn_006c001c(); extern int fn_006c0028(); extern undefined1 fn_006c0108();
extern int fn_006c0114(); extern int fn_006c01f4(); extern int fn_006c0354(); extern int fn_006c09b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
