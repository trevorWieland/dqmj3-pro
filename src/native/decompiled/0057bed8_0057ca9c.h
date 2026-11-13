#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00163868(); extern undefined4 fn_0017fe34();
extern undefined4 fn_00214c4c(); extern undefined4 fn_00215b58(); extern undefined4 fn_00215cb4(); extern undefined4 fn_00215e38(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_002dfa14();
extern undefined4 fn_003b1518(); extern undefined4 fn_003b1580(); extern void fn_0057ca9c(); extern undefined4 fn_006bb518(); extern undefined4 fn_006bb538(); extern int fn_006bb59c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00841d10; extern undefined4 DAT_008913dc; extern undefined4 DAT_008913de;
