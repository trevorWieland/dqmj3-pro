#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00162d44(); extern undefined1 * fn_0016e9e0(); extern undefined4 fn_00174864(); extern undefined4 fn_0017fde4(); extern int fn_0018388c(); extern undefined4 fn_00184b48();
extern undefined4 fn_00184c14(); extern bool fn_00184c20(); extern undefined4 fn_00184c6c(); extern undefined4 fn_00184cd0(); extern int fn_0018501c(); extern undefined4 fn_0018513c();
extern undefined4 fn_001851bc(); extern undefined4 fn_0018522c(); extern undefined4 fn_00187f00(); extern undefined4 fn_00190e98(); extern undefined4 fn_00190ed0(); extern undefined4 fn_00190ee0();
extern bool fn_00191f08(); extern char * fn_00191f28(); extern undefined4 fn_001969a4(); extern undefined4 fn_0019813c(); extern undefined4 fn_0019bb90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00185284(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00178630; extern undefined4 DAT_00178744; extern undefined4 DAT_007e09fc; extern undefined4 DAT_007e0a04;
extern undefined4 DAT_007e0a1c; extern undefined4 DAT_007edcb4; extern undefined4 DAT_008977e4; extern undefined4 DAT_008bf50f;
extern unsigned char *DAT_008bf514; extern undefined4 DAT_008bf518; extern undefined4 DAT_008bf51c; extern undefined4 DAT_008bf5e8;
extern undefined4 DAT_008bf5f0;
