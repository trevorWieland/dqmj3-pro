#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0011dda8(); extern undefined4 fn_00145b00(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_001c2484(); extern undefined4 fn_001f74ec();
extern undefined4 fn_001f7cac(); extern undefined4 fn_0022f584(); extern undefined4 fn_0026d2e8(); extern undefined4 fn_0026d6bc(); extern int * fn_0026e294(); extern int * fn_0026e378();
extern undefined4 fn_0036c340(); extern undefined4 fn_003a963c(); extern undefined4 * fn_003aa8bc(); extern undefined4 fn_00579c3c(); extern int fn_00579cb4(); extern undefined4 fn_0068974c();
extern undefined4 fn_00689930(); extern undefined4 fn_006899f4(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c(); extern int fn_006b7578(); extern undefined1 fn_006b7584();
extern undefined4 fn_006ba838(); extern undefined4 fn_006f6a08();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d064c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00820178; extern undefined4 DAT_0082decc;
extern undefined4 DAT_00898988; extern undefined4 DAT_00898990; extern undefined4 DAT_00898998; extern undefined4 DAT_008989ac;
extern undefined4 DAT_00898a34; extern undefined4 DAT_00898c24; extern undefined4 DAT_00898c58; extern undefined4 PTR_FUN_0082dda8;
