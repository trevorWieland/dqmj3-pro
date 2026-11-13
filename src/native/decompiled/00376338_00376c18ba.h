#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00145b00(); extern undefined4 fn_00174828(); extern int * fn_001827b0(); extern undefined4 fn_00182988(); extern undefined4 fn_00190d50();
extern undefined4 fn_0019ba04(); extern undefined4 fn_001a46f4(); extern undefined4 fn_00376c18(); extern int * fn_006888c0(); extern undefined4 fn_0068a5a8(); extern int fn_006b8a1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00376310; extern undefined4 DAT_007bb534; extern undefined4 DAT_007bb56c; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0085db1c; extern undefined4 DAT_0085db2c; extern undefined4 DAT_0085dc74; extern undefined4 DAT_008977e4;
extern undefined4 PTR_s_time_count_0_bflim_00890850;
