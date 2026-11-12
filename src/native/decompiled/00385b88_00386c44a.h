#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022cdb4(); extern undefined4 fn_0022cdf0(); extern undefined4 fn_0022cecc(); extern undefined4 * fn_0022cfac();
extern undefined4 fn_0022f818(); extern undefined1 fn_003492bc(); extern undefined4 * fn_003868d0(); extern undefined4 fn_003bbdc0(); extern undefined4 fn_003bbde0(); extern int * fn_00688920();
extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00385f30; extern undefined4 DAT_003861c8; extern undefined4 DAT_00812c8c; extern undefined4 PTR_FUN_00829c48;
