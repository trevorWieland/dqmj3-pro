#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_0015e294(); extern undefined4 fn_0015ebe4(); extern undefined4 fn_00169c08(); extern undefined4 fn_004b301c();
extern undefined4 fn_004bab94(); extern undefined4 * fn_004bac20(); extern undefined4 fn_004bd6e4(); extern undefined4 fn_004bdba4(); extern undefined4 fn_0074cbe4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085316c; extern undefined4 DAT_00853740; extern undefined4 DAT_00855a38; extern undefined4 DAT_00855d98;
extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8; extern undefined4 DAT_008e76a0; extern unsigned char *DAT_008e76e4;
