#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00159864(); extern int fn_0015a130(); extern undefined4 fn_0015aa68(); extern undefined4 fn_0015aabc(); extern undefined4 fn_0015b114();
extern undefined4 fn_0015c154(); extern undefined4 fn_0015cac0(); extern undefined4 fn_0015cc44(); extern undefined4 fn_00163edc(); extern undefined4 fn_00164a34(); extern undefined4 fn_00164a68();
extern int fn_00165b70(); extern undefined4 fn_00165bb4(); extern uint * fn_00168b28(); extern undefined4 fn_0017484c(); extern undefined4 fn_00175d88(); extern undefined4 fn_00175dcc();
extern undefined4 fn_002ff628();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e4; extern undefined4 DAT_008c7604;
