#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_0010483c(); extern int * fn_002feeb0(); extern int * fn_00303564(); extern undefined4 fn_00303810(); extern undefined4 fn_003040f4(); extern undefined4 fn_0030447c();
extern undefined4 * fn_00304494(); extern undefined4 fn_0030488c(); extern int fn_003048b8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104218_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085ab1c; extern undefined4 DAT_0085ac10; extern undefined4 DAT_0085ad68; extern undefined4 DAT_008c3da0;
