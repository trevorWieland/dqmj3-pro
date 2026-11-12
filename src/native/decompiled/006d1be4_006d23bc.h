#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern int fn_0013cd7c(); extern undefined4 * fn_00158f6c(); extern undefined4 * fn_0015ece0(); extern undefined4 * fn_00170f54(); extern int fn_0017fe44();
extern int fn_002febd8(); extern undefined4 fn_0030233c(); extern uint fn_003035b0(); extern undefined4 * fn_004b4c44(); extern undefined4 fn_004b626c(); extern undefined4 fn_004b7748();
extern undefined4 fn_006d0734(); extern undefined4 fn_006d0810(); extern int fn_006dc488(); extern undefined4 fn_0078638c(); extern int * fn_00786480(); extern int fn_00786550();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_006d1f50(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006d1f40; extern undefined4 DAT_007d9c48; extern undefined4 DAT_007db524; extern undefined4 DAT_007dba44;
extern undefined4 DAT_008aec6c; extern undefined4 DAT_008e69b0; extern undefined4 DAT_80010001;
