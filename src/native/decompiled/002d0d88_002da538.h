#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00102d28(); extern undefined4 fn_00145b00(); extern undefined4 fn_00163940(); extern undefined4 fn_00163d44(); extern undefined4 fn_00163d68();
extern int fn_001746f4(); extern int fn_001c232c(); extern undefined4 fn_001c7d8c(); extern undefined4 fn_001ccc2c(); extern undefined4 fn_001dd0a0(); extern undefined4 fn_001ea9c0();
extern undefined4 fn_002cab28(); extern undefined4 fn_002cab9c(); extern undefined4 fn_002cabdc(); extern undefined4 fn_002cfa2c(); extern int fn_002daa90(); extern undefined4 fn_002dbc64();
extern undefined4 fn_0037ce20(); extern bool fn_00660e64(); extern uint fn_006a826c(); extern int fn_006b2aa0(); extern uint fn_006bb17c(); extern int fn_006c89fc();
extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a84(); extern undefined4 fn_00788c1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002da120; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00859290; extern undefined4 DAT_008977e0;
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_0081fd68;
