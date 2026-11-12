#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00100654(); extern undefined8 fn_001694d4(); extern undefined8 fn_001694e4(); extern undefined4 fn_004ecfb0(); extern undefined4 fn_004ed514(); extern int fn_004ed810();
extern int fn_004eea84(); extern undefined4 fn_004f01f4(); extern undefined4 fn_004f15b4(); extern int * fn_0050953c(); extern undefined1 * fn_0050a490(); extern int fn_0050b080();
extern undefined1 * fn_005171e8(); extern undefined4 fn_005175e4(); extern undefined1 * fn_0051783c(); extern undefined4 fn_00656b0c(); extern undefined4 fn_00656b7c(); extern int fn_006d9934();
extern int fn_006d9a38(); extern bool fn_006db038();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ed7e4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4a0; extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008c0630; extern undefined4 DAT_008c0698;
extern undefined4 DAT_008c069c; extern undefined4 DAT_d8814829; extern undefined4 DAT_e0a14827;
