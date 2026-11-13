#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00101a1c(); extern int * fn_00147974(); extern undefined4 fn_0016a82c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001f74d8();
extern undefined4 fn_0020cda0(); extern undefined4 fn_0022ee7c(); extern undefined4 fn_0022eefc(); extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750(); extern undefined4 fn_002c29a0();
extern undefined4 fn_002c330c(); extern undefined4 fn_00321118(); extern undefined4 fn_00385b60(); extern undefined4 fn_00385b74(); extern undefined4 fn_0039ac50(); extern undefined4 fn_0039aeb0();
extern undefined4 * fn_003b17d4(); extern undefined4 fn_00688c04(); extern undefined4 fn_00688d44(); extern undefined4 fn_00689bd0(); extern undefined4 fn_00689efc(); extern bool fn_006ba220();
extern int fn_006ba274(); extern undefined4 fn_006ba284();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0cc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00399c98; extern undefined4 DAT_00399cb0; extern undefined4 DAT_0039a43c; extern undefined4 DAT_0039a73c;
extern undefined4 DAT_007c6dc4; extern undefined4 DAT_0082b16c; extern undefined4 DAT_008939cc; extern undefined4 DAT_00893a00;
extern undefined4 DAT_00893a7c; extern undefined4 DAT_00893a80; extern undefined4 DAT_00895338; extern undefined4 DAT_00895340;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_s_MenuMessageDiscUseTitle_008941e8;
