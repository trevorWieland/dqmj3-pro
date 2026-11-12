#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00128744(); extern undefined4 fn_001c72c0(); extern undefined4 fn_001da490(); extern undefined4 * fn_001dbf48(); extern undefined4 fn_001dfcf8();
extern undefined4 fn_001ea9c0(); extern undefined4 fn_002feca8(); extern undefined4 fn_00698fb8(); extern int fn_006a7dc8(); extern uint fn_006a9938(); extern uint fn_006a99b0();
extern undefined4 fn_006a9e9c(); extern int fn_006aa6e0(); extern undefined4 fn_006aba20(); extern bool fn_006aba74(); extern undefined4 fn_006f7a48(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081bab4; extern undefined4 DAT_0081be7c; extern undefined4 DAT_00850e30; extern undefined4 DAT_008977e0;
extern undefined4 PTR_FUN_00851254;
