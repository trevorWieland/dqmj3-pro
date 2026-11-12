#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001743e8(); extern undefined4 fn_00174828(); extern int fn_00174870(); extern undefined8 fn_0017821c(); extern undefined4 fn_00180350(); extern undefined4 fn_00182988();
extern int fn_00182cc8(); extern undefined4 fn_001d068c(); extern undefined4 fn_001d1980(); extern undefined4 fn_001d22ac(); extern undefined4 fn_001d2900(); extern undefined4 fn_001d2ff8();
extern undefined4 fn_001d42e4(); extern int fn_0026a548(); extern undefined4 fn_002ea244(); extern undefined4 fn_002ea2b0(); extern int fn_002ea524(); extern undefined4 fn_00654c74();
extern undefined4 fn_0068f8dc(); extern int fn_006b3ec4(); extern int fn_006f3068();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba7d8; extern undefined4 DAT_007ba7d9; extern undefined4 DAT_007ba7da; extern undefined4 DAT_008977e4;
