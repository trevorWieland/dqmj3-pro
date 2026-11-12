#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern int fn_00101a1c(); extern undefined4 fn_001139cc(); extern undefined4 fn_0011a604(); extern undefined4 fn_0012d6a4(); extern undefined4 fn_00144810();
extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00(); extern undefined4 fn_0015dfc0(); extern undefined4 fn_00176fb0(); extern undefined4 fn_0017fd40(); extern undefined4 fn_001fe714();
extern undefined4 fn_002328c4(); extern int fn_0023e194(); extern undefined1 * fn_0024baa4(); extern undefined4 fn_0026009c(); extern undefined4 fn_002603c0(); extern undefined4 fn_00260538();
extern undefined4 fn_00260664(); extern undefined4 fn_00263814(); extern undefined4 * fn_00268794(); extern undefined4 * fn_00301f50(); extern undefined4 fn_00388f90(); extern undefined4 fn_005f437c();
extern undefined4 fn_00660790(); extern undefined4 fn_00664c58(); extern undefined4 fn_0068c6b8(); extern undefined4 fn_0068c700(); extern undefined4 fn_0068c764(); extern undefined4 fn_0068c7e8();
extern undefined4 fn_0068cafc(); extern undefined4 fn_0068e960(); extern undefined4 fn_006a0b98(); extern undefined4 fn_006a8708(); extern int fn_006a8858(); extern int fn_006a8890();
extern undefined4 fn_006b6754(); extern undefined1 * fn_006be218();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0030ec08(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082227c; extern undefined4 DAT_008977e8; extern undefined4 DAT_00897804;
extern undefined4 DAT_008c7328;
