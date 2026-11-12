#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ed068(); extern undefined4 fn_004ed098(); extern undefined4 fn_004ed13c(); extern uint fn_004f1c48(); extern undefined4 fn_004f2ff8(); extern uint fn_004f3154();
extern undefined4 fn_004f31e0(); extern undefined4 fn_004f32d4(); extern undefined4 fn_00504f0c(); extern undefined4 fn_00505374(); extern undefined4 fn_00505c70(); extern longlong fn_00505e04();
extern undefined4 fn_00506924(); extern int fn_0050b080(); extern undefined1 * fn_0050c848(); extern undefined8 fn_00510e04(); extern undefined4 fn_006d8a94(); extern undefined4 fn_006d8aec();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f1970(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ec2b8; extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4e0;
extern undefined4 DAT_008ed96c; extern undefined4 DAT_008edb18; extern undefined4 DAT_008edb24;
