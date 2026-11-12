#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern undefined4 fn_00162d44(); extern undefined8 fn_00169f1c(); extern int fn_00176dc0(); extern undefined4 fn_001969a4();
extern undefined4 fn_002a3268(); extern longlong fn_00300f74(); extern int * fn_00542fec(); extern undefined4 fn_00656b7c(); extern undefined4 fn_00662bd0(); extern int fn_00663d40();
extern int fn_00691af0(); extern undefined4 fn_006f5418();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008bf60c; extern undefined4 DAT_008bf610; extern undefined4 DAT_008bf614;
extern undefined4 DAT_008bf618; extern unsigned char *DAT_008bf62c; extern undefined4 DAT_008c06d0; extern code *DAT_008c06e0;
extern undefined4 DAT_008c06e4;
