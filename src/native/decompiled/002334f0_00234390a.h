#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00144810(); extern undefined4 fn_0017fcfc(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001cc324(); extern uint fn_001cc480();
extern undefined4 fn_001cc890(); extern undefined4 fn_001ccc2c(); extern undefined4 fn_00232e34(); extern undefined4 fn_00233014(); extern int fn_0023b858(); extern undefined4 fn_00303afc();
extern undefined4 fn_00664c4c(); extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068e960(); extern undefined4 fn_0068f4ac(); extern undefined4 fn_006a8708(); extern undefined4 fn_006b4cd0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081cfc0; extern undefined4 DAT_00859260; extern undefined4 DAT_008977e8; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
