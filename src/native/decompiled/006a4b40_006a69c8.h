#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_0017fe34(); extern undefined4 fn_0018d060(); extern undefined4 fn_001fe714();
extern undefined4 fn_002328e0(); extern undefined4 fn_00261b38(); extern int fn_00261f68(); extern int fn_0026248c(); extern int fn_002624f8(); extern int fn_00262564();
extern int fn_002626cc(); extern int fn_00262794(); extern undefined4 fn_00263814(); extern undefined4 fn_0030fd30(); extern undefined4 fn_0034fd78(); extern undefined4 fn_00660790();
extern undefined4 fn_0068c700(); extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068cafc(); extern undefined4 fn_006a24ec(); extern bool fn_006a8714(); extern undefined1 fn_006a8730();
extern int fn_006b6bc4(); extern undefined4 fn_006b6c30(); extern undefined4 fn_006b71a8(); extern int fn_006f8084();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c98b8; extern undefined4 DAT_008977e8;
