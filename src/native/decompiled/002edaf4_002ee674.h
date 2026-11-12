#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_0014481c(); extern uint fn_001cc480(); extern undefined4 fn_001cc890(); extern undefined4 fn_0023e574(); extern undefined4 fn_0023e6a8();
extern int fn_0023e730(); extern undefined4 * fn_0023e8ec(); extern int fn_0025ff70(); extern undefined4 fn_00260014(); extern bool fn_0026005c(); extern undefined4 fn_0026009c();
extern undefined4 fn_00260288(); extern undefined4 fn_00260538(); extern undefined4 fn_00260640(); extern undefined4 fn_00260664(); extern undefined4 fn_00260750(); extern undefined4 fn_002625d0();
extern undefined4 fn_00263814(); extern void fn_002edaf4(); extern undefined4 fn_002feef8(); extern undefined4 fn_005f1940(); extern undefined4 fn_00660790(); extern undefined4 fn_00664c4c();
extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068cafc(); extern undefined4 fn_0068e960(); extern bool fn_006a8a84(); extern undefined4 fn_006b4cd0(); extern int fn_006b4e48();
extern undefined4 fn_006b658c(); extern int fn_006b6bc4(); extern undefined4 fn_006b71a8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008210e8; extern undefined4 DAT_0082122c; extern undefined4 DAT_008977e8;
