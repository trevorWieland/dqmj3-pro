#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined8 fn_0017821c(); extern undefined8 fn_00301a9c(); extern undefined1 * fn_00450148(); extern undefined1 * fn_00450568();
extern undefined4 fn_0045388c(); extern undefined1 * fn_004538f0(); extern undefined4 fn_004539f4(); extern undefined4 fn_00453ac8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a61b; extern undefined4 DAT_0089a61c; extern undefined4 DAT_008e323c; extern undefined4 DAT_008e3248;
extern undefined4 DAT_c8810bea; extern undefined4 DAT_c8e10be9; extern undefined4 DAT_e0e10bfd;
