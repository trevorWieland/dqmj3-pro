#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00121708(); extern undefined4 fn_001482f4(); extern undefined4 fn_00154a48(); extern undefined4 fn_00154ab4();
extern undefined4 fn_00156f24(); extern undefined4 fn_00157df4(); extern int fn_00157ff4(); extern undefined4 fn_00158128(); extern undefined4 fn_00158268(); extern undefined4 fn_00162d44();
extern undefined4 fn_00162d54(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00173cb8(); extern undefined4 fn_00173d14(); extern undefined4 fn_0017fde4();
extern undefined4 func_0x00121708();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00152888(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8; extern undefined4 DAT_00897804; extern undefined4 DAT_008987bc;
