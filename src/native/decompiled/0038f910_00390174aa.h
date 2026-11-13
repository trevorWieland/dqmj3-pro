#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern int * fn_001588d4(); extern int fn_00177c88();
extern undefined4 fn_0020bbc4(); extern undefined4 fn_00230a84(); extern undefined4 fn_00231074(); extern int * fn_0028aad0(); extern undefined4 fn_002c3df8(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0038feb4(); extern undefined4 fn_00689824(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4();
extern undefined4 fn_00689d04(); extern undefined4 fn_0068ab44(); extern int fn_006bf240();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0038fb84; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897804; extern undefined4 DAT_008c760f;
extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
