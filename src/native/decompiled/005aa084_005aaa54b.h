#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_003956e0(); extern undefined4 * fn_0068ab5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00847268; extern undefined4 DAT_0085d908; extern undefined4 DAT_0085d918; extern undefined4 DAT_0085d924;
extern undefined4 DAT_0085d934; extern undefined4 DAT_0085d948; extern undefined4 DAT_0085d958; extern undefined4 DAT_0085d968;
extern undefined4 DAT_0089a924; extern undefined4 DAT_0089a930; extern undefined4 DAT_0089a934;
