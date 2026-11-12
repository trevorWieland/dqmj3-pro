#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001d9bb4(); extern undefined4 fn_001dbe2c(); extern undefined4 fn_00225a6c(); extern undefined1 fn_00242b0c(); extern int fn_00242b4c(); extern undefined1 fn_00242b6c();
extern undefined4 fn_0025988c(); extern int * fn_0028aad0(); extern undefined4 fn_002cd59c(); extern undefined4 fn_00303afc(); extern uint fn_006a9938(); extern uint fn_006a9960();
extern uint fn_006a99b0(); extern int fn_006b4240(); extern undefined1 fn_006b51cc(); extern undefined4 fn_006baaf4(); extern undefined1 fn_006bab38(); extern undefined4 fn_006f7388();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008912b4; extern undefined4 DAT_008912b8; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
extern undefined4 DAT_ffffffff;
