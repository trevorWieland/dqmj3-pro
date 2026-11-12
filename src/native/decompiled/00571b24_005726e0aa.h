#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int fn_002febd8();
extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined8 fn_00301b24(); extern undefined4 * fn_00571f88();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00571eb0; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c7611; extern undefined4 DAT_008c7615;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 DAT_008f9cf8; extern undefined4 DAT_008f9d04;
extern undefined4 UNK_00571eb1;
