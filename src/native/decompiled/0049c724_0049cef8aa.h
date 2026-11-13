#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_00456044(); extern undefined4 fn_00456074(); extern undefined4 fn_00456400(); extern undefined4 fn_00473638();
extern undefined4 fn_00479b1c(); extern undefined4 fn_0048a058(); extern undefined4 fn_004b2f04(); extern undefined4 fn_004b2f0c(); extern undefined4 fn_004b8d90(); extern int fn_006d3b8c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0049cd48(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0049c870; extern undefined4 DAT_00853500;
