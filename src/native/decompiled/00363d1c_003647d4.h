#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_002aabac(); extern undefined4 fn_002cd56c(); extern undefined4 fn_002cd59c(); extern undefined4 fn_002ea030();
extern undefined4 fn_002ea308(); extern int fn_002ea524(); extern char fn_002ea6ac(); extern undefined4 fn_002ea7a8(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern undefined4 * fn_00301f50(); extern int fn_0066173c(); extern undefined4 fn_006f7508();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00827534; extern undefined4 DAT_008914bc; extern undefined4 DAT_008914c0; extern undefined4 DAT_008914c4;
extern undefined4 DAT_008914c8; extern undefined4 DAT_008914cc; extern undefined4 DAT_008914d0; extern undefined4 DAT_008977e0;
extern undefined4 DAT_008c764c;
