#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001594e4(); extern undefined4 fn_00174828(); extern undefined2 fn_00176970(); extern undefined4 fn_0017894c(); extern undefined4 fn_0017a8a4(); extern undefined4 fn_0017aaf0();
extern undefined4 fn_0017b830(); extern undefined4 fn_0017b99c(); extern undefined4 fn_0017fc08(); extern undefined4 fn_0017fde4(); extern int fn_00183638(); extern int * fn_00183dcc();
extern int fn_001880b0(); extern longlong fn_00300f74();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081ff58; extern undefined4 DAT_008977e4; extern undefined4 PTR_LAB_008247a8;
