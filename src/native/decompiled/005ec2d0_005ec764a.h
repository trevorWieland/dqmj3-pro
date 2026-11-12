#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00143a58(); extern undefined4 fn_00143b48(); extern undefined4 fn_002feef8(); extern undefined4 fn_005434d4(); extern undefined4 fn_005e42cc();
extern int * fn_005e7e54(); extern undefined4 fn_005eb2f8(); extern undefined4 fn_005ec610(); extern undefined4 fn_005ec694(); extern undefined4 fn_005ec718(); extern undefined4 fn_005ec764();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf788;
