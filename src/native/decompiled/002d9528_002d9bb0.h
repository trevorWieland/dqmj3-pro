#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00163868(); extern undefined4 fn_0021ed50(); extern undefined4 fn_002d8370();
extern int fn_002d84c0(); extern undefined4 fn_002d8ba8(); extern undefined4 fn_002d9fbc(); extern undefined4 fn_002da2b8(); extern undefined4 fn_002dbcec(); extern int fn_002dbe04();
extern undefined4 fn_002dbe14(); extern undefined4 fn_003644f0(); extern undefined4 fn_00696340(); extern undefined4 fn_006969c0(); extern int fn_006afe90(); extern uint fn_006bb17c();
extern undefined4 fn_006f6fc4(); extern undefined4 fn_006f72b4(); extern bool fn_006f7530(); extern undefined4 fn_006f7a70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
