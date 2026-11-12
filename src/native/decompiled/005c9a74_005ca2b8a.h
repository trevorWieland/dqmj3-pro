#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00();
extern int * fn_001588d4(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b3c4(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0031f3f4();
extern undefined4 fn_0031f8fc(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern int fn_005ab500(); extern undefined4 fn_005ab518(); extern undefined4 fn_005ab578();
extern undefined4 fn_005ab63c(); extern undefined4 fn_005ab734(); extern undefined4 fn_005ab774(); extern undefined4 fn_005ab7a4(); extern undefined4 fn_005ab7c4(); extern undefined4 fn_005ab8b0();
extern undefined4 fn_005ab920(); extern undefined4 fn_005ab930(); extern undefined4 fn_005ca198(); extern undefined4 fn_00689824(); extern undefined4 fn_0068ab44();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00890db4; extern undefined4 DAT_00890dbc; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008c7653; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_s_CoplingSearchHelpChildGenealogyA_00890dcc;
extern undefined4 PTR_s_CoplingSearchHelpChildRankAll_00890df4;
