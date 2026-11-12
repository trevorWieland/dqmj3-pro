#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0015f180(); extern int fn_0045fbe8(); extern undefined4 fn_0047687c(); extern undefined4 * fn_004b637c(); extern undefined4 fn_004c5b14();
extern undefined4 fn_004ca82c(); extern undefined4 fn_004cfd3c(); extern undefined4 fn_004d047c(); extern undefined1 * fn_004d43ec(); extern undefined1 * fn_004d44f4(); extern undefined4 fn_004d49a8();
extern undefined4 fn_004ed464(); extern uint fn_004ed4f8(); extern undefined4 fn_004f01f4(); extern undefined4 fn_004f0ab4(); extern undefined4 fn_004f0b78(); extern undefined4 fn_004f0c04();
extern undefined1 fn_006d1138(); extern undefined1 fn_006d1154();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004c5eb4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852db4; extern undefined4 DAT_00855e78; extern undefined4 DAT_00855e88; extern undefined4 DAT_00855ec0;
extern undefined4 DAT_008bf4f4; extern undefined4 DAT_008c0630; extern undefined4 DAT_e0a14827;
