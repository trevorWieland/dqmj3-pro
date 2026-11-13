#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined4 fn_001cab7c(); extern undefined4 fn_0020b310(); extern undefined4 fn_0020bbc4();
extern byte fn_002e322c(); extern undefined4 fn_002ff628(); extern int fn_00388784(); extern int fn_00661308(); extern int fn_006616e0(); extern undefined1 fn_00661714();
extern int fn_0066173c(); extern undefined2 fn_0068f6a8(); extern int fn_0068f790(); extern bool fn_0068f7a0(); extern int fn_0068f7e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0000001f; extern undefined4 DAT_008c7674; extern undefined4 DAT_008c7675;
