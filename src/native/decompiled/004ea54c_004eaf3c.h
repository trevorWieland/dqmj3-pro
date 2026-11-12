#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_0017821c(); extern undefined8 fn_00301a9c(); extern bool fn_004dbcf0(); extern undefined4 fn_004dbd30(); extern undefined8 fn_004dbe24();
extern undefined4 fn_004e21dc(); extern undefined4 fn_004e973c(); extern undefined4 fn_004e97b0(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern undefined4 * fn_004edc74();
extern undefined4 fn_004efcf4(); extern undefined4 fn_00656b7c(); extern undefined4 fn_006d5cf0(); extern uint fn_006d6700(); extern undefined4 fn_006d88c8(); extern undefined4 fn_006d897c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ea138(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856b18; extern undefined4 DAT_00856b30; extern undefined4 DAT_00856b48; extern undefined4 DAT_008bf504;
extern undefined4 DAT_e0a14827;
