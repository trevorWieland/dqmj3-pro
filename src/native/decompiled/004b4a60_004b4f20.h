#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern int fn_0013cd7c(); extern undefined4 * fn_0015ece0(); extern undefined4 * fn_00170f54(); extern int fn_00170fa4(); extern undefined4 fn_0030233c();
extern undefined4 * fn_004b6318(); extern undefined4 fn_004b7748(); extern undefined4 fn_007654a4(); extern undefined4 fn_0078638c(); extern int * fn_00786480(); extern int * fn_0078671c();
extern undefined4 fn_007867f0(); extern int * fn_00786860();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004b4b5c; extern undefined4 DAT_0085346c;
