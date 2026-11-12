#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004df308(); extern undefined4 fn_004e2b10(); extern int fn_004e3064(); extern undefined4 fn_004e81d8(); extern undefined4 fn_004e9a58(); extern undefined4 fn_004ebda0();
extern undefined4 fn_004ed164(); extern undefined4 fn_004ed2e8(); extern undefined4 * fn_004eddf4(); extern undefined4 fn_00656bb8(); extern undefined4 fn_00656ca4(); extern undefined4 fn_00656e14();
extern undefined4 fn_00657320(); extern undefined4 fn_00659178(); extern undefined4 fn_0065929c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856ab0; extern undefined4 DAT_00856c64; extern undefined4 DAT_00856ca0; extern undefined4 DAT_008c062c;
extern undefined4 DAT_008c06d0; extern undefined4 DAT_008c06d4; extern undefined4 DAT_008c06dc; extern undefined4 DAT_008c06e0;
extern undefined4 DAT_008eef3c; extern undefined4 DAT_008eef44; extern undefined4 DAT_008eef58; extern undefined4 DAT_008eef74;
extern undefined4 DAT_008eef7c;
