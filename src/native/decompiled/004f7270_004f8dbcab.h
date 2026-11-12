#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ed068(); extern undefined4 fn_004ed098(); extern int fn_004eea84(); extern undefined4 fn_004f161c(); extern uint fn_004f86ec(); extern uint fn_004f88c0();
extern void fn_004f89b8(); extern int fn_00505114(); extern undefined4 fn_0051cf84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004f83a8; extern undefined4 DAT_004f83d0; extern undefined4 DAT_00856dd8; extern undefined4 DAT_008bf4a0;
extern undefined4 DAT_008bf4e0;
