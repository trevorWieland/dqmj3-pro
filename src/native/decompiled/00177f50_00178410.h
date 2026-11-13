#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 * fn_00158f6c(); extern int * fn_0015e6f0(); extern undefined4 * fn_00170f54(); extern undefined4 fn_00183a34(); extern undefined1 fn_00184c50();
extern uint fn_00190ef0(); extern bool fn_00191f08(); extern undefined4 fn_00192114(); extern int fn_002febd8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_00855a94;
