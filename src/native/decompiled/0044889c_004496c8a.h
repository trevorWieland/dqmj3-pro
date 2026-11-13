#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001f890c(); extern undefined4 fn_0022cdf0();
extern undefined4 fn_0022cf90(); extern undefined4 fn_002b18e8(); extern undefined4 fn_002b1b54(); extern undefined4 fn_002feef8(); extern undefined4 fn_003bbdc0(); extern undefined4 * fn_003bc118();
extern undefined4 fn_003bc2c8(); extern undefined4 fn_00448558(); extern undefined4 * fn_00448adc(); extern undefined4 fn_006890bc(); extern undefined4 * fn_00689144(); extern undefined4 fn_0069e2d0();
extern undefined4 fn_006bc7fc(); extern uint fn_006bc840();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004487b8; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897804; extern undefined4 DAT_008cbdbc;
extern undefined4 DAT_008cbdc0; extern undefined4 DAT_008cbdc4; extern undefined4 PTR_LAB_0083e8fc;
