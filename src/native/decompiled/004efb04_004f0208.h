#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f40(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern undefined4 fn_004efb40(); extern undefined4 fn_004f01f4();
extern undefined4 fn_004f0aa0(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_004f1470(); extern undefined4 fn_004f1514();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856d58; extern undefined4 DAT_008bf49c; extern undefined4 DAT_008c0668;
