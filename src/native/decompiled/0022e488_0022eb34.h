#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101160(); extern undefined4 fn_00600538(); extern uint fn_0068f654(); extern undefined2 fn_0068f6a8();
extern int fn_0068f7c4(); extern int fn_0068f7e4(); extern undefined4 fn_0076410c(); extern undefined4 fn_007a29d0(); extern undefined4 fn_007a7d24(); extern undefined4 fn_007a9718();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0022eb74; extern undefined4 DAT_007c7da0; extern undefined4 DAT_007c7ddc; extern undefined4 DAT_007c7e04;
extern undefined4 PTR_FUN_007c7df4; extern undefined4 PTR_FUN_007c7e1c;
