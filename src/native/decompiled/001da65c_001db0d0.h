#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_0017fc28(); extern undefined4 fn_0017fcfc(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001db0dc(); extern undefined4 fn_00239fc4();
extern undefined4 fn_00239ffc(); extern undefined4 fn_0023a030(); extern int fn_0023b858(); extern undefined4 fn_0023e640(); extern undefined4 fn_0037bdbc(); extern undefined4 fn_0065fd34();
extern undefined4 fn_006a9eb4(); extern undefined4 fn_006f7388(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a70(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
