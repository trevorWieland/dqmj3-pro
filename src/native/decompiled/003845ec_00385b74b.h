#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_00242104(); extern undefined4 fn_00242170(); extern int * fn_00242540(); extern undefined4 fn_0024ec28(); extern bool fn_0024eecc(); extern undefined4 fn_0024f974();
extern bool fn_00250030(); extern undefined4 fn_0028a5c0(); extern undefined4 fn_0031c0e0(); extern undefined4 fn_0036baa0(); extern uint fn_0036bb70(); extern int fn_00397a0c();
extern int * fn_0068897c(); extern undefined4 fn_00688d44(); extern undefined4 fn_0068ab44(); extern int fn_006ba274(); extern undefined4 fn_006ba284();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0031c5ac; extern undefined4 DAT_00829b00; extern undefined4 DAT_00897804;
