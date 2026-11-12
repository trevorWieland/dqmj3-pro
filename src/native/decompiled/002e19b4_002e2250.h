#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_0010887c(); extern undefined4 fn_001480d0(); extern undefined4 * fn_00158f40();
extern undefined4 fn_00159f34(); extern undefined4 fn_00166824(); extern undefined4 fn_0016a43c(); extern float fn_001a4a80(); extern undefined4 fn_001c8d94(); extern undefined4 fn_002e22cc();
extern int fn_006afe90(); extern undefined4 fn_006f7388();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002e21fc; extern undefined4 DAT_005f4c78; extern undefined4 DAT_007c100c; extern undefined4 DAT_008208c4;
extern undefined4 DAT_00891f38; extern undefined4 DAT_00891f44; extern undefined4 DAT_00892370; extern undefined4 DAT_00892380;
extern undefined4 DAT_008977e0;
