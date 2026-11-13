#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0011050c(); extern undefined4 * fn_00110518(); extern undefined4 fn_001138ac(); extern undefined4 fn_001138cc(); extern undefined4 fn_00145b00(); extern undefined4 * fn_0023e8ec();
extern int fn_00241510(); extern undefined4 fn_002cd71c(); extern void fn_003525b0(); extern undefined4 fn_00420fb8(); extern undefined4 * fn_00421148(); extern undefined4 * fn_0068ab5c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00352b94(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00826638; extern undefined4 DAT_0085a9f4;
