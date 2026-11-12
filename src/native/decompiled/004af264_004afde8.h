#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0015ef4c(); extern int fn_00454d74(); extern undefined4 fn_0045f6f0(); extern undefined4 fn_0046e0a4(); extern undefined4 fn_0047f9b8();
extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern undefined4 fn_0049e354(); extern void fn_004afde8(); extern undefined4 fn_004afeec(); extern undefined4 fn_004b022c();
extern undefined4 fn_004b0d14(); extern undefined4 fn_004b11a0(); extern undefined4 fn_004b14e0(); extern undefined4 fn_004b2b88(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520();
extern undefined4 fn_004b8d4c(); extern undefined4 fn_004ba5a4(); extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4(); extern undefined4 fn_004ba934(); extern bool fn_004bab34();
extern bool fn_006d3ef4(); extern undefined4 fn_0074ab38();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008e6774; extern undefined4 DAT_008e6784; extern undefined4 DAT_008e67c4; extern undefined4 DAT_008e67c8;
extern undefined4 DAT_008e67cc; extern undefined4 DAT_008e67ec; extern undefined4 DAT_008e6828;
