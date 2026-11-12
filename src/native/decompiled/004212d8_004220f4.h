#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00190cdc(); extern undefined4 fn_00190e00(); extern undefined4 fn_001f74ec(); extern undefined4 fn_00252638(); extern undefined4 * fn_002cd364();
extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined4 fn_0038cad8(); extern void fn_004220f4(); extern undefined4 fn_0043c608(); extern undefined4 fn_0043ccf8();
extern undefined4 fn_00689824(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44(); extern undefined4 fn_007486b8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00421840; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083aaf4; extern undefined4 DAT_00892d64;
extern undefined4 DAT_008963ac; extern undefined4 DAT_008c7624;
