#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0014481c(); extern int * fn_00147974(); extern int * fn_001588d4();
extern undefined4 fn_0016a82c(); extern int fn_00177c88(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_001f74f8(); extern undefined4 fn_0022ee7c();
extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750(); extern undefined4 fn_00230a84(); extern undefined4 fn_00231210(); extern undefined4 fn_00232c84(); extern undefined4 fn_00260690();
extern undefined4 fn_002cfa94(); extern undefined4 fn_002e6334(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00321118(); extern undefined4 fn_00397618();
extern int fn_00397774(); extern undefined4 fn_00689930(); extern undefined4 fn_00689bd0(); extern undefined4 fn_006a6d8c(); extern undefined4 fn_006b6b3c(); extern int fn_006b6c88();
extern undefined4 fn_006b6d3c(); extern int fn_006b6e94(); extern bool fn_006ba220(); extern undefined4 fn_006ba284(); extern int fn_006c78d8(); extern int fn_006f7de8();
extern undefined4 fn_006f8418();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002e597c; extern undefined4 DAT_002e5994; extern undefined4 DAT_002e59ac; extern undefined4 DAT_008210e8;
extern undefined4 DAT_00821154; extern undefined4 DAT_008211c0; extern undefined4 DAT_0082128c; extern undefined4 DAT_0082135c;
extern undefined4 DAT_0089423c; extern undefined4 DAT_00894248; extern undefined4 DAT_00894268; extern undefined4 DAT_0089426c;
extern undefined4 DAT_00897044; extern undefined4 DAT_008977e8; extern undefined4 DAT_008977ec; extern undefined4 DAT_008c760f;
extern undefined4 DAT_008c761c;
