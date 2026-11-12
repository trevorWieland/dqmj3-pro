#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0013ce98(); extern undefined4 fn_0030233c(); extern int fn_0045c774(); extern undefined4 fn_00465808(); extern int fn_00466f1c();
extern undefined4 fn_0046bcb8(); extern int fn_0046bfa0(); extern undefined4 fn_00472008(); extern undefined4 fn_0048c3a4(); extern undefined4 fn_00767400(); extern undefined4 fn_00767a60();
extern undefined4 fn_0077ba40();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852dc4; extern undefined4 DAT_00853628; extern undefined4 DAT_00855bcc; extern unsigned char *DAT_008b6404;
