#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00172c98(); extern undefined4 fn_001828f0(); extern undefined4 fn_0022f584(); extern bool fn_0028bcb0();
extern undefined1 fn_0037c0e4(); extern undefined4 fn_0037c2b4(); extern int fn_006a7ae8(); extern undefined4 fn_006b2dec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0042a76c; extern undefined4 DAT_0042a778; extern undefined4 DAT_0042a98c; extern undefined4 DAT_0042a994;
extern undefined4 DAT_0042a9c0; extern undefined4 DAT_0042a9cc; extern undefined4 DAT_0042ad14; extern undefined4 DAT_0089292c;
