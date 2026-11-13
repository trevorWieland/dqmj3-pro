#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_0015b0f8();
extern undefined4 * fn_00168a24(); extern undefined1 * fn_0016e9e0(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec();
extern undefined4 fn_0022f750(); extern undefined4 fn_002f6fa8(); extern undefined4 fn_002f70cc(); extern undefined1 fn_002f8914(); extern longlong fn_00300f74(); extern undefined4 * fn_00301f50();
extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_004516fc(); extern undefined4 fn_005d45b8(); extern undefined4 fn_005d4638(); extern undefined4 fn_005d4710();
extern int fn_006cd6d0(); extern bool fn_006cfe7c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005dbc24; extern undefined4 DAT_005dbc38; extern undefined4 DAT_005dbc4c; extern undefined4 DAT_005dbc54;
extern undefined4 DAT_005dda70; extern undefined4 DAT_005dda74; extern undefined4 DAT_005de810; extern undefined4 DAT_005de820;
extern undefined4 DAT_00899114; extern undefined4 DAT_00899118; extern undefined4 DAT_00899128; extern undefined4 DAT_00899218;
extern undefined4 DAT_008c6666; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
