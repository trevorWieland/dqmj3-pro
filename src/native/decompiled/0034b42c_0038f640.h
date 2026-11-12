#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern undefined4 fn_00144df4(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern undefined4 fn_001480d0();
extern undefined4 fn_001481c8(); extern int * fn_001588d4(); extern undefined4 fn_0016a82c(); extern int fn_00172c98(); extern int fn_00177c88(); extern undefined4 fn_00178f9c();
extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0022ee7c();
extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750(); extern undefined4 fn_00231074(); extern int * fn_00242540(); extern undefined4 fn_0025f354(); extern undefined4 fn_002c29a0();
extern undefined4 fn_002c330c(); extern undefined4 fn_002cb48c(); extern undefined4 * fn_002cbd7c(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0031c080(); extern undefined4 fn_0031c0e0();
extern undefined4 fn_0031c810(); extern undefined4 fn_0031cab4(); extern undefined4 * fn_0031cb44(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_00321118();
extern undefined4 fn_0038f500(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_00567670(); extern undefined4 fn_00689210(); extern undefined4 fn_00689bd0();
extern undefined4 fn_00689efc(); extern int fn_006b83e4(); extern int fn_006b84b0(); extern undefined4 fn_006b8538(); extern bool fn_006ba220(); extern undefined1 fn_006bf0f0();
extern int fn_006e6814(); extern int fn_006e6820();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0037faf0; extern undefined4 DAT_0037faf4; extern undefined4 DAT_0037fb00; extern undefined4 DAT_0037fb10;
extern undefined4 DAT_003875e0; extern undefined4 DAT_00387614; extern undefined4 DAT_0038f8d0; extern undefined4 DAT_0038f8ec;
extern undefined4 DAT_0038f908; extern undefined4 DAT_007c0da8; extern undefined4 DAT_007c7694; extern undefined4 DAT_007c769c;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00864374; extern undefined4 DAT_00866ea8; extern undefined4 DAT_00866ffc;
extern undefined4 DAT_00867018; extern undefined4 DAT_008670a4; extern undefined4 DAT_008670c4; extern undefined4 DAT_00891c84;
extern undefined4 DAT_00891c9c; extern undefined4 DAT_00891ca0; extern undefined4 DAT_00893d7c; extern undefined4 DAT_008951dc;
extern undefined4 DAT_00895964; extern undefined4 DAT_00895a90; extern undefined4 DAT_00895aa8; extern unsigned char *DAT_008977e4;
extern undefined4 DAT_00897804; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_s_coursename1_1_007c6d44;
