#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0011dda8(); extern undefined4 fn_00154a48(); extern undefined4 fn_00156f24(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54(); extern undefined4 fn_0017fde4();
extern undefined4 fn_001969a4(); extern longlong fn_00300f74(); extern undefined4 fn_00688ff8(); extern undefined4 fn_0075eb28();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008987bc; extern undefined4 DAT_00899514; extern undefined4 PTR_LAB_007ce718;
