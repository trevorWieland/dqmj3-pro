#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern undefined4 fn_001249d0(); extern undefined4 fn_0014e7cc(); extern undefined4 * fn_0014f2b0(); extern undefined4 fn_0015ef58(); extern undefined4 fn_00160094();
extern undefined4 fn_001600c4(); extern undefined4 fn_00160190(); extern undefined4 * fn_00170f54(); extern undefined4 fn_00455590(); extern int fn_0045af48(); extern int fn_0045f4ec();
extern int fn_00468958(); extern void fn_00487428(); extern undefined4 fn_004b626c(); extern undefined4 fn_006d0734(); extern undefined4 fn_006d0810();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_0085748c;
