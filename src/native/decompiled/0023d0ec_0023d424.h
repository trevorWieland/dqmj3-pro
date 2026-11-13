#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119854(); extern undefined4 fn_0012d6a4(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0026a494(); extern undefined4 fn_002a4bd0(); extern undefined4 fn_002e290c();
extern undefined4 fn_002e297c(); extern undefined4 fn_002e2990(); extern undefined4 fn_002e29fc(); extern undefined4 fn_002e2acc(); extern undefined4 fn_005f6270(); extern undefined8 fn_00691514();
extern int fn_006bc1dc(); extern undefined4 fn_006bc43c(); extern undefined4 fn_006bc46c(); extern undefined4 fn_006bc47c(); extern undefined2 fn_006bc4a0(); extern undefined4 fn_006bc4b0();
extern int fn_006bc53c(); extern undefined4 fn_006d3d30(); extern undefined4 fn_006f5e08();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_00897818; extern undefined4 DAT_00898840;
