#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0014e7cc(); extern undefined4 fn_0014ea80(); extern int * fn_0014f308(); extern int * fn_0014f3a4(); extern undefined4 fn_0015e9d8();
extern undefined4 * fn_0015ece0(); extern undefined4 fn_00168014(); extern uint fn_00190ef0(); extern undefined4 fn_00455124(); extern void fn_00455e8c(); extern undefined4 fn_004560ac();
extern undefined4 fn_00456400(); extern undefined4 fn_00489f34(); extern uint fn_0048a82c(); extern int fn_00785b1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44; extern undefined4 DAT_008527ec; extern undefined4 DAT_008528bc; extern undefined4 DAT_80010001;
