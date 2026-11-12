#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_00145b00(); extern undefined4 fn_0017fc08(); extern undefined4 fn_0017fd4c();
extern undefined4 fn_0017fde4(); extern uint fn_00190fb4(); extern int fn_00242a50(); extern undefined4 fn_002cd59c(); extern undefined4 fn_003b7324(); extern undefined4 fn_003b80c8();
extern int fn_005ef124(); extern undefined4 * fn_005efdbc(); extern int fn_0069ccdc(); extern int fn_0069cd0c(); extern bool fn_0069ee40();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001cb3cc; extern undefined4 DAT_007c4634; extern undefined4 DAT_007c898c; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0085be7c; extern undefined4 DAT_0085bec4; extern undefined4 DAT_0085c0ec; extern undefined4 DAT_008686dc;
extern undefined4 PTR_s_bf_O00_08_007c8998;
