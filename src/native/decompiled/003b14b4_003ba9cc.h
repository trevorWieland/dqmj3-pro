#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern uint * fn_00120ec8(); extern undefined * fn_00128eac(); extern undefined4 fn_0012a2d8(); extern undefined4 fn_0012d73c(); extern undefined4 fn_001433d8();
extern undefined4 fn_00154ac8(); extern undefined4 * fn_00158f6c(); extern undefined4 * fn_00168a24(); extern int fn_00176d74(); extern int fn_001c232c(); extern undefined4 fn_001f74d8();
extern undefined4 fn_00203954(); extern undefined4 fn_002039cc(); extern undefined4 fn_00203cb4(); extern undefined4 * fn_00205da0(); extern undefined4 fn_0022f750(); extern undefined4 fn_002fdf94();
extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_003b17d4(); extern undefined4 fn_00689930();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003b883c; extern undefined4 DAT_003b8840; extern undefined4 DAT_0082e9f8; extern undefined4 DAT_0082ea70;
extern undefined4 DAT_0082ead0; extern undefined4 DAT_00893ee8; extern undefined4 DAT_00894aac; extern undefined4 DAT_008977e4;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_008522d0;
