#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0011c184(); extern undefined4 * fn_001287b4(); extern undefined4 fn_0012d73c(); extern undefined4 fn_0012f208(); extern undefined4 fn_0014481c();
extern undefined4 fn_00145ac0(); extern uint fn_00179dc0(); extern undefined4 * fn_00241ddc(); extern undefined4 fn_0025b2dc(); extern undefined4 fn_00260014(); extern undefined4 fn_0026009c();
extern undefined4 fn_00260640(); extern undefined4 fn_00263814(); extern undefined4 fn_00294228(); extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0044fcfc();
extern undefined4 fn_00660790(); extern undefined4 fn_006b625c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081fc70; extern undefined4 DAT_008977e8; extern undefined4 DAT_00897804;
