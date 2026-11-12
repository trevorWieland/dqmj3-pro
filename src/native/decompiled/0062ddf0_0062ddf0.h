#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0019bc50(); extern undefined4 fn_002ff628(); extern undefined4 fn_0061be08(); extern undefined4 fn_006228c8();
extern int fn_00626c2c(); extern int fn_0062a40c(); extern undefined4 fn_00630d4c(); extern undefined4 fn_0063306c(); extern undefined4 fn_00655e24(); extern undefined4 fn_0065646c();
extern undefined4 * fn_00656538(); extern int fn_006565e0(); extern uint fn_0069217c(); extern int fn_00692284(); extern undefined4 fn_006f447c(); extern undefined4 fn_006f94f4();
extern int fn_00797194(); extern int * fn_007971f8(); extern int fn_007a1c04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00859628; extern undefined4 DAT_008c7640;
