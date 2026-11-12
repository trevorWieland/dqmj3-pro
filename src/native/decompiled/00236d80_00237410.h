#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0020ddfc(); extern undefined4 fn_0020e3a4(); extern undefined4 fn_0020e628(); extern undefined4 fn_0020fd10(); extern undefined4 fn_00210174();
extern int fn_002377a0(); extern undefined4 fn_00246880(); extern undefined4 fn_0024f108(); extern undefined4 fn_002506ac(); extern undefined4 fn_002508f4(); extern undefined4 fn_002cd49c();
extern undefined4 * fn_00301f50(); extern undefined4 fn_0030c174(); extern int fn_00388784(); extern int fn_005fe128(); extern int fn_00660a50(); extern int fn_00661518();
extern int fn_00661570(); extern int fn_006616f4(); extern int fn_0066173c(); extern undefined4 fn_0079e460();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c3380;
