#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00114248(); extern undefined4 fn_0011a314(); extern undefined4 fn_0011a36c(); extern undefined4 fn_0011a3c4(); extern int fn_0011c134(); extern int fn_00129e2c();
extern int fn_00129e94(); extern int fn_00129f00(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern ulonglong fn_00169c20(); extern void fn_004b96e8();
extern void fn_004b9968();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44;
