#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001006de(); extern undefined4 fn_00110a84(); extern undefined4 fn_0012ea14(); extern bool fn_0012ead8(); extern undefined4 fn_0013f7ec(); extern undefined4 fn_0013f814();
extern undefined4 fn_00145b00(); extern int * fn_001588d4(); extern int fn_00167500(); extern undefined4 * fn_00168a24(); extern undefined4 fn_0016a2c0(); extern int fn_00172c98();
extern undefined4 fn_001774dc(); extern undefined4 fn_0017d90c(); extern int * fn_0017d938(); extern int * fn_0017d948(); extern int fn_00183970(); extern int * fn_00194f08();
extern undefined4 fn_001c87b4(); extern undefined4 fn_001c8ec4(); extern undefined4 fn_002feef8(); extern undefined4 fn_0054a6c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
