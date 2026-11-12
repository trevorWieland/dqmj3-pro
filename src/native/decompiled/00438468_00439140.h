#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022ccb4(); extern undefined4 fn_0022cdb4(); extern undefined4 fn_0022cdf0();
extern undefined4 fn_0022f584(); extern undefined4 fn_0025c718(); extern undefined4 fn_00269b38(); extern undefined4 fn_0026a494(); extern undefined4 fn_002ff628(); extern undefined4 fn_0036c5f4();
extern undefined4 * fn_00378c0c(); extern undefined4 fn_0039bcdc(); extern undefined4 fn_0039bdf4(); extern undefined4 fn_0039be60(); extern undefined4 fn_0039be98(); extern undefined4 fn_0039c4c8();
extern undefined4 * fn_0039c504(); extern undefined4 fn_003bbdc0(); extern undefined4 fn_003bbde0(); extern undefined4 * fn_003bc118(); extern undefined4 fn_00438548(); extern undefined4 fn_00438b90();
extern undefined4 fn_00438c68(); extern undefined4 fn_00689bd0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00439bf4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00438530; extern undefined4 DAT_00438544; extern undefined4 DAT_00439124; extern undefined4 DAT_007c76d8;
extern undefined4 DAT_007c76e0; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00827f4c; extern undefined4 DAT_0083c48c;
extern undefined4 DAT_0083c5b0; extern undefined4 DAT_00894e94; extern undefined4 DAT_00894e98; extern undefined4 DAT_00894e9c;
extern undefined4 DAT_00895660; extern undefined4 DAT_00895bcc; extern undefined4 DAT_00897818; extern undefined4 DAT_008c7667;
