#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_00127adc(); extern undefined4 fn_00144df4(); extern undefined4 fn_0015b0f8(); extern undefined8 fn_0017821c(); extern undefined4 fn_0020bbc4();
extern undefined4 fn_0022f584(); extern int * fn_0028aad0(); extern undefined4 fn_0029432c(); extern undefined8 fn_00301a9c(); extern int fn_00311508(); extern undefined4 fn_0031154c();
extern undefined4 fn_0068974c(); extern int fn_006b83e4(); extern undefined4 fn_006b846c(); extern int fn_006b84b0(); extern undefined4 fn_006b8538(); extern undefined4 fn_006b8600();
extern int fn_006c001c(); extern char fn_006c40c8(); extern char fn_006c4120(); extern byte fn_006c41b0(); extern byte fn_006c41e4(); extern byte fn_006c4734();
extern byte fn_006c476c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0057435c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba154; extern undefined4 DAT_00858808; extern undefined4 DAT_00897804; extern undefined4 DAT_00898ae0;
extern undefined4 DAT_00898ae4; extern undefined4 DAT_00898ae8; extern undefined4 DAT_00898aec;
