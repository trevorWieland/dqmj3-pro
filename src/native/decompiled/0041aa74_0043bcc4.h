#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_0015b064(); extern undefined4 fn_0016ba84();
extern undefined4 fn_00178f9c(); extern int * fn_0017dd54(); extern undefined4 fn_001828f0(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022eefc();
extern undefined4 fn_0022f750(); extern undefined4 fn_0025f3f4(); extern undefined4 fn_002894f8(); extern undefined4 fn_0028c644(); extern undefined4 fn_002c29a0(); extern undefined4 fn_002c330c();
extern undefined4 fn_002eb8b0(); extern undefined4 fn_002ff628(); extern undefined4 fn_00313844(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_00321118();
extern undefined4 fn_00391df8(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_00439140(); extern undefined4 fn_00439858(); extern undefined4 fn_0043bf08();
extern undefined4 fn_00689b18(); extern undefined4 fn_00689bd0(); extern undefined4 fn_00689c1c(); extern undefined4 fn_00689efc(); extern int fn_006b2aa0(); extern int fn_006b83e4();
extern int fn_006b84b0(); extern bool fn_006ba220(); extern undefined4 fn_006bd084();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0041aca8; extern undefined4 DAT_0041acb8; extern undefined4 DAT_0043bee8; extern undefined4 DAT_007bb380;
extern undefined4 DAT_007bb390; extern undefined4 DAT_007bb39c; extern undefined4 DAT_007bb3a8; extern undefined4 DAT_007bb3b4;
extern undefined4 DAT_007bb3c0; extern undefined4 DAT_007c7684; extern undefined4 DAT_00866ea8; extern undefined4 DAT_008943b0;
extern undefined4 DAT_00894aac; extern undefined4 DAT_00894b34; extern undefined4 DAT_00894bb0; extern undefined4 DAT_00894bb4;
extern undefined4 DAT_008951dc; extern undefined4 DAT_00895964; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
extern undefined4 DAT_0089a930; extern undefined4 DAT_0089a934; extern undefined4 DAT_008c7674; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
