#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0023e6c8(); extern int fn_0066e3bc(); extern undefined4 fn_007464bc(); extern char fn_007464c4(); extern undefined4 fn_00746608(); extern char fn_00746610();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern unsigned char *DAT_00897808; extern unsigned char *DAT_0089780c; extern undefined4 DAT_00897850;
