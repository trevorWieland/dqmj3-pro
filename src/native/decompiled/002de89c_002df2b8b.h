#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 * fn_00218664(); extern int fn_002b1390(); extern undefined4 fn_002ddadc(); extern undefined4 fn_002de434(); extern uint fn_002ff310();
extern undefined4 fn_0036313c(); extern undefined4 * fn_003632b0(); extern undefined4 fn_00391ccc(); extern undefined4 fn_003979ec(); extern undefined4 fn_003b1830(); extern undefined4 fn_003b1974();
extern bool fn_00660e0c(); extern undefined1 fn_00661040(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689d04(); extern undefined4 fn_006ba284();
extern int fn_006c3970(); extern int fn_006c3984(); extern undefined4 fn_006f6fe8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008206b4; extern undefined4 DAT_008977e0;
