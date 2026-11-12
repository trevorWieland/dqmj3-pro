#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ecdc(); extern undefined4 * fn_00170f54(); extern undefined4 fn_00455018(); extern undefined4 fn_00455e10();
extern undefined4 fn_00456044(); extern undefined4 fn_00456400(); extern undefined4 fn_00479b1c(); extern undefined4 fn_00479d5c(); extern undefined4 fn_0048a058(); extern undefined4 fn_0048a6e8();
extern undefined4 fn_0048cc74(); extern int fn_004acbb4(); extern undefined4 fn_004b2f0c(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b8d90(); extern int * fn_004b8dac();
extern undefined4 fn_004bdba4(); extern int fn_006d3b8c(); extern undefined4 fn_0074ee60(); extern undefined4 fn_0074fd04(); extern undefined4 fn_0075075c(); extern void fn_00750df0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00750de8; extern undefined4 DAT_00853500; extern undefined4 DAT_0085440c; extern undefined4 DAT_00854dd0;
extern undefined4 DAT_00854df0; extern undefined4 DAT_80010001;
