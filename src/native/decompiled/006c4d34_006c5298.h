#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_002aad7c(); extern undefined4 fn_002cd59c(); extern undefined4 fn_00303afc(); extern int * fn_0031e264(); extern undefined4 * fn_00341920();
extern uint fn_006a99b0(); extern undefined4 fn_006b0074(); extern undefined4 fn_006b0514(); extern bool fn_006b5dc8(); extern undefined4 fn_006ba4ec(); extern uint fn_006c52ec();
extern undefined4 fn_006f751c(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
