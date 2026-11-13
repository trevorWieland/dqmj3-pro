#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00162d54(); extern undefined8 fn_0017821c(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0021bad0(); extern undefined4 fn_00223510();
extern undefined4 fn_00223998(); extern undefined4 fn_00223ff8(); extern undefined4 fn_00226228(); extern undefined4 fn_0023d3f4(); extern undefined1 fn_00242b0c(); extern undefined1 fn_00242b6c();
extern undefined4 fn_00259728(); extern undefined4 fn_0025977c(); extern undefined4 fn_002598e0(); extern int * fn_0028aad0(); extern undefined4 fn_00303afc(); extern undefined4 fn_006a7bf8();
extern bool fn_006a7f8c(); extern uint fn_006a9938(); extern int fn_006b4240(); extern undefined1 fn_006bab38(); extern undefined4 fn_006f7388();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c0e44; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
