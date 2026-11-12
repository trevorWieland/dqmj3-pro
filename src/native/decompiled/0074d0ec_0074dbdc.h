#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0013c500(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0030233c(); extern undefined4 fn_00471eb0();
extern undefined4 fn_004a1938();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852780; extern undefined4 DAT_0085290c; extern undefined4 DAT_0085319c; extern undefined4 DAT_00853304;
extern undefined4 DAT_00853314; extern undefined4 DAT_00853d60; extern undefined4 DAT_00853d84; extern undefined4 DAT_00853da8;
extern undefined4 DAT_00853dcc; extern undefined4 DAT_00853df0; extern undefined4 DAT_00853e14; extern undefined4 DAT_00853e38;
extern undefined4 DAT_00853e5c; extern undefined4 DAT_00853e80; extern undefined4 DAT_00853ea4; extern undefined4 DAT_00853ec8;
extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6508; extern undefined4 PTR_LAB_008533fc;
