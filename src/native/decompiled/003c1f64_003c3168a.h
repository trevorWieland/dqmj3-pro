#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119b40(); extern undefined4 fn_00145b00(); extern undefined4 fn_001f7350(); extern undefined4 fn_001f74ec(); extern undefined4 fn_002c4100(); extern undefined4 fn_002fec40();
extern undefined4 fn_002feef8(); extern undefined4 fn_0039e5ac(); extern undefined4 fn_0039e774(); extern undefined4 fn_0039ec68(); extern undefined4 fn_003c1e5c(); extern undefined4 * fn_0040f6c0();
extern undefined4 fn_005841e4(); extern undefined4 * fn_005f62c0(); extern undefined4 fn_0066ddbc(); extern undefined4 * fn_00673204(); extern undefined4 * fn_00675c38(); extern int fn_006be118();
extern undefined4 fn_006c5268();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082ffd0; extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38;
extern undefined4 DAT_00859d84; extern undefined4 DAT_00859ed8; extern undefined4 DAT_00896770; extern undefined4 s_TaskGetHostList_008c6def;
extern undefined4 s_TaskNetworkConnect_008c6e38;
