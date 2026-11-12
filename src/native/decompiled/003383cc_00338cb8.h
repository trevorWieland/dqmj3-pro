#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00129dd4(); extern undefined4 fn_00129e04(); extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0();
extern undefined4 fn_00174828(); extern undefined4 fn_001f7510(); extern undefined4 fn_002469ac(); extern undefined4 fn_0024f870(); extern undefined4 fn_0025d278(); extern undefined4 * fn_0025d744();
extern undefined1 * fn_0026b054(); extern int * fn_0028b348(); extern undefined4 fn_003d0fe4(); extern undefined1 fn_003d11f8(); extern undefined4 fn_003d1a10(); extern undefined4 fn_00688458();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00824a58; extern undefined4 DAT_00890728; extern undefined4 DAT_008977e4;
extern undefined4 DAT_008977fc; extern undefined4 DAT_00897804;
