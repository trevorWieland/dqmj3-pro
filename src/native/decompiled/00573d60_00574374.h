#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_0020bbc4(); extern undefined * fn_002283d0(); extern undefined4 fn_00237c74(); extern undefined4 fn_0024fa24(); extern undefined4 fn_00250388();
extern undefined4 fn_002508f4(); extern int * fn_0028aad0(); extern undefined1 * fn_0028abc4(); extern undefined4 fn_0029432c(); extern int fn_002ea524(); extern undefined8 fn_00301a9c();
extern undefined4 fn_00573e24(); extern undefined4 fn_005740c4(); extern undefined1 fn_00661088(); extern int fn_006c001c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0057435c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba154; extern undefined4 DAT_007d47b4; extern undefined4 DAT_007d47b8; extern undefined4 DAT_00897804;
