#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int fn_0022730c(); extern undefined4 fn_0022de40(); extern undefined4 fn_00231d50();
extern undefined4 fn_0028bc24(); extern undefined4 fn_00368c90(); extern undefined4 fn_003690f4(); extern undefined4 fn_0058b420(); extern undefined4 fn_005f1940(); extern int fn_006616e0();
extern bool fn_006b7b34(); extern uint fn_006b7e5c(); extern uint fn_006b7e90(); extern int fn_006f7770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008438a0; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
