#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern int fn_0013cd7c(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_0014e7cc(); extern undefined4 fn_0014ea80(); extern undefined4 fn_0014f24c();
extern undefined4 * fn_0014f2b0(); extern int * fn_0015e6f0(); extern int fn_0015ed58(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0030233c(); extern undefined4 fn_004b626c();
extern undefined4 fn_004b8354(); extern int * fn_004b8820(); extern undefined4 fn_006d0734(); extern undefined4 fn_0078638c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_008b6408; extern undefined4 DAT_008b685c; extern undefined4 DAT_008e92b8;
