#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001694e4(); extern undefined4 * fn_0016fe54(); extern undefined4 * fn_00189790(); extern uint * fn_0044ed28(); extern undefined4 fn_0044ee24(); extern undefined4 fn_00548750();
extern uint * fn_006cef98(); extern undefined4 fn_006cf208(); extern uint * fn_006dd1a4(); extern undefined4 fn_006dd568(); extern void fn_006de298(); extern undefined4 fn_006de4dc();
extern uint * fn_006dfc84(); extern uint * fn_006dfde8(); extern uint * fn_006dff44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d853c;
