#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_0015ef4c(); extern undefined4 * fn_0045ce00(); extern undefined4 fn_0046e0a4(); extern undefined4 fn_00482420();
extern undefined4 fn_00488e74(); extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern void fn_004923a4(); extern undefined4 fn_00492424(); extern undefined4 fn_00493830();
extern undefined4 fn_004966f4(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520(); extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4(); extern bool fn_004bab34();
extern undefined4 fn_004bc44c(); extern bool fn_006d3ef4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0045ce58(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00468b80(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00468bc0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00492420; extern undefined4 DAT_00492938; extern undefined4 DAT_008e686c; extern undefined4 DAT_008e6878;
extern undefined4 DAT_008e6880; extern undefined4 DAT_008e688c;
