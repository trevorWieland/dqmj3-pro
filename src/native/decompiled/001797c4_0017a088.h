#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int fn_00159fa4(); extern int fn_0015a130(); extern undefined4 fn_0015c980(); extern undefined4 fn_00164a34();
extern undefined4 fn_00165bb4(); extern int fn_00173a34(); extern undefined4 fn_0017481c(); extern undefined4 fn_0017484c(); extern undefined4 fn_00175d88(); extern undefined4 fn_00175dcc();
extern undefined4 fn_001793c4(); extern int fn_00179ac8(); extern undefined4 fn_0017fc3c(); extern undefined4 fn_0017fde4(); extern int fn_00182964(); extern int fn_00182d34();
extern undefined4 fn_001852ac(); extern undefined4 fn_00185320(); extern bool fn_0018921c(); extern undefined2 fn_00191218(); extern undefined2 fn_00191228();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008213bc; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897844;
extern undefined4 DAT_00897848; extern undefined4 DAT_0089a850;
