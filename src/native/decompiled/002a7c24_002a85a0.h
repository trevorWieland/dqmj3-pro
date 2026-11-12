#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 * fn_00118290(); extern undefined4 * fn_00118624();
extern undefined4 fn_0011c184(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00145b00(); extern uint fn_00147e6c(); extern undefined4 fn_001481c8();
extern undefined4 fn_001638a0(); extern undefined4 fn_001f7350(); extern undefined4 fn_001f73a0(); extern undefined4 fn_001f7438(); extern undefined4 fn_001f748c(); extern undefined4 fn_001f749c();
extern undefined4 fn_001f7500(); extern undefined4 fn_002503cc(); extern undefined4 fn_002a74b0(); extern void fn_002a7c24(); extern undefined4 fn_002f96c4(); extern undefined4 fn_002f9da0();
extern int fn_002fa328(); extern undefined4 fn_002feef8(); extern undefined4 * fn_005f5d3c(); extern undefined4 fn_006ad87c(); extern int fn_006edd88(); extern undefined4 fn_006ede84();
extern undefined4 fn_006edeb4(); extern undefined4 fn_006f7a84(); extern int * fn_00746754(); extern uint * fn_0078cb10();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad7d8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002a8430; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081e95c; extern undefined4 DAT_0081e984;
extern undefined4 DAT_00891928; extern undefined4 DAT_008977e0;
