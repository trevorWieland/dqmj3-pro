#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0010706c(); extern int fn_00120aa8(); extern undefined4 fn_00163988(); extern undefined8 fn_0017821c(); extern uint * fn_00235020();
extern undefined4 fn_0023512c(); extern undefined1 * fn_00235170(); extern undefined4 fn_002354c4(); extern undefined4 fn_00235500(); extern int fn_0023587c(); extern undefined4 fn_002359d0();
extern bool fn_00235a64(); extern undefined4 fn_002364c0(); extern int * fn_0028aad0(); extern undefined4 fn_002feef8(); extern undefined4 fn_00615ee4(); extern bool fn_006b2ef8();
extern int fn_006b38f4(); extern int fn_006b3a38(); extern undefined4 fn_006b3af0(); extern int fn_006bfda8(); extern int fn_006c0010(); extern undefined4 fn_0078b084();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_006a78b0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00851834; extern undefined4 DAT_00851888; extern undefined4 DAT_008518dc; extern undefined4 DAT_00851930;
extern undefined4 DAT_00851984; extern undefined4 DAT_00851994; extern undefined4 DAT_00897804; extern undefined4 DAT_00897808;
extern undefined4 DAT_0089780c; extern undefined4 DAT_00897850;
