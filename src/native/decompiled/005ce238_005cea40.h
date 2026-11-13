#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00166824(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0020b59c(); extern undefined4 fn_0020bbc4();
extern int fn_0020cb0c(); extern undefined4 fn_0020de2c(); extern undefined4 fn_0025e7cc(); extern undefined4 fn_002c4100(); extern undefined4 fn_002ff628(); extern undefined4 fn_0038d4c4();
extern undefined4 fn_0038dad0(); extern undefined4 fn_003cfa24(); extern undefined4 fn_003cfaac(); extern undefined4 fn_003d0478(); extern undefined4 fn_003d0ae8(); extern undefined4 fn_003d0b80();
extern undefined4 fn_00660c64(); extern int fn_0066133c(); extern undefined4 fn_006ba284(); extern int fn_006bf0fc(); extern undefined1 fn_006bf1d4(); extern undefined4 fn_006bfe90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005ce3cc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008951dc; extern undefined4 DAT_008c7654; extern undefined4 DAT_008c765f;
