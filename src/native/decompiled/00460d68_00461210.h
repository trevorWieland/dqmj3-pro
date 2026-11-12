#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0030233c(); extern undefined4 fn_004580f4(); extern undefined4 fn_0045fd08();
extern undefined4 fn_00460784(); extern void fn_00460e38(); extern undefined4 fn_00465808(); extern undefined4 fn_00465c40(); extern undefined4 fn_0046b5e0(); extern undefined4 fn_0046b964();
extern undefined4 fn_0046bde8(); extern undefined4 fn_00472008(); extern int fn_004b61c8(); extern undefined4 fn_004b7748(); extern undefined4 fn_004ba724(); extern undefined4 fn_004bc1a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853688;
