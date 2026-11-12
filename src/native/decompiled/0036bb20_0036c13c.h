#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4();
extern int * fn_001588d4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_001638a0(); extern undefined4 fn_0016a43c();
extern undefined4 fn_00178f9c(); extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac(); extern int fn_00203e08(); extern int fn_0022eb34(); extern undefined4 fn_0022f584();
extern undefined4 fn_0023097c(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern int fn_006b4f84(); extern int fn_006b4fb8(); extern int * fn_00785420();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0036be78(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0036bca4; extern undefined4 DAT_0036be34; extern undefined4 DAT_0036be3c; extern undefined4 DAT_0036be50;
extern undefined4 DAT_00893bf0; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
