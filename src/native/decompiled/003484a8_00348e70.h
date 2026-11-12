#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0010fa20(); extern undefined4 fn_00117984(); extern undefined2 fn_00191218(); extern uint fn_0019bc24();
extern undefined4 fn_001a0b34(); extern undefined4 * fn_002b5060(); extern undefined4 fn_002b5260(); extern undefined4 fn_002e4414(); extern undefined4 fn_002feef8(); extern undefined4 fn_005e18d4();
extern int fn_005e19a4(); extern int fn_005e29c4(); extern undefined4 fn_005e42a8(); extern undefined4 fn_005e529c(); extern undefined4 fn_005e9048(); extern int fn_005eff2c();
extern undefined4 fn_005eff40(); extern int fn_006eb278(); extern uint fn_006eb2c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00825398; extern undefined4 DAT_008253dc; extern undefined4 DAT_00825418;
