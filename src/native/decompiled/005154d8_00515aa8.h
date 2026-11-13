#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_004ed714(); extern undefined4 * fn_004eddf4(); extern int fn_00509758(); extern undefined4 fn_00509b04(); extern undefined4 fn_0050a29c();
extern int fn_0050b080(); extern int fn_0050b144(); extern undefined4 fn_0050d3a4(); extern uint fn_005152a8(); extern short fn_00515608(); extern undefined4 fn_0051562c();
extern undefined4 fn_00515fe0(); extern undefined4 fn_005162c8(); extern undefined4 fn_005165d8(); extern undefined4 fn_005167a4(); extern undefined4 fn_00516e40(); extern undefined4 fn_00517020();
extern undefined4 fn_006d6e30(); extern undefined4 fn_006da484(); extern undefined4 fn_006da4e0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_006f9404(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856ce8; extern undefined4 DAT_008571a0; extern undefined4 DAT_008bf4cc; extern undefined4 PTR_FUN_00857178;
