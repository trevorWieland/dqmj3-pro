#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_00124be8(); extern undefined4 * fn_0013d3e8(); extern undefined4 * fn_0013d40c(); extern undefined4 fn_0014f1bc(); extern undefined4 fn_0014f1e0();
extern undefined4 * fn_0014f2b0(); extern undefined4 fn_0014f440(); extern undefined4 fn_0014f470(); extern undefined4 * fn_0014f480(); extern undefined4 * fn_0015ecdc(); extern int fn_0015ed28();
extern int * fn_001676b0(); extern undefined4 * fn_00170f54(); extern undefined4 fn_00455e8c(); extern undefined4 fn_00456160(); extern undefined4 fn_0045616c(); extern undefined4 fn_0046c8f4();
extern undefined4 fn_00479b1c(); extern undefined4 fn_00479c98(); extern undefined4 fn_00479cd8(); extern undefined4 fn_00479d5c(); extern bool fn_00486fa8(); extern undefined4 fn_0048a058();
extern undefined4 fn_0048cc04(); extern undefined4 fn_0048cc74(); extern undefined4 fn_004a7f94(); extern undefined4 fn_004a86f8(); extern void fn_004a97e8(); extern void fn_004a9a5c();
extern undefined4 fn_004a9d34(); extern undefined4 fn_004b2f04(); extern undefined4 fn_004b2f0c(); extern undefined4 fn_004b30f0(); extern undefined4 fn_004b3294(); extern undefined4 fn_004b66f8();
extern undefined4 fn_004b72d8(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b8d90(); extern undefined4 fn_004b9850();
extern undefined4 fn_004b9b4c(); extern undefined4 fn_004ba7c4(); extern undefined4 fn_004bad60(); extern undefined4 fn_004bad6c(); extern undefined4 fn_004bb16c(); extern undefined4 * fn_004bb288();
extern int fn_004bb340(); extern int fn_006d3b8c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004b2e4c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004a97e0; extern undefined4 DAT_004a9d28; extern undefined4 DAT_007d8c58; extern undefined4 DAT_00853500;
extern undefined4 DAT_008553a4; extern undefined4 DAT_008557bc; extern undefined4 DAT_0085587c; extern undefined4 DAT_00855a18;
extern undefined4 DAT_008b6385; extern undefined4 PTR_FUN_00855358;
