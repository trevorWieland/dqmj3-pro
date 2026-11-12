#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern ulonglong fn_00169c20(); extern undefined4 fn_004ed050(); extern undefined4 fn_004ed068(); extern undefined4 fn_004ed098(); extern undefined4 fn_004ed0e4(); extern int fn_004ed810();
extern undefined4 fn_004f01f4(); extern undefined4 * fn_004f0ce8(); extern uint fn_0050f08c(); extern uint fn_0050f320(); extern uint fn_0050f384(); extern uint fn_0050f4d8();
extern uint fn_0050f57c(); extern uint fn_0050f7e8(); extern uint fn_0050f9a0(); extern undefined4 fn_005196a0(); extern undefined4 fn_0051da28(); extern undefined4 fn_006d88c8();
extern undefined4 fn_006db318();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf49c; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008c0690; extern undefined4 DAT_e0a14827;
