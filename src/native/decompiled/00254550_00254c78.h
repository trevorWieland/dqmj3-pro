#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 * fn_001129d0(); extern undefined4 fn_00120ca8();
extern undefined4 fn_0012154c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined4 fn_001639b8(); extern undefined4 fn_0016947c(); extern undefined4 fn_00174864();
extern undefined4 fn_00204158(); extern undefined4 * fn_00241ddc(); extern undefined4 fn_002feef8(); extern undefined4 fn_00525abc(); extern undefined4 fn_006a7b6c(); extern uint * fn_0078bba4();
extern undefined4 fn_0079df24();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad784(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081d768; extern undefined4 DAT_0081d778; extern undefined4 DAT_008902c0;
extern undefined4 DAT_008909a4; extern undefined4 DAT_008977e4;
