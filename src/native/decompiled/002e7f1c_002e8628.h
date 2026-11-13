#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0022f584(); extern undefined4 fn_0024269c(); extern undefined4 fn_002426b4(); extern undefined4 fn_0028ec90(); extern uint fn_002e8660();
extern undefined4 fn_0066e368(); extern int fn_0066e3bc(); extern undefined4 fn_0069eb00(); extern undefined4 fn_006b51c0(); extern undefined4 fn_006b51d8(); extern int fn_006b8478();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c6644; extern undefined4 DAT_007c6646; extern undefined4 DAT_00863048; extern undefined4 DAT_008630a8;
extern undefined4 DAT_00897804; extern undefined4 DAT_00897850; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
extern undefined4 PTR_FUN_00820f08;
