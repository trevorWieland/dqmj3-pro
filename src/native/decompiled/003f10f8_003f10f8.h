#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00129d4c(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022f750(); extern undefined4 fn_0031b590();
extern undefined4 fn_00397a98(); extern undefined4 fn_00397b18(); extern undefined4 fn_003f132c(); extern undefined4 fn_00689efc(); extern undefined4 fn_006b64b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003f130c; extern undefined4 DAT_003f1314; extern undefined4 DAT_003f131c; extern undefined4 DAT_008919d4;
extern undefined4 DAT_008919d8; extern undefined4 DAT_00891a14; extern undefined4 DAT_008951d8; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897804;
