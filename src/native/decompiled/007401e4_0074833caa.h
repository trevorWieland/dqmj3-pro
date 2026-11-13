#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001b4928(); extern undefined4 fn_001b586c(); extern undefined8 fn_001b8438(); extern undefined4 fn_001ba680(); extern undefined4 fn_007407d4(); extern undefined1 * fn_00740a4c();
extern void fn_00740adc(); extern undefined4 fn_00740ee8(); extern int fn_00741220();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007402bc; extern undefined4 DAT_007d5edf;
