#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00(); extern int fn_0067efcc(); extern int fn_0067f2d4();
extern undefined4 fn_006802f0(); extern undefined4 fn_0068031c(); extern undefined4 fn_006804d8(); extern undefined4 * fn_006804ec(); extern undefined4 fn_00680c44(); extern undefined4 fn_00681040();
extern undefined4 fn_0068c570(); extern int fn_006b6740(); extern undefined4 fn_006b6d3c(); extern int fn_006b6e94(); extern undefined4 fn_006b7068(); extern undefined4 fn_006ba7d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00828334; extern undefined4 DAT_008977e8;
