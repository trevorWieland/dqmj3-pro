#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac();
extern undefined4 fn_0018a69c(); extern undefined4 fn_001c8abc(); extern undefined4 fn_002c4694(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303afc(); extern undefined4 fn_006896e0();
extern undefined4 fn_0068aab0(); extern undefined4 fn_0068aeac(); extern undefined4 fn_0068af70(); extern undefined4 fn_00787118();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0028fd88(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081e218; extern undefined4 DAT_0081e258; extern undefined4 DAT_0081e398; extern undefined4 DAT_0081e3b0;
extern undefined4 DAT_00895f14; extern undefined4 DAT_00895f1c; extern undefined4 DAT_00895f20; extern undefined4 DAT_00895f24;
extern undefined4 DAT_00895f28; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34;
