#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern undefined4 fn_001d6b00(); extern undefined4 fn_001f82ac(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_00246e00(); extern undefined4 fn_00246e68();
extern int * fn_00246e74(); extern int fn_0025f9d8(); extern bool fn_0025fa84(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 fn_006a8048();
extern int fn_006aa52c(); extern bool fn_006aba74(); extern undefined4 * fn_006ad62c(); extern int fn_006b4f84(); extern undefined4 fn_006b51d8(); extern undefined4 fn_006b5424();
extern int fn_006b83e4(); extern int fn_006b84b0(); extern int fn_006bfda8(); extern undefined4 fn_006bfdb4(); extern undefined4 fn_006bfdec(); extern undefined4 fn_006bfe90();
extern uint fn_006c2870(); extern undefined4 fn_006c5058(); extern bool fn_006f7a20(); extern undefined4 fn_006f7a5c(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
