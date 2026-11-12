#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern int fn_0013cd7c(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined4 * fn_0015ecdc(); extern undefined4 * fn_0015ece0();
extern undefined4 fn_00455424(); extern undefined4 fn_004554c4(); extern undefined4 fn_00455cf0(); extern undefined4 fn_00455e8c(); extern undefined4 fn_00479b1c(); extern undefined4 fn_00479c98();
extern undefined4 fn_00481410(); extern undefined4 fn_00481930(); extern undefined4 fn_0048a058(); extern void fn_0049e7c0(); extern void fn_0049e8a0(); extern void fn_0049ea20();
extern void fn_0049eb2c(); extern void fn_0049ebb8(); extern undefined4 fn_004b2e68(); extern undefined4 fn_004b2f04(); extern undefined4 fn_004b2f0c(); extern undefined4 fn_004b7748();
extern undefined4 fn_004b8d4c(); extern undefined4 fn_006d0ae4(); extern undefined4 fn_006d0c04(); extern int fn_006d1a3c(); extern bool fn_006d2030(); extern int * fn_0075546c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0049ea74(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0049ea18; extern undefined4 DAT_0049ebb0; extern undefined4 DAT_0049ec4c; extern undefined4 DAT_0049ed3c;
extern undefined4 DAT_00853500; extern undefined4 DAT_008549dc; extern undefined4 DAT_00854fd4; extern undefined4 DAT_008554c0;
extern undefined4 DAT_80010001; extern undefined4 PTR_FUN_00854940;
