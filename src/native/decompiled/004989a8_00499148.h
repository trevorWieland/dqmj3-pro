#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern undefined4 fn_0015ef4c(); extern bool fn_00454cbc(); extern int fn_00454d74();
extern undefined4 fn_0046e0a4(); extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern undefined4 * fn_0048fc98(); extern undefined4 fn_0049ab54(); extern undefined4 fn_0049adbc();
extern undefined4 fn_004a5b04(); extern undefined4 fn_004b2054(); extern undefined4 fn_004b22e8(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520(); extern undefined4 fn_004b8d4c();
extern undefined4 fn_004ba5a4(); extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4(); extern undefined4 fn_004ba934(); extern bool fn_004bab34(); extern undefined4 fn_006d30f0();
extern bool fn_006d3ef4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0048fd74(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0049b304; extern undefined4 DAT_0049b308; extern undefined4 DAT_008e6684; extern undefined4 DAT_008e668c;
extern undefined4 DAT_008e6690; extern undefined4 DAT_008e66ac; extern undefined4 DAT_008e66b0;
