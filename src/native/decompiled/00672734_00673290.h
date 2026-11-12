#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00103130(); extern undefined4 fn_00119b40(); extern undefined4 fn_00119b60(); extern undefined4 fn_0011ddb8(); extern undefined4 fn_00129688(); extern undefined4 fn_00145b00();
extern undefined8 fn_0017821c(); extern undefined4 fn_001f825c(); extern undefined4 fn_002fec40(); extern undefined4 fn_003007a0(); extern undefined4 * fn_00301f50(); extern longlong fn_004db2b4();
extern undefined1 * fn_004db3c8(); extern undefined1 * fn_004db520(); extern undefined4 fn_004db748(); extern undefined1 * fn_004dbf90(); extern undefined1 * fn_004dd0ac(); extern undefined4 fn_004dd8ac();
extern undefined1 * fn_004de544(); extern undefined8 fn_004dec0c(); extern undefined4 fn_004dee3c(); extern int fn_004deec4(); extern undefined4 fn_004def40(); extern undefined1 * fn_004ec2ac();
extern undefined4 fn_004ec384(); extern undefined4 fn_006619ec(); extern undefined4 fn_00668814(); extern undefined4 fn_0066eb80(); extern undefined4 fn_0067253c(); extern undefined4 fn_00673b84();
extern undefined4 fn_00673ce8(); extern int fn_006b621c(); extern bool fn_006b64bc(); extern undefined8 fn_006d53e8(); extern undefined4 fn_006d590c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00856608; extern undefined4 DAT_00859b90; extern undefined4 DAT_00859be4;
extern undefined4 DAT_0085a298; extern undefined4 DAT_00897804; extern undefined4 DAT_00898840; extern undefined4 DAT_008bf504;
extern undefined4 s_NetworkCommandGetHostList_008c6f73;
