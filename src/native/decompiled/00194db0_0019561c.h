#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_001694e4(); extern undefined4 fn_00173580(); extern int fn_001735bc(); extern undefined4 fn_001781f0(); extern undefined4 fn_0017d8f8();
extern undefined4 fn_0018a644(); extern undefined4 fn_00194ee4(); extern undefined4 fn_0019fb94(); extern undefined4 fn_0019fdf4(); extern undefined4 fn_001a0a94(); extern undefined4 fn_001a40b8();
extern undefined4 fn_00303afc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857df0; extern undefined4 DAT_00857ed8; extern undefined4 DAT_008c05d4; extern undefined4 DAT_008ecb10;
extern undefined4 DAT_008ecb14; extern undefined4 DAT_008ecb18; extern undefined4 DAT_008ecb1c; extern undefined4 DAT_008ecb20;
extern undefined4 DAT_008ecb24; extern undefined4 DAT_008ecb28; extern undefined4 DAT_008ecb2c; extern undefined4 PTR_FUN_00857b60;
