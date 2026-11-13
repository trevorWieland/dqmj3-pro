#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119b40(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern uint * fn_001782b8(); extern undefined4 fn_002fec40(); extern undefined4 * fn_005f62c0();
extern undefined4 fn_005f6430(); extern undefined4 fn_0066ddbc(); extern undefined4 fn_0066e458(); extern int * fn_00678280(); extern undefined4 fn_006783a0(); extern void fn_00678b18();
extern undefined4 fn_00679a2c(); extern undefined4 fn_0067a39c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00678a80; extern undefined4 DAT_00851730; extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38;
extern undefined4 DAT_0085a240; extern undefined4 DAT_00898840;
