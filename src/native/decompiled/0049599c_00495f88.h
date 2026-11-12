#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined4 fn_0014ea80(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0030233c();
extern undefined4 fn_00455394(); extern undefined4 fn_00468d84(); extern undefined4 fn_0049599c(); extern byte * fn_00495d00();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00854524; extern undefined4 DAT_008b6389;
