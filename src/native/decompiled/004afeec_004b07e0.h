#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 * fn_00124930(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0048c758();
extern undefined4 fn_0048cbf8(); extern undefined4 fn_004a1fa4(); extern undefined4 fn_004a2158(); extern undefined4 * fn_004b5170(); extern int * fn_004b51c4(); extern undefined4 * fn_004b93c4();
extern undefined4 fn_00786da0(); extern undefined4 fn_00786e84(); extern undefined4 fn_0079b730();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0075552c(void) { }
