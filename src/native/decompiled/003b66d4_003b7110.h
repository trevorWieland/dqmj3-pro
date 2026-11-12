#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0010887c(); extern undefined4 fn_001088e0(); extern undefined4 fn_0011050c(); extern undefined4 * fn_00110518(); extern undefined4 fn_00145b00();
extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern bool fn_00154a6c(); extern undefined4 fn_00159f34(); extern undefined4 fn_001638a0();
extern undefined4 fn_0016a43c(); extern uint fn_001759d0(); extern undefined8 fn_0017821c(); extern undefined4 fn_00178f9c(); extern int * fn_001827b0(); extern undefined4 fn_001828f0();
extern undefined4 fn_00190d50(); extern undefined4 fn_001c93c8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0025fb7c(); extern undefined4 * fn_0025fb98(); extern undefined4 * fn_00301f50();
extern undefined4 fn_0039006c(); extern undefined4 fn_003c1ef0(); extern undefined4 fn_0043c608(); extern undefined4 fn_006f75ac();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003b6ffc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003b6a0c; extern undefined4 DAT_003b6a14; extern undefined4 DAT_003b6a1c; extern undefined4 DAT_003b6a2c;
extern undefined4 DAT_007bebf4; extern undefined4 DAT_007bec06; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082ec3c;
extern undefined4 DAT_0085228c; extern undefined4 DAT_00892ee4; extern undefined4 DAT_008963ac; extern undefined4 DAT_008977e0;
