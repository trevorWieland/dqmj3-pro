#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern int fn_0016a318(); extern undefined4 fn_00172be0(); extern undefined4 fn_00172cfc();
extern int fn_0018388c(); extern bool fn_00191f08(); extern undefined4 fn_00192114(); extern undefined4 fn_0019b728(); extern undefined4 * fn_0019b998(); extern undefined4 fn_0019d684();
extern undefined4 fn_0019d91c(); extern uint * fn_0019e864(); extern undefined4 fn_0019e8c4(); extern undefined4 fn_002fece8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001a36c0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081bd48;
