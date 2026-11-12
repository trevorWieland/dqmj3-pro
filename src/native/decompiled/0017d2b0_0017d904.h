#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern int fn_00189e18(); extern undefined4 fn_0018a260(); extern char * fn_0018a34c(); extern undefined4 fn_00191564();
extern undefined4 fn_00193374(); extern undefined4 fn_00193380(); extern undefined4 fn_00194464(); extern int fn_001946e8(); extern int fn_002fea64(); extern int fn_002febd8();
extern undefined8 fn_00301a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0017d898; extern undefined4 DAT_008c035c; extern undefined4 DAT_008ef5bc;
