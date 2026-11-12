#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0013d3e8(); extern undefined4 * fn_0013d40c(); extern undefined4 * fn_0015ecdc(); extern undefined4 * fn_00170f54(); extern undefined4 * fn_00301f50();
extern undefined4 fn_00455e10(); extern undefined4 * fn_0045fb88(); extern int fn_0045fbe8(); extern undefined4 fn_00468c28(); extern undefined4 fn_00468e80(); extern short fn_00468f84();
extern undefined4 fn_00468ffc(); extern undefined4 fn_0046c37c(); extern undefined4 fn_00479c98(); extern undefined4 fn_00479cd8(); extern undefined4 fn_0048cc04(); extern undefined4 fn_004b4218();
extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b8d90(); extern undefined4 fn_004bdba4(); extern int fn_0052c610(); extern bool fn_0052c6ec(); extern undefined4 fn_0052c888();
extern bool fn_006d19b8(); extern bool fn_006d1a20();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern code *DAT_007d94a0; extern code *DAT_008528cc; extern code *DAT_00853500; extern code *DAT_008535ec;
extern code *DAT_008a645c; extern code *DAT_008a6464; extern code *DAT_008a6468; extern code *PTR_FUN_00855c84;
