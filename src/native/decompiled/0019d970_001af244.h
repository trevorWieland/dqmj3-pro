#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102cc8(); extern undefined4 fn_00146590(); extern int fn_0018388c(); extern undefined4 fn_0018513c(); extern undefined4 fn_001851bc(); extern bool fn_00191f08();
extern undefined4 fn_00192114(); extern undefined4 fn_0019e0c4(); extern undefined4 fn_001a3530(); extern int fn_001a5350(); extern int fn_001a72b0(); extern undefined4 fn_001a759c();
extern undefined4 fn_001a7908(); extern undefined4 fn_001a8854(); extern int fn_001a9704(); extern undefined4 fn_001a9808(); extern uint fn_001a9c90(); extern undefined4 fn_001af0f4();
extern undefined4 fn_001bbf50(); extern undefined4 fn_001c0508(); extern undefined4 fn_001c055c(); extern undefined4 * fn_00301f50();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001c1274(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0019dfa4; extern undefined4 DAT_0019dfbc; extern undefined4 DAT_0019dfd8; extern undefined4 DAT_001af420;
extern undefined4 DAT_008bf514; extern unsigned char *DAT_008bf51c; extern undefined4 DAT_008f9d08;
