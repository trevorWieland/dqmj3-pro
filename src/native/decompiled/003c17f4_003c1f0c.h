#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119b40(); extern bool fn_001296d0(); extern bool fn_001296e8(); extern undefined4 fn_00145b00(); extern undefined4 fn_0022f584(); extern undefined4 fn_002fec40();
extern int fn_0036c13c(); extern undefined4 fn_003f728c(); extern undefined4 fn_005f3b74(); extern undefined4 * fn_005f62c0(); extern undefined4 fn_0066ddbc(); extern undefined4 * fn_00673204();
extern undefined4 * fn_00675c38(); extern undefined4 fn_0068974c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003c19fc; extern undefined4 DAT_003c1a20; extern undefined4 DAT_003c1a38; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38; extern undefined4 DAT_00859d84; extern undefined4 DAT_00859ed8;
extern undefined4 DAT_00895b30; extern undefined4 DAT_00898840; extern undefined4 s_TaskGetHostList_008c6def; extern undefined4 s_TaskNetworkConnect_008c6e38;
