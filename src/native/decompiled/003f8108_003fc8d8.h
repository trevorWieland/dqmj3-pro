#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_001a46f4(); extern undefined4 fn_001cab7c(); extern char * fn_00203bb4(); extern undefined4 fn_00203c84();
extern undefined4 fn_0020bbc4(); extern undefined4 fn_0022e468(); extern undefined4 fn_0022f750(); extern undefined4 fn_00231cb8(); extern undefined4 fn_00243550(); extern undefined1 fn_00246ec4();
extern undefined4 fn_002b415c(); extern undefined4 fn_0031c02c(); extern undefined4 fn_0031c7bc(); extern undefined4 fn_0031ca48(); extern int fn_0034514c(); extern undefined1 * fn_0036e68c();
extern undefined4 fn_0036e8fc(); extern int * fn_0036e9e4(); extern int * fn_0036eaa8(); extern undefined4 fn_0039bcf8(); extern undefined4 fn_0039bdb0(); extern undefined4 fn_0039bf58();
extern undefined4 fn_0039c400(); extern undefined4 fn_0039c438(); extern undefined4 fn_003f8258(); extern undefined4 fn_003fc820(); extern undefined4 fn_005d27ac(); extern undefined4 fn_00688c04();
extern undefined4 fn_006ba250(); extern undefined4 fn_006bfe90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003f86ac(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c6d9c; extern undefined4 DAT_00894e6c;
