#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00103904(); extern undefined4 fn_00103980(); extern undefined4 fn_0010399e(); extern undefined4 fn_00104358(); extern undefined4 fn_00104a3c(); extern uint fn_00104a60();
extern undefined4 fn_002fef4c(); extern undefined4 fn_003040f4(); extern undefined4 fn_00304138(); extern undefined4 fn_0030414c(); extern undefined4 fn_00304168(); extern undefined4 fn_00304258();
extern undefined4 fn_00304270(); extern undefined4 fn_0030428c(); extern undefined4 fn_0030445c(); extern undefined4 fn_003044d8(); extern undefined4 fn_003044ec(); extern undefined4 fn_00304508();
extern undefined4 fn_00304520();
extern undefined4 func_0x0010396a();
extern undefined4 func_0x003042aa();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00102a0c_1(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00102a2c_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001;
