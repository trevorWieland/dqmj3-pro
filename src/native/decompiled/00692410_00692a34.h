#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00154ae0(); extern int fn_00164198(); extern undefined4 fn_0017481c(); extern undefined4 fn_00174864(); extern undefined4 fn_0017fc08();
extern undefined4 fn_0017fd4c(); extern undefined4 fn_0017fde4(); extern uint fn_00190fb4(); extern undefined4 fn_00254280(); extern undefined4 fn_00254310(); extern undefined4 fn_002543a0();
extern undefined4 fn_0033801c(); extern undefined4 * fn_00378838(); extern int fn_005ef124(); extern undefined4 fn_005ef390(); extern undefined4 * fn_005efdbc(); extern undefined4 fn_00692a50();
extern int fn_006a8efc(); extern int fn_006a8f54();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006926fc; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e4; extern undefined4 DAT_008994a4;
extern undefined4 DAT_008994a8;
