#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_001142a8(); extern int fn_00522720(); extern int fn_00522784(); extern int fn_00522c48(); extern int fn_00522c9c(); extern int fn_00522d28();
extern int fn_00522df0(); extern int fn_00522eac(); extern int fn_00522f08(); extern undefined4 fn_00522ff8(); extern undefined4 fn_00523544(); extern undefined4 fn_005236dc();
extern int fn_00523ddc(); extern int fn_00523e40(); extern int fn_0052433c(); extern int fn_00524390();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00200082;
