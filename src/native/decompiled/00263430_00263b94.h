#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_002017e4(); extern undefined4 * fn_00202228(); extern uint fn_00262ad0(); extern undefined4 fn_002631d8();
extern undefined4 fn_002ff628(); extern int fn_0068b7f0(); extern undefined4 * fn_0068c0b4(); extern int fn_0068c408(); extern undefined4 fn_0068c604(); extern undefined4 fn_006a6834();
extern undefined4 fn_006b6b3c(); extern int fn_006b6bc4(); extern int fn_006b6c88(); extern undefined4 fn_006b71a8(); extern undefined4 fn_0079d450();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c7646; extern undefined4 DAT_008c7670;
