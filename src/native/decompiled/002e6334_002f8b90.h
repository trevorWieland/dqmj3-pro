#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0010706c(); extern int fn_0011c134(); extern undefined4 fn_001287d4(); extern uint fn_00147e6c();
extern undefined4 * fn_00158f40(); extern undefined4 fn_002044a0(); extern undefined4 fn_0022e7e8(); extern undefined4 fn_00231cb8(); extern int * fn_00242540(); extern undefined4 fn_00243550();
extern undefined4 fn_002e5484(); extern undefined4 fn_002feca8(); extern undefined4 fn_002feef8(); extern undefined4 * fn_005f6f1c(); extern undefined4 fn_00615ee4(); extern int fn_006c78cc();
extern int fn_006c78d8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002f8abc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002e9b78; extern undefined4 DAT_007c6de8; extern undefined4 DAT_007c6de9; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00821374; extern unsigned char *DAT_00892854; extern undefined4 DAT_00892858; extern undefined4 DAT_0089285c;
extern undefined4 DAT_00892860; extern undefined4 DAT_008972cc; extern undefined4 DAT_008972cd; extern undefined4 DAT_008972d0;
extern undefined4 DAT_00897804; extern unsigned char *DAT_00897828; extern undefined4 DAT_00897840;
