#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern undefined4 * fn_0013d3e8(); extern undefined4 fn_0015ebe4(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_00454f8c();
extern undefined4 fn_00455e10(); extern undefined4 fn_004565fc(); extern undefined4 * fn_0046e6d0(); extern undefined4 fn_00479cd8(); extern undefined4 fn_0047f194(); extern undefined4 fn_0048b514();
extern undefined4 fn_004b3044(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b8d6c(); extern undefined4 fn_004b9d60(); extern undefined4 fn_004bbf80(); extern undefined4 fn_004bdba4();
extern int fn_006d3b8c(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528(); extern undefined4 fn_0074cbe4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0075552c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d8c58; extern undefined4 DAT_0085439c; extern undefined4 DAT_008543ec; extern undefined4 DAT_008548a8;
extern undefined4 DAT_00854c68; extern undefined4 DAT_00854ca4; extern undefined4 DAT_00855028; extern undefined4 DAT_008550e4;
extern undefined4 DAT_00855224; extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8; extern undefined4 DAT_008bad3d;
extern undefined4 DAT_008e76a0; extern unsigned char *DAT_008e76e4;
