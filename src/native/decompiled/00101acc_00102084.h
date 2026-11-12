#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern void fn_00101c08(); extern undefined4 fn_001022f8(); extern undefined4 fn_00102944(); extern undefined4 fn_00123690(); extern undefined4 fn_0013e0ac(); extern int fn_002fea64();
extern int fn_002fea7a(); extern undefined4 fn_002fea88(); extern undefined4 fn_002ff59c(); extern undefined * fn_002ff798(); extern undefined4 fn_002ff970(); extern undefined4 fn_002ff99c();
extern undefined4 fn_00300b5c(); extern uint fn_00300c22(); extern uint fn_00300c38();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00101c70; extern undefined4 DAT_00101c74; extern undefined4 DAT_00101d58; extern undefined4 DAT_008bfbbc;
extern undefined4 DAT_008ebd7c;
