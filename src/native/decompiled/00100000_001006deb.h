#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern void fn_00100440(); extern undefined4 fn_00100704(); extern char * fn_00100744(); extern undefined4 fn_00146590(); extern undefined4 fn_00147f60();
extern int fn_00156fd8(); extern undefined1 * fn_002feb78(); extern undefined4 fn_002feca8(); extern undefined4 fn_002fecec(); extern undefined4 * fn_002fed80(); extern int * fn_002fedb8();
extern undefined4 fn_002fedf4(); extern int * fn_002feeb0(); extern undefined4 * fn_002feed4(); extern undefined4 fn_002feef8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00100485; extern undefined4 DAT_00100634; extern undefined4 DAT_0085aa34; extern undefined4 DAT_0085ad78;
extern undefined4 DAT_008c3d84; extern undefined4 DAT_008c3d88; extern undefined4 DAT_008c3d8c; extern undefined4 DAT_008c3d90;
extern undefined4 DAT_008c7676; extern undefined4 DAT_008f9c80; extern undefined4 DAT_008f9c84; extern undefined4 DAT_008f9c88;
extern undefined4 DAT_008f9c8c; extern undefined4 DAT_008f9c90; extern undefined4 PTR_FUN_00104130_1_0085ad38; extern undefined4 s_rwstderr_1_008c3d90;
