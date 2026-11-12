#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern void fn_00100024(); extern short * fn_001003e0(); extern undefined4 fn_001003f2(); extern undefined4 fn_001004d8(); extern undefined4 fn_00100648(); extern undefined4 fn_00103180();
extern undefined4 fn_00104bcc(); extern int fn_00104bd4(); extern undefined4 fn_00104c24(); extern undefined4 fn_00104c58(); extern undefined4 fn_00104cac(); extern undefined4 fn_00105408();
extern uint fn_0013db60(); extern int fn_002fea7a(); extern undefined4 fn_002fea88(); extern undefined1 * fn_002feb78(); extern int fn_002febd8(); extern undefined4 fn_002fec38();
extern undefined4 fn_002fec40(); extern undefined4 fn_002feca8(); extern undefined4 fn_002fecb6(); extern undefined4 fn_002fecdc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0010118c_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085abbc; extern undefined4 DAT_008c77c4; extern undefined4 PTR_s__s__unspecified_error_00812c30;
